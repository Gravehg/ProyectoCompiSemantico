%{
    #include <stdio.h>
	#include <string.h>
	#include "hashTable.h"
	#include "stack.h"
	extern int yylex();
	extern char*yytext;
	extern char linebuf[500];
	extern char*fileName;
	void yyerror(const char* error);
	void printTabs();
	void printSpaces(int numSpaces);
	extern int selectedStyle;
	int spaces = 0;
	void printSpacesPretty();
	void writePrettyOne(char*p1);
	extern FILE* yyout;
	int prettyTabs;
	void gnuStyle(char*s);
	void bsdStyle();
	void teamStyle();
	void applyTabsPretty(int mult);
	void write(char *s);
	int forFlag;
	int depthLevel = 1;
	void writeBinary(char*s);
	void writeUnary(char*s);
	void writeTypes(char*s);
	void writeIteration(char*s);
	void writeFile(char*s);
	extern int yylineno;
	void checkInTable(char *id);
	void semanticError(char *s);
	//FLAGS TO DETERMINE IF ITS A DECLARATION OR USAGE
	int isDeclaration = 0;
	void end_decl();
%}

%locations

%define parse.trace

%define parse.error verbose

%union {
    int intValue; // Puedes cambiar int a tu tipo de dato deseado
    char* stringValue; // Puedes cambiar char* a tu tipo de dato deseado
    // Agrega aquí otros tipos si es necesario
}

%token<stringValue> PREPROCESSING
%token<stringValue>	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token<stringValue>	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token<stringValue>	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token<stringValue>	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token<stringValue>	XOR_ASSIGN OR_ASSIGN
%token<stringValue>	TYPEDEF_NAME ENUMERATION_CONSTANT
%token<stringValue> SEMMICOLON LEFTBRACKET RIGHTBRACKET LEFTPAREN RIGHTPAREN COMMA
%token<stringValue> TWOPOINTS EQUALS LEFTSQUAREBRACKET RIGHTSQUAREBRACKET POINT AND
%token<stringValue> EXCLAMATION NOT MINUS PLUS ASTERISK DIVITION MODULUS LEFTLESS
%token<stringValue> RIGHTMORE EXPONENTATION OR TERNARYIF


%token<stringValue>	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token<stringValue>	CONST RESTRICT VOLATILE
%token<stringValue>	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token<stringValue>	COMPLEX IMAGINARY 
%token<stringValue>	STRUCT UNION ENUM ELLIPSIS

%token<stringValue>	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token<stringValue>	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%nterm identifier i_constant f_constant string_literal func_name sizeof
%nterm ptr_op inc_op dec_op left_op right_op le_op ge_op eq_op ne_op
%nterm and_op or_op mul_assign div_assign mod_assign add_assign
%nterm sub_assign left_assign right_assign and_assign
%nterm xor_assign or_assign
%nterm typedef_name
%nterm semmicolon leftbracket rightbracket leftparen rightparen comma
%nterm twopoints equals leftsquarebracket rightsquarebracket point and
%nterm exclamation not minus plus asterisk divition modulus leftless
%nterm rightmore exponentation or ternaryif

%nterm  typedef extern static auto register inline
%nterm	const restrict volatile
%nterm	bool char short int long signed unsigned float double void
%nterm	complex imaginary 
%nterm	struct union enum ellipsis
%nterm	case default if else switch while do for goto continue break return
%nterm  alignas alignof atomic generic noreturn static_assert thread_local

