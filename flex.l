%option yylineno
%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\f]

%{
    #include <stdio.h>
    #include "bison.tab.h" //to get the tokens defined on bison file
    extern int flagGNUStyle;
    extern int flagBSDStyle;
    extern int teamStyle;
    extern int preprocessorFlag;
    extern int replaceFileFlag;
    char linebuf[500];
    int yycolumn = 1;
    extern void yyerror(const char *);  /* prints grammar violation message */
    extern int sym_type(const char *);  /* returns type from symbol table */

    #define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

    #define YY_USER_ACTION yycolumn += yyleng;\
    yylloc.first_line = yylloc.last_line = yylineno; \
    yylloc.first_column = yycolumn - yyleng; \
    yylloc.last_column = yycolumn -1;

    static void comment(void);
    static int check_type(void);
    extern int spaces;
    extern void printSpacesPretty();
%}

%%

("#"|"##") {return PREPROCESSING;} /* preprocessing instructions */

"/*"                                    { comment(); }
"//".*                                    { /* consume //-comment */ }

"auto"					{yylval.stringValue = strdup(yytext); return(AUTO); }
"break"					{yylval.stringValue = strdup(yytext); return(BREAK); }
"case"					{yylval.stringValue = strdup(yytext); return(CASE); }
"char"					{yylval.stringValue = strdup(yytext); return(CHAR); }
"const"					{yylval.stringValue = strdup(yytext); return(CONST); }
"continue"				{yylval.stringValue = strdup(yytext); return(CONTINUE); }
"default"				{yylval.stringValue = strdup(yytext); return(DEFAULT); }
"do"					{yylval.stringValue = strdup(yytext); return(DO); }
"double"				{yylval.stringValue = strdup(yytext); return(DOUBLE); }
"else"					{yylval.stringValue = strdup(yytext); return(ELSE); }
"enum"					{yylval.stringValue = strdup(yytext); return(ENUM); }
"extern"				{yylval.stringValue = strdup(yytext); return(EXTERN); }
"float"					{yylval.stringValue = strdup(yytext); return(FLOAT); }
"for"					{yylval.stringValue = strdup(yytext); return(FOR); }
"goto"					{yylval.stringValue = strdup(yytext); return(GOTO); }
"if"					{yylval.stringValue = strdup(yytext); return(IF); }
"inline"				{yylval.stringValue = strdup(yytext); return(INLINE); }
"int"					{yylval.stringValue = strdup(yytext); return(INT); }
"long"					{yylval.stringValue = strdup(yytext); return(LONG); }
"register"				{yylval.stringValue = strdup(yytext); return(REGISTER); }
"restrict"				{yylval.stringValue = strdup(yytext); return(RESTRICT); }
"return"				{yylval.stringValue = strdup(yytext); return(RETURN); }
"short"					{yylval.stringValue = strdup(yytext); return(SHORT); }
"signed"				{yylval.stringValue = strdup(yytext); return(SIGNED); }
"sizeof"				{yylval.stringValue = strdup(yytext); return(SIZEOF); }
"static"				{yylval.stringValue = strdup(yytext); return(STATIC); }
"struct"				{yylval.stringValue = strdup(yytext); return(STRUCT); }
"switch"				{yylval.stringValue = strdup(yytext); return(SWITCH); }
"typedef"				{yylval.stringValue = strdup(yytext); return(TYPEDEF); }
"union"					{yylval.stringValue = strdup(yytext); return(UNION); }
"unsigned"				{yylval.stringValue = strdup(yytext); return(UNSIGNED); }
"void"					{yylval.stringValue = strdup(yytext); return(VOID); }
"volatile"				{yylval.stringValue = strdup(yytext); return(VOLATILE); }
"while"					{yylval.stringValue = strdup(yytext); return(WHILE); }
"_Alignas"              {yylval.stringValue = strdup(yytext); return ALIGNAS; }
"_Alignof"              {yylval.stringValue = strdup(yytext); return ALIGNOF; }
"_Atomic"               {yylval.stringValue = strdup(yytext); return ATOMIC; }
"_Bool"                 {yylval.stringValue = strdup(yytext); return BOOL; }
"_Complex"              {yylval.stringValue = strdup(yytext); return COMPLEX; }
"_Generic"              {yylval.stringValue = strdup(yytext); return GENERIC; }
"_Imaginary"            {yylval.stringValue = strdup(yytext); return IMAGINARY; }
"_Noreturn"             {yylval.stringValue = strdup(yytext); return NORETURN; }
"_Static_assert"        {yylval.stringValue = strdup(yytext); return STATIC_ASSERT; }
"_Thread_local"         {yylval.stringValue = strdup(yytext); return THREAD_LOCAL; }
"__func__"              {yylval.stringValue = strdup(yytext); return FUNC_NAME; }

{L}{A}*					{yylval.stringValue = strdup(yytext); return check_type(); }

