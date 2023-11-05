/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y"

    #include <stdio.h>
	#include <string.h>
	#include "hashTable.h"
	#include "stack.h"
	#include "structDefTable.h"
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
	int isStructDeclaration = 0;
	void end_decl();
	void insertStructDef();
	void checkIsType();

#line 113 "bison.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PREPROCESSING = 3,              /* PREPROCESSING  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_I_CONSTANT = 5,                 /* I_CONSTANT  */
  YYSYMBOL_F_CONSTANT = 6,                 /* F_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 8,                  /* FUNC_NAME  */
  YYSYMBOL_SIZEOF = 9,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 10,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 11,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 12,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 13,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 14,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 15,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 16,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 17,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 18,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 19,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 20,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 21,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 22,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 23,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 24,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 25,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 26,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 27,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 28,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 29,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 30,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF_NAME = 31,              /* TYPEDEF_NAME  */
  YYSYMBOL_ENUMERATION_CONSTANT = 32,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_SEMMICOLON = 33,                /* SEMMICOLON  */
  YYSYMBOL_LEFTBRACKET = 34,               /* LEFTBRACKET  */
  YYSYMBOL_RIGHTBRACKET = 35,              /* RIGHTBRACKET  */
  YYSYMBOL_LEFTPAREN = 36,                 /* LEFTPAREN  */
  YYSYMBOL_RIGHTPAREN = 37,                /* RIGHTPAREN  */
  YYSYMBOL_COMMA = 38,                     /* COMMA  */
  YYSYMBOL_TWOPOINTS = 39,                 /* TWOPOINTS  */
  YYSYMBOL_EQUALS = 40,                    /* EQUALS  */
  YYSYMBOL_LEFTSQUAREBRACKET = 41,         /* LEFTSQUAREBRACKET  */
  YYSYMBOL_RIGHTSQUAREBRACKET = 42,        /* RIGHTSQUAREBRACKET  */
  YYSYMBOL_POINT = 43,                     /* POINT  */
  YYSYMBOL_AND = 44,                       /* AND  */
  YYSYMBOL_EXCLAMATION = 45,               /* EXCLAMATION  */
  YYSYMBOL_NOT = 46,                       /* NOT  */
  YYSYMBOL_MINUS = 47,                     /* MINUS  */
  YYSYMBOL_PLUS = 48,                      /* PLUS  */
  YYSYMBOL_ASTERISK = 49,                  /* ASTERISK  */
  YYSYMBOL_DIVITION = 50,                  /* DIVITION  */
  YYSYMBOL_MODULUS = 51,                   /* MODULUS  */
  YYSYMBOL_LEFTLESS = 52,                  /* LEFTLESS  */
  YYSYMBOL_RIGHTMORE = 53,                 /* RIGHTMORE  */
  YYSYMBOL_EXPONENTATION = 54,             /* EXPONENTATION  */
  YYSYMBOL_OR = 55,                        /* OR  */
  YYSYMBOL_TERNARYIF = 56,                 /* TERNARYIF  */
  YYSYMBOL_TYPEDEF = 57,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 58,                    /* EXTERN  */
  YYSYMBOL_STATIC = 59,                    /* STATIC  */
  YYSYMBOL_AUTO = 60,                      /* AUTO  */
  YYSYMBOL_REGISTER = 61,                  /* REGISTER  */
  YYSYMBOL_INLINE = 62,                    /* INLINE  */
  YYSYMBOL_CONST = 63,                     /* CONST  */
  YYSYMBOL_RESTRICT = 64,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 65,                  /* VOLATILE  */
  YYSYMBOL_BOOL = 66,                      /* BOOL  */
  YYSYMBOL_CHAR = 67,                      /* CHAR  */
  YYSYMBOL_SHORT = 68,                     /* SHORT  */
  YYSYMBOL_INT = 69,                       /* INT  */
  YYSYMBOL_LONG = 70,                      /* LONG  */
  YYSYMBOL_SIGNED = 71,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 72,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 73,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 74,                    /* DOUBLE  */
  YYSYMBOL_VOID = 75,                      /* VOID  */
  YYSYMBOL_COMPLEX = 76,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 77,                 /* IMAGINARY  */
  YYSYMBOL_STRUCT = 78,                    /* STRUCT  */
  YYSYMBOL_UNION = 79,                     /* UNION  */
  YYSYMBOL_ENUM = 80,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 81,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 82,                      /* CASE  */
  YYSYMBOL_DEFAULT = 83,                   /* DEFAULT  */
  YYSYMBOL_IF = 84,                        /* IF  */
  YYSYMBOL_ELSE = 85,                      /* ELSE  */
  YYSYMBOL_SWITCH = 86,                    /* SWITCH  */
  YYSYMBOL_WHILE = 87,                     /* WHILE  */
  YYSYMBOL_DO = 88,                        /* DO  */
  YYSYMBOL_FOR = 89,                       /* FOR  */
  YYSYMBOL_GOTO = 90,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 91,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 92,                     /* BREAK  */
  YYSYMBOL_RETURN = 93,                    /* RETURN  */
  YYSYMBOL_ALIGNAS = 94,                   /* ALIGNAS  */
  YYSYMBOL_ALIGNOF = 95,                   /* ALIGNOF  */
  YYSYMBOL_ATOMIC = 96,                    /* ATOMIC  */
  YYSYMBOL_GENERIC = 97,                   /* GENERIC  */
  YYSYMBOL_NORETURN = 98,                  /* NORETURN  */
  YYSYMBOL_STATIC_ASSERT = 99,             /* STATIC_ASSERT  */
  YYSYMBOL_THREAD_LOCAL = 100,             /* THREAD_LOCAL  */
  YYSYMBOL_LOWER_THAN_ELSE = 101,          /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 102,                 /* $accept  */
  YYSYMBOL_identifier = 103,               /* identifier  */
  YYSYMBOL_i_constant = 104,               /* i_constant  */
  YYSYMBOL_f_constant = 105,               /* f_constant  */
  YYSYMBOL_string_literal = 106,           /* string_literal  */
  YYSYMBOL_func_name = 107,                /* func_name  */
  YYSYMBOL_twopoints = 108,                /* twopoints  */
  YYSYMBOL_equals = 109,                   /* equals  */
  YYSYMBOL_left_op = 110,                  /* left_op  */
  YYSYMBOL_right_op = 111,                 /* right_op  */
  YYSYMBOL_le_op = 112,                    /* le_op  */
  YYSYMBOL_ge_op = 113,                    /* ge_op  */
  YYSYMBOL_eq_op = 114,                    /* eq_op  */
  YYSYMBOL_ne_op = 115,                    /* ne_op  */
  YYSYMBOL_and_op = 116,                   /* and_op  */
  YYSYMBOL_or_op = 117,                    /* or_op  */
  YYSYMBOL_mul_assign = 118,               /* mul_assign  */
  YYSYMBOL_div_assign = 119,               /* div_assign  */
  YYSYMBOL_mod_assign = 120,               /* mod_assign  */
  YYSYMBOL_add_assign = 121,               /* add_assign  */
  YYSYMBOL_sub_assign = 122,               /* sub_assign  */
  YYSYMBOL_left_assign = 123,              /* left_assign  */
  YYSYMBOL_right_assign = 124,             /* right_assign  */
  YYSYMBOL_and_assign = 125,               /* and_assign  */
  YYSYMBOL_xor_assign = 126,               /* xor_assign  */
  YYSYMBOL_or_assign = 127,                /* or_assign  */
  YYSYMBOL_minus = 128,                    /* minus  */
  YYSYMBOL_plus = 129,                     /* plus  */
  YYSYMBOL_divition = 130,                 /* divition  */
  YYSYMBOL_modulus = 131,                  /* modulus  */
  YYSYMBOL_exponentation = 132,            /* exponentation  */
  YYSYMBOL_ternaryif = 133,                /* ternaryif  */
  YYSYMBOL_and = 134,                      /* and  */
  YYSYMBOL_leftless = 135,                 /* leftless  */
  YYSYMBOL_rightmore = 136,                /* rightmore  */
  YYSYMBOL_or = 137,                       /* or  */
  YYSYMBOL_asterisk = 138,                 /* asterisk  */
  YYSYMBOL_inc_op = 139,                   /* inc_op  */
  YYSYMBOL_dec_op = 140,                   /* dec_op  */
  YYSYMBOL_exclamation = 141,              /* exclamation  */
  YYSYMBOL_not = 142,                      /* not  */
  YYSYMBOL_typedef_name = 143,             /* typedef_name  */
  YYSYMBOL_typedef = 144,                  /* typedef  */
  YYSYMBOL_alignas = 145,                  /* alignas  */
  YYSYMBOL_alignof = 146,                  /* alignof  */
  YYSYMBOL_sizeof = 147,                   /* sizeof  */
  YYSYMBOL_atomic = 148,                   /* atomic  */
  YYSYMBOL_generic = 149,                  /* generic  */
  YYSYMBOL_noreturn = 150,                 /* noreturn  */
  YYSYMBOL_static_assert = 151,            /* static_assert  */
  YYSYMBOL_static = 152,                   /* static  */
  YYSYMBOL_extern = 153,                   /* extern  */
  YYSYMBOL_auto = 154,                     /* auto  */
  YYSYMBOL_register = 155,                 /* register  */
  YYSYMBOL_thread_local = 156,             /* thread_local  */
  YYSYMBOL_break = 157,                    /* break  */
  YYSYMBOL_const = 158,                    /* const  */
  YYSYMBOL_restrict = 159,                 /* restrict  */
  YYSYMBOL_volatile = 160,                 /* volatile  */
  YYSYMBOL_inline = 161,                   /* inline  */
  YYSYMBOL_point = 162,                    /* point  */
  YYSYMBOL_ptr_op = 163,                   /* ptr_op  */
  YYSYMBOL_semmicolon = 164,               /* semmicolon  */
  YYSYMBOL_leftbracket = 165,              /* leftbracket  */
  YYSYMBOL_rightbracket = 166,             /* rightbracket  */
  YYSYMBOL_leftparen = 167,                /* leftparen  */
  YYSYMBOL_rightparen = 168,               /* rightparen  */
  YYSYMBOL_comma = 169,                    /* comma  */
  YYSYMBOL_leftsquarebracket = 170,        /* leftsquarebracket  */
  YYSYMBOL_rightsquarebracket = 171,       /* rightsquarebracket  */
  YYSYMBOL_ellipsis = 172,                 /* ellipsis  */
  YYSYMBOL_bool = 173,                     /* bool  */
  YYSYMBOL_char = 174,                     /* char  */
  YYSYMBOL_short = 175,                    /* short  */
  YYSYMBOL_int = 176,                      /* int  */
  YYSYMBOL_long = 177,                     /* long  */
  YYSYMBOL_signed = 178,                   /* signed  */
  YYSYMBOL_unsigned = 179,                 /* unsigned  */
  YYSYMBOL_float = 180,                    /* float  */
  YYSYMBOL_double = 181,                   /* double  */
  YYSYMBOL_void = 182,                     /* void  */
  YYSYMBOL_complex = 183,                  /* complex  */
  YYSYMBOL_imaginary = 184,                /* imaginary  */
  YYSYMBOL_struct = 185,                   /* struct  */
  YYSYMBOL_union = 186,                    /* union  */
  YYSYMBOL_enum = 187,                     /* enum  */
  YYSYMBOL_case = 188,                     /* case  */
  YYSYMBOL_default = 189,                  /* default  */
  YYSYMBOL_continue = 190,                 /* continue  */
  YYSYMBOL_goto = 191,                     /* goto  */
  YYSYMBOL_return = 192,                   /* return  */
  YYSYMBOL_if = 193,                       /* if  */
  YYSYMBOL_else = 194,                     /* else  */
  YYSYMBOL_switch = 195,                   /* switch  */
  YYSYMBOL_while = 196,                    /* while  */
  YYSYMBOL_do = 197,                       /* do  */
  YYSYMBOL_for = 198,                      /* for  */
  YYSYMBOL_prepareIdInsertion = 199,       /* prepareIdInsertion  */
  YYSYMBOL_primary_expression = 200,       /* primary_expression  */
  YYSYMBOL_constant = 201,                 /* constant  */
  YYSYMBOL_enumeration_constant_two = 202, /* enumeration_constant_two  */
  YYSYMBOL_enumeration_constant = 203,     /* enumeration_constant  */
  YYSYMBOL_string = 204,                   /* string  */
  YYSYMBOL_generic_selection = 205,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 206,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 207,      /* generic_association  */
  YYSYMBOL_postfix_expression = 208,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 209, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 210,         /* unary_expression  */
  YYSYMBOL_unary_operator = 211,           /* unary_operator  */
  YYSYMBOL_cast_expression = 212,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 213, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 214,      /* additive_expression  */
  YYSYMBOL_shift_expression = 215,         /* shift_expression  */
  YYSYMBOL_relational_expression = 216,    /* relational_expression  */
  YYSYMBOL_equality_expression = 217,      /* equality_expression  */
  YYSYMBOL_and_expression = 218,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 219,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 220,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 221,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 222,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 223,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 224,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 225,      /* assignment_operator  */
  YYSYMBOL_expression = 226,               /* expression  */
  YYSYMBOL_constant_expression = 227,      /* constant_expression  */
  YYSYMBOL_declaration = 228,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 229,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 230,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 231,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 232,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 233,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 234, /* struct_or_union_specifier  */
  YYSYMBOL_235_1 = 235,                    /* $@1  */
  YYSYMBOL_struct_or_union = 236,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 237,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 238,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 239, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 240,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 241,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 242,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 243,          /* enumerator_list  */
  YYSYMBOL_enumerator = 244,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 245,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 246,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 247,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 248,      /* alignment_specifier  */
  YYSYMBOL_declarator = 249,               /* declarator  */
  YYSYMBOL_direct_declarator = 250,        /* direct_declarator  */
  YYSYMBOL_pointer = 251,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 252,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 253,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 254,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 255,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 256,          /* identifier_list  */
  YYSYMBOL_type_name = 257,                /* type_name  */
  YYSYMBOL_abstract_declarator = 258,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 259, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 260,              /* initializer  */
  YYSYMBOL_initializer_list = 261,         /* initializer_list  */
  YYSYMBOL_designation = 262,              /* designation  */
  YYSYMBOL_designator_list = 263,          /* designator_list  */
  YYSYMBOL_designator = 264,               /* designator  */
  YYSYMBOL_static_assert_declaration = 265, /* static_assert_declaration  */
  YYSYMBOL_statement = 266,                /* statement  */
  YYSYMBOL_labeled_statement = 267,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 268,       /* compound_statement  */
  YYSYMBOL_block_item_list = 269,          /* block_item_list  */
  YYSYMBOL_block_item = 270,               /* block_item  */
  YYSYMBOL_expression_statement = 271,     /* expression_statement  */
  YYSYMBOL_selection_statement = 272,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 273,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 274,           /* jump_statement  */
  YYSYMBOL_translation_unit = 275,         /* translation_unit  */
  YYSYMBOL_external_declaration = 276,     /* external_declaration  */
  YYSYMBOL_function_definition = 277,      /* function_definition  */
  YYSYMBOL_declaration_list = 278          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  105
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3179

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  177
/* YYNRULES -- Number of rules.  */
#define YYNRULES  415
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  666

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   356


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   130,   130,   141,   145,   149,   153,   159,   162,   166,
     170,   174,   178,   181,   184,   187,   190,   193,   196,   199,
     202,   205,   208,   211,   214,   217,   220,   224,   227,   230,
     233,   237,   241,   245,   248,   251,   254,   260,   263,   267,
     271,   274,   278,   281,   284,   287,   290,   293,   296,   299,
     302,   305,   309,   313,   317,   321,   324,   327,   330,   333,
     336,   341,   345,   350,   353,   356,   359,   362,   365,   368,
     371,   374,   378,   381,   384,   387,   390,   393,   396,   399,
     402,   405,   408,   411,   414,   417,   420,   423,   426,   429,
     432,   435,   440,   443,   446,   449,   452,   455,   459,   463,
     464,   465,   466,   467,   468,   469,   470,   474,   475,   476,
     480,   484,   488,   489,   493,   494,   498,   499,   500,   504,
     505,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   528,   529,   533,
     534,   535,   536,   537,   538,   539,   540,   544,   545,   546,
     547,   548,   549,   553,   554,   558,   559,   560,   561,   565,
     566,   567,   571,   572,   573,   577,   578,   579,   580,   581,
     585,   586,   587,   591,   592,   596,   597,   601,   602,   606,
     607,   611,   612,   616,   617,   621,   622,   623,   624,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     642,   643,   647,   651,   652,   653,   654,   655,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   672,   673,
     677,   678,   682,   683,   684,   685,   686,   687,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   710,   711,   711,   712,   713,   714,
     719,   720,   724,   725,   726,   730,   731,   732,   736,   737,
     738,   739,   743,   744,   748,   749,   750,   754,   755,   756,
     757,   758,   762,   763,   764,   768,   769,   773,   774,   778,
     779,   780,   781,   785,   786,   790,   791,   792,   796,   797,
     801,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   813,   814,   815,   816,   820,   821,   822,   823,
     827,   828,   833,   834,   835,   839,   840,   841,   845,   846,
     847,   851,   852,   853,   857,   858,   859,   863,   864,   865,
     869,   870,   871,   872,   873,   874,   875,   876,   877,   878,
     879,   880,   881,   882,   883,   884,   885,   886,   887,   888,
     889,   890,   894,   895,   896,   900,   901,   902,   903,   904,
     908,   912,   913,   914,   918,   919,   923,   927,   928,   929,
     930,   931,   932,   936,   937,   938,   942,   943,   947,   948,
     949,   953,   954,   958,   959,   960,   964,   965,   966,   967,
     968,   969,   973,   974,   975,   976,   977,   978,   979,   980,
     984,   985,   986,   987,   988,   989,   993,   994,   995,   999,
    1000,  1001,  1005,  1006,  1010,  1011
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PREPROCESSING",
  "IDENTIFIER", "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL", "FUNC_NAME",
  "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "SEMMICOLON", "LEFTBRACKET", "RIGHTBRACKET",
  "LEFTPAREN", "RIGHTPAREN", "COMMA", "TWOPOINTS", "EQUALS",
  "LEFTSQUAREBRACKET", "RIGHTSQUAREBRACKET", "POINT", "AND", "EXCLAMATION",
  "NOT", "MINUS", "PLUS", "ASTERISK", "DIVITION", "MODULUS", "LEFTLESS",
  "RIGHTMORE", "EXPONENTATION", "OR", "TERNARYIF", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF",
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL",
  "LOWER_THAN_ELSE", "$accept", "identifier", "i_constant", "f_constant",
  "string_literal", "func_name", "twopoints", "equals", "left_op",
  "right_op", "le_op", "ge_op", "eq_op", "ne_op", "and_op", "or_op",
  "mul_assign", "div_assign", "mod_assign", "add_assign", "sub_assign",
  "left_assign", "right_assign", "and_assign", "xor_assign", "or_assign",
  "minus", "plus", "divition", "modulus", "exponentation", "ternaryif",
  "and", "leftless", "rightmore", "or", "asterisk", "inc_op", "dec_op",
  "exclamation", "not", "typedef_name", "typedef", "alignas", "alignof",
  "sizeof", "atomic", "generic", "noreturn", "static_assert", "static",
  "extern", "auto", "register", "thread_local", "break", "const",
  "restrict", "volatile", "inline", "point", "ptr_op", "semmicolon",
  "leftbracket", "rightbracket", "leftparen", "rightparen", "comma",
  "leftsquarebracket", "rightsquarebracket", "ellipsis", "bool", "char",
  "short", "int", "long", "signed", "unsigned", "float", "double", "void",
  "complex", "imaginary", "struct", "union", "enum", "case", "default",
  "continue", "goto", "return", "if", "else", "switch", "while", "do",
  "for", "prepareIdInsertion", "primary_expression", "constant",
  "enumeration_constant_two", "enumeration_constant", "string",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "$@1", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-479)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-326)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1499,    27,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,     3,     3,  -479,     3,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,    12,  -479,    43,  2983,  2983,  -479,   187,  -479,  -479,
    2983,  2983,  2983,  -479,  1117,  -479,  -479,  1499,  -479,  1773,
    2222,  2738,  -479,  -479,    53,  -479,  -479,  -479,   155,  -479,
     141,    53,    49,  -479,  2832,    60,     3,  -479,  -479,    70,
    2728,    53,  -479,  -479,  -479,  -479,    72,  -479,  -479,    47,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  2738,  2738,  -479,  -479,     3,
    2738,     3,  1853,  -479,  -479,  -479,  -479,  -479,   311,  -479,
    2738,  -479,   350,   225,   102,   156,   302,    87,   122,   174,
     176,    29,  -479,    47,  3083,    34,  3083,    47,    47,    47,
     165,    53,    79,  -479,    12,  -479,  -479,  -479,   155,    47,
      47,  -479,  -479,  -479,  -479,     4,  -479,  2612,  1576,  -479,
      43,  -479,  2882,  -479,  1399,  2411,    60,  -479,    72,  -479,
     907,  -479,   340,  -479,   190,  -479,  -479,  -479,  1853,  -479,
    -479,  2272,  1853,  -479,  2738,    23,   716,  -479,  -479,   287,
      47,  -479,  -479,  -479,  -479,    53,   212,  1951,  2005,  -479,
    -479,  -479,  2738,  2738,  2738,  2738,  2738,  -479,  -479,  2738,
    2738,  -479,  -479,  -479,  -479,  2738,  2738,  2738,  2738,  -479,
    -479,  2738,  2738,  2738,  -479,  2738,  -479,  2738,  -479,  2738,
    -479,  -479,  2738,  2738,  -479,  -479,   158,  2782,  2411,    60,
    -479,    60,  -479,  -479,  -479,  -479,   231,  -479,   219,  -479,
    -479,    72,  -479,  -479,  -479,  -479,  -479,  -479,   219,  2594,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,   205,   252,  -479,  -479,  2738,   205,   252,
      53,  1034,     3,     3,     3,  2349,     3,   192,  -479,  -479,
    -479,  -479,  1197,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
      47,  -479,    53,    50,    47,   185,  -479,   199,  -479,   264,
    2473,  -479,   264,  2411,  -479,  2728,  -479,  -479,  -479,  2738,
    -479,    80,  -479,   205,    12,    47,    47,    47,    47,   165,
    -479,  -479,    12,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  2059,  -479,  2738,  2612,  -479,   252,
    -479,   114,  -479,   287,  -479,   264,   160,  -479,  -479,  -479,
     350,   350,   225,   225,   102,   102,   102,   102,   156,   156,
     302,    87,   122,   174,   176,   343,  -479,  -479,    47,    47,
     264,  2473,  -479,   264,  2411,    60,  1449,  2411,    47,  2738,
    -479,  -479,  -479,    79,  -479,  2738,  -479,   196,  2612,    68,
    -479,  2349,  -479,   205,  2349,  -479,   252,    72,  -479,    80,
    2077,  2131,  2185,   207,  1297,   252,  -479,  1673,  -479,  -479,
    -479,  -479,  1349,  -479,   277,  -479,  -479,  2932,  2932,    53,
    -479,  -479,  -479,   264,  2473,  -479,   264,  2738,  -479,   264,
    -479,  -479,  -479,   120,  2738,  2728,    12,  -479,  -479,    12,
    2172,  2594,   262,  -479,  -479,  1933,  -479,  -479,  -479,  -479,
    -479,  2738,  -479,  -479,  2738,  -479,  -479,  -479,   264,  2473,
    -479,  2738,  -479,   264,    47,  -479,    47,   264,  2473,  -479,
     264,  2411,   252,  -479,  -479,    72,    53,   264,  2612,  -479,
    2539,  -479,   204,  -479,  -479,  -479,  2349,  -479,  -479,  -479,
    -479,    47,   287,    47,   287,    47,   287,     3,    47,  2666,
    2666,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,    53,
    -479,   264,  -479,   264,  -479,  -479,  -479,   907,    47,   205,
     274,  -479,   205,   196,  -479,  -479,    72,   196,  -479,  -479,
    -479,   264,   264,  -479,  -479,  -479,  -479,   264,  2473,  -479,
    2738,  -479,   264,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    2612,  -479,  -479,  2349,  2349,  -479,  2349,  -479,  2349,  2738,
    2349,  2720,  2720,  -479,  -479,  -479,  -479,  -479,  2738,  3033,
    -479,  3033,  2738,  -479,  2594,  -479,  -479,  2539,  -479,  -479,
    -479,   264,   264,  -479,  -479,   242,   242,  -479,  -479,   287,
      72,  2349,   287,  2349,   287,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  2349,  2349,   252,  -479,  -479,  2349,  -479,
    2349,  -479,  -479,  -479,  -479,  -479
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    42,    43,    52,    51,    53,    54,    60,    57,
      58,    59,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    44,    47,    49,
      50,    55,   243,   222,     0,   282,   284,     0,   224,   223,
     226,   227,   225,   279,   280,   281,   283,   237,   229,   230,
     231,   232,   235,   236,   233,   234,   228,   238,   239,   250,
     251,    98,   410,     0,   209,   211,   241,     0,   242,   240,
     213,   215,   217,   207,     0,   406,   409,     0,    66,     0,
       0,     0,    64,    98,     0,   205,    63,    37,   309,   203,
       0,     0,     0,   218,   220,   289,    98,   208,   210,     0,
       0,     0,   212,   214,   216,     1,     0,   407,   411,     0,
       2,     3,     4,     5,     6,    46,    38,    39,   110,    33,
      40,    41,    27,    28,    45,    48,    99,   107,   108,   112,
     113,   150,   149,   147,   148,     0,     0,   152,   151,     0,
       0,     0,     0,   121,   100,   109,   101,   103,   139,   153,
       0,   155,   159,   162,   165,   170,   173,   175,   177,   179,
     181,   183,   202,     0,   259,     0,   261,     0,     0,     0,
       0,     0,     0,   272,   271,   282,   310,   308,   307,     0,
       0,   290,   206,    68,   204,    98,     8,     0,     0,   414,
       0,   413,     0,    69,     0,     0,   288,    65,     0,   248,
       0,   252,    98,   257,   247,   408,    67,   287,     0,   140,
     141,     0,     0,   143,     0,     0,   153,   185,   200,     0,
       0,    62,    61,   127,   128,     0,     0,     0,     0,   142,
      29,    30,     0,     0,     0,     0,     0,     9,    10,     0,
       0,    11,    12,    34,    35,     0,     0,     0,     0,    13,
      14,     0,     0,     0,    31,     0,    36,     0,    15,     0,
      16,    32,     0,     0,   286,   258,     0,     0,     0,   328,
     324,   329,   260,   285,   278,   277,     0,   111,   276,    98,
     267,    98,    98,   311,   306,   305,   291,   219,   220,     0,
     352,   221,    87,    88,    92,    94,    95,    96,    97,    90,
      89,    56,    91,    99,     0,   383,   376,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   381,   382,
     367,   368,     0,   378,   369,   370,   371,   372,   415,   412,
       0,   302,     0,   320,     0,     0,   315,     0,    70,   148,
       0,   292,     0,     0,   249,     0,   244,   253,     7,     0,
     255,     0,   262,   266,     0,     0,     0,     0,     0,     0,
     105,   106,   104,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,     0,   102,     0,     0,   125,     0,
     126,     0,   123,     0,   137,     0,     0,   157,   158,   156,
     161,   160,   163,   164,   168,   169,   166,   167,   171,   172,
     174,   176,   178,   180,   182,     0,   326,   347,     0,     0,
     148,     0,   331,     0,     0,   327,     0,     0,     0,     0,
     274,   268,   273,     0,    98,     0,   356,     0,     0,     0,
     361,     0,   402,     0,     0,   401,     0,     0,   403,     0,
       0,     0,     0,     0,     0,     0,   384,     0,   377,   379,
     304,   321,     0,   318,   328,   319,   301,     0,     0,     0,
     303,    98,   293,     0,     0,   300,   148,     0,   299,     0,
     254,   264,   256,    98,     0,     0,     0,   146,   145,   144,
       0,     0,     0,   186,   201,     0,   154,   134,   133,   132,
     124,     0,   131,   122,     0,   348,   330,   332,     0,     0,
     338,     0,   337,     0,     0,   349,     0,   148,     0,   339,
       0,     0,     0,   275,   269,    98,     0,     0,     0,   353,
       0,   355,     0,   360,   362,   373,     0,   375,   400,   405,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   385,   380,    71,   314,   317,   312,   316,   323,     0,
     295,     0,   296,     0,   298,   263,   265,     0,     0,     0,
       0,   116,     0,     0,   188,   187,     0,     0,   138,   184,
     334,     0,     0,   336,   351,   350,   340,     0,     0,   346,
       0,   345,     0,   366,   270,   365,   364,   359,   354,   358,
       0,   363,   374,     0,     0,   391,     0,   399,     0,     0,
       0,     0,     0,   322,   294,   297,   246,   115,     0,     0,
     114,     0,     0,   135,     0,   136,   129,     0,   333,   335,
     342,     0,     0,   343,   357,   389,   387,   388,   392,     0,
       0,     0,     0,     0,     0,   120,   118,   117,   119,   130,
     341,   344,    93,     0,     0,     0,   398,   396,     0,   394,
       0,   390,   386,   393,   397,   395
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -479,   -82,  -479,  -479,    54,  -479,  -285,  -200,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,   -98,   -88,  -479,  -479,
    -479,  -479,  -143,  -479,  -479,  -479,   659,   162,   189,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,   -11,  -479,  -479,  -479,
    -147,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
     191,  -479,   -63,   -54,    55,   460,   123,   -77,   -84,   541,
    -133,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -453,  -479,  -479,
    -479,  -479,  -292,  -479,  -107,  -479,  -479,   -16,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -320,  -479,  -479,   642,  -479,
     -53,   169,   151,   148,   170,    96,   100,   104,   112,   126,
    -479,   -18,   330,  -479,    -2,    -9,   -51,   293,  -479,   200,
    -479,   -38,  -479,  -479,  -479,   -83,  -195,   -66,  -479,   -86,
    -479,   130,  -273,  -479,   -76,  -479,  -479,   -37,   -95,   -55,
    -165,  -184,  -479,   -43,  -479,   -48,  -144,  -249,  -162,  -290,
    -478,  -479,  -403,   -62,   259,  -479,   -67,  -479,  -300,  -395,
    -479,  -479,  -479,  -479,   140,  -479,  -479
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   126,   127,   128,   129,   130,   349,   187,   239,   240,
     245,   246,   251,   252,   259,   262,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   131,   132,   232,   233,
     255,   263,   133,   247,   248,   257,   134,   135,   136,   137,
     138,    32,    33,    34,   139,   140,    35,   141,    36,    37,
      38,    39,    40,    41,    42,   304,    43,    44,    45,    46,
     434,   226,   305,   188,   199,   142,   417,   386,   435,   341,
     554,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,   307,   308,   309,   310,
     311,   312,   653,   313,   314,   315,   316,    91,   143,   144,
     145,   278,   146,   147,   570,   571,   148,   393,   216,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   217,   218,   384,   317,   163,    62,   190,    92,    93,
      64,    65,    66,   354,    67,   200,   201,   165,   351,   352,
      68,   172,   173,    69,    70,    71,    72,   180,    95,    96,
     178,   418,   335,   336,   337,   572,   419,   271,   436,   437,
     438,   439,   440,    73,   319,   320,   321,   322,   323,   324,
     325,   326,   327,    74,    75,    76,   192
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,   196,   174,   166,   166,   347,   430,    83,   432,   181,
     334,   195,   176,   100,   253,   185,   373,   198,   441,   204,
     425,   270,   459,   444,   166,   291,    94,   191,    77,   184,
     343,   167,   169,   177,   202,   266,   534,   569,   203,    78,
      78,   164,   164,   189,    85,    84,    82,   -98,   340,   260,
     182,   101,   600,    87,   -98,   235,    86,   110,   197,   550,
     206,   162,   164,   162,   228,   236,   166,   171,   484,   532,
      78,  -325,   170,  -325,   110,   193,    86,   175,   429,    78,
     279,   268,    86,    87,   206,   261,    78,   183,   166,   277,
     166,   193,    87,   276,   220,   281,    78,   229,   265,    87,
     272,   193,   283,   424,   164,   197,   303,   197,   186,   193,
     269,   222,   195,    86,   197,   237,   238,   183,   183,   176,
     282,   421,   416,   284,   166,   329,   164,    89,   164,   601,
     504,   119,   166,   289,   202,   166,   166,   318,   203,   350,
     219,   328,   179,   388,   390,   -98,   600,    86,   288,   600,
     480,   206,   360,   288,   611,   612,    78,   552,   536,   348,
     355,   205,   164,   357,   358,   353,   569,   175,   569,    87,
     164,   241,   242,   164,   164,   474,   254,    78,   332,   397,
     398,   399,   268,   268,   175,   268,   467,   427,    99,   465,
      87,   -98,   176,   455,    78,   258,   477,   528,   183,   193,
     469,   573,   338,   183,    87,   577,   219,    87,   243,   244,
     219,   269,   269,   389,   107,   425,   110,   108,     9,    10,
      11,    82,  -313,   183,  -245,    86,   396,   280,   446,   256,
     183,   197,   207,   303,   183,   289,   206,   183,   113,   533,
     303,   442,   516,   306,   348,   193,   445,   222,   448,   268,
     461,    28,   432,   344,   456,   346,   509,   175,   468,   186,
     471,   415,   521,   171,   176,   171,   171,   283,   253,   166,
     361,   318,   122,   123,   483,   619,   531,   511,   464,   202,
     518,   -98,   490,   203,   618,    86,   264,   622,   482,   162,
     273,   274,   275,    63,   296,    86,   463,   197,   443,   646,
     485,   647,   285,   286,   235,   235,   338,   164,   491,   449,
     223,   206,   183,    78,   236,   236,   501,   331,   193,   249,
     250,   221,   116,   117,   206,   183,   497,   652,   498,   175,
     428,   162,   175,   495,   496,   556,   431,   224,   362,   225,
     481,   427,   385,   387,   654,   176,   547,    78,   283,   410,
     392,   176,   193,   588,   222,   411,   525,    97,    98,   303,
     530,   412,   303,   102,   103,   104,   597,    63,   599,   196,
      63,   413,   347,    86,   590,   303,    78,   458,   268,   348,
     268,   183,   348,   538,   289,   287,   540,   558,   414,    87,
     402,   403,   551,   404,   405,   406,   407,   565,   283,    87,
     230,   231,   567,   549,   400,   401,   318,   464,     0,   166,
     175,   162,   433,   175,   166,     0,   175,   162,   526,   202,
     523,   408,   409,   203,   555,   557,   527,     0,     0,   574,
       0,     0,   495,   283,     0,   495,     0,   289,   634,     0,
       0,   289,   176,     0,   595,   283,   353,   164,   542,   544,
     546,     0,   164,   460,   303,   559,     0,   466,     0,   593,
     470,     0,   599,   175,     0,   599,   162,     0,     0,     0,
       0,     0,     0,     0,   289,   566,   289,   613,   486,   487,
     488,   489,     0,     0,     0,     0,   579,   333,   524,     0,
       0,   166,   529,   621,    79,    80,   624,    81,   175,     0,
     627,   202,   539,     0,     0,   203,     0,   175,     0,   171,
     175,     0,   283,     0,   499,     0,   500,   290,     0,     0,
       0,   303,   303,    90,   303,   342,   303,     0,   303,   164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   505,   506,   166,   359,   166,   289,   575,     0,   515,
      90,   522,     0,     0,     0,   194,    90,   394,     0,   303,
     333,   303,     0,     0,     0,     0,     0,     0,     0,     0,
     289,   303,   303,   289,   453,     0,   303,   175,   303,     0,
     594,   164,     0,   164,     0,   598,     0,     0,     0,     0,
       0,     0,   663,     0,     0,   208,   208,     0,   423,   211,
     212,   214,     0,     0,     0,     0,     0,   639,   227,   642,
     644,     0,     0,     0,     0,     0,     0,     0,     0,   290,
       0,     0,   616,     0,     0,   267,     0,     0,   623,     0,
       0,   625,   626,     0,     0,     0,     0,   584,     0,   585,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,   194,     0,     0,     0,
       0,     0,    90,     0,   603,   604,   605,   606,   607,   608,
     473,   610,     0,   479,     0,     0,     0,     0,     0,     0,
       0,     0,   649,     0,     0,     0,     0,     0,     0,     0,
       0,   617,     0,   620,     0,   656,     0,     0,     0,     0,
     535,     0,     0,   537,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   493,     0,   494,     0,     0,   333,
       0,   149,    88,   149,     0,     0,   267,   267,     0,   267,
       0,   426,     0,     0,   641,   643,     0,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,    88,     0,    88,
       0,   508,     0,     0,   513,   333,   186,   520,     0,     0,
     333,   333,   655,     0,     0,   658,     0,   660,   290,     0,
       0,     0,   450,   451,   452,     0,   454,   209,   210,     0,
       0,     0,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,   462,     0,   602,     0,     0,     0,     0,
       0,     0,     0,     0,   561,     0,     0,   563,     0,   422,
       0,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   290,     0,     0,    88,   290,     0,     0,     0,     0,
       0,   578,     0,     0,     0,     0,     0,    88,     0,   581,
       0,   582,     0,     0,    88,     0,     0,     0,   587,    88,
       0,   592,     0,     0,   339,     0,     0,     0,   290,     0,
     290,    88,   635,   636,     0,   637,     0,   638,     0,   640,
       0,     0,     0,     0,   149,   149,   149,   149,   149,     0,
     472,   149,   149,   475,   478,   426,     0,   149,   149,   149,
     149,     0,     0,   149,   149,   149,     0,   149,     0,   149,
     657,   149,   659,     0,   149,     0,     0,     0,   345,     0,
       0,     0,   661,   662,     0,     0,     0,   664,   631,   665,
     632,     0,   462,     0,   462,    88,    88,   420,     0,     0,
     290,     0,     0,     0,     0,     0,   502,   503,     2,     0,
       0,     0,   197,    90,     0,     0,     0,     0,   645,   149,
       0,     0,   648,     0,   290,     0,     0,   290,     0,     0,
       0,   507,     0,     0,   510,   512,     0,     0,   519,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,   149,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   476,    28,     0,     0,    30,   609,     0,     0,
       0,     0,     0,     0,   560,     0,     0,   562,     0,     0,
     564,     0,     0,     0,     0,     0,     0,     0,     0,   149,
       0,     0,     0,     0,     0,   447,     0,     0,   110,   111,
     112,   113,   114,   115,     0,   116,   117,     0,     0,   580,
       0,     0,     0,     0,   583,     0,     0,     0,   586,   234,
     234,   589,   591,     0,     0,     0,   118,    86,   596,     0,
      78,   149,     0,     0,     0,     0,     0,   149,   119,   120,
     121,   122,   123,    87,     0,     0,   517,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   614,     0,   615,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,     0,
       1,    88,   628,   629,     0,     0,   149,     0,   630,   124,
       0,   125,     0,   633,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,   149,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   650,   651,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   457,     0,
       0,   110,   111,   112,   113,   114,   115,     0,   116,   117,
       0,    27,     0,    28,     0,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   118,
      86,    82,   197,    78,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   123,    87,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,    27,   124,    28,   125,    29,    30,    31,   548,     0,
       0,   110,   111,   112,   113,   114,   115,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   118,
      86,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   123,    87,     0,     0,     0,
     179,     0,     0,   -98,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       2,     0,     0,     0,     0,    78,   206,     0,     0,     0,
     193,    27,   124,    28,   125,    29,    30,    31,    87,     0,
     330,     0,     0,   -98,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       2,     0,     0,     0,     0,     0,   206,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
     514,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       2,     0,     0,     0,     0,     0,   206,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
       0,     0,     1,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     110,   111,   112,   113,   114,   115,     0,   116,   117,     0,
       0,     0,     0,    27,     0,    28,     0,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     2,   118,    86,
      82,   197,    78,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   123,    87,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   292,   293,
     294,     0,   295,   296,   297,   298,   299,   300,   301,   302,
      27,   124,    28,   125,    29,    30,    31,   110,   111,   112,
     113,   114,   115,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,   118,    86,    82,     0,    78,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,   123,    87,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,   292,   293,   294,     0,   295,
     296,   297,   298,   299,   300,   301,   302,    27,   124,    28,
     125,    29,    30,    31,   109,     0,     0,   110,   111,   112,
     113,   114,   115,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,   118,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,   123,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   215,     0,     0,   110,   111,   112,
     113,   114,   115,     0,   116,   117,     0,     0,   124,    28,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,   118,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,   123,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   576,     0,     0,   110,   111,   112,
     113,   114,   115,     0,   116,   117,     0,     0,   124,    28,
     125,     0,   391,     0,     0,   110,   111,   112,   113,   114,
     115,     0,   116,   117,     0,   118,     0,    82,     0,    78,
       0,     0,     0,     0,   193,     0,   222,   119,   120,   121,
     122,   123,    87,   118,     0,     0,     0,    78,   206,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,   123,
      87,     0,     0,     0,     0,     0,   395,     0,     0,   110,
     111,   112,   113,   114,   115,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,     0,
     125,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,    78,     0,     0,     0,     0,   124,     0,   125,   119,
     120,   121,   122,   123,    87,     0,     0,     0,     0,     0,
     492,     0,     0,   110,   111,   112,   113,   114,   115,     0,
     116,   117,     0,     0,     0,     0,     0,     0,   541,     0,
       0,   110,   111,   112,   113,   114,   115,     0,   116,   117,
       0,   118,     0,     0,     0,    78,     0,     0,     0,     0,
     124,     0,   125,   119,   120,   121,   122,   123,    87,   118,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   123,    87,     0,     0,     0,
       0,     0,   543,     0,     0,   110,   111,   112,   113,   114,
     115,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,   125,     0,     0,     0,
       0,     0,     0,   118,     0,     0,     0,    78,     0,     0,
       0,     0,   124,   568,   125,   119,   120,   121,   122,   123,
      87,     0,     0,     0,     0,     0,   545,     0,     0,   110,
     111,   112,   113,   114,   115,     0,   116,   117,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,    78,     0,   168,     0,     0,   124,     0,   125,   119,
     120,   121,   122,   123,    87,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,   356,     0,     0,     0,     0,     0,     0,
     124,     0,   125,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   110,   111,   112,   113,   114,   115,     0,
     116,   117,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,    86,    82,     0,    78,     0,     0,     0,     0,
       0,     0,     0,   119,   120,   121,   122,   123,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,   112,   113,   114,
     115,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,   292,   293,   294,     0,   295,   296,   297,   298,   299,
     300,   301,   302,   118,   124,     0,   125,    78,     0,     0,
       0,     0,     0,   338,     0,   119,   120,   121,   122,   123,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     9,    10,    11,   110,   111,   112,
     113,   114,   115,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   124,    28,   125,    78,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,   123,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,   110,   111,   112,   113,   114,   115,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,    28,
     125,   118,     0,    82,   197,    78,     0,     0,     0,     0,
     193,     0,   222,   119,   120,   121,   122,   123,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   111,
     112,   113,   114,   115,     0,   116,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,   112,   113,
     114,   115,     0,   116,   117,     0,   118,     0,    82,     0,
      78,     0,     0,     0,   124,   193,   125,   222,   119,   120,
     121,   122,   123,    87,   118,     0,    82,     0,    78,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
     123,    87,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,   112,   113,   114,   115,     0,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,   125,     0,     0,     0,     0,     0,     0,   118,    86,
       0,     0,    78,     0,     0,     0,     0,   124,     0,   125,
     119,   120,   121,   122,   123,    87,     0,     0,     0,     0,
       0,     0,     0,     0,   110,   111,   112,   113,   114,   115,
       0,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,   111,   112,   113,   114,   115,     0,   116,
     117,     0,   118,     0,     0,     0,    78,   206,     0,     2,
       0,   124,     0,   125,   119,   120,   121,   122,   123,    87,
     118,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,   123,    87,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     2,     0,   124,     0,   125,    78,   206,
       0,     0,     0,   193,    28,     0,     0,    30,     0,     0,
       0,    87,     0,   124,     0,   125,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,    82,     0,     0,     0,
       0,     0,   186,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   553,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     2,     0,   293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      63,    96,    84,    79,    80,   200,   279,    61,   281,    91,
     194,    95,    88,    67,   157,    92,   216,    99,   303,   101,
     269,   165,   322,   308,   100,   187,    63,    94,     1,    92,
     195,    79,    80,    88,   100,     1,   439,   490,   100,    36,
      36,    79,    80,    94,     1,    61,    34,     4,   195,    20,
       1,    67,   530,    49,     4,   153,    33,     4,    35,   454,
      37,    79,   100,    81,   148,   153,   142,    83,   353,     1,
      36,    37,    81,    39,     4,    41,    33,    88,   278,    36,
       1,   165,    33,    49,    37,    56,    36,    38,   164,   171,
     166,    41,    49,   170,   142,   172,    36,   150,   164,    49,
     166,    41,   178,   268,   142,    35,   188,    35,    40,    41,
     165,    43,   196,    33,    35,    13,    14,    38,    38,   195,
     174,   268,   266,   178,   200,   192,   164,   190,   166,   532,
     415,    44,   208,   187,   200,   211,   212,   188,   200,   202,
     142,   192,     1,   225,   226,     4,   624,    33,   185,   627,
     345,    37,   215,   190,   549,   550,    36,   457,   443,    39,
     208,   106,   200,   211,   212,   202,   619,   178,   621,    49,
     208,    15,    16,   211,   212,   340,    54,    36,   194,   232,
     233,   234,   266,   267,   195,   269,     1,   271,     1,   333,
      49,     4,   268,     1,    36,    19,   343,     1,    38,    41,
       1,   491,    42,    38,    49,   495,   208,    49,    52,    53,
     212,   266,   267,     1,    74,   464,     4,    77,    63,    64,
      65,    34,    37,    38,    34,    33,   228,   172,   310,    55,
      38,    35,   109,   315,    38,   289,    37,    38,     7,   439,
     322,   304,   426,   188,    39,    41,   309,    43,   311,   333,
     332,    96,   525,   198,   317,   200,   421,   268,   335,    40,
     337,   263,   427,   279,   340,   281,   282,   343,   411,   345,
     215,   322,    47,    48,   351,     1,   438,   424,   333,   345,
     427,     4,   359,   345,   569,    33,   163,   572,   351,   307,
     167,   168,   169,     0,    87,    33,   333,    35,   307,   619,
     354,   621,   179,   180,   402,   403,    42,   345,   362,   311,
     148,    37,    38,    36,   402,   403,   393,   194,    41,    17,
      18,    10,    11,    12,    37,    38,   389,    85,   391,   340,
     276,   349,   343,   387,   387,   468,   281,   148,   215,   148,
     349,   425,   219,   220,   636,   421,   453,    36,   424,   253,
     227,   427,    41,   518,    43,   255,   433,    64,    65,   441,
     437,   257,   444,    70,    71,    72,   528,    74,   530,   464,
      77,   259,   567,    33,   521,   457,    36,   322,   462,    39,
     464,    38,    39,   446,   438,   185,   449,   469,   262,    49,
     239,   240,   455,   245,   246,   247,   248,   483,   474,    49,
      50,    51,   485,   454,   235,   236,   457,   462,    -1,   485,
     421,   429,   282,   424,   490,    -1,   427,   435,   434,   485,
     429,   251,   252,   485,   467,   468,   435,    -1,    -1,   492,
      -1,    -1,   486,   509,    -1,   489,    -1,   491,   600,    -1,
      -1,   495,   518,    -1,   526,   521,   483,   485,   450,   451,
     452,    -1,   490,   330,   536,   471,    -1,   334,    -1,   522,
     337,    -1,   624,   474,    -1,   627,   484,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   528,   484,   530,   559,   355,   356,
     357,   358,    -1,    -1,    -1,    -1,   504,   194,   433,    -1,
      -1,   567,   437,   570,    34,    35,   573,    37,   509,    -1,
     577,   567,   447,    -1,    -1,   567,    -1,   518,    -1,   525,
     521,    -1,   588,    -1,   391,    -1,   393,   187,    -1,    -1,
      -1,   603,   604,    63,   606,   195,   608,    -1,   610,   567,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   418,   419,   619,   214,   621,   600,   492,    -1,   426,
      90,   428,    -1,    -1,    -1,    95,    96,   227,    -1,   641,
     267,   643,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     624,   653,   654,   627,   315,    -1,   658,   588,   660,    -1,
     525,   619,    -1,   621,    -1,   530,    -1,    -1,    -1,    -1,
      -1,    -1,   655,    -1,    -1,   135,   136,    -1,   268,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,   609,   148,   611,
     612,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,
      -1,    -1,   567,    -1,    -1,   165,    -1,    -1,   573,    -1,
      -1,   576,   577,    -1,    -1,    -1,    -1,   514,    -1,   516,
      -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
      -1,    -1,   202,    -1,   541,   542,   543,   544,   545,   546,
     340,   548,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   627,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   568,    -1,   570,    -1,   640,    -1,    -1,    -1,    -1,
     441,    -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,    -1,   386,    -1,    -1,   426,
      -1,    79,    63,    81,    -1,    -1,   266,   267,    -1,   269,
      -1,   271,    -1,    -1,   611,   612,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    88,    -1,    90,
      -1,   421,    -1,    -1,   424,   462,    40,   427,    -1,    -1,
     467,   468,   639,    -1,    -1,   642,    -1,   644,   438,    -1,
      -1,    -1,   312,   313,   314,    -1,   316,   135,   136,    -1,
      -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,   333,    -1,   536,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   474,    -1,    -1,   477,    -1,   268,
      -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,   165,   495,    -1,    -1,    -1,    -1,
      -1,   501,    -1,    -1,    -1,    -1,    -1,   178,    -1,   509,
      -1,   511,    -1,    -1,   185,    -1,    -1,    -1,   518,   190,
      -1,   521,    -1,    -1,   195,    -1,    -1,    -1,   528,    -1,
     530,   202,   603,   604,    -1,   606,    -1,   608,    -1,   610,
      -1,    -1,    -1,    -1,   232,   233,   234,   235,   236,    -1,
     339,   239,   240,   342,   343,   425,    -1,   245,   246,   247,
     248,    -1,    -1,   251,   252,   253,    -1,   255,    -1,   257,
     641,   259,   643,    -1,   262,    -1,    -1,    -1,     1,    -1,
      -1,    -1,   653,   654,    -1,    -1,    -1,   658,   588,   660,
     590,    -1,   462,    -1,   464,   266,   267,   268,    -1,    -1,
     600,    -1,    -1,    -1,    -1,    -1,   395,   396,    31,    -1,
      -1,    -1,    35,   483,    -1,    -1,    -1,    -1,   618,   307,
      -1,    -1,   622,    -1,   624,    -1,    -1,   627,    -1,    -1,
      -1,   420,    -1,    -1,   423,   424,    -1,    -1,   427,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,   349,   333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    96,    -1,    -1,    99,   547,    -1,    -1,
      -1,    -1,    -1,    -1,   473,    -1,    -1,   476,    -1,    -1,
     479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,   508,
      -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,   517,   400,
     401,   520,   521,    -1,    -1,    -1,    32,    33,   527,    -1,
      36,   429,    -1,    -1,    -1,    -1,    -1,   435,    44,    45,
      46,    47,    48,    49,    -1,    -1,   427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   561,    -1,   563,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,
       3,   462,   581,   582,    -1,    -1,   484,    -1,   587,    95,
      -1,    97,    -1,   592,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   483,    -1,    -1,    -1,   504,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   631,   632,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     1,    -1,
      -1,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    94,    -1,    96,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      83,    84,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,     1,    -1,
      -1,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
       1,    -1,    -1,     4,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      41,    94,    95,    96,    97,    98,    99,   100,    49,    -1,
       1,    -1,    -1,     4,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    96,    -1,    98,    -1,   100,
       1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,     3,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    94,    -1,    96,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    83,    84,    -1,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,     1,    -1,    -1,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     1,    -1,    -1,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    95,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     1,    -1,    -1,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    95,    96,
      97,    -1,     1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    32,    -1,    34,    -1,    36,
      -1,    -1,    -1,    -1,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    32,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    95,    -1,    97,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      95,    -1,    97,    44,    45,    46,    47,    48,    49,    32,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    95,     1,    97,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    36,    -1,     1,    -1,    -1,    95,    -1,    97,    44,
      45,    46,    47,    48,    49,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    97,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    32,    95,    -1,    97,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    63,    64,    65,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    95,    96,    97,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    32,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    32,    -1,    34,    -1,
      36,    -1,    -1,    -1,    95,    41,    97,    43,    44,    45,
      46,    47,    48,    49,    32,    -1,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    95,    -1,    97,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    32,    -1,    -1,    -1,    36,    37,    -1,    31,
      -1,    95,    -1,    97,    44,    45,    46,    47,    48,    49,
      32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    31,    -1,    95,    -1,    97,    36,    37,
      -1,    -1,    -1,    41,    96,    -1,    -1,    99,    -1,    -1,
      -1,    49,    -1,    95,    -1,    97,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    31,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,    31,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    94,    96,    98,
      99,   100,   143,   144,   145,   148,   150,   151,   152,   153,
     154,   155,   156,   158,   159,   160,   161,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   228,   229,   232,   233,   234,   236,   242,   245,
     246,   247,   248,   265,   275,   276,   277,     1,    36,   167,
     167,   167,    34,   165,   199,     1,    33,    49,   138,   164,
     167,   199,   230,   231,   249,   250,   251,   229,   229,     1,
     165,   199,   229,   229,   229,     0,     1,   276,   276,     1,
       4,     5,     6,     7,     8,     9,    11,    12,    32,    44,
      45,    46,    47,    48,    95,    97,   103,   104,   105,   106,
     107,   128,   129,   134,   138,   139,   140,   141,   142,   146,
     147,   149,   167,   200,   201,   202,   204,   205,   208,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   227,   233,   239,   246,   257,     1,   257,
     227,   199,   243,   244,   103,   148,   246,   251,   252,     1,
     249,   103,     1,    38,   164,   169,    40,   109,   165,   228,
     229,   268,   278,    41,   167,   170,   250,    35,   103,   166,
     237,   238,   239,   265,   103,   166,    37,   168,   167,   210,
     210,   167,   167,   210,   167,     1,   210,   223,   224,   226,
     257,    10,    43,   139,   140,   162,   163,   167,   170,   212,
      50,    51,   130,   131,   138,   128,   129,    13,    14,   110,
     111,    15,    16,    52,    53,   112,   113,   135,   136,    17,
      18,   114,   115,   134,    54,   132,    55,   137,    19,   116,
      20,    56,   117,   133,   168,   239,     1,   167,   170,   251,
     258,   259,   239,   168,   168,   168,   169,   103,   203,     1,
     166,   169,   165,   246,   251,   168,   168,   231,   249,   165,
     224,   260,    82,    83,    84,    86,    87,    88,    89,    90,
      91,    92,    93,   103,   157,   164,   166,   188,   189,   190,
     191,   192,   193,   195,   196,   197,   198,   226,   228,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   228,   268,
       1,   168,   199,   229,   253,   254,   255,   256,    42,   138,
     152,   171,   224,   252,   166,     1,   166,   238,    39,   108,
     164,   240,   241,   249,   235,   257,     1,   257,   257,   224,
     164,   166,   168,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   109,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   225,   168,   169,   168,   103,     1,
     103,     1,   168,   209,   224,     1,   226,   212,   212,   212,
     213,   213,   214,   214,   215,   215,   215,   215,   216,   216,
     217,   218,   219,   220,   221,   226,   258,   168,   253,   258,
     138,   152,   171,   224,   252,   259,   167,   170,   106,   109,
     244,   166,   244,   243,   162,   170,   260,   261,   262,   263,
     264,   108,   164,   227,   108,   164,   103,     1,   164,   226,
     167,   167,   167,   266,   167,     1,   164,     1,   166,   270,
     168,   103,   167,   249,   251,   258,   168,     1,   169,     1,
     168,   169,   171,   224,   252,   171,   138,   152,   171,   224,
     238,   227,   164,   169,   108,   165,   168,   168,   168,   168,
     169,   165,     1,   224,   224,   165,   212,   164,   164,   168,
     168,   169,   171,   171,   108,   168,   168,   171,   224,   252,
     171,   152,   171,   224,     1,   168,   253,   138,   152,   171,
     224,   252,   168,   227,   166,   169,   199,   227,     1,   166,
     169,   260,     1,   109,   264,   266,   108,   266,   164,   166,
     164,     1,   226,     1,   226,     1,   226,   196,     1,   228,
     271,   164,   270,    81,   172,   255,   172,   255,   103,   199,
     171,   224,   171,   224,   171,   241,   227,   237,     1,   189,
     206,   207,   257,   261,   164,   166,     1,   261,   224,   223,
     171,   224,   224,   171,   168,   168,   171,   224,   252,   171,
     152,   171,   224,   164,   166,   103,   171,   260,   166,   260,
     262,   264,   266,   168,   168,   168,   168,   168,   168,   167,
     168,   271,   271,   103,   171,   171,   166,   168,   108,     1,
     168,   169,   108,   166,   169,   166,   166,   169,   171,   171,
     171,   224,   224,   171,   260,   266,   266,   266,   266,   226,
     266,   168,   226,   168,   226,   224,   207,   207,   224,   166,
     171,   171,    85,   194,   194,   168,   166,   266,   168,   266,
     168,   266,   266,   164,   266,   266
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     200,   200,   200,   200,   200,   200,   200,   201,   201,   201,
     202,   203,   204,   204,   205,   205,   206,   206,   206,   207,
     207,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   209,   209,   210,
     210,   210,   210,   210,   210,   210,   210,   211,   211,   211,
     211,   211,   211,   212,   212,   213,   213,   213,   213,   214,
     214,   214,   215,   215,   215,   216,   216,   216,   216,   216,
     217,   217,   217,   218,   218,   219,   219,   220,   220,   221,
     221,   222,   222,   223,   223,   224,   224,   224,   224,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     226,   226,   227,   228,   228,   228,   228,   228,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   230,   230,
     231,   231,   232,   232,   232,   232,   232,   232,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   234,   235,   234,   234,   234,   234,
     236,   236,   237,   237,   237,   238,   238,   238,   239,   239,
     239,   239,   240,   240,   241,   241,   241,   242,   242,   242,
     242,   242,   243,   243,   243,   244,   244,   245,   245,   246,
     246,   246,   246,   247,   247,   248,   248,   248,   249,   249,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   251,   251,   251,   251,
     252,   252,   253,   253,   253,   254,   254,   254,   255,   255,
     255,   256,   256,   256,   257,   257,   257,   258,   258,   258,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   260,   260,   260,   261,   261,   261,   261,   261,
     262,   263,   263,   263,   264,   264,   265,   266,   266,   266,
     266,   266,   266,   267,   267,   267,   268,   268,   269,   269,
     269,   270,   270,   271,   271,   271,   272,   272,   272,   272,
     272,   272,   273,   273,   273,   273,   273,   273,   273,   273,
     274,   274,   274,   274,   274,   274,   275,   275,   275,   276,
     276,   276,   277,   277,   278,   278
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     6,     6,     1,     3,     3,     3,
       3,     1,     4,     3,     4,     3,     3,     2,     2,     6,
       7,     4,     4,     4,     4,     6,     6,     1,     3,     1,
       2,     2,     2,     2,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     7,     3,     3,     4,
       1,     1,     1,     2,     3,     2,     3,     1,     2,     1,
       2,     1,     1,     3,     2,     3,     1,     4,     5,     6,
       7,     3,     1,     3,     3,     4,     2,     4,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     2,     1,
       2,     3,     3,     4,     6,     5,     5,     6,     5,     4,
       4,     4,     3,     4,     4,     3,     3,     2,     2,     1,
       1,     2,     3,     1,     3,     1,     3,     3,     2,     2,
       1,     2,     4,     3,     2,     1,     3,     2,     1,     1,
       3,     2,     3,     5,     4,     5,     4,     3,     3,     3,
       4,     6,     5,     5,     6,     4,     4,     2,     3,     3,
       4,     4,     1,     3,     4,     2,     1,     4,     3,     3,
       2,     1,     2,     3,     3,     3,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       3,     1,     1,     1,     2,     3,     7,     5,     5,     5,
       7,     4,     5,     7,     6,     7,     6,     7,     6,     4,
       3,     2,     2,     2,     3,     3,     1,     2,     3,     1,
       1,     3,     4,     3,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* identifier: IDENTIFIER  */
