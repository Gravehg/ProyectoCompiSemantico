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

#line 102 "bison.tab.c"

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
  YYSYMBOL_primary_expression = 199,       /* primary_expression  */
  YYSYMBOL_constant = 200,                 /* constant  */
  YYSYMBOL_enumeration_constant_two = 201, /* enumeration_constant_two  */
  YYSYMBOL_enumeration_constant = 202,     /* enumeration_constant  */
  YYSYMBOL_string = 203,                   /* string  */
  YYSYMBOL_generic_selection = 204,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 205,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 206,      /* generic_association  */
  YYSYMBOL_postfix_expression = 207,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 208, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 209,         /* unary_expression  */
  YYSYMBOL_unary_operator = 210,           /* unary_operator  */
  YYSYMBOL_cast_expression = 211,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 212, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 213,      /* additive_expression  */
  YYSYMBOL_shift_expression = 214,         /* shift_expression  */
  YYSYMBOL_relational_expression = 215,    /* relational_expression  */
  YYSYMBOL_equality_expression = 216,      /* equality_expression  */
  YYSYMBOL_and_expression = 217,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 218,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 219,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 220,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 221,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 222,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 223,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 224,      /* assignment_operator  */
  YYSYMBOL_expression = 225,               /* expression  */
  YYSYMBOL_constant_expression = 226,      /* constant_expression  */
  YYSYMBOL_declaration = 227,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 228,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 229,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 230,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 231,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 232,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 233, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 234,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 235,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 236,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 237, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 238,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 239,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 240,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 241,          /* enumerator_list  */
  YYSYMBOL_enumerator = 242,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 243,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 244,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 245,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 246,      /* alignment_specifier  */
  YYSYMBOL_declarator = 247,               /* declarator  */
  YYSYMBOL_direct_declarator = 248,        /* direct_declarator  */
  YYSYMBOL_pointer = 249,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 250,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 251,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 252,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 253,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 254,          /* identifier_list  */
  YYSYMBOL_type_name = 255,                /* type_name  */
  YYSYMBOL_abstract_declarator = 256,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 257, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 258,              /* initializer  */
  YYSYMBOL_initializer_list = 259,         /* initializer_list  */
  YYSYMBOL_designation = 260,              /* designation  */
  YYSYMBOL_designator_list = 261,          /* designator_list  */
  YYSYMBOL_designator = 262,               /* designator  */
  YYSYMBOL_static_assert_declaration = 263, /* static_assert_declaration  */
  YYSYMBOL_statement = 264,                /* statement  */
  YYSYMBOL_labeled_statement = 265,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 266,       /* compound_statement  */
  YYSYMBOL_block_item_list = 267,          /* block_item_list  */
  YYSYMBOL_block_item = 268,               /* block_item  */
  YYSYMBOL_expression_statement = 269,     /* expression_statement  */
  YYSYMBOL_selection_statement = 270,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 271,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 272,           /* jump_statement  */
  YYSYMBOL_translation_unit = 273,         /* translation_unit  */
  YYSYMBOL_external_declaration = 274,     /* external_declaration  */
  YYSYMBOL_function_definition = 275,      /* function_definition  */
  YYSYMBOL_declaration_list = 276          /* declaration_list  */
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
#define YYFINAL  106
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  175
/* YYNRULES -- Number of rules.  */
#define YYNRULES  413
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  658

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
       0,   119,   119,   123,   127,   131,   135,   141,   144,   148,
     152,   156,   160,   163,   166,   169,   172,   175,   178,   181,
     184,   187,   190,   193,   196,   199,   202,   206,   209,   212,
     215,   219,   223,   227,   230,   233,   236,   242,   245,   249,
     253,   256,   260,   263,   266,   269,   272,   275,   278,   281,
     284,   287,   291,   295,   299,   303,   306,   309,   312,   315,
     318,   323,   327,   332,   335,   338,   341,   344,   347,   350,
     353,   356,   360,   363,   366,   369,   372,   375,   378,   381,
     384,   387,   390,   393,   396,   399,   402,   405,   408,   411,
     414,   417,   422,   425,   428,   431,   434,   437,   441,   442,
     443,   444,   445,   446,   447,   448,   452,   453,   454,   458,
     462,   466,   467,   471,   472,   476,   477,   478,   482,   483,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   506,   507,   511,   512,
     513,   514,   515,   516,   517,   518,   522,   523,   524,   525,
     526,   527,   531,   532,   536,   537,   538,   539,   543,   544,
     545,   549,   550,   551,   555,   556,   557,   558,   559,   563,
     564,   565,   569,   570,   574,   575,   579,   580,   584,   585,
     589,   590,   594,   595,   599,   600,   601,   602,   606,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   620,
     621,   625,   629,   630,   631,   632,   633,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   650,   651,   655,
     656,   660,   661,   662,   663,   664,   665,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,   683,   684,   688,   689,   690,   691,   692,   696,   697,
     701,   702,   703,   707,   708,   709,   713,   714,   715,   716,
     720,   721,   725,   726,   727,   731,   732,   733,   734,   735,
     739,   740,   741,   745,   746,   750,   751,   755,   756,   757,
     758,   762,   763,   767,   768,   769,   773,   774,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   797,   798,   799,   800,   804,   805,
     810,   811,   812,   816,   817,   818,   822,   823,   824,   828,
     829,   830,   834,   835,   836,   840,   841,   842,   846,   847,
     848,   849,   850,   851,   852,   853,   854,   855,   856,   857,
     858,   859,   860,   861,   862,   863,   864,   865,   866,   867,
     871,   872,   873,   877,   878,   879,   880,   881,   885,   889,
     890,   891,   895,   896,   900,   904,   905,   906,   907,   908,
     909,   913,   914,   915,   919,   920,   924,   925,   926,   930,
     931,   935,   936,   937,   941,   942,   943,   944,   945,   946,
     950,   951,   952,   953,   954,   955,   956,   957,   961,   962,
     963,   964,   965,   966,   970,   971,   972,   976,   977,   978,
     982,   983,   987,   988
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
  "for", "primary_expression", "constant", "enumeration_constant_two",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
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