{HP}{H}+{IS}?				{yylval.stringValue = strdup(yytext); return I_CONSTANT; }
{NZ}{D}*{IS}?				{yylval.stringValue = strdup(yytext); return I_CONSTANT; }
"0"{O}*{IS}?				{yylval.stringValue = strdup(yytext); return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{yylval.stringValue = strdup(yytext); return I_CONSTANT; }

{D}+{E}{FS}?				{yylval.stringValue = strdup(yytext); return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{yylval.stringValue = strdup(yytext); return F_CONSTANT; }
{D}+"."{E}?{FS}?			{yylval.stringValue = strdup(yytext); return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{yylval.stringValue = strdup(yytext); return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{yylval.stringValue = strdup(yytext); return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{yylval.stringValue = strdup(yytext); return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{yylval.stringValue = strdup(yytext); return STRING_LITERAL; }

"..."					{yylval.stringValue = strdup(yytext); return ELLIPSIS; }
">>="					{yylval.stringValue = strdup(yytext); return RIGHT_ASSIGN; }
"<<="					{yylval.stringValue = strdup(yytext); return LEFT_ASSIGN; }
"+="					{yylval.stringValue = strdup(yytext); return ADD_ASSIGN; }
"-="					{yylval.stringValue = strdup(yytext); return SUB_ASSIGN; }
"*="					{yylval.stringValue = strdup(yytext); return MUL_ASSIGN; }
"/="					{yylval.stringValue = strdup(yytext); return DIV_ASSIGN; }
"%="					{yylval.stringValue = strdup(yytext); return MOD_ASSIGN; }
"&="					{yylval.stringValue = strdup(yytext); return AND_ASSIGN; }
"^="					{yylval.stringValue = strdup(yytext); return XOR_ASSIGN; }
"|="					{yylval.stringValue = strdup(yytext); return OR_ASSIGN; }
">>"					{yylval.stringValue = strdup(yytext); return RIGHT_OP; }
"<<"					{yylval.stringValue = strdup(yytext); return LEFT_OP; }
"++"					{yylval.stringValue = strdup(yytext); return INC_OP; }
"--"					{yylval.stringValue = strdup(yytext); return DEC_OP; }
"->"					{yylval.stringValue = strdup(yytext); return PTR_OP; }
"&&"					{yylval.stringValue = strdup(yytext); return AND_OP; }
"||"					{yylval.stringValue = strdup(yytext); return OR_OP; }
"<="					{yylval.stringValue = strdup(yytext); return LE_OP; }
">="					{yylval.stringValue = strdup(yytext); return GE_OP; }
"=="					{yylval.stringValue = strdup(yytext); return EQ_OP; }
"!="					{yylval.stringValue = strdup(yytext); return NE_OP; }
";"					{yylval.stringValue = strdup(yytext); return SEMMICOLON; }
("{"|"<%")				{yylval.stringValue = strdup(yytext); return LEFTBRACKET; }
("}"|"%>")				{yylval.stringValue = strdup(yytext); return RIGHTBRACKET; }
","					{yylval.stringValue = strdup(yytext); return COMMA; }
":"					{yylval.stringValue = strdup(yytext); return TWOPOINTS; }
"="					{yylval.stringValue = strdup(yytext); return EQUALS; }
"("					{yylval.stringValue = strdup(yytext); return LEFTPAREN; }
")"					{yylval.stringValue = strdup(yytext); return RIGHTPAREN; }
("["|"<:")				{yylval.stringValue = strdup(yytext); return LEFTSQUAREBRACKET; }
("]"|":>")				{yylval.stringValue = strdup(yytext); return RIGHTSQUAREBRACKET; }
"."					{yylval.stringValue = strdup(yytext); return POINT; }
"&"					{yylval.stringValue = strdup(yytext); return AND; }
"!"					{yylval.stringValue = strdup(yytext); return EXCLAMATION; }
"~"					{yylval.stringValue = strdup(yytext); return NOT; }
"-"					{yylval.stringValue = strdup(yytext); return MINUS; }
"+"					{yylval.stringValue = strdup(yytext); return PLUS; }
"*"					{yylval.stringValue = strdup(yytext); return ASTERISK; }
"/"					{yylval.stringValue = strdup(yytext); return DIVITION; }
"%"					{yylval.stringValue = strdup(yytext); return MODULUS; }
"<"					{yylval.stringValue = strdup(yytext); return LEFTLESS; }
">"					{yylval.stringValue = strdup(yytext); return RIGHTMORE; }
"^"					{yylval.stringValue = strdup(yytext); return EXPONENTATION; }
"|"					{yylval.stringValue = strdup(yytext); return OR; }
"?"					{yylval.stringValue = strdup(yytext); return TERNARYIF; }

\n.*  {strncpy(linebuf, yytext+1, sizeof(linebuf)); /* save the next line */
        yyless(1);yycolumn =1;}

{WS}+				{ /* whitespace separates tokens */ }
.					{ /* discard bad characters */ }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

static void comment(void)
{
    int c;

    while ((c = input()) != 0)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
    yyerror("unterminated comment");
}

static int check_type(void)
{
    switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        return IDENTIFIER;
    }
}

void writePretty(){
    
}