%nterm enumeration_constant_two
%nterm primary_expression constant enumeration_constant
%nterm string generic_selection generic_assoc_list
%nterm generic_association postfix_expression argument_expression_list
%nterm unary_expression unary_operator cast_expression
%nterm multiplicative_expression additive_expression shift_expression
%nterm relational_expression equality_expression and_expression
%nterm exclusive_or_expression inclusive_or_expression logical_and_expression
%nterm logical_or_expression conditional_expression assignment_expression
%nterm assignment_operator expression constant_expression declaration
%nterm declaration_specifiers init_declarator_list init_declarator
%nterm storage_class_specifier type_specifier struct_or_union_specifier
%nterm struct_or_union struct_declaration_list struct_declaration
%nterm specifier_qualifier_list struct_declarator_list struct_declarator
%nterm enum_specifier enumerator_list enumerator atomic_type_specifier
%nterm type_qualifier function_specifier alignment_specifier
%nterm declarator direct_declarator pointer type_qualifier_list
%nterm parameter_type_list parameter_list parameter_declaration
%nterm identifier_list type_name abstract_declarator
%nterm direct_abstract_declarator initializer initializer_list
%nterm designation designator_list designator static_assert_declaration
%nterm statement labeled_statement compound_statement block_item_list
%nterm block_item expression_statement selection_statement iteration_statement
%nterm jump_statement translation_unit external_declaration function_definition
%nterm declaration_list

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%start translation_unit

%%

identifier: 
		  IDENTIFIER {write($1);
		  			 if(!isDeclaration){
						checkInTable($1);
					 }else{	
						push(createData("identifier",$1));
						isDeclaration =  0;
					 }
		   }
		  ;

i_constant:
			I_CONSTANT  {write($1);}
			;
		
f_constant:
		   F_CONSTANT  {write($1);}
		   ;
		   
string_literal:
			STRING_LITERAL  {write($1);}
			; 

func_name:
		FUNC_NAME  {write($1);}
		;


//binary and ternary operators
twopoints:
	TWOPOINTS  {writeBinary($1);}
	;
equals:
	EQUALS  {writeBinary($1);}
	;

left_op:
	LEFT_OP  {writeBinary($1);}
	; 

right_op: 
	RIGHT_OP  {writeBinary($1);}
	;

le_op:
	LE_OP  {writeBinary($1);}
	;

ge_op:
	GE_OP  {writeBinary($1);}
	;
eq_op:
	EQ_OP  {writeBinary($1);}
	;
ne_op:
	NE_OP  {writeBinary($1);}
	;
and_op:
	AND_OP  {writeBinary($1);}
	;
or_op: 
	OR_OP  {writeBinary($1);}
	;
mul_assign:
	MUL_ASSIGN  {writeBinary($1);}
	;
div_assign:
	DIV_ASSIGN  {writeBinary($1);}
	;
mod_assign:
	MOD_ASSIGN  {writeBinary($1);}
	;
add_assign:
	ADD_ASSIGN  {writeBinary($1);}
	;
sub_assign: 
	SUB_ASSIGN  {writeBinary($1);}
	;
left_assign:
	LEFT_ASSIGN  {writeBinary($1);}
	;
right_assign:
	RIGHT_ASSIGN  {writeBinary($1);}
	;
and_assign:
	AND_ASSIGN  {writeBinary($1);}
	;
xor_assign:
	XOR_ASSIGN  {writeBinary($1);}
	;
or_assign:
	OR_ASSIGN  {writeBinary($1);}
	;

minus:
	MINUS  {writeBinary($1);}
	;
plus:
	PLUS  {writeBinary($1);}
	;
divition:
	DIVITION {writeBinary($1);}
	;
modulus:
	MODULUS {writeBinary($1);}
	;

exponentation:
	EXPONENTATION {writeBinary($1);}
	;

ternaryif:
	TERNARYIF {writeBinary($1);}
	;

and:
	AND  {writeBinary($1);}
	;
leftless:
	LEFTLESS {writeBinary($1);}
	;
rightmore:
	RIGHTMORE {writeBinary($1);}
	;
or:
	OR {writeBinary($1);}
	;


//unary operators
asterisk:
	ASTERISK  {writeUnary($1);}
	;
inc_op: 
	 INC_OP {writeUnary($1);}
	 ;

dec_op: 
	DEC_OP {writeUnary($1);}
	;