#define YYPACT_NINF (-471)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-324)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1568,    62,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,    44,    44,  -471,    44,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,   169,  -471,    65,  3002,  3002,  -471,   127,  -471,  -471,
    3002,  3002,  3002,  -471,  1186,  -471,  -471,  1568,  -471,  1842,
     771,  2757,  -471,  -471,    55,    92,  -471,  -471,  -471,  -471,
     -17,  -471,    71,    26,  -471,  2851,   -18,    49,  -471,  -471,
      47,    55,  2747,  -471,  -471,  -471,  -471,    77,  -471,  -471,
      84,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  2757,  2757,  -471,  -471,    44,
    2757,    44,  1922,  -471,  -471,  -471,  -471,  -471,   409,  -471,
    2757,  -471,   363,   119,   217,   163,   260,   100,    83,   122,
     165,    36,  -471,    84,  3102,    37,  3102,    84,    84,    84,
     179,    92,  -471,   195,    33,  -471,  -471,  -471,  -471,   -17,
      84,    84,  -471,  -471,  -471,    54,  -471,  2631,  1645,  -471,
      65,  -471,  2901,  -471,  1468,  2430,   -18,  -471,    77,  -471,
    2747,   954,  -471,    48,  -471,  -471,  -471,  -471,  1922,  -471,
    -471,  2291,  1922,  -471,  2757,   249,   722,  -471,  -471,   271,
      84,  -471,  -471,  -471,  -471,    92,   292,  2002,  2074,  -471,
    -471,  -471,  2757,  2757,  2757,  2757,  2757,  -471,  -471,  2757,
    2757,  -471,  -471,  -471,  -471,  2757,  2757,  2757,  2757,  -471,
    -471,  2757,  2757,  2757,  -471,  2757,  -471,  2757,  -471,  2757,
    -471,  -471,  2757,  2757,  -471,  -471,    -6,  2801,  2430,   -18,
    -471,   -18,  -471,  -471,  -471,  -471,   235,    33,  2757,    92,
    -471,    47,  -471,  -471,  -471,  -471,  -471,   195,  2613,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,   211,   234,  -471,  -471,  2757,   211,   234,    92,
    2020,    44,    44,    44,  2368,    44,   190,  -471,  -471,  -471,
    -471,  1266,  -471,  -471,  -471,  -471,  -471,  -471,  -471,    84,
    -471,  -471,   170,    84,   207,  -471,   251,  -471,   243,  2492,
    -471,   243,  2430,  -471,   954,  2747,  -471,  -471,  -471,  2757,
    -471,    67,  -471,   211,    84,    84,    84,    84,   179,  -471,
    -471,    55,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  2128,  -471,  2757,  2631,  -471,   234,  -471,
     164,  -471,   271,  -471,   243,   167,  -471,  -471,  -471,   363,
     363,   119,   119,   217,   217,   217,   217,   163,   163,   260,
     100,    83,   122,   165,   265,  -471,  -471,    84,    84,   243,
    2492,  -471,   243,  2430,   -18,  1518,  2430,    84,  -471,    47,
    -471,  -471,  -471,  -471,    92,  2757,  -471,   262,  2631,   290,
    -471,  2368,  -471,   211,  2368,  -471,   234,    77,  -471,    67,
    2146,  2200,  2254,   229,  1366,   234,  -471,  1742,  -471,  -471,
    -471,  1418,  -471,   270,  -471,  -471,  2951,  2951,    92,  -471,
      92,  -471,   243,  2492,  -471,   243,  2757,  -471,   243,  -471,
    -471,  -471,  -471,   266,  2757,    55,  -471,  -471,    55,  2241,
    2613,    69,  -471,  -471,  1112,  -471,  -471,  -471,  -471,  -471,
    2757,  -471,  -471,  2757,  -471,  -471,  -471,   243,  2492,  -471,
    2757,  -471,   243,    84,  -471,    84,   243,  2492,  -471,   243,
    2430,   234,  -471,  -471,   243,  2631,  -471,  2558,  -471,   117,
    -471,  -471,  -471,  2368,  -471,  -471,  -471,  -471,    84,   271,
      84,   271,    84,   271,    44,    84,  2685,  2685,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,   243,  -471,
     243,  -471,  -471,  -471,    84,   211,   341,  -471,   211,   262,
    -471,  -471,    77,   262,  -471,  -471,  -471,   243,   243,  -471,
    -471,  -471,  -471,   243,  2492,  -471,  2757,  -471,   243,  -471,
    -471,  -471,  -471,  -471,  2631,  -471,  -471,  2368,  2368,  -471,
    2368,  -471,  2368,  2757,  2368,  2739,  2739,  -471,  -471,  -471,
    2757,  3052,  -471,  3052,  2757,  -471,  2613,  -471,  -471,  2558,
    -471,  -471,  -471,   243,   243,  -471,  -471,   209,   209,  -471,
    -471,   271,    77,  2368,   271,  2368,   271,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  2368,  2368,   234,  -471,  -471,
    2368,  -471,  2368,  -471,  -471,  -471,  -471,  -471
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    42,    43,    52,    51,    53,    54,    60,    57,
      58,    59,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    44,    47,    49,
      50,    55,   242,   221,     0,   280,   282,     0,   223,   222,
     225,   226,   224,   277,   278,   279,   281,   236,   228,   229,
     230,   231,   234,   235,   232,   233,   227,   237,   238,   248,
     249,     0,   408,     0,   208,   210,   240,     0,   241,   239,
     212,   214,   216,   206,     0,   404,   407,     0,    66,     0,
       0,     0,     2,    64,   269,     0,   204,    63,    37,   288,
     307,   202,     0,     0,   217,   219,   287,     0,   207,   209,
       0,   245,     0,   211,   213,   215,     1,     0,   405,   409,
       0,     3,     4,     5,     6,    46,    38,    39,   109,    33,
      40,    41,    27,    28,    45,    48,    98,   106,   107,   111,
     112,   149,   148,   146,   147,     0,     0,   151,   150,     0,
       0,     0,     0,   120,    99,   108,   100,   102,   138,   152,
       0,   154,   158,   161,   164,   169,   172,   174,   176,   178,
     180,   182,   201,     0,   257,     0,   259,     0,     0,     0,
       0,     0,   110,   274,     0,   270,   280,   308,   306,   305,
       0,     0,   205,    68,   203,     0,     8,     0,     0,   412,
       0,   411,     0,    69,     0,     0,   286,    65,     0,   246,
       0,     0,   250,     0,   255,   406,    67,   285,     0,   139,
     140,     0,     0,   142,     0,     0,   152,   184,   199,     0,
       0,    62,    61,   126,   127,     0,     0,     0,     0,   141,
      29,    30,     0,     0,     0,     0,     0,     9,    10,     0,
       0,    11,    12,    34,    35,     0,     0,     0,     0,    13,
      14,     0,     0,     0,    31,     0,    36,     0,    15,     0,
      16,    32,     0,     0,   284,   256,     0,     0,     0,   326,
     322,   327,   258,   283,   276,   275,     0,     0,     0,     0,
     265,     0,   309,   304,   303,   289,   218,   219,     0,   350,
     220,    87,    88,    92,    94,    95,    96,    97,    90,    89,
      56,    91,    98,     0,   381,   374,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,   380,   365,
     366,     0,   376,   367,   368,   369,   370,   413,   410,     0,
     319,   300,   318,     0,     0,   313,     0,    70,   147,     0,
     290,     0,     0,   247,     0,     0,   243,   251,     7,     0,
     253,     0,   260,   264,     0,     0,     0,     0,     0,   104,
     105,   103,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,     0,   101,     0,     0,   124,     0,   125,
       0,   122,     0,   136,     0,     0,   156,   157,   155,   160,
     159,   162,   163,   167,   168,   165,   166,   170,   171,   173,
     175,   177,   179,   181,     0,   324,   345,     0,     0,   147,
       0,   329,     0,     0,   325,     0,     0,     0,   267,     0,
     273,   272,   266,   271,     0,     0,   354,     0,     0,     0,
     359,     0,   400,     0,     0,   399,     0,     0,   401,     0,
       0,     0,     0,     0,     0,     0,   382,     0,   375,   377,
     302,     0,   316,   326,   317,   299,     0,     0,     0,   301,
       0,   291,     0,     0,   298,   147,     0,   297,     0,   244,
     252,   262,   254,     0,     0,     0,   145,   144,   143,     0,
       0,     0,   185,   200,     0,   153,   133,   132,   131,   123,
       0,   130,   121,     0,   346,   328,   330,     0,     0,   336,
       0,   335,     0,     0,   347,     0,   147,     0,   337,     0,
       0,     0,   268,   363,     0,     0,   351,     0,   353,     0,
     358,   360,   371,     0,   373,   398,   403,   402,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   383,   378,
      71,   312,   315,   310,   314,   321,   320,   293,     0,   294,
       0,   296,   261,   263,     0,     0,     0,   115,     0,     0,
     187,   186,     0,     0,   137,   183,   332,     0,     0,   334,
     349,   348,   338,     0,     0,   344,     0,   343,     0,   364,
     362,   357,   352,   356,     0,   361,   372,     0,     0,   389,
       0,   397,     0,     0,     0,     0,     0,   292,   295,   114,
       0,     0,   113,     0,     0,   134,     0,   135,   128,     0,
     331,   333,   340,     0,     0,   341,   355,   387,   385,   386,
     390,     0,     0,     0,     0,     0,     0,   119,   117,   116,
     118,   129,   339,   342,    93,     0,     0,     0,   396,   394,
       0,   392,     0,   388,   384,   391,   395,   393
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -471,   -61,  -471,  -471,    56,  -471,  -258,  -166,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -136,  -133,  -471,  -471,
    -471,  -471,  -156,  -471,  -471,  -471,   736,   175,   203,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,   -80,  -471,  -471,  -471,
    -128,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
     205,  -471,   -52,   -39,     6,   471,   191,   288,   455,   618,
    -112,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -456,  -471,  -471,
    -471,  -471,  -266,  -471,   -89,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -389,  -471,  -471,   630,  -471,   -34,
      93,    95,   129,    97,   113,   114,   125,   128,   124,  -471,
      12,   473,  -471,    29,   -68,   -66,   162,  -471,   199,  -471,
     -19,  -471,  -471,   189,  -192,   -32,  -471,   -75,  -471,   244,
    -239,  -471,   -25,  -471,  -471,   -60,   -93,   -71,  -180,  -178,
    -471,   -62,  -471,   133,  -160,  -261,  -162,  -265,  -470,  -471,
    -418,   -65,    43,  -471,   -83,  -471,  -307,  -428,  -471,  -471,
    -471,  -471,   247,  -471,  -471
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   126,   127,   128,   129,   130,   349,   187,   239,   240,
     245,   246,   251,   252,   259,   262,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   131,   132,   232,   233,
     255,   263,   133,   247,   248,   257,   134,   135,   136,   137,
     138,    32,    33,    34,   139,   140,    35,   141,    36,    37,
      38,    39,    40,    41,    42,   303,    43,    44,    45,    46,
     434,   226,   304,   188,   199,   142,   416,   385,   435,   340,
     551,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,   306,   307,   308,   309,
     310,   311,   645,   312,   313,   314,   315,   143,   144,   145,
     173,   146,   147,   566,   567,   148,   392,   216,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     217,   218,   383,   316,   163,    62,   190,    93,    94,    64,
      65,    66,    67,   201,   202,   165,   351,   352,    68,   174,
     175,    69,    70,    71,    72,   181,    96,    97,   179,   417,
     334,   335,   336,   568,   418,   271,   436,   437,   438,   439,
     440,    73,   318,   319,   320,   321,   322,   323,   324,   325,
     326,    74,    75,    76,   192
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,   253,    89,    95,   196,   270,   101,   278,   424,   347,
     176,    91,   191,   170,   459,   342,   333,   235,    78,   178,
     236,   531,    85,   193,   172,   290,   547,   182,   102,   189,
      78,    89,    88,   565,   279,   193,    89,   204,   266,   198,
     431,   184,   433,    88,   441,   171,     9,    10,    11,   444,
     372,    82,    82,    82,   166,   166,   260,   594,    82,    87,
     164,   164,   200,    77,   183,   177,    86,   339,   197,    82,
     203,   183,   180,    78,  -323,    82,  -323,   166,   193,    28,
      78,    87,   197,   164,    78,    78,    88,   348,   423,    83,
      78,   162,   261,   162,   269,   484,    82,    88,    87,   176,
      87,    78,    87,    88,   197,   183,   415,    78,   283,   328,
     172,   595,   197,   205,    88,   176,   229,   166,   605,   606,
      88,   206,   317,   164,    89,   287,   327,   302,   100,    89,
     287,    82,   265,   330,   272,   204,   204,   254,    91,   166,
     420,   166,    89,   353,   119,   164,   594,   164,   288,   594,
     549,   350,   347,   480,   282,   565,   503,   565,   193,   473,
     222,    83,    63,   359,   387,   389,   122,   123,   203,   203,
     177,   219,   464,    82,    82,   166,   166,   256,   241,   242,
     280,   164,   164,   166,   258,   533,   166,   166,   176,   164,
     433,   455,   164,   164,   305,   269,   269,    87,   396,   397,
     398,   206,   424,    83,   343,   183,    78,   346,   466,   337,
     430,   193,   167,   169,   476,   243,   244,   183,   172,    88,
     172,   360,   638,    87,   639,   569,    98,    99,   183,   573,
     237,   238,   103,   104,   105,   186,    63,   219,   443,    63,
     508,   219,   113,   177,  -311,   183,   520,   515,   446,   288,
     348,   442,   468,   302,   253,   317,   445,   395,   448,   176,
     302,   463,   176,   525,   456,   235,   235,    87,   236,   236,
      82,    89,   462,   530,    82,   220,   528,   249,   250,   204,
     204,   481,    87,   428,   197,   337,   206,   432,   206,   183,
     162,   529,   414,   388,   644,   510,    82,   197,   517,   482,
     183,   207,    78,   183,   348,   348,    78,   610,   206,   183,
     614,   193,   203,   203,   177,    88,   295,   282,   162,   166,
     166,   108,   490,   223,   109,   164,   164,   458,   399,   400,
     186,   193,   427,   222,   401,   402,   496,   584,   497,   449,
     176,   354,   611,   176,   356,   357,   176,   494,   407,   408,
     479,   224,   495,   225,   264,   553,   332,   453,   273,   274,
     275,   162,   646,   591,   544,   593,   409,   524,   172,   410,
     196,   284,   285,   523,   403,   404,   405,   406,   206,   183,
     302,   185,   411,   302,   286,   331,   413,   412,   546,   344,
     463,   317,   586,   176,   535,   177,   302,   537,   282,   288,
      89,   177,    89,   548,   552,   554,   361,   555,   562,   556,
     384,   386,    88,   230,   231,   277,   563,     0,   391,   221,
     116,   117,    89,   353,     0,     0,     0,     0,   176,   332,
       0,     0,   626,     0,     0,   522,     0,   176,     0,   570,
     176,     0,     0,   526,     0,    78,   494,   162,   282,   494,
     193,   288,   222,   536,   593,   288,     0,   593,   276,     0,
       0,     0,   281,     0,   166,     0,     0,     0,     0,   589,
     164,     0,   302,     0,     0,     0,     0,     0,     0,   539,
     541,   543,     0,   282,   532,     0,   288,   534,   288,     0,
       0,     0,   177,     0,     0,   282,   162,   571,     0,     0,
       0,     0,     0,     0,   176,    79,    80,     0,    81,     0,
       0,     0,     0,     0,     0,   575,     0,     0,     0,     0,
     460,     0,     0,     0,   465,     0,     0,   469,     0,     0,
       0,     0,     0,   592,    92,     0,   302,   302,     0,   302,
       0,   302,     0,   302,     0,   485,   486,   487,   488,     0,
       0,   195,     0,     0,     0,   288,     0,     0,     0,   282,
       0,     0,     0,    92,     0,   429,     0,   194,    92,     0,
       0,     0,   302,     0,   302,   615,   596,   288,   617,   618,
     288,   498,     0,   499,   302,   302,   166,   332,   166,   302,
       0,   302,   164,     0,   164,   655,     0,     0,     0,     0,
       0,     0,     0,   228,     0,     0,   208,   208,   504,   505,
     211,   212,   214,     0,     0,     0,   514,     0,   521,   227,
     268,     0,   467,   332,   470,   641,     0,     0,   332,   332,
       0,     0,   631,     0,   634,   636,   267,     0,   648,   483,
     627,   628,     0,   629,     0,   630,   489,   632,     0,     0,
       0,   195,     0,     0,     0,     0,    92,     0,     0,     0,
     289,    92,     0,     0,     0,     0,     0,   194,   341,     0,
       0,     0,     0,     0,    92,     0,   649,     0,   651,     0,
     500,     0,     0,     0,     0,     0,     0,   358,   653,   654,
       0,     0,     0,   656,     0,   657,     0,     0,     0,     0,
     393,     0,     0,     0,   580,     0,   581,     0,     0,   149,
       0,   149,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   268,   268,     0,   268,   527,   426,     0,     0,   597,
     598,   599,   600,   601,   602,     0,   604,   267,   267,     0,
     267,   422,   425,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,     0,     0,   609,     0,   612,     0,     0,
       0,   289,   186,     0,     0,   209,   210,     0,     0,     0,
     213,     0,   168,     0,     0,     0,     0,     0,     0,     0,
     149,     0,   450,   451,   452,     0,   454,   268,     0,     0,
       0,     0,     0,     0,     0,     0,   633,   635,     0,    90,
       0,     0,     2,   461,     0,     0,     0,     0,     0,     0,
       0,     0,   472,     0,     0,   478,     0,     0,     0,     0,
       0,     0,   647,     0,     0,   650,    90,   652,    90,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,   613,     0,   492,   616,   493,     0,
       0,   619,   149,   149,   149,   149,   149,    28,     0,   149,
     149,     0,     0,     0,     0,   149,   149,   149,   149,   426,
       0,   149,   149,   149,     0,   149,   421,   149,   234,   149,
       0,     0,   149,   507,     0,   425,   512,     0,     0,   519,
       0,    90,     0,     0,     0,     0,     0,     0,   149,     0,
       0,   289,     0,     0,     0,    90,   268,     0,   268,     0,
       0,    90,     0,     0,     0,     0,    90,     0,     0,     0,
       0,   338,   461,     0,   461,     0,   149,     0,     0,    90,
       0,     0,     0,     0,     0,     0,   558,     0,     0,   560,
       0,     0,     0,     0,    92,   345,   471,     0,     0,   474,
     477,     0,     0,   289,     0,     0,     0,   289,     0,     0,
       0,     0,     0,   574,     0,     0,     0,     0,     0,   149,
       0,   577,     0,   578,     0,     2,     0,     0,     0,   197,
     583,     0,     0,   588,     0,     0,     0,     0,   289,     0,
     289,     0,    90,    90,   419,     0,     0,     0,     0,     0,
       0,     0,   501,   502,     0,   603,   149,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   506,     0,     0,
     509,   511,     0,     0,   518,     0,     0,     0,     0,     0,
      28,     0,     0,    30,     0,     0,     0,   623,     0,   624,
       0,     0,     0,     0,     0,   149,     0,   289,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   475,     0,
       0,     0,     0,   637,     0,     0,     0,   640,     0,   289,
     557,     0,   289,   559,     0,     0,   561,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   572,   149,     0,    82,   111,   112,   113,
     114,   115,     0,   116,   117,   576,     0,     0,     0,     0,
     579,     0,     0,   149,   582,   234,   234,   585,   587,     0,
       0,     0,   590,     0,   118,     0,    83,     0,    78,     0,
       0,     0,     0,   193,     0,   222,   119,   120,   121,   122,
     123,    88,   516,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   607,     0,   608,     0,
       0,     0,     0,     0,     0,     0,   106,   107,     0,     1,
       0,     0,     0,     0,     0,   620,   621,    90,     0,     0,
       0,   622,     0,     0,     0,     0,   625,   124,     0,   125,
       0,     0,     0,     0,     0,     0,     0,     2,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   642,   643,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   457,     0,     0,
      82,   111,   112,   113,   114,   115,     0,   116,   117,     0,
      27,     0,    28,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,   118,    87,
      83,   197,    78,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   123,    88,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   291,   292,
     293,     0,   294,   295,   296,   297,   298,   299,   300,   301,
      27,   124,    28,   125,    29,    30,    31,   545,     0,     0,
      82,   111,   112,   113,   114,   115,     0,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,   118,    87,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   123,    88,     0,     0,     0,   180,
       0,     0,    82,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     2,
       0,     0,     0,     0,    78,   206,     0,     0,     0,   193,
      27,   124,    28,   125,    29,    30,    31,    88,     0,   329,
       0,     0,    82,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     2,
       0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,   513,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     2,
       0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
       0,     1,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    82,
     111,   112,   113,   114,   115,     0,   116,   117,     0,     0,
       0,     0,    27,     0,    28,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     2,   118,    87,    83,
     197,    78,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,   122,   123,    88,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,   291,   292,   293,
       0,   294,   295,   296,   297,   298,   299,   300,   301,    27,
     124,    28,   125,    29,    30,    31,    82,   111,   112,   113,
     114,   115,     0,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,   118,    87,    83,     0,    78,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
     123,    88,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,   291,   292,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,    27,   124,    28,   125,
      29,    30,    31,   110,     0,     0,    82,   111,   112,   113,
     114,   115,     0,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,   118,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
     123,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   215,     0,     0,    82,   111,   112,   113,
     114,   115,     0,   116,   117,     0,     0,   124,    28,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,   118,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
     123,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   390,     0,     0,    82,   111,   112,   113,
     114,   115,     0,   116,   117,     0,     0,   124,    28,   125,
       0,   447,     0,     0,    82,   111,   112,   113,   114,   115,
       0,   116,   117,     0,   118,     0,     0,     0,    78,   206,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
     123,    88,   118,    87,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,   123,    88,
       0,     0,     0,     0,     0,   394,     0,     0,    82,   111,
     112,   113,   114,   115,     0,   116,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,   125,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
      78,     0,     0,     0,     0,   124,     0,   125,   119,   120,
     121,   122,   123,    88,     0,     0,     0,     0,     0,   491,
       0,     0,    82,   111,   112,   113,   114,   115,     0,   116,
     117,     0,     0,     0,     0,     0,     0,   538,     0,     0,
      82,   111,   112,   113,   114,   115,     0,   116,   117,     0,
     118,     0,     0,     0,    78,     0,     0,     0,     0,   124,
       0,   125,   119,   120,   121,   122,   123,    88,   118,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   123,    88,     0,     0,     0,     0,
       0,   540,     0,     0,    82,   111,   112,   113,   114,   115,
       0,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,   125,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,    78,     0,     0,     0,
       0,   124,   564,   125,   119,   120,   121,   122,   123,    88,
       0,     0,     0,     0,     0,   542,     0,     0,    82,   111,
     112,   113,   114,   115,     0,   116,   117,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
      78,     0,   355,     0,     0,   124,     0,   125,   119,   120,
     121,   122,   123,    88,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     2,     0,   292,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,   125,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    82,   111,   112,   113,   114,   115,     0,   116,
     117,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,    87,    83,     0,    78,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,   123,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,   111,   112,   113,   114,   115,
       0,   116,   117,     0,     0,     0,     0,     0,     0,     0,
     291,   292,   293,     0,   294,   295,   296,   297,   298,   299,
     300,   301,   118,   124,     0,   125,    78,     0,     0,     0,
       0,     0,   337,     0,   119,   120,   121,   122,   123,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     0,     9,    10,    11,    82,   111,   112,   113,
     114,   115,     0,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   124,    28,   125,    78,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
     123,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,    82,   111,   112,   113,   114,   115,     0,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,    28,   125,
     118,     0,    83,   197,    78,     0,     0,     0,     0,   193,
       0,   222,   119,   120,   121,   122,   123,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,   111,   112,
     113,   114,   115,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,   111,   112,   113,   114,
     115,     0,   116,   117,     0,   118,     0,    83,     0,    78,
       0,     0,     0,   124,   193,   125,   222,   119,   120,   121,
     122,   123,    88,   118,     0,    83,     0,    78,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,   123,
      88,     0,     0,     0,     0,     0,     0,     0,     0,    82,
     111,   112,   113,   114,   115,     0,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,     0,
     125,     0,     0,     0,     0,     0,     0,   118,    87,     0,
       0,    78,     0,     0,     0,     0,   124,     0,   125,   119,
     120,   121,   122,   123,    88,     0,     0,     0,     0,     0,
       0,     0,     0,    82,   111,   112,   113,   114,   115,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,   111,   112,   113,   114,   115,     0,   116,   117,
       0,   118,     0,     0,     0,    78,   206,     0,     2,     0,
     124,     0,   125,   119,   120,   121,   122,   123,    88,   118,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   123,    88,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     2,     0,   124,     0,   125,    78,   206,     0,
       0,     0,   193,    28,     0,     0,    30,     0,     0,     0,
      88,     0,   124,     0,   125,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     2,     0,     0,    83,     0,     0,     0,     0,
       0,   186,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     2,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   550,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,   292,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      61,   157,    63,    63,    97,   165,    67,   173,   269,   201,
      90,    63,    95,    81,   321,   195,   194,   153,    36,    90,
     153,   439,    61,    41,    85,   187,   454,     1,    67,    95,
      36,    92,    49,   489,     1,    41,    97,   102,     1,   100,
     279,    93,   281,    49,   302,    84,    63,    64,    65,   307,
     216,     4,     4,     4,    79,    80,    20,   527,     4,    33,
      79,    80,   101,     1,    38,    90,     1,   195,    35,     4,
     102,    38,     1,    36,    37,     4,    39,   102,    41,    96,
      36,    33,    35,   102,    36,    36,    49,    39,   268,    34,
      36,    79,    56,    81,   165,   353,     4,    49,    33,   179,
      33,    36,    33,    49,    35,    38,   266,    36,   179,   192,
     171,   529,    35,   107,    49,   195,   150,   142,   546,   547,
      49,    37,   188,   142,   185,   185,   192,   188,     1,   190,
     190,     4,   164,   194,   166,   200,   201,    54,   190,   164,
     268,   166,   203,   203,    44,   164,   616,   166,   187,   619,
     457,   203,   344,   345,   179,   611,   414,   613,    41,   339,
      43,    34,     0,   215,   225,   226,    47,    48,   200,   201,
     195,   142,   332,     4,     4,   200,   201,    55,    15,    16,
     174,   200,   201,   208,    19,   443,   211,   212,   268,   208,
     429,     1,   211,   212,   188,   266,   267,    33,   232,   233,
     234,    37,   463,    34,   198,    38,    36,   201,     1,    42,
     278,    41,    79,    80,   342,    52,    53,    38,   279,    49,
     281,   215,   611,    33,   613,   490,    64,    65,    38,   494,
      13,    14,    70,    71,    72,    40,    74,   208,   306,    77,
     420,   212,     7,   268,    37,    38,   426,   425,   309,   288,
      39,   303,     1,   314,   410,   321,   308,   228,   310,   339,
     321,   332,   342,     1,   316,   401,   402,    33,   401,   402,
       4,   332,   332,   439,     4,   142,   438,    17,    18,   344,
     345,   349,    33,   277,    35,    42,    37,   281,    37,    38,
     278,     1,   263,     1,    85,   423,     4,    35,   426,   351,
      38,   110,    36,    38,    39,    39,    36,   565,    37,    38,
     568,    41,   344,   345,   339,    49,    87,   342,   306,   344,
     345,    74,   361,   148,    77,   344,   345,   321,   235,   236,
      40,    41,   276,    43,   239,   240,   388,   517,   390,   310,
     420,   208,     1,   423,   211,   212,   426,   386,   251,   252,
     344,   148,   386,   148,   163,   467,   194,   314,   167,   168,
     169,   349,   628,   525,   453,   527,   253,   435,   429,   255,
     463,   180,   181,   434,   245,   246,   247,   248,    37,    38,
     441,    93,   257,   444,   185,   194,   262,   259,   454,   200,
     461,   457,   520,   473,   446,   420,   457,   449,   423,   438,
     461,   426,   463,   455,   466,   467,   215,   468,   483,   470,
     219,   220,    49,    50,    51,   171,   484,    -1,   227,    10,
      11,    12,   483,   483,    -1,    -1,    -1,    -1,   508,   267,
      -1,    -1,   594,    -1,    -1,   429,    -1,   517,    -1,   491,
     520,    -1,    -1,   437,    -1,    36,   485,   435,   473,   488,
      41,   490,    43,   447,   616,   494,    -1,   619,   170,    -1,
      -1,    -1,   174,    -1,   489,    -1,    -1,    -1,    -1,   521,
     489,    -1,   533,    -1,    -1,    -1,    -1,    -1,    -1,   450,
     451,   452,    -1,   508,   441,    -1,   525,   444,   527,    -1,
      -1,    -1,   517,    -1,    -1,   520,   484,   491,    -1,    -1,
      -1,    -1,    -1,    -1,   584,    34,    35,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,   503,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,   333,    -1,    -1,   336,    -1,    -1,
      -1,    -1,    -1,   527,    63,    -1,   597,   598,    -1,   600,
      -1,   602,    -1,   604,    -1,   354,   355,   356,   357,    -1,
      -1,    96,    -1,    -1,    -1,   594,    -1,    -1,    -1,   584,
      -1,    -1,    -1,    92,    -1,   277,    -1,    96,    97,    -1,
      -1,    -1,   633,    -1,   635,   569,   533,   616,   572,   573,
     619,   390,    -1,   392,   645,   646,   611,   425,   613,   650,
      -1,   652,   611,    -1,   613,   647,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    -1,    -1,   135,   136,   417,   418,
     139,   140,   141,    -1,    -1,    -1,   425,    -1,   427,   148,
     165,    -1,   334,   461,   336,   619,    -1,    -1,   466,   467,
      -1,    -1,   603,    -1,   605,   606,   165,    -1,   632,   351,
     597,   598,    -1,   600,    -1,   602,   358,   604,    -1,    -1,
      -1,   196,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
     187,   190,    -1,    -1,    -1,    -1,    -1,   196,   195,    -1,
      -1,    -1,    -1,    -1,   203,    -1,   633,    -1,   635,    -1,
     392,    -1,    -1,    -1,    -1,    -1,    -1,   214,   645,   646,
      -1,    -1,    -1,   650,    -1,   652,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   513,    -1,   515,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   266,   267,    -1,   269,   437,   271,    -1,    -1,   538,
     539,   540,   541,   542,   543,    -1,   545,   266,   267,    -1,
     269,   268,   271,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,   564,    -1,   566,    -1,    -1,
      -1,   288,    40,    -1,    -1,   135,   136,    -1,    -1,    -1,
     140,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,    -1,   311,   312,   313,    -1,   315,   332,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   605,   606,    -1,    63,
      -1,    -1,    31,   332,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   339,    -1,    -1,   342,    -1,    -1,    -1,    -1,
      -1,    -1,   631,    -1,    -1,   634,    90,   636,    92,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,   566,    -1,   383,   569,   385,    -1,
      -1,   573,   232,   233,   234,   235,   236,    96,    -1,   239,
     240,    -1,    -1,    -1,    -1,   245,   246,   247,   248,   424,
      -1,   251,   252,   253,    -1,   255,   268,   257,   152,   259,
      -1,    -1,   262,   420,    -1,   424,   423,    -1,    -1,   426,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,
      -1,   438,    -1,    -1,    -1,   179,   461,    -1,   463,    -1,
      -1,   185,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      -1,   195,   461,    -1,   463,    -1,   306,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,    -1,   476,
      -1,    -1,    -1,    -1,   483,     1,   338,    -1,    -1,   341,
     342,    -1,    -1,   490,    -1,    -1,    -1,   494,    -1,    -1,
      -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,   349,
      -1,   508,    -1,   510,    -1,    31,    -1,    -1,    -1,    35,
     517,    -1,    -1,   520,    -1,    -1,    -1,    -1,   525,    -1,
     527,    -1,   266,   267,   268,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   394,   395,    -1,   544,   386,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,   419,    -1,    -1,
     422,   423,    -1,    -1,   426,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    99,    -1,    -1,    -1,   584,    -1,   586,
      -1,    -1,    -1,    -1,    -1,   435,    -1,   594,   332,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,
      -1,    -1,    -1,   610,    -1,    -1,    -1,   614,    -1,   616,
     472,    -1,   619,   475,    -1,    -1,   478,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,   484,    -1,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,   507,    -1,    -1,    -1,    -1,
     512,    -1,    -1,   503,   516,   399,   400,   519,   520,    -1,
      -1,    -1,   524,    -1,    32,    -1,    34,    -1,    36,    -1,
      -1,    -1,    -1,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,   426,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   558,    -1,   560,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,   577,   578,   461,    -1,    -1,
      -1,   583,    -1,    -1,    -1,    -1,   588,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,   483,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   623,   624,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      94,    -1,    96,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,     1,
      -1,    -1,     4,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    41,
      94,    95,    96,    97,    98,    99,   100,    49,    -1,     1,
      -1,    -1,     4,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    -1,    98,    -1,   100,     1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,     3,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    94,    -1,    96,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    83,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    95,    96,    97,
      -1,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    32,    -1,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    95,    -1,    97,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    95,
      -1,    97,    44,    45,    46,    47,    48,    49,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    95,     1,    97,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,     1,    -1,    -1,    95,    -1,    97,    44,    45,
      46,    47,    48,    49,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    31,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    97,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    32,    95,    -1,    97,    36,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    64,    65,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    95,    96,    97,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      32,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    32,    -1,    34,    -1,    36,
      -1,    -1,    -1,    95,    41,    97,    43,    44,    45,    46,
      47,    48,    49,    32,    -1,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    95,    -1,    97,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    32,    -1,    -1,    -1,    36,    37,    -1,    31,    -1,
      95,    -1,    97,    44,    45,    46,    47,    48,    49,    32,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    31,    -1,    95,    -1,    97,    36,    37,    -1,
      -1,    -1,    41,    96,    -1,    -1,    99,    -1,    -1,    -1,
      49,    -1,    95,    -1,    97,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    94,    -1,    96,    -1,    98,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,    98,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96
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
     186,   187,   227,   228,   231,   232,   233,   234,   240,   243,
     244,   245,   246,   263,   273,   274,   275,     1,    36,   167,
     167,   167,     4,    34,   103,   165,     1,    33,    49,   103,
     138,   164,   167,   229,   230,   247,   248,   249,   228,   228,
       1,   103,   165,   228,   228,   228,     0,     1,   274,   274,
       1,     5,     6,     7,     8,     9,    11,    12,    32,    44,
      45,    46,    47,    48,    95,    97,   103,   104,   105,   106,
     107,   128,   129,   134,   138,   139,   140,   141,   142,   146,
     147,   149,   167,   199,   200,   201,   203,   204,   207,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   226,   232,   237,   244,   255,     1,   255,
     226,   165,   103,   202,   241,   242,   148,   244,   249,   250,
       1,   247,     1,    38,   164,   169,    40,   109,   165,   227,
     228,   266,   276,    41,   167,   170,   248,    35,   103,   166,
     165,   235,   236,   237,   263,   166,    37,   168,   167,   209,
     209,   167,   167,   209,   167,     1,   209,   222,   223,   225,
     255,    10,    43,   139,   140,   162,   163,   167,   170,   211,
      50,    51,   130,   131,   138,   128,   129,    13,    14,   110,
     111,    15,    16,    52,    53,   112,   113,   135,   136,    17,
      18,   114,   115,   134,    54,   132,    55,   137,    19,   116,
      20,    56,   117,   133,   168,   237,     1,   167,   170,   249,
     256,   257,   237,   168,   168,   168,   169,   241,   109,     1,
     166,   169,   244,   249,   168,   168,   230,   247,   165,   223,
     258,    82,    83,    84,    86,    87,    88,    89,    90,    91,
      92,    93,   103,   157,   164,   166,   188,   189,   190,   191,
     192,   193,   195,   196,   197,   198,   225,   227,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   227,   266,     1,
     103,   168,   228,   251,   252,   253,   254,    42,   138,   152,
     171,   223,   250,   166,   235,     1,   166,   236,    39,   108,
     164,   238,   239,   247,   255,     1,   255,   255,   223,   164,
     166,   168,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   109,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   224,   168,   169,   168,   103,     1,   103,
       1,   168,   208,   223,     1,   225,   211,   211,   211,   212,
     212,   213,   213,   214,   214,   214,   214,   215,   215,   216,
     217,   218,   219,   220,   225,   256,   168,   251,   256,   138,
     152,   171,   223,   250,   257,   167,   170,   106,   166,   169,
     226,   242,   166,   242,   162,   170,   258,   259,   260,   261,
     262,   108,   164,   226,   108,   164,   103,     1,   164,   225,
     167,   167,   167,   264,   167,     1,   164,     1,   166,   268,
     168,   167,   247,   249,   256,   168,     1,   169,     1,   168,
     169,   171,   223,   250,   171,   138,   152,   171,   223,   166,
     236,   226,   164,   169,   108,   168,   168,   168,   168,   169,
     165,     1,   223,   223,   165,   211,   164,   164,   168,   168,
     169,   171,   171,   108,   168,   168,   171,   223,   250,   171,
     152,   171,   223,     1,   168,   251,   138,   152,   171,   223,
     250,   168,   166,   103,   226,     1,   166,   169,   258,     1,
     109,   262,   264,   108,   264,   164,   166,   164,     1,   225,
       1,   225,     1,   225,   196,     1,   227,   269,   164,   268,
      81,   172,   253,   172,   253,   103,   103,   171,   223,   171,
     223,   171,   239,   226,     1,   189,   205,   206,   255,   259,
     164,   166,     1,   259,   223,   222,   171,   223,   223,   171,
     168,   168,   171,   223,   250,   171,   152,   171,   223,   164,
     171,   258,   166,   258,   260,   262,   264,   168,   168,   168,
     168,   168,   168,   167,   168,   269,   269,   171,   171,   168,
     108,     1,   168,   169,   108,   166,   169,   166,   166,   169,
     171,   171,   171,   223,   223,   171,   258,   264,   264,   264,
     264,   225,   264,   168,   225,   168,   225,   223,   206,   206,
     223,   166,   171,   171,    85,   194,   194,   168,   166,   264,
     168,   264,   168,   264,   264,   164,   264,   264
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
     191,   192,   193,   194,   195,   196,   197,   198,   199,   199,
     199,   199,   199,   199,   199,   199,   200,   200,   200,   201,
     202,   203,   203,   204,   204,   205,   205,   205,   206,   206,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   208,   208,   209,   209,
     209,   209,   209,   209,   209,   209,   210,   210,   210,   210,
     210,   210,   211,   211,   212,   212,   212,   212,   213,   213,
     213,   214,   214,   214,   215,   215,   215,   215,   215,   216,
     216,   216,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   223,   223,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   225,
     225,   226,   227,   227,   227,   227,   227,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   229,   229,   230,
     230,   231,   231,   231,   231,   231,   231,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   233,   233,   233,   233,   233,   234,   234,
     235,   235,   235,   236,   236,   236,   237,   237,   237,   237,
     238,   238,   239,   239,   239,   240,   240,   240,   240,   240,
     241,   241,   241,   242,   242,   243,   243,   244,   244,   244,
     244,   245,   245,   246,   246,   246,   247,   247,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   249,   249,   249,   249,   250,   250,
     251,   251,   251,   252,   252,   252,   253,   253,   253,   254,
     254,   254,   255,   255,   255,   256,   256,   256,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     258,   258,   258,   259,   259,   259,   259,   259,   260,   261,
     261,   261,   262,   262,   263,   264,   264,   264,   264,   264,
     264,   265,   265,   265,   266,   266,   267,   267,   267,   268,
     268,   269,   269,   269,   270,   270,   270,   270,   270,   270,
     271,   271,   271,   271,   271,   271,   271,   271,   272,   272,
     272,   272,   272,   272,   273,   273,   273,   274,   274,   274,
     275,   275,   276,   276
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     6,     1,     3,     3,     3,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       4,     4,     4,     4,     6,     6,     1,     3,     1,     2,
       2,     2,     2,     4,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     2,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     2,     3,     4,     1,     1,
       1,     2,     3,     2,     3,     1,     2,     1,     2,     1,
       1,     3,     2,     3,     1,     4,     5,     5,     6,     2,
       1,     3,     3,     3,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     2,     1,     1,     3,
       3,     4,     6,     5,     5,     6,     5,     4,     4,     4,
       3,     4,     4,     3,     3,     2,     2,     1,     1,     2,
       3,     1,     3,     1,     3,     3,     2,     2,     1,     1,
       3,     3,     2,     1,     3,     2,     1,     1,     3,     2,
       3,     5,     4,     5,     4,     3,     3,     3,     4,     6,
       5,     5,     6,     4,     4,     2,     3,     3,     4,     4,
       1,     3,     4,     2,     1,     4,     3,     3,     2,     1,
       2,     3,     3,     2,     7,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     1,     2,     3,     1,
       1,     1,     2,     3,     7,     5,     5,     5,     7,     4,
       5,     7,     6,     7,     6,     7,     6,     4,     3,     2,
       2,     2,     3,     3,     1,     2,     3,     1,     1,     3,
       4,     3,     1,     2
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
#line 119 "bison.y"
                             {write((yyvsp[0].stringValue));}