#line 130 "bison.y"
                             {write((yyvsp[0].stringValue));
		  			 if(!isDeclaration){
						checkInTable((yyvsp[0].stringValue));
					 }else{	
						push(createData("identifier",(yyvsp[0].stringValue)));
						isDeclaration =  0;
					 }
		   }
#line 2815 "bison.tab.c"
    break;

  case 3: /* i_constant: I_CONSTANT  */
#line 141 "bison.y"
                                    {write((yyvsp[0].stringValue));}
#line 2821 "bison.tab.c"
    break;

  case 4: /* f_constant: F_CONSTANT  */
#line 145 "bison.y"
                               {write((yyvsp[0].stringValue));}
#line 2827 "bison.tab.c"
    break;

  case 5: /* string_literal: STRING_LITERAL  */
#line 149 "bison.y"
                                        {write((yyvsp[0].stringValue));}
#line 2833 "bison.tab.c"
    break;

  case 6: /* func_name: FUNC_NAME  */
#line 153 "bison.y"
                           {write((yyvsp[0].stringValue));}
#line 2839 "bison.tab.c"
    break;

  case 7: /* twopoints: TWOPOINTS  */
#line 159 "bison.y"
                   {writeBinary((yyvsp[0].stringValue));}
#line 2845 "bison.tab.c"
    break;

  case 8: /* equals: EQUALS  */