exclamation:
	EXCLAMATION  {writeUnary($1);}
	;
not:
	NOT  {writeUnary($1);}
	;

typedef_name:
	TYPEDEF_NAME  {writeUnary($1);}
	;
typedef:
	TYPEDEF  {write($1);write(" ");}
	;
alignas:
	ALIGNAS  {writeUnary($1);}
	;
alignof:
	ALIGNOF  {writeUnary($1);}
	;
sizeof:
	  SIZEOF  {writeUnary($1);}
	  ;
atomic:
	ATOMIC  {writeUnary($1);}
	;
generic: 
	GENERIC  {writeUnary($1);}
	;
noreturn:
	NORETURN  {writeUnary($1);}
	;
static_assert:
	STATIC_ASSERT  {writeUnary($1);}
	;
static:
	STATIC {writeUnary($1);}
	;

extern:
	EXTERN {writeUnary($1);}
	;

auto:
	AUTO {write($1);write(" ");}
	;

register:
	REGISTER {write($1);write(" ");}
	;

thread_local:
	THREAD_LOCAL  {writeUnary($1);}
	;
break:
	BREAK  {writeUnary($1);}
	;
const:
	CONST  {write($1);write(" ");}
	;
restrict:
	RESTRICT  {writeUnary($1);}
	;
volatile:
	VOLATILE {writeUnary($1);}
	;
inline:
	INLINE {writeUnary($1);}
	;

// -- no spaces
point:
	POINT  {write($1);}
	;

ptr_op:
	 PTR_OP  {write($1);}
	 ;

//end
semmicolon:
	SEMMICOLON  {write($1);}
	;
leftbracket:
	LEFTBRACKET  {write($1); openScope();}
	;
rightbracket:
	RIGHTBRACKET  {write($1);  printSymTab(); closeScope();}
	;
leftparen:
	LEFTPAREN  {write($1);}
	;
rightparen: 
	RIGHTPAREN  {write($1);}
	;
comma:
	COMMA  {write($1);}
	;
leftsquarebracket:
	LEFTSQUAREBRACKET  {write($1);}
	;
rightsquarebracket:
	RIGHTSQUAREBRACKET  {write($1);}
	;
ellipsis:
	ELLIPSIS  {write($1);}
	;
//types 
bool:
	BOOL {writeTypes($1);}
	;
char:
	CHAR {writeTypes($1);}
	;
short:
	SHORT {writeTypes($1);}
	;
int:
	INT {writeTypes($1);}
	;
long:
	LONG {writeTypes($1);}
	;
signed:
	SIGNED {writeTypes($1);}
	;
unsigned:
	UNSIGNED {writeTypes($1);}
	;
float:
	FLOAT {writeTypes($1);}
	;
double:
	DOUBLE {writeTypes($1);}
	;
void:
	VOID {writeTypes($1);}
	;
complex:
	COMPLEX {writeTypes($1);}
	;
imaginary:
	IMAGINARY {writeTypes($1);}
	;
struct:
	STRUCT {writeTypes($1);}
	;
union:
	UNION {writeTypes($1);}
	;
enum:
	ENUM {writeTypes($1);}
	;
case:
	CASE {writeTypes($1);}
	;
default:
	DEFAULT {writeTypes($1);}
	;
continue:
	CONTINUE {writeTypes($1);}
	;
goto:
	GOTO {writeTypes($1);}
	;
return:
	RETURN  {writeTypes($1);}
	;

// keywords
if:
	IF  {writeIteration($1);}
	;
else:
	ELSE  {writeIteration($1);}
	;
switch: 
	SWITCH  {writeIteration($1);}
	;
while:
	WHILE  {writeIteration($1);}
	;
do:
	DO  {writeIteration($1);}
	;
for:
	FOR  {writeIteration($1);forFlag=1;}
	;

prepareIdInsertion:
	%empty  {isDeclaration = 1;}
	;