#line 2795 "bison.tab.c"
    break;

  case 3: /* i_constant: I_CONSTANT  */
#line 123 "bison.y"
                                    {write((yyvsp[0].stringValue));}
#line 2801 "bison.tab.c"
    break;

  case 4: /* f_constant: F_CONSTANT  */
#line 127 "bison.y"
                               {write((yyvsp[0].stringValue));}
#line 2807 "bison.tab.c"
    break;

  case 5: /* string_literal: STRING_LITERAL  */
#line 131 "bison.y"
                                        {write((yyvsp[0].stringValue));}
#line 2813 "bison.tab.c"
    break;

  case 6: /* func_name: FUNC_NAME  */
#line 135 "bison.y"
                           {write((yyvsp[0].stringValue));}
#line 2819 "bison.tab.c"
    break;

  case 7: /* twopoints: TWOPOINTS  */
#line 141 "bison.y"
                   {writeBinary((yyvsp[0].stringValue));}
#line 2825 "bison.tab.c"
    break;

  case 8: /* equals: EQUALS  */
#line 144 "bison.y"
                {writeBinary((yyvsp[0].stringValue));}
#line 2831 "bison.tab.c"
    break;

  case 9: /* left_op: LEFT_OP  */
#line 148 "bison.y"
                 {writeBinary((yyvsp[0].stringValue));}