#line 162 "bison.y"
                {writeBinary((yyvsp[0].stringValue));}
#line 2851 "bison.tab.c"
    break;

  case 9: /* left_op: LEFT_OP  */
#line 166 "bison.y"
                 {writeBinary((yyvsp[0].stringValue));}
#line 2857 "bison.tab.c"
    break;

  case 10: /* right_op: RIGHT_OP  */
#line 170 "bison.y"
                  {writeBinary((yyvsp[0].stringValue));}
#line 2863 "bison.tab.c"
    break;

  case 11: /* le_op: LE_OP  */
#line 174 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2869 "bison.tab.c"
    break;

  case 12: /* ge_op: GE_OP  */
#line 178 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2875 "bison.tab.c"
    break;

  case 13: /* eq_op: EQ_OP  */
#line 181 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2881 "bison.tab.c"
    break;

  case 14: /* ne_op: NE_OP  */
#line 184 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2887 "bison.tab.c"
    break;

  case 15: /* and_op: AND_OP  */
#line 187 "bison.y"
                {writeBinary((yyvsp[0].stringValue));}
#line 2893 "bison.tab.c"
    break;

  case 16: /* or_op: OR_OP  */
#line 190 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2899 "bison.tab.c"
    break;

  case 17: /* mul_assign: MUL_ASSIGN  */