primary_expression
	: identifier 
	| constant
	| string
	| leftparen expression rightparen
	| generic_selection
	| leftparen error rightparen {yyerrok;}
	| leftparen error semmicolon {yyerrok;}
	| leftparen error rightbracket {yyerrok;}
	;

constant
	: i_constant	/* includes character_constant */
	| f_constant
	| enumeration_constant_two	/* after it has been defined as such */
	;

enumeration_constant_two:
	ENUMERATION_CONSTANT {write($1);}
	;

enumeration_constant		/* before it has been defined as such */
	: identifier
	;

string
	: string_literal
	| func_name
	;

generic_selection
	: generic leftparen assignment_expression comma generic_assoc_list rightparen
	| generic leftparen assignment_expression comma error rightparen {yyerrok;}
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list comma generic_association
	| generic_assoc_list error generic_association{ yyerrok;}
	;

generic_association
	: type_name twopoints assignment_expression
	| default twopoints assignment_expression
	;

postfix_expression
	: primary_expression
	| postfix_expression leftsquarebracket expression rightsquarebracket
	| postfix_expression leftparen rightparen
	| postfix_expression leftparen argument_expression_list rightparen
	| postfix_expression point identifier
	| postfix_expression ptr_op identifier
	| postfix_expression inc_op
	| postfix_expression dec_op
	| leftparen type_name rightparen leftbracket initializer_list rightbracket
	| leftparen type_name rightparen leftbracket initializer_list comma rightbracket
	| postfix_expression leftsquarebracket error rightsquarebracket {yyerrok;}
	| postfix_expression leftparen error rightparen {yyerrok;}
	| postfix_expression leftparen error semmicolon {yyerrok;}
	| postfix_expression ptr_op error semmicolon {yyerrok;}
	| leftparen error rightparen leftbracket initializer_list rightbracket {yyerrok;}
	| leftparen type_name rightparen leftbracket error rightbracket {yyerrok;}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list comma assignment_expression
	;

unary_expression
	: postfix_expression
	| inc_op unary_expression
	| dec_op unary_expression
	| unary_operator cast_expression
	| sizeof unary_expression
	| sizeof leftparen type_name rightparen
	| alignof leftparen type_name rightparen
	| alignof leftparen error rightparen {yyerrok;}
	;

unary_operator
	: and
	| asterisk
	| plus 
	| minus	
	| not
	| exclamation
	;

cast_expression
	: unary_expression
	| leftparen type_name rightparen cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression asterisk cast_expression
	| multiplicative_expression divition cast_expression
	| multiplicative_expression modulus cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression plus multiplicative_expression 
	| additive_expression minus multiplicative_expression
	;

shift_expression 
	: additive_expression
	| shift_expression left_op additive_expression
	| shift_expression right_op additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression leftless shift_expression
	| relational_expression rightmore shift_expression
	| relational_expression le_op shift_expression
	| relational_expression ge_op shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression eq_op relational_expression
	| equality_expression ne_op relational_expression
	;

and_expression
	: equality_expression
	| and_expression and equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression exponentation and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression or exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression and_op inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression or_op logical_and_expression
	;

conditional_expression
	: logical_or_expression 
	| logical_or_expression ternaryif expression twopoints conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression 
	| unary_expression assignment_operator error rightbracket {yyerrok;}
	| unary_expression assignment_operator error semmicolon {yyerrok;}
	;

assignment_operator
	: equals 
	| mul_assign
	| div_assign
	| mod_assign
	| add_assign
	| sub_assign
	| left_assign
	| right_assign
	| and_assign
	| xor_assign
	| or_assign
	;

expression
	: assignment_expression 
	| expression comma assignment_expression
	;

constant_expression
	: conditional_expression /* with constraints */
	;