#line 2837 "bison.tab.c"
    break;

  case 10: /* right_op: RIGHT_OP  */
#line 152 "bison.y"
                  {writeBinary((yyvsp[0].stringValue));}
#line 2843 "bison.tab.c"
    break;

  case 11: /* le_op: LE_OP  */
#line 156 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2849 "bison.tab.c"
    break;

  case 12: /* ge_op: GE_OP  */
#line 160 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2855 "bison.tab.c"
    break;

  case 13: /* eq_op: EQ_OP  */
#line 163 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2861 "bison.tab.c"
    break;

  case 14: /* ne_op: NE_OP  */
#line 166 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2867 "bison.tab.c"
    break;

  case 15: /* and_op: AND_OP  */
#line 169 "bison.y"
                {writeBinary((yyvsp[0].stringValue));}
#line 2873 "bison.tab.c"
    break;

  case 16: /* or_op: OR_OP  */
#line 172 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2879 "bison.tab.c"
    break;

  case 17: /* mul_assign: MUL_ASSIGN  */
#line 175 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2885 "bison.tab.c"
    break;

  case 18: /* div_assign: DIV_ASSIGN  */
#line 178 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2891 "bison.tab.c"
    break;

  case 19: /* mod_assign: MOD_ASSIGN  */
#line 181 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2897 "bison.tab.c"
    break;

  case 20: /* add_assign: ADD_ASSIGN  */