#line 193 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2905 "bison.tab.c"
    break;

  case 18: /* div_assign: DIV_ASSIGN  */
#line 196 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2911 "bison.tab.c"
    break;

  case 19: /* mod_assign: MOD_ASSIGN  */
#line 199 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2917 "bison.tab.c"
    break;

  case 20: /* add_assign: ADD_ASSIGN  */
#line 202 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2923 "bison.tab.c"
    break;

  case 21: /* sub_assign: SUB_ASSIGN  */
#line 205 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2929 "bison.tab.c"
    break;

  case 22: /* left_assign: LEFT_ASSIGN  */
#line 208 "bison.y"
                     {writeBinary((yyvsp[0].stringValue));}
#line 2935 "bison.tab.c"
    break;

  case 23: /* right_assign: RIGHT_ASSIGN  */
#line 211 "bison.y"
                      {writeBinary((yyvsp[0].stringValue));}
#line 2941 "bison.tab.c"
    break;

  case 24: /* and_assign: AND_ASSIGN  */
#line 214 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2947 "bison.tab.c"
    break;

  case 25: /* xor_assign: XOR_ASSIGN  */
#line 217 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2953 "bison.tab.c"
    break;

  case 26: /* or_assign: OR_ASSIGN  */
#line 220 "bison.y"
                   {writeBinary((yyvsp[0].stringValue));}