declaration
	: declaration_specifiers semmicolon {end_decl();}
	| declaration_specifiers init_declarator_list semmicolon {end_decl();}
	| declaration_specifiers error {yyerrok;}
	| declaration_specifiers init_declarator_list error {yyerrok;}
	| static_assert_declaration
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier 
	| type_specifier declaration_specifiers 
	| type_specifier 
	| type_qualifier declaration_specifiers
	| type_qualifier 
	| function_specifier declaration_specifiers
	| function_specifier 
	| alignment_specifier declaration_specifiers
	| alignment_specifier 
	;

init_declarator_list
	: init_declarator
	| init_declarator_list comma init_declarator 
	;

init_declarator
	:declarator
	|declarator equals initializer 
	;

storage_class_specifier
	: typedef 	/* identifiers must be flagged as TYPEDEF_NAME */
	| extern 
	| static 
	| thread_local 
	| auto
	| register
	;

type_specifier
	: void {push(createData("type","void"));}
	| char {push(createData("type","char"));}
	| short {push(createData("type","short"));}
	| int  {push(createData("type","int"));}
	| long {push(createData("type","long"));}
	| float {push(createData("type","float"));}
	| double {push(createData("type","double"));}
	| signed  {push(createData("type","signed"));}
	| unsigned  {push(createData("type","unsigned"));}
	| bool {push(createData("type","bool"));}
	| complex  {push(createData("type","complex"));}
	| imaginary 	{push(createData("type","imaginary"));} 	/* non-mandated extension */
	| atomic_type_specifier
	| struct_or_union_specifier
	| enum_specifier
	| typedef_name		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union leftbracket struct_declaration_list rightbracket
	| struct_or_union prepareIdInsertion identifier leftbracket struct_declaration_list rightbracket
	| struct_or_union prepareIdInsertion identifier
	| struct_or_union error rightbracket {yyerrok;}
	| struct_or_union error identifier rightbracket {yyerrok;}
	;

struct_or_union
	: struct  {push(createData("type","struct"));} 
	| union  {push(createData("type","union"));} 
	;

struct_declaration_list
	: struct_declaration 
	| struct_declaration_list struct_declaration
	| struct_declaration_list error struct_declaration {yyerrok;}
	;

struct_declaration
	: specifier_qualifier_list semmicolon  	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list semmicolon 
	| static_assert_declaration 
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier 
	| type_qualifier specifier_qualifier_list
	| type_qualifier 
	;

struct_declarator_list
	: struct_declarator 
	| struct_declarator_list comma struct_declarator
	;

struct_declarator
	: twopoints constant_expression
	| declarator twopoints constant_expression
	| declarator 
	;

enum_specifier
	: enum leftbracket enumerator_list rightbracket
	| enum leftbracket enumerator_list comma rightbracket
	| enum prepareIdInsertion identifier leftbracket enumerator_list rightbracket
	| enum prepareIdInsertion identifier leftbracket enumerator_list comma rightbracket
	| enum prepareIdInsertion identifier
	;

enumerator_list
	: enumerator 
	| enumerator_list comma enumerator
	| enumerator_list error enumerator {yyerrok;}
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: prepareIdInsertion enumeration_constant equals constant_expression
	| prepareIdInsertion enumeration_constant 
	;

atomic_type_specifier
	: atomic leftparen type_name rightparen
	| atomic leftparen error rightparen {yyerrok;}
	;

type_qualifier
	: const  
	| restrict  
	| volatile  
	| atomic 
	;

function_specifier
	: inline  
	| noreturn  
	;