#line 184 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2903 "bison.tab.c"
    break;

  case 21: /* sub_assign: SUB_ASSIGN  */
#line 187 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2909 "bison.tab.c"
    break;

  case 22: /* left_assign: LEFT_ASSIGN  */
#line 190 "bison.y"
                     {writeBinary((yyvsp[0].stringValue));}
#line 2915 "bison.tab.c"
    break;

  case 23: /* right_assign: RIGHT_ASSIGN  */
#line 193 "bison.y"
                      {writeBinary((yyvsp[0].stringValue));}
#line 2921 "bison.tab.c"
    break;

  case 24: /* and_assign: AND_ASSIGN  */
#line 196 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2927 "bison.tab.c"
    break;

  case 25: /* xor_assign: XOR_ASSIGN  */
#line 199 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2933 "bison.tab.c"
    break;

  case 26: /* or_assign: OR_ASSIGN  */
#line 202 "bison.y"
                   {writeBinary((yyvsp[0].stringValue));}
#line 2939 "bison.tab.c"
    break;

  case 27: /* minus: MINUS  */
#line 206 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2945 "bison.tab.c"
    break;

  case 28: /* plus: PLUS  */
#line 209 "bison.y"
              {writeBinary((yyvsp[0].stringValue));}
#line 2951 "bison.tab.c"
    break;

  case 29: /* divition: DIVITION  */