#line 2959 "bison.tab.c"
    break;

  case 27: /* minus: MINUS  */
#line 224 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2965 "bison.tab.c"
    break;

  case 28: /* plus: PLUS  */
#line 227 "bison.y"
              {writeBinary((yyvsp[0].stringValue));}
#line 2971 "bison.tab.c"
    break;

  case 29: /* divition: DIVITION  */
#line 230 "bison.y"
                 {writeBinary((yyvsp[0].stringValue));}
#line 2977 "bison.tab.c"
    break;

  case 30: /* modulus: MODULUS  */
#line 233 "bison.y"
                {writeBinary((yyvsp[0].stringValue));}
#line 2983 "bison.tab.c"
    break;

  case 31: /* exponentation: EXPONENTATION  */
#line 237 "bison.y"
                      {writeBinary((yyvsp[0].stringValue));}
#line 2989 "bison.tab.c"
    break;

  case 32: /* ternaryif: TERNARYIF  */
#line 241 "bison.y"
                  {writeBinary((yyvsp[0].stringValue));}
#line 2995 "bison.tab.c"
    break;

  case 33: /* and: AND  */
#line 245 "bison.y"
             {writeBinary((yyvsp[0].stringValue));}
#line 3001 "bison.tab.c"
    break;

  case 34: /* leftless: LEFTLESS  */