alignment_specifier
	: alignas leftparen type_name rightparen
	| alignas leftparen constant_expression rightparen
	| alignas leftparen error rightparen {yyerrok;}
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: prepareIdInsertion identifier 
	| leftparen declarator rightparen
	| direct_declarator leftsquarebracket rightsquarebracket
	| direct_declarator leftsquarebracket asterisk rightsquarebracket
	| direct_declarator leftsquarebracket static type_qualifier_list assignment_expression rightsquarebracket
	| direct_declarator leftsquarebracket static assignment_expression rightsquarebracket
	| direct_declarator leftsquarebracket type_qualifier_list asterisk rightsquarebracket
	| direct_declarator leftsquarebracket type_qualifier_list static assignment_expression rightsquarebracket
	| direct_declarator leftsquarebracket type_qualifier_list assignment_expression rightsquarebracket
	| direct_declarator leftsquarebracket type_qualifier_list rightsquarebracket
	| direct_declarator leftsquarebracket assignment_expression rightsquarebracket
	| direct_declarator leftparen parameter_type_list rightparen
	| direct_declarator leftparen rightparen
	| direct_declarator leftparen identifier_list rightparen
	| direct_declarator leftparen error rightparen {yyerrok;}
	| leftparen error rightparen {yyerrok;}
	;

pointer
	: asterisk type_qualifier_list pointer
	| asterisk type_qualifier_list
	| asterisk pointer
	| asterisk 
	;

type_qualifier_list
	: type_qualifier 
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list comma ellipsis
	| parameter_list 
	| parameter_list error ellipsis {yyerrok;}
	;

parameter_list
	: parameter_declaration {end_decl();}
	| parameter_list comma parameter_declaration {end_decl();}
	| parameter_list error parameter_declaration {yyerrok;}
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers 
	;

identifier_list
	: prepareIdInsertion identifier 
	| identifier_list comma prepareIdInsertion identifier
	| identifier_list error identifier {yyerrok;}
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list 
	| specifier_qualifier_list error abstract_declarator {yyerrok;}
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer 
	| direct_abstract_declarator 
	;

direct_abstract_declarator
	: leftparen abstract_declarator rightparen
	| leftsquarebracket rightsquarebracket
	| leftsquarebracket asterisk rightsquarebracket
	| leftsquarebracket static type_qualifier_list assignment_expression rightsquarebracket
	| leftsquarebracket static assignment_expression rightsquarebracket
	| leftsquarebracket type_qualifier_list static assignment_expression rightsquarebracket
	| leftsquarebracket type_qualifier_list assignment_expression rightsquarebracket
	| leftsquarebracket type_qualifier_list rightsquarebracket
	| leftsquarebracket assignment_expression rightsquarebracket
	| direct_abstract_declarator leftsquarebracket rightsquarebracket
	| direct_abstract_declarator leftsquarebracket asterisk rightsquarebracket
	| direct_abstract_declarator leftsquarebracket static type_qualifier_list assignment_expression rightsquarebracket
	| direct_abstract_declarator leftsquarebracket static assignment_expression rightsquarebracket
	| direct_abstract_declarator leftsquarebracket type_qualifier_list assignment_expression rightsquarebracket
	| direct_abstract_declarator leftsquarebracket type_qualifier_list static assignment_expression rightsquarebracket
	| direct_abstract_declarator leftsquarebracket type_qualifier_list rightsquarebracket
	| direct_abstract_declarator leftsquarebracket assignment_expression rightsquarebracket
	| leftparen rightparen
	| leftparen parameter_type_list rightparen
	| direct_abstract_declarator leftparen rightparen
	| direct_abstract_declarator leftparen parameter_type_list rightparen
	| direct_abstract_declarator leftparen error rightparen {yyerrok;}
	;

initializer
    : assignment_expression 
	| leftbracket initializer_list rightbracket
	| leftbracket initializer_list comma rightbracket
	;

initializer_list
	: designation initializer
	| initializer 
	| initializer_list comma designation initializer
	| initializer_list comma initializer
	| initializer_list error initializer {yyerrok;}
	;

designation
	: designator_list equals
	;

designator_list
	: designator 
	| designator_list designator
	| designator_list error designator {yyerrok;}
	;

designator
	: leftsquarebracket constant_expression rightsquarebracket
	| point prepareIdInsertion identifier
	;

static_assert_declaration
	: static_assert leftparen constant_expression comma string_literal rightparen semmicolon
	;