#line 212 "bison.y"
                 {writeBinary((yyvsp[0].stringValue));}
#line 2957 "bison.tab.c"
    break;

  case 30: /* modulus: MODULUS  */
#line 215 "bison.y"
                {writeBinary((yyvsp[0].stringValue));}
#line 2963 "bison.tab.c"
    break;

  case 31: /* exponentation: EXPONENTATION  */
#line 219 "bison.y"
                      {writeBinary((yyvsp[0].stringValue));}
#line 2969 "bison.tab.c"
    break;

  case 32: /* ternaryif: TERNARYIF  */
#line 223 "bison.y"
                  {writeBinary((yyvsp[0].stringValue));}
#line 2975 "bison.tab.c"
    break;

  case 33: /* and: AND  */
#line 227 "bison.y"
             {writeBinary((yyvsp[0].stringValue));}
#line 2981 "bison.tab.c"
    break;

  case 34: /* leftless: LEFTLESS  */
#line 230 "bison.y"
                 {writeBinary((yyvsp[0].stringValue));}
#line 2987 "bison.tab.c"
    break;

  case 35: /* rightmore: RIGHTMORE  */
#line 233 "bison.y"
                  {writeBinary((yyvsp[0].stringValue));}
#line 2993 "bison.tab.c"
    break;

  case 36: /* or: OR  */