#line 248 "bison.y"
                 {writeBinary((yyvsp[0].stringValue));}
#line 3007 "bison.tab.c"
    break;

  case 35: /* rightmore: RIGHTMORE  */
#line 251 "bison.y"
                  {writeBinary((yyvsp[0].stringValue));}
#line 3013 "bison.tab.c"
    break;

  case 36: /* or: OR  */
#line 254 "bison.y"
           {writeBinary((yyvsp[0].stringValue));}
#line 3019 "bison.tab.c"
    break;

  case 37: /* asterisk: ASTERISK  */
#line 260 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3025 "bison.tab.c"
    break;

  case 38: /* inc_op: INC_OP  */
#line 263 "bison.y"
                {writeUnary((yyvsp[0].stringValue));}
#line 3031 "bison.tab.c"
    break;

  case 39: /* dec_op: DEC_OP  */
#line 267 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3037 "bison.tab.c"
    break;

  case 40: /* exclamation: EXCLAMATION  */
#line 271 "bison.y"
                     {writeUnary((yyvsp[0].stringValue));}
#line 3043 "bison.tab.c"
    break;

  case 41: /* not: NOT  */
#line 274 "bison.y"
             {writeUnary((yyvsp[0].stringValue));}
#line 3049 "bison.tab.c"
    break;

  case 42: /* typedef_name: TYPEDEF_NAME  */