statement
	: labeled_statement 
	| compound_statement 
	| expression_statement 
	| selection_statement 
	| iteration_statement 
	| jump_statement 
	;

labeled_statement
	: identifier twopoints statement
	| case constant_expression twopoints statement
	| default twopoints statement
	;

compound_statement
	: leftbracket rightbracket
	| leftbracket  block_item_list rightbracket
	;

block_item_list
	: block_item 
	| block_item_list block_item
	| block_item_list error block_item {yyerrok;}
	;

block_item
	: declaration 
	| statement 
	;

expression_statement
	: semmicolon
	| expression semmicolon 
	| expression error semmicolon {yyerrok;}
	;

selection_statement
	: if leftparen expression rightparen statement else  statement
	| if leftparen expression rightparen statement %prec LOWER_THAN_ELSE ;
	| switch leftparen expression rightparen statement
	| if leftparen error rightparen statement {yyerrok;} %prec LOWER_THAN_ELSE;
	| if leftparen error rightparen statement else statement {yyerrok;}
	| switch leftparen error rightparen {yyerrok;}
	;

iteration_statement
	: while leftparen expression rightparen statement
	| do statement while leftparen expression rightparen semmicolon 
	| for leftparen expression_statement expression_statement rightparen  statement
	| for leftparen expression_statement expression_statement expression rightparen statement
	| for leftparen declaration expression_statement rightparen statement
	| for leftparen declaration expression_statement expression rightparen statement
	| for leftparen error rightparen statement rightbracket {yyerrok;};
	| while leftparen error rightparen {yyerrok;}
	;

jump_statement
	: goto identifier semmicolon 
	| continue semmicolon 
	| break semmicolon 
	| return semmicolon 
	| return expression semmicolon
	| return error rightbracket {yyerrok;}
	;

translation_unit
	: external_declaration 
	| translation_unit external_declaration
	| translation_unit error rightbracket {yyerrok;}
	;

external_declaration
	: function_definition {end_decl();}
	| declaration 
	| PREPROCESSING error external_declaration {yyerrok;}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement 
	| declaration_specifiers declarator compound_statement 
	;

declaration_list
	: declaration 
	| declaration_list declaration 
	;

%%

void yyerror(const char *s)
{
  printf("%s\n",s);
  printf("%s%s%d%s%d: ",fileName,":",yylloc.first_line,":",yylloc.first_column);
  printf("\033[1;31merror\033[0m ");
  printf("%s\n",s);
  printf("Near line %d, in token: \'%s\'\n", yylloc.first_line,yytext);
  printTabs();
  printf("%s\n", linebuf);
  printTabs();
  printSpaces(yylloc.first_column);
  printf("^");
  printf("\n");
}

void checkInTable(char *id){
	if(!lookup(id)){
		semanticError("Tried to use variable without declaration");
	}
}

void semanticError(char *s){
  printf("%s\n",s);
  printf("%s%s%d%s%d: ",fileName,":",yylloc.first_line,":",yylloc.first_column);
  printf("\033[0;34merror\033[0m ");
  printf("Near line %d, in token: \'%s\'\n", yylloc.first_line,yytext);
  printTabs();
  printf("%s\n", linebuf);
  printTabs();
  printSpaces(yylloc.first_column);
  printf("^");
  printf("\n");
}

void printTabs(){
 int numTabs = 1;
 for(int i = 0;i<numTabs;i++){
	printf("\t");
  }
}

void printSpaces(int numSpaces){
	for(int i = 0;i<numSpaces-1;i++){
		printf(" ");
	}
}

void printSpacesPretty(){
	for(int i = 0; i<spaces;i++){
		fprintf(yyout, " ");
	}
}

void applyTabsPretty(int mult){
	for(int i=0; i<mult*prettyTabs;i++){
		fprintf(yyout, "\t");
	}
}