#line 236 "bison.y"
           {writeBinary((yyvsp[0].stringValue));}
#line 2999 "bison.tab.c"
    break;

  case 37: /* asterisk: ASTERISK  */
#line 242 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3005 "bison.tab.c"
    break;

  case 38: /* inc_op: INC_OP  */
#line 245 "bison.y"
                {writeUnary((yyvsp[0].stringValue));}
#line 3011 "bison.tab.c"
    break;

  case 39: /* dec_op: DEC_OP  */
#line 249 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3017 "bison.tab.c"
    break;

  case 40: /* exclamation: EXCLAMATION  */
#line 253 "bison.y"
                     {writeUnary((yyvsp[0].stringValue));}
#line 3023 "bison.tab.c"
    break;

  case 41: /* not: NOT  */
#line 256 "bison.y"
             {writeUnary((yyvsp[0].stringValue));}
#line 3029 "bison.tab.c"
    break;

  case 42: /* typedef_name: TYPEDEF_NAME  */
#line 260 "bison.y"
                      {writeUnary((yyvsp[0].stringValue));}
#line 3035 "bison.tab.c"
    break;

  case 43: /* typedef: TYPEDEF  */
#line 263 "bison.y"
                 {write((yyvsp[0].stringValue));write(" ");}
#line 3041 "bison.tab.c"
    break;

  case 44: /* alignas: ALIGNAS  */
#line 266 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3047 "bison.tab.c"
    break;

  case 45: /* alignof: ALIGNOF  */
#line 269 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3053 "bison.tab.c"
    break;

  case 46: /* sizeof: SIZEOF  */
#line 272 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3059 "bison.tab.c"
    break;

  case 47: /* atomic: ATOMIC  */
#line 275 "bison.y"
                {writeUnary((yyvsp[0].stringValue));}
#line 3065 "bison.tab.c"
    break;

  case 48: /* generic: GENERIC  */
#line 278 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3071 "bison.tab.c"
    break;

  case 49: /* noreturn: NORETURN  */
#line 281 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3077 "bison.tab.c"
    break;

  case 50: /* static_assert: STATIC_ASSERT  */
#line 284 "bison.y"
                       {writeUnary((yyvsp[0].stringValue));}
#line 3083 "bison.tab.c"
    break;

  case 51: /* static: STATIC  */
#line 287 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3089 "bison.tab.c"
    break;

  case 52: /* extern: EXTERN  */
#line 291 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3095 "bison.tab.c"
    break;

  case 53: /* auto: AUTO  */
#line 295 "bison.y"
             {write((yyvsp[0].stringValue));write(" ");}
#line 3101 "bison.tab.c"
    break;

  case 54: /* register: REGISTER  */
#line 299 "bison.y"
                 {write((yyvsp[0].stringValue));write(" ");}
#line 3107 "bison.tab.c"
    break;

  case 55: /* thread_local: THREAD_LOCAL  */
#line 303 "bison.y"
                      {writeUnary((yyvsp[0].stringValue));}
#line 3113 "bison.tab.c"
    break;

  case 56: /* break: BREAK  */
#line 306 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3119 "bison.tab.c"
    break;

  case 57: /* const: CONST  */
#line 309 "bison.y"
               {write((yyvsp[0].stringValue));write(" ");}
#line 3125 "bison.tab.c"
    break;

  case 58: /* restrict: RESTRICT  */
#line 312 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3131 "bison.tab.c"
    break;

  case 59: /* volatile: VOLATILE  */
#line 315 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3137 "bison.tab.c"
    break;

  case 60: /* inline: INLINE  */
#line 318 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3143 "bison.tab.c"
    break;

  case 61: /* point: POINT  */
#line 323 "bison.y"
               {write((yyvsp[0].stringValue));}
#line 3149 "bison.tab.c"
    break;

  case 62: /* ptr_op: PTR_OP  */
#line 327 "bison.y"
                 {write((yyvsp[0].stringValue));}
#line 3155 "bison.tab.c"
    break;

  case 63: /* semmicolon: SEMMICOLON  */
#line 332 "bison.y"
                    {write((yyvsp[0].stringValue));}
#line 3161 "bison.tab.c"
    break;

  case 64: /* leftbracket: LEFTBRACKET  */
#line 335 "bison.y"
                     {write((yyvsp[0].stringValue));}
#line 3167 "bison.tab.c"
    break;

  case 65: /* rightbracket: RIGHTBRACKET  */
#line 338 "bison.y"
                      {write((yyvsp[0].stringValue));}
#line 3173 "bison.tab.c"
    break;

  case 66: /* leftparen: LEFTPAREN  */
#line 341 "bison.y"
                   {write((yyvsp[0].stringValue));}
#line 3179 "bison.tab.c"
    break;

  case 67: /* rightparen: RIGHTPAREN  */
#line 344 "bison.y"
                    {write((yyvsp[0].stringValue));}
#line 3185 "bison.tab.c"
    break;

  case 68: /* comma: COMMA  */
#line 347 "bison.y"
               {write((yyvsp[0].stringValue));}
#line 3191 "bison.tab.c"
    break;

  case 69: /* leftsquarebracket: LEFTSQUAREBRACKET  */
#line 350 "bison.y"
                           {write((yyvsp[0].stringValue));}
#line 3197 "bison.tab.c"
    break;

  case 70: /* rightsquarebracket: RIGHTSQUAREBRACKET  */
#line 353 "bison.y"
                            {write((yyvsp[0].stringValue));}
#line 3203 "bison.tab.c"
    break;

  case 71: /* ellipsis: ELLIPSIS  */
#line 356 "bison.y"
                  {write((yyvsp[0].stringValue));}
#line 3209 "bison.tab.c"
    break;

  case 72: /* bool: BOOL  */
#line 360 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3215 "bison.tab.c"
    break;

  case 73: /* char: CHAR  */
#line 363 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3221 "bison.tab.c"
    break;

  case 74: /* short: SHORT  */
#line 366 "bison.y"
              {writeTypes((yyvsp[0].stringValue));}
#line 3227 "bison.tab.c"
    break;

  case 75: /* int: INT  */
#line 369 "bison.y"
            {writeTypes((yyvsp[0].stringValue));}
#line 3233 "bison.tab.c"
    break;

  case 76: /* long: LONG  */
#line 372 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3239 "bison.tab.c"
    break;

  case 77: /* signed: SIGNED  */
#line 375 "bison.y"
               {writeTypes((yyvsp[0].stringValue));}
#line 3245 "bison.tab.c"
    break;

  case 78: /* unsigned: UNSIGNED  */
#line 378 "bison.y"
                 {writeTypes((yyvsp[0].stringValue));}
#line 3251 "bison.tab.c"
    break;

  case 79: /* float: FLOAT  */
#line 381 "bison.y"
              {writeTypes((yyvsp[0].stringValue));}
#line 3257 "bison.tab.c"
    break;

  case 80: /* double: DOUBLE  */
#line 384 "bison.y"
               {writeTypes((yyvsp[0].stringValue));}
#line 3263 "bison.tab.c"
    break;

  case 81: /* void: VOID  */
#line 387 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3269 "bison.tab.c"
    break;

  case 82: /* complex: COMPLEX  */
#line 390 "bison.y"
                {writeTypes((yyvsp[0].stringValue));}
#line 3275 "bison.tab.c"
    break;

  case 83: /* imaginary: IMAGINARY  */
#line 393 "bison.y"
                  {writeTypes((yyvsp[0].stringValue));}
#line 3281 "bison.tab.c"
    break;

  case 84: /* struct: STRUCT  */
#line 396 "bison.y"
               {writeTypes((yyvsp[0].stringValue));}
#line 3287 "bison.tab.c"
    break;

  case 85: /* union: UNION  */
#line 399 "bison.y"
              {writeTypes((yyvsp[0].stringValue));}
#line 3293 "bison.tab.c"
    break;

  case 86: /* enum: ENUM  */
#line 402 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3299 "bison.tab.c"
    break;

  case 87: /* case: CASE  */
#line 405 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3305 "bison.tab.c"
    break;

  case 88: /* default: DEFAULT  */
#line 408 "bison.y"
                {writeTypes((yyvsp[0].stringValue));}
#line 3311 "bison.tab.c"
    break;

  case 89: /* continue: CONTINUE  */
#line 411 "bison.y"
                 {writeTypes((yyvsp[0].stringValue));}
#line 3317 "bison.tab.c"
    break;

  case 90: /* goto: GOTO  */
#line 414 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3323 "bison.tab.c"
    break;

  case 91: /* return: RETURN  */
#line 417 "bison.y"
                {writeTypes((yyvsp[0].stringValue));}
#line 3329 "bison.tab.c"
    break;

  case 92: /* if: IF  */