#line 278 "bison.y"
                      {writeUnary((yyvsp[0].stringValue));}
#line 3055 "bison.tab.c"
    break;

  case 43: /* typedef: TYPEDEF  */
#line 281 "bison.y"
                 {write((yyvsp[0].stringValue));write(" ");}
#line 3061 "bison.tab.c"
    break;

  case 44: /* alignas: ALIGNAS  */
#line 284 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3067 "bison.tab.c"
    break;

  case 45: /* alignof: ALIGNOF  */
#line 287 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3073 "bison.tab.c"
    break;

  case 46: /* sizeof: SIZEOF  */
#line 290 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3079 "bison.tab.c"
    break;

  case 47: /* atomic: ATOMIC  */
#line 293 "bison.y"
                {writeUnary((yyvsp[0].stringValue));}
#line 3085 "bison.tab.c"
    break;

  case 48: /* generic: GENERIC  */
#line 296 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3091 "bison.tab.c"
    break;

  case 49: /* noreturn: NORETURN  */
#line 299 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3097 "bison.tab.c"
    break;

  case 50: /* static_assert: STATIC_ASSERT  */
#line 302 "bison.y"
                       {writeUnary((yyvsp[0].stringValue));}
#line 3103 "bison.tab.c"
    break;

  case 51: /* static: STATIC  */
#line 305 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3109 "bison.tab.c"
    break;

  case 52: /* extern: EXTERN  */
#line 309 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3115 "bison.tab.c"
    break;

  case 53: /* auto: AUTO  */
#line 313 "bison.y"
             {write((yyvsp[0].stringValue));write(" ");}
#line 3121 "bison.tab.c"
    break;

  case 54: /* register: REGISTER  */
#line 317 "bison.y"
                 {write((yyvsp[0].stringValue));write(" ");}
#line 3127 "bison.tab.c"
    break;

  case 55: /* thread_local: THREAD_LOCAL  */
#line 321 "bison.y"
                      {writeUnary((yyvsp[0].stringValue));}
#line 3133 "bison.tab.c"
    break;

  case 56: /* break: BREAK  */
#line 324 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3139 "bison.tab.c"
    break;

  case 57: /* const: CONST  */
#line 327 "bison.y"
               {write((yyvsp[0].stringValue));write(" ");}
#line 3145 "bison.tab.c"
    break;

  case 58: /* restrict: RESTRICT  */
#line 330 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3151 "bison.tab.c"
    break;

  case 59: /* volatile: VOLATILE  */
#line 333 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3157 "bison.tab.c"
    break;

  case 60: /* inline: INLINE  */
#line 336 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3163 "bison.tab.c"
    break;

  case 61: /* point: POINT  */
#line 341 "bison.y"
               {write((yyvsp[0].stringValue));}
#line 3169 "bison.tab.c"
    break;

  case 62: /* ptr_op: PTR_OP  */
#line 345 "bison.y"
                 {write((yyvsp[0].stringValue));}
#line 3175 "bison.tab.c"
    break;

  case 63: /* semmicolon: SEMMICOLON  */
#line 350 "bison.y"
                    {write((yyvsp[0].stringValue));}
#line 3181 "bison.tab.c"
    break;

  case 64: /* leftbracket: LEFTBRACKET  */
#line 353 "bison.y"
                     {write((yyvsp[0].stringValue)); openScope();}
#line 3187 "bison.tab.c"
    break;

  case 65: /* rightbracket: RIGHTBRACKET  */
#line 356 "bison.y"
                      {write((yyvsp[0].stringValue));  printSymTab(); closeScope();}
#line 3193 "bison.tab.c"
    break;

  case 66: /* leftparen: LEFTPAREN  */
#line 359 "bison.y"
                   {write((yyvsp[0].stringValue));}
#line 3199 "bison.tab.c"
    break;

  case 67: /* rightparen: RIGHTPAREN  */
#line 362 "bison.y"
                    {write((yyvsp[0].stringValue));}
#line 3205 "bison.tab.c"
    break;

  case 68: /* comma: COMMA  */
#line 365 "bison.y"
               {write((yyvsp[0].stringValue));}
#line 3211 "bison.tab.c"
    break;

  case 69: /* leftsquarebracket: LEFTSQUAREBRACKET  */
#line 368 "bison.y"
                           {write((yyvsp[0].stringValue));}
#line 3217 "bison.tab.c"
    break;

  case 70: /* rightsquarebracket: RIGHTSQUAREBRACKET  */
#line 371 "bison.y"
                            {write((yyvsp[0].stringValue));}
#line 3223 "bison.tab.c"
    break;

  case 71: /* ellipsis: ELLIPSIS  */
#line 374 "bison.y"
                  {write((yyvsp[0].stringValue));}
#line 3229 "bison.tab.c"
    break;

  case 72: /* bool: BOOL  */
#line 378 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3235 "bison.tab.c"
    break;

  case 73: /* char: CHAR  */
#line 381 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3241 "bison.tab.c"
    break;

  case 74: /* short: SHORT  */
#line 384 "bison.y"
              {writeTypes((yyvsp[0].stringValue));}
#line 3247 "bison.tab.c"
    break;

  case 75: /* int: INT  */
#line 387 "bison.y"
            {writeTypes((yyvsp[0].stringValue));}
#line 3253 "bison.tab.c"
    break;

  case 76: /* long: LONG  */
#line 390 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3259 "bison.tab.c"
    break;

  case 77: /* signed: SIGNED  */
#line 393 "bison.y"
               {writeTypes((yyvsp[0].stringValue));}
#line 3265 "bison.tab.c"
    break;

  case 78: /* unsigned: UNSIGNED  */
#line 396 "bison.y"
                 {writeTypes((yyvsp[0].stringValue));}
#line 3271 "bison.tab.c"
    break;

  case 79: /* float: FLOAT  */
#line 399 "bison.y"
              {writeTypes((yyvsp[0].stringValue));}
#line 3277 "bison.tab.c"
    break;

  case 80: /* double: DOUBLE  */
#line 402 "bison.y"
               {writeTypes((yyvsp[0].stringValue));}
#line 3283 "bison.tab.c"
    break;

  case 81: /* void: VOID  */
#line 405 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3289 "bison.tab.c"
    break;

  case 82: /* complex: COMPLEX  */
#line 408 "bison.y"
                {writeTypes((yyvsp[0].stringValue));}
#line 3295 "bison.tab.c"
    break;

  case 83: /* imaginary: IMAGINARY  */
#line 411 "bison.y"
                  {writeTypes((yyvsp[0].stringValue));}
#line 3301 "bison.tab.c"
    break;

  case 84: /* struct: STRUCT  */
#line 414 "bison.y"
               {writeTypes((yyvsp[0].stringValue));}
#line 3307 "bison.tab.c"
    break;

  case 85: /* union: UNION  */
#line 417 "bison.y"
              {writeTypes((yyvsp[0].stringValue));}
#line 3313 "bison.tab.c"
    break;

  case 86: /* enum: ENUM  */
#line 420 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3319 "bison.tab.c"
    break;

  case 87: /* case: CASE  */
#line 423 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3325 "bison.tab.c"
    break;

  case 88: /* default: DEFAULT  */
#line 426 "bison.y"
                {writeTypes((yyvsp[0].stringValue));}
#line 3331 "bison.tab.c"
    break;

  case 89: /* continue: CONTINUE  */
#line 429 "bison.y"
                 {writeTypes((yyvsp[0].stringValue));}
#line 3337 "bison.tab.c"
    break;

  case 90: /* goto: GOTO  */
#line 432 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3343 "bison.tab.c"
    break;

  case 91: /* return: RETURN  */
#line 435 "bison.y"
                {writeTypes((yyvsp[0].stringValue));}
#line 3349 "bison.tab.c"
    break;

  case 92: /* if: IF  */
#line 440 "bison.y"
            {writeIteration((yyvsp[0].stringValue));}
#line 3355 "bison.tab.c"
    break;

  case 93: /* else: ELSE  */
#line 443 "bison.y"
              {writeIteration((yyvsp[0].stringValue));}
#line 3361 "bison.tab.c"
    break;

  case 94: /* switch: SWITCH  */
#line 446 "bison.y"
                {writeIteration((yyvsp[0].stringValue));}
#line 3367 "bison.tab.c"
    break;

  case 95: /* while: WHILE  */
#line 449 "bison.y"
               {writeIteration((yyvsp[0].stringValue));}
#line 3373 "bison.tab.c"
    break;

  case 96: /* do: DO  */
#line 452 "bison.y"
            {writeIteration((yyvsp[0].stringValue));}
#line 3379 "bison.tab.c"
    break;

  case 97: /* for: FOR  */
#line 455 "bison.y"
             {writeIteration((yyvsp[0].stringValue));forFlag=1;}
#line 3385 "bison.tab.c"
    break;

  case 98: /* prepareIdInsertion: %empty  */
#line 459 "bison.y"
                {isDeclaration = 1;}
#line 3391 "bison.tab.c"
    break;

  case 104: /* primary_expression: leftparen error rightparen  */
#line 468 "bison.y"
                                     {yyerrok;}
#line 3397 "bison.tab.c"
    break;

  case 105: /* primary_expression: leftparen error semmicolon  */
#line 469 "bison.y"
                                     {yyerrok;}
#line 3403 "bison.tab.c"
    break;

  case 106: /* primary_expression: leftparen error rightbracket  */
#line 470 "bison.y"
                                       {yyerrok;}
#line 3409 "bison.tab.c"
    break;

  case 110: /* enumeration_constant_two: ENUMERATION_CONSTANT  */
#line 480 "bison.y"
                             {write((yyvsp[0].stringValue));}