void write(char *s){
    //left bracket
    if(strcmp(s,"{")==0){
        if(selectedStyle == 1){ //GNU   
            writeFile("\n");
            printSpacesPretty();
            writeFile(s);
            writeFile("\n");
            spaces += 2;
            printSpacesPretty();
        }else if(selectedStyle == 2 ){ //BSD
            writeFile(s);
            writeFile("\n");
            spaces += 8;
            printSpacesPretty();
        }else{ //Nuestro
            writeFile(s);
            writeFile("\n");
            spaces += depthLevel*2; // 1 - 0/1
            depthLevel++;
            printSpacesPretty();
        }
    //right bracket
    }else if(strcmp(s,"}")==0){
        if(selectedStyle == 1){ //GNU
            spaces -= 2;
            writeFile("\n"); //comm
            printSpacesPretty(); //comm
            writeFile(s);
            writeFile("\n");
            printSpacesPretty();
        }else if(selectedStyle == 2 ){ //BSD
            spaces -= 8;
            writeFile("\n" );
            printSpacesPretty();
            writeFile(s);
            writeFile("\n" );
            printSpacesPretty();
        }else{ //Nuestro
            depthLevel--;
            spaces -= depthLevel*2; // 1 - 0/1
            writeFile("\n");
            printSpacesPretty();
            writeFile(s);
            writeFile("\n" );
            printSpacesPretty();
        }
    //semmicolon
    }else if(strcmp(s,";")==0){
            writeFile(s);
            if(forFlag==0){
                writeFile("\n");
                printSpacesPretty();
            }
    //comma
    }else if(strcmp(s,",")==0){
        writeFile(s);
        writeFile(" ");
    }else if(strcmp(s,")")==0 && forFlag == 1){
        writeFile(s);
        forFlag = 0;
    }else {
        writeFile(s);
    }
}

void writeFile(char* s){
	fprintf(yyout,"%s",s);
}

void writeUnary(char* s){
	if(selectedStyle==0){
		//estilos unary nuestros
		writeFile(s);
	}else if(selectedStyle ==1){
		//estilos unary gnu
		writeFile(" ");
		writeFile(s);
	}else{ //estilos unary bsd
		//no space after
		writeFile(" ");
		writeFile(s);
	}
}

void writeBinary(char* s){
	if(selectedStyle==0){
		//estilos unary nuestros
		writeFile(s);
	}else if(selectedStyle ==1){
		//estilos unary gnu
		writeFile(" ");
		writeFile(s);
		writeFile(" ");
	}else{ //estilos unary bsd
		//spaces around
		writeFile(" ");
		writeFile(s);
		writeFile(" ");
	}
}

void writeTypes(char* s){
	if(selectedStyle==0){
		//estilos unary nuestros
		writeFile(s);
		writeFile(" ");
	}else if(selectedStyle ==1){
		//estilos unary gnu
		writeFile(s);
		writeFile(" ");
	}else{ //estilos unary bsd
		//spaces around
		writeFile(s);
		writeFile(" ");
	}
}

void writeIteration(char* s){
	if(selectedStyle==0){
		writeFile(s);
		writeFile(" ");
	}else if(selectedStyle==1){
		writeFile(s);
		writeFile(" ");
	}else{
		writeFile(s);
		writeFile(" ");
	}
}

//BSD
// -> 8 spaces indentation
// -> no space between unary operators
// -> spaces between binary and ternary operators
// -> no space between increment and decrement operators
// -> no space around . and -> operators


void end_decl(){
	struct Node* nodeType = retrieve("type");
	char *type = nodeType->element->text;
	while(strcmp(stack->top->element->objectType,"identifier")==0){
		// THERE IS ALREADY AN ID IN THIS SCOPE WITH THIS NAME
		if(lookupLocal(stack->top->element->text)){
			semanticError("Identifier is already defined in present scope");
		}else{
			insert(stack->top->element->text);
		}
		pop();
	}
	while(strcmp(stack->top->element->objectType,"type")==0){
		pop();
	}
}