#line 422 "bison.y"
            {writeIteration((yyvsp[0].stringValue));}
#line 3335 "bison.tab.c"
    break;

  case 93: /* else: ELSE  */
#line 425 "bison.y"
              {writeIteration((yyvsp[0].stringValue));}
#line 3341 "bison.tab.c"
    break;

  case 94: /* switch: SWITCH  */
#line 428 "bison.y"
                {writeIteration((yyvsp[0].stringValue));}
#line 3347 "bison.tab.c"
    break;

  case 95: /* while: WHILE  */
#line 431 "bison.y"
               {writeIteration((yyvsp[0].stringValue));}
#line 3353 "bison.tab.c"
    break;

  case 96: /* do: DO  */
#line 434 "bison.y"
            {writeIteration((yyvsp[0].stringValue));}
#line 3359 "bison.tab.c"
    break;

  case 97: /* for: FOR  */
#line 437 "bison.y"
             {writeIteration((yyvsp[0].stringValue));forFlag=1;}
#line 3365 "bison.tab.c"
    break;

  case 103: /* primary_expression: leftparen error rightparen  */
#line 446 "bison.y"
                                     {yyerrok;}
#line 3371 "bison.tab.c"
    break;

  case 104: /* primary_expression: leftparen error semmicolon  */
#line 447 "bison.y"
                                     {yyerrok;}
#line 3377 "bison.tab.c"
    break;

  case 105: /* primary_expression: leftparen error rightbracket  */
#line 448 "bison.y"
                                       {yyerrok;}
#line 3383 "bison.tab.c"
    break;

  case 109: /* enumeration_constant_two: ENUMERATION_CONSTANT  */
#line 458 "bison.y"
                             {write((yyvsp[0].stringValue));}
#line 3389 "bison.tab.c"
    break;

  case 114: /* generic_selection: generic leftparen assignment_expression comma error rightparen  */
#line 472 "bison.y"
                                                                         {yyerrok;}
#line 3395 "bison.tab.c"
    break;

  case 117: /* generic_assoc_list: generic_assoc_list error generic_association  */
#line 478 "bison.y"
                                                      { yyerrok;}
#line 3401 "bison.tab.c"
    break;

  case 130: /* postfix_expression: postfix_expression leftsquarebracket error rightsquarebracket  */
#line 497 "bison.y"
                                                                        {yyerrok;}
#line 3407 "bison.tab.c"
    break;

  case 131: /* postfix_expression: postfix_expression leftparen error rightparen  */
#line 498 "bison.y"
                                                        {yyerrok;}
#line 3413 "bison.tab.c"
    break;

  case 132: /* postfix_expression: postfix_expression leftparen error semmicolon  */
#line 499 "bison.y"
                                                        {yyerrok;}
#line 3419 "bison.tab.c"
    break;

  case 133: /* postfix_expression: postfix_expression ptr_op error semmicolon  */
#line 500 "bison.y"
                                                     {yyerrok;}
#line 3425 "bison.tab.c"
    break;

  case 134: /* postfix_expression: leftparen error rightparen leftbracket initializer_list rightbracket  */
#line 501 "bison.y"
                                                                               {yyerrok;}
#line 3431 "bison.tab.c"
    break;

  case 135: /* postfix_expression: leftparen type_name rightparen leftbracket error rightbracket  */
#line 502 "bison.y"
                                                                        {yyerrok;}
#line 3437 "bison.tab.c"
    break;

  case 145: /* unary_expression: alignof leftparen error rightparen  */
#line 518 "bison.y"
                                             {yyerrok;}
#line 3443 "bison.tab.c"
    break;

  case 186: /* assignment_expression: unary_expression assignment_operator error rightbracket  */
#line 601 "bison.y"
                                                                  {yyerrok;}
#line 3449 "bison.tab.c"
    break;

  case 187: /* assignment_expression: unary_expression assignment_operator error semmicolon  */
#line 602 "bison.y"
                                                                {yyerrok;}
#line 3455 "bison.tab.c"
    break;

  case 204: /* declaration: declaration_specifiers error  */
#line 631 "bison.y"
                                       {yyerrok;}
#line 3461 "bison.tab.c"
    break;

  case 205: /* declaration: declaration_specifiers init_declarator_list error  */
#line 632 "bison.y"
                                                            {yyerrok;}
#line 3467 "bison.tab.c"
    break;

  case 246: /* struct_or_union_specifier: struct_or_union error rightbracket  */
#line 691 "bison.y"
                                             {yyerrok;}
#line 3473 "bison.tab.c"
    break;

  case 247: /* struct_or_union_specifier: struct_or_union error identifier rightbracket  */
#line 692 "bison.y"
                                                        {yyerrok;}
#line 3479 "bison.tab.c"
    break;

  case 252: /* struct_declaration_list: struct_declaration_list error struct_declaration  */
#line 703 "bison.y"
                                                           {yyerrok;}
#line 3485 "bison.tab.c"
    break;

  case 272: /* enumerator_list: enumerator_list error enumerator  */
#line 741 "bison.y"
                                           {yyerrok;}
#line 3491 "bison.tab.c"
    break;

  case 276: /* atomic_type_specifier: atomic leftparen error rightparen  */
#line 751 "bison.y"
                                            {yyerrok;}
#line 3497 "bison.tab.c"
    break;

  case 285: /* alignment_specifier: alignas leftparen error rightparen  */
#line 769 "bison.y"
                                             {yyerrok;}
#line 3503 "bison.tab.c"
    break;

  case 302: /* direct_declarator: direct_declarator leftparen error rightparen  */
#line 792 "bison.y"
                                                       {yyerrok;}
#line 3509 "bison.tab.c"
    break;

  case 303: /* direct_declarator: leftparen error rightparen  */
#line 793 "bison.y"
                                     {yyerrok;}
#line 3515 "bison.tab.c"
    break;

  case 312: /* parameter_type_list: parameter_list error ellipsis  */
#line 812 "bison.y"
                                        {yyerrok;}
#line 3521 "bison.tab.c"
    break;

  case 315: /* parameter_list: parameter_list error parameter_declaration  */
#line 818 "bison.y"
                                                     {yyerrok;}
#line 3527 "bison.tab.c"
    break;

  case 321: /* identifier_list: identifier_list error identifier  */
#line 830 "bison.y"
                                           {yyerrok;}
#line 3533 "bison.tab.c"
    break;

  case 324: /* type_name: specifier_qualifier_list error abstract_declarator  */
#line 836 "bison.y"
                                                             {yyerrok;}
#line 3539 "bison.tab.c"
    break;

  case 349: /* direct_abstract_declarator: direct_abstract_declarator leftparen error rightparen  */
#line 867 "bison.y"
                                                                {yyerrok;}
#line 3545 "bison.tab.c"
    break;

  case 357: /* initializer_list: initializer_list error initializer  */
#line 881 "bison.y"
                                             {yyerrok;}
#line 3551 "bison.tab.c"
    break;

  case 361: /* designator_list: designator_list error designator  */
#line 891 "bison.y"
                                           {yyerrok;}
#line 3557 "bison.tab.c"
    break;

  case 378: /* block_item_list: block_item_list error block_item  */
#line 926 "bison.y"
                                           {yyerrok;}
#line 3563 "bison.tab.c"
    break;

  case 383: /* expression_statement: expression error semmicolon  */
#line 937 "bison.y"
                                      {yyerrok;}
#line 3569 "bison.tab.c"
    break;

  case 387: /* selection_statement: if leftparen error rightparen statement  */
#line 944 "bison.y"
                                                  {yyerrok;}
#line 3575 "bison.tab.c"
    break;

  case 388: /* selection_statement: if leftparen error rightparen statement else statement  */
#line 945 "bison.y"
                                                                 {yyerrok;}
#line 3581 "bison.tab.c"
    break;

  case 389: /* selection_statement: switch leftparen error rightparen  */
#line 946 "bison.y"
                                            {yyerrok;}
#line 3587 "bison.tab.c"
    break;

  case 396: /* iteration_statement: for leftparen error rightparen statement rightbracket  */
#line 956 "bison.y"
                                                                {yyerrok;}
#line 3593 "bison.tab.c"
    break;

  case 397: /* iteration_statement: while leftparen error rightparen  */
#line 957 "bison.y"
                                           {yyerrok;}
#line 3599 "bison.tab.c"
    break;

  case 403: /* jump_statement: return error rightbracket  */
#line 966 "bison.y"
                                    {yyerrok;}
#line 3605 "bison.tab.c"
    break;

  case 406: /* translation_unit: translation_unit error rightbracket  */
#line 972 "bison.y"
                                              {yyerrok;}
#line 3611 "bison.tab.c"
    break;

  case 409: /* external_declaration: PREPROCESSING error external_declaration  */
#line 978 "bison.y"
                                                   {yyerrok;}
#line 3617 "bison.tab.c"
    break;


#line 3621 "bison.tab.c"

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

#line 991 "bison.y"


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