#line 3415 "bison.tab.c"
    break;

  case 115: /* generic_selection: generic leftparen assignment_expression comma error rightparen  */
#line 494 "bison.y"
                                                                         {yyerrok;}
#line 3421 "bison.tab.c"
    break;

  case 118: /* generic_assoc_list: generic_assoc_list error generic_association  */
#line 500 "bison.y"
                                                      { yyerrok;}
#line 3427 "bison.tab.c"
    break;

  case 131: /* postfix_expression: postfix_expression leftsquarebracket error rightsquarebracket  */
#line 519 "bison.y"
                                                                        {yyerrok;}
#line 3433 "bison.tab.c"
    break;

  case 132: /* postfix_expression: postfix_expression leftparen error rightparen  */
#line 520 "bison.y"
                                                        {yyerrok;}
#line 3439 "bison.tab.c"
    break;

  case 133: /* postfix_expression: postfix_expression leftparen error semmicolon  */
#line 521 "bison.y"
                                                        {yyerrok;}
#line 3445 "bison.tab.c"
    break;

  case 134: /* postfix_expression: postfix_expression ptr_op error semmicolon  */
#line 522 "bison.y"
                                                     {yyerrok;}
#line 3451 "bison.tab.c"
    break;

  case 135: /* postfix_expression: leftparen error rightparen leftbracket initializer_list rightbracket  */
#line 523 "bison.y"
                                                                               {yyerrok;}
#line 3457 "bison.tab.c"
    break;

  case 136: /* postfix_expression: leftparen type_name rightparen leftbracket error rightbracket  */
#line 524 "bison.y"
                                                                        {yyerrok;}
#line 3463 "bison.tab.c"
    break;

  case 146: /* unary_expression: alignof leftparen error rightparen  */
#line 540 "bison.y"
                                             {yyerrok;}
#line 3469 "bison.tab.c"
    break;

  case 187: /* assignment_expression: unary_expression assignment_operator error rightbracket  */
#line 623 "bison.y"
                                                                  {yyerrok;}
#line 3475 "bison.tab.c"
    break;

  case 188: /* assignment_expression: unary_expression assignment_operator error semmicolon  */
#line 624 "bison.y"
                                                                {yyerrok;}
#line 3481 "bison.tab.c"
    break;

  case 203: /* declaration: declaration_specifiers semmicolon  */
#line 651 "bison.y"
                                            {end_decl();}
#line 3487 "bison.tab.c"
    break;

  case 204: /* declaration: declaration_specifiers init_declarator_list semmicolon  */
#line 652 "bison.y"
                                                                 {end_decl();}
#line 3493 "bison.tab.c"
    break;

  case 205: /* declaration: declaration_specifiers error  */
#line 653 "bison.y"
                                       {yyerrok;}
#line 3499 "bison.tab.c"
    break;

  case 206: /* declaration: declaration_specifiers init_declarator_list error  */
#line 654 "bison.y"
                                                            {yyerrok;}
#line 3505 "bison.tab.c"
    break;

  case 228: /* type_specifier: void  */
#line 691 "bison.y"
               {push(createData("type","void"));}
#line 3511 "bison.tab.c"
    break;

  case 229: /* type_specifier: char  */
#line 692 "bison.y"
               {push(createData("type","char"));}
#line 3517 "bison.tab.c"
    break;

  case 230: /* type_specifier: short  */
#line 693 "bison.y"
                {push(createData("type","short"));}
#line 3523 "bison.tab.c"
    break;

  case 231: /* type_specifier: int  */
#line 694 "bison.y"
               {push(createData("type","int"));}
#line 3529 "bison.tab.c"
    break;

  case 232: /* type_specifier: long  */
#line 695 "bison.y"
               {push(createData("type","long"));}
#line 3535 "bison.tab.c"
    break;

  case 233: /* type_specifier: float  */
#line 696 "bison.y"
                {push(createData("type","float"));}
#line 3541 "bison.tab.c"
    break;

  case 234: /* type_specifier: double  */
#line 697 "bison.y"
                 {push(createData("type","double"));}
#line 3547 "bison.tab.c"
    break;

  case 235: /* type_specifier: signed  */
#line 698 "bison.y"
                  {push(createData("type","signed"));}
#line 3553 "bison.tab.c"
    break;

  case 236: /* type_specifier: unsigned  */
#line 699 "bison.y"
                    {push(createData("type","unsigned"));}
#line 3559 "bison.tab.c"
    break;

  case 237: /* type_specifier: bool  */
#line 700 "bison.y"
               {push(createData("type","bool"));}
#line 3565 "bison.tab.c"
    break;

  case 238: /* type_specifier: complex  */
#line 701 "bison.y"
                   {push(createData("type","complex"));}
#line 3571 "bison.tab.c"
    break;

  case 239: /* type_specifier: imaginary  */
#line 702 "bison.y"
                        {push(createData("type","imaginary"));}
#line 3577 "bison.tab.c"
    break;

  case 245: /* $@1: %empty  */
#line 711 "bison.y"
                                                        {insertStructDef();}
#line 3583 "bison.tab.c"
    break;

  case 247: /* struct_or_union_specifier: struct_or_union prepareIdInsertion identifier  */
#line 712 "bison.y"
                                                        {checkIsType();}
#line 3589 "bison.tab.c"
    break;

  case 248: /* struct_or_union_specifier: struct_or_union error rightbracket  */
#line 713 "bison.y"
                                             {yyerrok;}
#line 3595 "bison.tab.c"
    break;

  case 249: /* struct_or_union_specifier: struct_or_union error identifier rightbracket  */
#line 714 "bison.y"
                                                        {yyerrok;}
#line 3601 "bison.tab.c"
    break;

  case 250: /* struct_or_union: struct  */
#line 719 "bison.y"
                  {push(createData("type","struct"));}
#line 3607 "bison.tab.c"
    break;

  case 251: /* struct_or_union: union  */
#line 720 "bison.y"
                 {push(createData("type","union"));}
#line 3613 "bison.tab.c"
    break;

  case 254: /* struct_declaration_list: struct_declaration_list error struct_declaration  */
#line 726 "bison.y"
                                                           {yyerrok;}
#line 3619 "bison.tab.c"
    break;

  case 274: /* enumerator_list: enumerator_list error enumerator  */
#line 764 "bison.y"
                                           {yyerrok;}
#line 3625 "bison.tab.c"
    break;

  case 278: /* atomic_type_specifier: atomic leftparen error rightparen  */
#line 774 "bison.y"
                                            {yyerrok;}
#line 3631 "bison.tab.c"
    break;

  case 287: /* alignment_specifier: alignas leftparen error rightparen  */
#line 792 "bison.y"
                                             {yyerrok;}
#line 3637 "bison.tab.c"
    break;

  case 304: /* direct_declarator: direct_declarator leftparen error rightparen  */
#line 815 "bison.y"
                                                       {yyerrok;}
#line 3643 "bison.tab.c"
    break;

  case 305: /* direct_declarator: leftparen error rightparen  */
#line 816 "bison.y"
                                     {yyerrok;}
#line 3649 "bison.tab.c"
    break;

  case 314: /* parameter_type_list: parameter_list error ellipsis  */
#line 835 "bison.y"
                                        {yyerrok;}
#line 3655 "bison.tab.c"
    break;

  case 315: /* parameter_list: parameter_declaration  */
#line 839 "bison.y"
                                {end_decl();}
#line 3661 "bison.tab.c"
    break;

  case 316: /* parameter_list: parameter_list comma parameter_declaration  */
#line 840 "bison.y"
                                                     {end_decl();}
#line 3667 "bison.tab.c"
    break;

  case 317: /* parameter_list: parameter_list error parameter_declaration  */
#line 841 "bison.y"
                                                     {yyerrok;}
#line 3673 "bison.tab.c"
    break;

  case 323: /* identifier_list: identifier_list error identifier  */
#line 853 "bison.y"
                                           {yyerrok;}
#line 3679 "bison.tab.c"
    break;

  case 326: /* type_name: specifier_qualifier_list error abstract_declarator  */
#line 859 "bison.y"
                                                             {yyerrok;}
#line 3685 "bison.tab.c"
    break;

  case 351: /* direct_abstract_declarator: direct_abstract_declarator leftparen error rightparen  */
#line 890 "bison.y"
                                                                {yyerrok;}
#line 3691 "bison.tab.c"
    break;

  case 359: /* initializer_list: initializer_list error initializer  */
#line 904 "bison.y"
                                             {yyerrok;}
#line 3697 "bison.tab.c"
    break;

  case 363: /* designator_list: designator_list error designator  */
#line 914 "bison.y"
                                           {yyerrok;}
#line 3703 "bison.tab.c"
    break;

  case 380: /* block_item_list: block_item_list error block_item  */
#line 949 "bison.y"
                                           {yyerrok;}
#line 3709 "bison.tab.c"
    break;

  case 385: /* expression_statement: expression error semmicolon  */
#line 960 "bison.y"
                                      {yyerrok;}
#line 3715 "bison.tab.c"
    break;

  case 389: /* selection_statement: if leftparen error rightparen statement  */
#line 967 "bison.y"
                                                  {yyerrok;}
#line 3721 "bison.tab.c"
    break;

  case 390: /* selection_statement: if leftparen error rightparen statement else statement  */
#line 968 "bison.y"
                                                                 {yyerrok;}
#line 3727 "bison.tab.c"
    break;

  case 391: /* selection_statement: switch leftparen error rightparen  */
#line 969 "bison.y"
                                            {yyerrok;}
#line 3733 "bison.tab.c"
    break;

  case 398: /* iteration_statement: for leftparen error rightparen statement rightbracket  */
#line 979 "bison.y"
                                                                {yyerrok;}
#line 3739 "bison.tab.c"
    break;

  case 399: /* iteration_statement: while leftparen error rightparen  */
#line 980 "bison.y"
                                           {yyerrok;}
#line 3745 "bison.tab.c"
    break;

  case 405: /* jump_statement: return error rightbracket  */
#line 989 "bison.y"
                                    {yyerrok;}
#line 3751 "bison.tab.c"
    break;

  case 408: /* translation_unit: translation_unit error rightbracket  */
#line 995 "bison.y"
                                              {yyerrok;}
#line 3757 "bison.tab.c"
    break;

  case 409: /* external_declaration: function_definition  */
#line 999 "bison.y"
                              {end_decl();}
#line 3763 "bison.tab.c"
    break;

  case 411: /* external_declaration: PREPROCESSING error external_declaration  */
#line 1001 "bison.y"
                                                   {yyerrok;}
#line 3769 "bison.tab.c"
    break;


#line 3773 "bison.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1014 "bison.y"


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
		insert(id);
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
			insert(stack->top->element->text,type);
		}
		pop();
	}
	while(strcmp(stack->top->element->objectType,"type")==0){
		pop();
	}
}

void insertStructDef(){
	struct Node* structRef = retrieve("identifier");
	structRef->element->objectType = "type";
}

void checkIsType(){
	struct Node* structRef = retrieve("identifier");
	if(!lookup(structRef->element->text)){
		semanticError("Cannot find declaration for type");
	}else{
		structRef->element->objectType = "type";
	}
}
