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

#line 109 "bison.tab.c"

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
  YYSYMBOL_struct_or_union = 235,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 236,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 237,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 238, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 239,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 240,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 241,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 242,          /* enumerator_list  */
  YYSYMBOL_enumerator = 243,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 244,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 245,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 246,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 247,      /* alignment_specifier  */
  YYSYMBOL_declarator = 248,               /* declarator  */
  YYSYMBOL_direct_declarator = 249,        /* direct_declarator  */
  YYSYMBOL_pointer = 250,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 251,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 252,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 253,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 254,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 255,          /* identifier_list  */
  YYSYMBOL_type_name = 256,                /* type_name  */
  YYSYMBOL_abstract_declarator = 257,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 258, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 259,              /* initializer  */
  YYSYMBOL_initializer_list = 260,         /* initializer_list  */
  YYSYMBOL_designation = 261,              /* designation  */
  YYSYMBOL_designator_list = 262,          /* designator_list  */
  YYSYMBOL_designator = 263,               /* designator  */
  YYSYMBOL_static_assert_declaration = 264, /* static_assert_declaration  */
  YYSYMBOL_statement = 265,                /* statement  */
  YYSYMBOL_labeled_statement = 266,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 267,       /* compound_statement  */
  YYSYMBOL_block_item_list = 268,          /* block_item_list  */
  YYSYMBOL_block_item = 269,               /* block_item  */
  YYSYMBOL_expression_statement = 270,     /* expression_statement  */
  YYSYMBOL_selection_statement = 271,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 272,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 273,           /* jump_statement  */
  YYSYMBOL_translation_unit = 274,         /* translation_unit  */
  YYSYMBOL_external_declaration = 275,     /* external_declaration  */
  YYSYMBOL_function_definition = 276,      /* function_definition  */
  YYSYMBOL_declaration_list = 277          /* declaration_list  */
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
#define YYLAST   3291

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  176
/* YYNRULES -- Number of rules.  */
#define YYNRULES  414
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  665

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
       0,   126,   126,   137,   141,   145,   149,   155,   158,   162,
     166,   170,   174,   177,   180,   183,   186,   189,   192,   195,
     198,   201,   204,   207,   210,   213,   216,   220,   223,   226,
     229,   233,   237,   241,   244,   247,   250,   256,   259,   263,
     267,   270,   274,   277,   280,   283,   286,   289,   292,   295,
     298,   301,   305,   309,   313,   317,   320,   323,   326,   329,
     332,   337,   341,   346,   349,   352,   355,   358,   361,   364,
     367,   370,   374,   377,   380,   383,   386,   389,   392,   395,
     398,   401,   404,   407,   410,   413,   416,   419,   422,   425,
     428,   431,   436,   439,   442,   445,   448,   451,   455,   459,
     460,   461,   462,   463,   464,   465,   466,   470,   471,   472,
     476,   480,   484,   485,   489,   490,   494,   495,   496,   500,
     501,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   524,   525,   529,
     530,   531,   532,   533,   534,   535,   536,   540,   541,   542,
     543,   544,   545,   549,   550,   554,   555,   556,   557,   561,
     562,   563,   567,   568,   569,   573,   574,   575,   576,   577,
     581,   582,   583,   587,   588,   592,   593,   597,   598,   602,
     603,   607,   608,   612,   613,   617,   618,   619,   620,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     638,   639,   643,   647,   648,   649,   650,   651,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   668,   669,
     673,   674,   678,   679,   680,   681,   682,   683,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,   701,   702,   706,   707,   708,   709,   710,   714,
     715,   719,   720,   721,   725,   726,   727,   731,   732,   733,
     734,   738,   739,   743,   744,   745,   749,   750,   751,   752,
     753,   757,   758,   759,   763,   764,   768,   769,   773,   774,
     775,   776,   780,   781,   785,   786,   787,   791,   792,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   815,   816,   817,   818,   822,
     823,   828,   829,   830,   834,   835,   836,   840,   841,   842,
     846,   847,   848,   852,   853,   854,   858,   859,   860,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   889,   890,   891,   895,   896,   897,   898,   899,   903,
     907,   908,   909,   913,   914,   918,   922,   923,   924,   925,
     926,   927,   931,   932,   933,   937,   938,   942,   943,   944,
     948,   949,   953,   954,   955,   959,   960,   961,   962,   963,
     964,   968,   969,   970,   971,   972,   973,   974,   975,   979,
     980,   981,   982,   983,   984,   988,   989,   990,   994,   995,
     996,  1000,  1001,  1005,  1006
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
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
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

#define YYPACT_NINF (-513)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-325)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1642,    70,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,    76,    76,  -513,    76,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,    84,  -513,    32,  3095,  3095,  -513,   210,  -513,  -513,
    3095,  3095,  3095,  -513,  1190,  -513,  -513,  1642,  -513,  1916,
    2387,  2853,  -513,  -513,   156,  -513,  -513,  -513,   167,  -513,
      36,   156,   196,  -513,  2944,    14,    76,  -513,  -513,    39,
    2840,   156,  -513,  -513,  -513,  -513,   143,  -513,  -513,   181,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  2853,  2853,  -513,  -513,    76,
    2853,    76,  1996,  -513,  -513,  -513,  -513,  -513,   459,  -513,
    2853,  -513,   356,    93,    86,    42,   186,   169,   201,   206,
     266,    47,  -513,   181,  3195,   286,  3195,   181,   181,   181,
     259,   156,    63,  -513,    84,  -513,  -513,  -513,   167,   181,
     181,  -513,  -513,  -513,  -513,    24,  -513,  2777,  1719,  -513,
      32,  -513,  2994,  -513,  1492,  2576,    14,  -513,   143,  -513,
    1592,  -513,   285,  -513,    84,  -513,  -513,  -513,  1996,  -513,
    -513,  2437,  1996,  -513,  2853,   362,   639,  -513,  -513,   200,
     181,  -513,  -513,  -513,  -513,   156,    52,  2094,  2202,  -513,
    -513,  -513,  2853,  2853,  2853,  2853,  2853,  -513,  -513,  2853,
    2853,  -513,  -513,  -513,  -513,  2853,  2853,  2853,  2853,  -513,
    -513,  2853,  2853,  2853,  -513,  2853,  -513,  2853,  -513,  2853,
    -513,  -513,  2853,  2853,  -513,  -513,   153,  2894,  2576,    14,
    -513,    14,  -513,  -513,  -513,  -513,   299,  -513,   274,  -513,
    -513,   143,  -513,  -513,  -513,  -513,  -513,  -513,   274,  2759,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,   278,   287,  -513,  -513,  2853,   278,   287,
     156,  2148,    76,    76,    76,  2514,    76,   218,  -513,  -513,
    -513,  -513,  1290,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
     181,  -513,   156,   157,   181,   163,  -513,   312,  -513,   290,
    2638,  -513,   290,  2576,  -513,  2840,  -513,  -513,  -513,  2853,
    -513,    83,  -513,   278,  2840,   181,   181,   181,   181,   259,
    -513,  -513,    84,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  2220,  -513,  2853,  2777,  -513,   287,
    -513,   158,  -513,   200,  -513,   290,   228,  -513,  -513,  -513,
     356,   356,    93,    93,    86,    86,    86,    86,    42,    42,
     186,   169,   201,   206,   266,   272,  -513,  -513,   181,   181,
     290,  2638,  -513,   290,  2576,    14,  1542,  2576,   181,  2853,
    -513,  -513,  -513,    63,  -513,  2853,  -513,   121,  2777,    43,
    -513,  2514,  -513,   278,  2514,  -513,   287,   143,  -513,    83,
    2274,  2328,  2346,   257,  1390,   287,  -513,  1816,  -513,  -513,
    -513,  -513,  1442,  -513,   254,  -513,  -513,  3044,  3044,   156,
    -513,  -513,  -513,   290,  2638,  -513,   290,  2853,  -513,   290,
    -513,  -513,  -513,   250,  2853,  1592,    84,  -513,  -513,    84,
    2337,  2759,   136,  -513,  -513,  2076,  -513,  -513,  -513,  -513,
    -513,  2853,  -513,  -513,  2853,  -513,  -513,  -513,   290,  2638,
    -513,  2853,  -513,   290,   181,  -513,   181,   290,  2638,  -513,
     290,  2576,   287,  -513,  -513,   143,   156,   290,  2777,  -513,
    2704,  -513,    37,  -513,  -513,  -513,  2514,  -513,  -513,  -513,
    -513,   181,   200,   181,   200,   181,   200,    76,   181,   176,
     176,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,   156,
    -513,   290,  -513,   290,  -513,  -513,  -513,  -513,   181,   278,
     339,  -513,   278,   121,  -513,  -513,   143,   121,  -513,  -513,
    -513,   290,   290,  -513,  -513,  -513,  -513,   290,  2638,  -513,
    2853,  -513,   290,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    2777,  -513,  -513,  2514,  2514,  -513,  2514,  -513,  2514,  2853,
    2514,  2831,  2831,  -513,  -513,  -513,  -513,  2853,  3145,  -513,
    3145,  2853,  -513,  2759,  -513,  -513,  2704,  -513,  -513,  -513,
     290,   290,  -513,  -513,   262,   262,  -513,  -513,   200,   143,
    2514,   200,  2514,   200,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  2514,  2514,   287,  -513,  -513,  2514,  -513,  2514,
    -513,  -513,  -513,  -513,  -513
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,    42,    43,    52,    51,    53,    54,    60,    57,
      58,    59,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    44,    47,    49,
      50,    55,   243,   222,     0,   281,   283,     0,   224,   223,
     226,   227,   225,   278,   279,   280,   282,   237,   229,   230,
     231,   232,   235,   236,   233,   234,   228,   238,   239,   249,
     250,    98,   409,     0,   209,   211,   241,     0,   242,   240,
     213,   215,   217,   207,     0,   405,   408,     0,    66,     0,
       0,     0,    64,    98,     0,   205,    63,    37,   308,   203,
       0,     0,     0,   218,   220,   288,    98,   208,   210,     0,
       0,     0,   212,   214,   216,     1,     0,   406,   410,     0,
       2,     3,     4,     5,     6,    46,    38,    39,   110,    33,
      40,    41,    27,    28,    45,    48,    99,   107,   108,   112,
     113,   150,   149,   147,   148,     0,     0,   152,   151,     0,
       0,     0,     0,   121,   100,   109,   101,   103,   139,   153,
       0,   155,   159,   162,   165,   170,   173,   175,   177,   179,
     181,   183,   202,     0,   258,     0,   260,     0,     0,     0,
       0,     0,     0,   271,   270,   281,   309,   307,   306,     0,
       0,   289,   206,    68,   204,    98,     8,     0,     0,   413,
       0,   412,     0,    69,     0,     0,   287,    65,     0,   247,
       0,   251,    98,   256,   246,   407,    67,   286,     0,   140,
     141,     0,     0,   143,     0,     0,   153,   185,   200,     0,
       0,    62,    61,   127,   128,     0,     0,     0,     0,   142,
      29,    30,     0,     0,     0,     0,     0,     9,    10,     0,
       0,    11,    12,    34,    35,     0,     0,     0,     0,    13,
      14,     0,     0,     0,    31,     0,    36,     0,    15,     0,
      16,    32,     0,     0,   285,   257,     0,     0,     0,   327,
     323,   328,   259,   284,   277,   276,     0,   111,   275,    98,
     266,    98,    98,   310,   305,   304,   290,   219,   220,     0,
     351,   221,    87,    88,    92,    94,    95,    96,    97,    90,
      89,    56,    91,    99,     0,   382,   375,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   380,   381,
     366,   367,     0,   377,   368,   369,   370,   371,   414,   411,
       0,   301,     0,   319,     0,     0,   314,     0,    70,   148,
       0,   291,     0,     0,   248,     0,   244,   252,     7,     0,
     254,     0,   261,   265,     0,     0,     0,     0,     0,     0,
     105,   106,   104,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,     0,   102,     0,     0,   125,     0,
     126,     0,   123,     0,   137,     0,     0,   157,   158,   156,
     161,   160,   163,   164,   168,   169,   166,   167,   171,   172,
     174,   176,   178,   180,   182,     0,   325,   346,     0,     0,
     148,     0,   330,     0,     0,   326,     0,     0,     0,     0,
     273,   267,   272,     0,    98,     0,   355,     0,     0,     0,
     360,     0,   401,     0,     0,   400,     0,     0,   402,     0,
       0,     0,     0,     0,     0,     0,   383,     0,   376,   378,
     303,   320,     0,   317,   327,   318,   300,     0,     0,     0,
     302,    98,   292,     0,     0,   299,   148,     0,   298,     0,
     253,   263,   255,    98,     0,     0,     0,   146,   145,   144,
       0,     0,     0,   186,   201,     0,   154,   134,   133,   132,
     124,     0,   131,   122,     0,   347,   329,   331,     0,     0,
     337,     0,   336,     0,     0,   348,     0,   148,     0,   338,
       0,     0,     0,   274,   268,    98,     0,     0,     0,   352,
       0,   354,     0,   359,   361,   372,     0,   374,   399,   404,
     403,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   384,   379,    71,   313,   316,   311,   315,   322,     0,
     294,     0,   295,     0,   297,   262,   264,   245,     0,     0,
       0,   116,     0,     0,   188,   187,     0,     0,   138,   184,
     333,     0,     0,   335,   350,   349,   339,     0,     0,   345,
       0,   344,     0,   365,   269,   364,   363,   358,   353,   357,
       0,   362,   373,     0,     0,   390,     0,   398,     0,     0,
       0,     0,     0,   321,   293,   296,   115,     0,     0,   114,
       0,     0,   135,     0,   136,   129,     0,   332,   334,   341,
       0,     0,   342,   356,   388,   386,   387,   391,     0,     0,
       0,     0,     0,     0,   120,   118,   117,   119,   130,   340,
     343,    93,     0,     0,     0,   397,   395,     0,   393,     0,
     389,   385,   392,   396,   394
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -513,   -82,  -513,  -513,    80,  -513,  -257,  -186,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -128,  -122,  -513,  -513,
    -513,  -513,  -149,  -513,  -513,  -513,   588,   204,   213,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,   -61,  -513,  -513,  -513,
    -175,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
     217,  -513,   -63,   -54,   104,   560,   174,    45,   462,   652,
    -110,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -443,  -513,  -513,
    -513,  -513,  -268,  -513,   -74,  -513,  -513,   -22,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -375,  -513,  -513,   713,  -513,
     -87,   103,   133,   170,   139,   135,   145,   146,   161,   140,
    -513,    29,   414,  -513,  -121,   -65,   -83,     5,  -513,   236,
    -513,   -38,  -513,  -513,    69,  -194,   -51,  -513,   -59,  -513,
     148,  -227,  -513,   -76,  -513,  -513,   -37,   -95,   -40,    41,
    -179,  -513,   -57,  -513,   -45,  -137,  -259,  -173,  -190,  -512,
    -513,  -401,   -77,   457,  -513,   -62,  -513,  -300,  -395,  -513,
    -513,  -513,  -513,   102,  -513,  -513
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
     311,   312,   652,   313,   314,   315,   316,    91,   143,   144,
     145,   278,   146,   147,   570,   571,   148,   393,   216,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   217,   218,   384,   317,   163,    62,   190,    92,    93,
      64,    65,    66,    67,   200,   201,   165,   351,   352,    68,
     172,   173,    69,    70,    71,    72,   180,    95,    96,   178,
     418,   335,   336,   337,   572,   419,   271,   436,   437,   438,
     439,   440,    73,   319,   320,   321,   322,   323,   324,   325,
     326,   327,    74,    75,    76,   192
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,   196,   174,   166,   166,    63,   347,    83,   253,   181,
     425,   189,   176,   100,   291,   334,   170,   198,   600,   204,
     340,   219,   459,   203,   166,   235,    94,   175,   270,   184,
     373,   236,   191,    85,   167,   169,   -98,   179,   534,    84,
     -98,   164,   164,   110,   532,   101,   441,   569,   177,   202,
      78,   444,   430,   389,   432,   193,   110,   241,   242,   550,
      78,   171,   164,   229,   279,    86,   166,   260,    78,    97,
      98,    77,    78,    87,   197,   102,   103,   104,   193,    63,
     222,    87,    63,   186,   193,    87,   222,   219,   166,   277,
     166,   219,   429,   421,   243,   244,   484,   220,   197,   237,
     238,   183,   283,   261,   164,   318,   303,   396,   162,   328,
     162,   600,    78,   265,   600,   272,    86,   175,    82,   176,
     282,   183,   528,   203,   166,   269,   164,    89,   164,   416,
     329,   601,   166,   289,   175,   166,   166,   185,   284,   350,
     122,   123,   415,   388,   390,   397,   398,   399,   288,   202,
     354,   480,   360,   288,   611,   612,   197,   552,   504,   183,
     110,   -98,   164,   355,   467,   353,   357,   358,   477,    86,
     164,   197,   332,   164,   164,   569,   107,   569,   197,   108,
     110,   111,   112,   113,   114,   115,   536,   116,   117,    78,
     449,    86,   176,    78,   193,   206,   465,   182,   193,   333,
    -312,   183,    87,   249,   250,   425,    87,   175,   118,    86,
     205,    99,    78,   119,   -98,   276,    87,   281,   206,   455,
     119,   120,   121,   122,   123,    87,   269,   269,   446,    86,
       9,    10,    11,   303,   183,   289,   343,   206,   183,   318,
     303,   442,   443,   645,    82,   646,   445,   516,   448,   511,
     461,    86,   518,   533,   456,   254,   183,   171,   -98,   171,
     171,   256,   253,    28,   176,   531,   183,   283,   203,   166,
     338,   124,   333,   125,   235,   235,   280,   203,   166,   175,
     236,   236,   175,   207,   481,   258,    78,   266,   482,   348,
      78,   347,   306,   464,   202,   193,   463,   183,   432,    87,
     496,   573,   344,   202,   346,   577,   113,   164,   491,   424,
     183,   348,   617,   469,   186,   621,   164,   348,    86,   361,
      86,    78,    78,  -324,   348,  -324,   497,   193,   498,   542,
     544,   546,   338,   495,    87,    87,   162,   264,   400,   401,
     618,   273,   274,   275,   296,   176,   590,   651,   283,   206,
     183,   176,   223,   285,   286,   597,   428,   599,   556,   303,
     175,   224,   303,   175,   523,   225,   175,   653,   331,   196,
     527,   549,   402,   403,   318,   303,   206,   183,   162,   547,
     468,   474,   471,   538,   289,   431,   540,   558,   410,   362,
     408,   409,   551,   385,   387,    86,   483,   197,   283,   206,
     411,   392,   414,   412,   490,    87,   230,   231,   203,   166,
     555,   557,   526,   175,   166,   404,   405,   406,   407,   566,
     413,   287,   464,   485,   565,     0,   458,   633,     0,   574,
     433,   333,   495,   283,   202,   495,     0,   289,   501,     0,
       0,   289,   176,     0,   595,   283,   353,   164,   175,   559,
     599,     0,   164,   599,   303,     0,     0,   175,   162,   593,
     175,     0,   509,     0,   162,     0,     0,   333,   521,   221,
     116,   117,   333,   333,   289,     0,   289,   613,   525,     0,
       0,     0,   530,     0,     0,     0,     0,     0,   638,     0,
     641,   643,     0,     0,     0,    78,     0,     0,     0,     0,
     193,     0,   222,   171,   460,     0,     0,     0,   466,     0,
       0,   470,   283,   162,     0,     0,     0,     0,     0,     0,
       0,   303,   303,     0,   303,     0,   303,   175,   303,   486,
     487,   488,   489,   579,     0,     0,     0,   524,     0,     0,
       0,   529,   166,     0,   166,     0,   289,     0,     0,     0,
       0,   539,     0,     0,     0,     0,     0,   195,   303,   588,
     303,     0,     0,     0,     0,   499,     0,   500,     0,   289,
     303,   303,   289,     0,     0,   303,     0,   303,     0,     0,
     164,     0,   164,     0,     0,     0,     0,     0,     0,   567,
       0,   662,   505,   506,    79,    80,   575,    81,     0,     0,
     515,   290,   522,     0,     0,     0,     0,     0,     0,   342,
     228,     0,     0,     0,     0,   620,     0,     0,   623,     0,
       0,     0,   626,    90,     0,     0,     0,   268,   359,   594,
       0,     0,     0,     0,   598,     0,     0,     0,     0,     0,
       0,   394,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    88,     0,     0,     0,   194,    90,     0,   195,     0,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
       0,     0,     0,     0,     0,     0,    88,   622,    88,   186,
     624,   625,   423,     0,     0,     0,     0,     0,   584,     0,
     585,     0,     0,     0,     0,   208,   208,     0,     0,   211,
     212,   214,     0,   290,     0,     0,     0,     0,   227,     0,
       0,     0,     0,     0,     0,   603,   604,   605,   606,   607,
     608,     0,   610,     0,     0,   267,     0,     0,   268,   268,
     648,   268,     0,   427,     0,     0,     0,     0,     0,     0,
     234,     0,   616,   655,   619,    90,     0,     0,     0,     0,
      90,     0,     0,    88,   473,     0,   194,   479,     0,     0,
       0,     0,    90,     0,     0,     0,    88,     0,     0,     0,
       0,     0,   453,    88,     0,     0,     0,     0,    88,     0,
       0,     0,     0,   339,     0,   640,   642,     0,     0,     0,
      88,     0,   149,     0,   149,   268,     0,     0,   493,     0,
     494,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   654,     0,     0,   657,     0,   659,     0,     0,
       0,     0,     0,     0,     0,     0,   267,   267,     0,   267,
       0,   426,     0,     0,     0,   508,     0,     0,   513,     0,
       0,   520,     0,     0,     0,     0,     0,     0,   209,   210,
       0,     0,   290,   213,    88,    88,   420,     0,     0,     0,
       0,     0,     0,   149,     0,     0,     0,     0,     0,     0,
       0,     0,   450,   451,   452,     0,   454,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   427,   561,     0,
       0,   563,     0,   462,     0,     0,     0,     0,   535,     0,
       0,   537,     0,     0,     0,   290,     0,     0,     0,   290,
       0,     0,     0,     0,     0,   578,     0,     0,     0,     0,
     422,    88,     0,   581,   268,   582,   268,     0,     0,     0,
       0,   476,   587,     0,     0,   592,     0,     0,     0,     0,
       0,     0,   290,     0,   290,   149,   149,   149,   149,   149,
       0,     0,   149,   149,     0,     0,     0,     0,   149,   149,
     149,   149,     0,     0,   149,   149,   149,     0,   149,     0,
     149,     0,   149,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   426,     0,     0,   234,   234,
       0,   472,     0,   602,   475,   478,     0,     0,     0,     0,
       0,     0,   630,     0,   631,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   290,   517,     0,     0,     0,     0,
     149,     0,   462,     0,   462,     0,     0,     0,     0,     0,
       0,   644,     0,     0,     0,   647,     0,   290,     0,     0,
     290,     0,     0,    90,     0,     0,     0,   502,   503,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     634,   635,   149,   636,     0,   637,     0,   639,     0,     0,
       0,    88,   507,     0,     0,   510,   512,     0,     0,   519,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   656,     0,   658,
     149,     0,     0,     0,     0,     0,     0,   609,     0,   660,
     661,     0,     0,     0,   663,     0,   664,     0,     0,     0,
       0,     0,     0,     0,     0,   560,     0,     0,   562,     0,
       0,   564,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,     0,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     580,     0,     0,     0,     0,   583,     0,     0,     0,   586,
       0,     0,   589,   591,     0,     0,     0,     0,     0,   596,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,     0,     1,     0,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   614,     0,   615,     0,   149,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   627,   628,     0,     0,     0,     0,   629,
       0,     0,     0,     0,   632,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   649,   650,    27,     0,    28,     0,    29,    30,
      31,   457,     0,     0,   110,   111,   112,   113,   114,   115,
       0,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,   118,    86,    82,   197,    78,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,   123,    87,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   292,   293,   294,     0,   295,   296,   297,   298,
     299,   300,   301,   302,    27,   124,    28,   125,    29,    30,
      31,   548,     0,     0,   110,   111,   112,   113,   114,   115,
       0,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,   118,    86,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,   123,    87,
       0,     0,     0,   179,     0,     0,   -98,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     2,     0,     0,     0,     0,    78,   206,
       0,     0,     0,   193,    27,   124,    28,   125,    29,    30,
      31,    87,     0,   330,     0,     0,   -98,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,     0,     0,     0,   206,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,   514,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,     0,     0,     0,   206,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,   345,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,     0,   197,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   110,   111,   112,   113,   114,   115,     0,
     116,   117,     0,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       2,   118,    86,    82,   197,    78,     0,     0,     0,     0,
       0,     0,     0,   119,   120,   121,   122,   123,    87,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,   292,   293,   294,     0,   295,   296,   297,   298,   299,
     300,   301,   302,    27,   124,    28,   125,    29,    30,    31,
     110,   111,   112,   113,   114,   115,     0,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,   118,    86,
      82,     0,    78,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   123,    87,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   292,   293,
     294,     0,   295,   296,   297,   298,   299,   300,   301,   302,
      27,   124,    28,   125,    29,    30,    31,   109,     0,     0,
     110,   111,   112,   113,   114,   115,     0,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,   118,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   123,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   215,     0,     0,
     110,   111,   112,   113,   114,   115,     0,   116,   117,     0,
       0,   124,    28,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,   118,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   123,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   576,     0,     0,
     110,   111,   112,   113,   114,   115,     0,   116,   117,     0,
       0,   124,    28,   125,     0,   391,     0,     0,   110,   111,
     112,   113,   114,   115,     0,   116,   117,     0,   118,     0,
      82,     0,    78,     0,     0,     0,     0,   193,     0,   222,
     119,   120,   121,   122,   123,    87,   118,     0,     0,     0,
      78,   206,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,   123,    87,     0,     0,     0,     0,     0,   447,
       0,     0,   110,   111,   112,   113,   114,   115,     0,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,     0,   125,     0,     0,     0,     0,     0,     0,
     118,    86,     0,     0,    78,     0,     0,     0,     0,   124,
       0,   125,   119,   120,   121,   122,   123,    87,     0,     0,
       0,     0,     0,   395,     0,     0,   110,   111,   112,   113,
     114,   115,     0,   116,   117,     0,     0,     0,     0,     0,
       0,   492,     0,     0,   110,   111,   112,   113,   114,   115,
       0,   116,   117,     0,   118,     0,     0,     0,    78,     0,
       0,     0,     0,   124,     0,   125,   119,   120,   121,   122,
     123,    87,   118,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,   123,    87,
       0,     0,     0,     0,     0,   541,     0,     0,   110,   111,
     112,   113,   114,   115,     0,   116,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,   125,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
      78,     0,     0,     0,     0,   124,     0,   125,   119,   120,
     121,   122,   123,    87,     0,     0,     0,     0,     0,   543,
       0,     0,   110,   111,   112,   113,   114,   115,   568,   116,
     117,     0,     0,     0,     0,     0,     0,   545,     0,     0,
     110,   111,   112,   113,   114,   115,     0,   116,   117,     0,
     118,     0,     0,     0,    78,     0,     0,     0,     2,   124,
       0,   125,   119,   120,   121,   122,   123,    87,   118,     0,
       0,     0,    78,     0,     0,     0,     0,     0,   168,     0,
     119,   120,   121,   122,   123,    87,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     2,     0,
     293,     0,     0,   124,     0,   125,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,   356,     0,
       0,   124,     0,   125,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   110,   111,
     112,   113,   114,   115,     0,   116,   117,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,    86,    82,     0,
      78,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,   123,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,   112,   113,   114,   115,     0,   116,   117,     0,
       0,     0,     0,     0,     0,     0,   292,   293,   294,     0,
     295,   296,   297,   298,   299,   300,   301,   302,   118,   124,
       0,   125,    78,     0,     0,     0,     0,     0,   338,     0,
     119,   120,   121,   122,   123,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     0,     9,
      10,    11,   110,   111,   112,   113,   114,   115,     0,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,   124,    28,   125,    78,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,   123,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,   110,   111,
     112,   113,   114,   115,     0,   116,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,    28,   125,   118,     0,    82,   197,
      78,     0,     0,     0,     0,   193,     0,   222,   119,   120,
     121,   122,   123,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   112,   113,   114,   115,     0,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   115,     0,   116,   117,
       0,   118,     0,    82,     0,    78,     0,     0,     0,   124,
     193,   125,   222,   119,   120,   121,   122,   123,    87,   118,
       0,    82,     0,    78,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   123,    87,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,   112,   113,   114,
     115,     0,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,   125,   110,   111,   112,
     113,   114,   115,   118,   116,   117,     0,    78,   206,     0,
       0,     2,   124,     0,   125,   119,   120,   121,   122,   123,
      87,     0,     0,     0,     0,   118,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,   123,    87,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     2,   124,     0,   125,     0,
      78,   206,     0,     0,     0,   193,    28,     0,     0,    30,
       0,     0,     0,    87,     0,     0,     0,     0,   124,     0,
     125,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     2,     0,     0,    82,     0,
       0,     0,     0,     0,   186,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     2,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   553,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     2,     0,   293,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28
};

static const yytype_int16 yycheck[] =
{
      63,    96,    84,    79,    80,     0,   200,    61,   157,    91,
     269,    94,    88,    67,   187,   194,    81,    99,   530,   101,
     195,   142,   322,   100,   100,   153,    63,    88,   165,    92,
     216,   153,    94,     1,    79,    80,     4,     1,   439,    61,
       4,    79,    80,     4,     1,    67,   303,   490,    88,   100,
      36,   308,   279,     1,   281,    41,     4,    15,    16,   454,
      36,    83,   100,   150,     1,    33,   142,    20,    36,    64,
      65,     1,    36,    49,    35,    70,    71,    72,    41,    74,
      43,    49,    77,    40,    41,    49,    43,   208,   164,   171,
     166,   212,   278,   268,    52,    53,   353,   142,    35,    13,
      14,    38,   178,    56,   142,   188,   188,   228,    79,   192,
      81,   623,    36,   164,   626,   166,    33,   178,    34,   195,
     174,    38,     1,   200,   200,   165,   164,   190,   166,   266,
     192,   532,   208,   187,   195,   211,   212,    92,   178,   202,
      47,    48,   263,   225,   226,   232,   233,   234,   185,   200,
     204,   345,   215,   190,   549,   550,    35,   457,   415,    38,
       4,     4,   200,   208,     1,   202,   211,   212,   343,    33,
     208,    35,   194,   211,   212,   618,    74,   620,    35,    77,
       4,     5,     6,     7,     8,     9,   443,    11,    12,    36,
     311,    33,   268,    36,    41,    37,   333,     1,    41,   194,
      37,    38,    49,    17,    18,   464,    49,   268,    32,    33,
     106,     1,    36,    44,     4,   170,    49,   172,    37,     1,
      44,    45,    46,    47,    48,    49,   266,   267,   310,    33,
      63,    64,    65,   315,    38,   289,   195,    37,    38,   322,
     322,   304,   307,   618,    34,   620,   309,   426,   311,   424,
     332,    33,   427,   439,   317,    54,    38,   279,     4,   281,
     282,    55,   411,    96,   340,   438,    38,   343,   345,   345,
      42,    95,   267,    97,   402,   403,   172,   354,   354,   340,
     402,   403,   343,   109,   349,    19,    36,     1,   351,    39,
      36,   485,   188,   333,   345,    41,   333,    38,   525,    49,
     387,   491,   198,   354,   200,   495,     7,   345,   362,   268,
      38,    39,   569,     1,    40,   572,   354,    39,    33,   215,
      33,    36,    36,    37,    39,    39,   389,    41,   391,   450,
     451,   452,    42,   387,    49,    49,   307,   163,   235,   236,
       1,   167,   168,   169,    87,   421,   521,    85,   424,    37,
      38,   427,   148,   179,   180,   528,   276,   530,   468,   441,
     421,   148,   444,   424,   429,   148,   427,   635,   194,   464,
     435,   454,   239,   240,   457,   457,    37,    38,   349,   453,
     335,   340,   337,   446,   438,   281,   449,   469,   253,   215,
     251,   252,   455,   219,   220,    33,   351,    35,   474,    37,
     255,   227,   262,   257,   359,    49,    50,    51,   485,   485,
     467,   468,   434,   474,   490,   245,   246,   247,   248,   484,
     259,   185,   462,   354,   483,    -1,   322,   600,    -1,   492,
     282,   426,   486,   509,   485,   489,    -1,   491,   393,    -1,
      -1,   495,   518,    -1,   526,   521,   483,   485,   509,   471,
     623,    -1,   490,   626,   536,    -1,    -1,   518,   429,   522,
     521,    -1,   421,    -1,   435,    -1,    -1,   462,   427,    10,
      11,    12,   467,   468,   528,    -1,   530,   559,   433,    -1,
      -1,    -1,   437,    -1,    -1,    -1,    -1,    -1,   609,    -1,
     611,   612,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      41,    -1,    43,   525,   330,    -1,    -1,    -1,   334,    -1,
      -1,   337,   588,   484,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   603,   604,    -1,   606,    -1,   608,   588,   610,   355,
     356,   357,   358,   504,    -1,    -1,    -1,   433,    -1,    -1,
      -1,   437,   618,    -1,   620,    -1,   600,    -1,    -1,    -1,
      -1,   447,    -1,    -1,    -1,    -1,    -1,    95,   640,   518,
     642,    -1,    -1,    -1,    -1,   391,    -1,   393,    -1,   623,
     652,   653,   626,    -1,    -1,   657,    -1,   659,    -1,    -1,
     618,    -1,   620,    -1,    -1,    -1,    -1,    -1,    -1,   485,
      -1,   654,   418,   419,    34,    35,   492,    37,    -1,    -1,
     426,   187,   428,    -1,    -1,    -1,    -1,    -1,    -1,   195,
     148,    -1,    -1,    -1,    -1,   570,    -1,    -1,   573,    -1,
      -1,    -1,   577,    63,    -1,    -1,    -1,   165,   214,   525,
      -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    63,    -1,    -1,    -1,    95,    96,    -1,   196,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    88,   573,    90,    40,
     576,   577,   268,    -1,    -1,    -1,    -1,    -1,   514,    -1,
     516,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,
     140,   141,    -1,   289,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,   541,   542,   543,   544,   545,
     546,    -1,   548,    -1,    -1,   165,    -1,    -1,   266,   267,
     626,   269,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,   568,   639,   570,   185,    -1,    -1,    -1,    -1,
     190,    -1,    -1,   165,   340,    -1,   196,   343,    -1,    -1,
      -1,    -1,   202,    -1,    -1,    -1,   178,    -1,    -1,    -1,
      -1,    -1,   315,   185,    -1,    -1,    -1,    -1,   190,    -1,
      -1,    -1,    -1,   195,    -1,   611,   612,    -1,    -1,    -1,
     202,    -1,    79,    -1,    81,   333,    -1,    -1,   384,    -1,
     386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   638,    -1,    -1,   641,    -1,   643,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   266,   267,    -1,   269,
      -1,   271,    -1,    -1,    -1,   421,    -1,    -1,   424,    -1,
      -1,   427,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
      -1,    -1,   438,   140,   266,   267,   268,    -1,    -1,    -1,
      -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   312,   313,   314,    -1,   316,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,   474,    -1,
      -1,   477,    -1,   333,    -1,    -1,    -1,    -1,   441,    -1,
      -1,   444,    -1,    -1,    -1,   491,    -1,    -1,    -1,   495,
      -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,
     268,   333,    -1,   509,   462,   511,   464,    -1,    -1,    -1,
      -1,   343,   518,    -1,    -1,   521,    -1,    -1,    -1,    -1,
      -1,    -1,   528,    -1,   530,   232,   233,   234,   235,   236,
      -1,    -1,   239,   240,    -1,    -1,    -1,    -1,   245,   246,
     247,   248,    -1,    -1,   251,   252,   253,    -1,   255,    -1,
     257,    -1,   259,    -1,    -1,   262,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   425,    -1,    -1,   400,   401,
      -1,   339,    -1,   536,   342,   343,    -1,    -1,    -1,    -1,
      -1,    -1,   588,    -1,   590,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   600,   427,    -1,    -1,    -1,    -1,
     307,    -1,   462,    -1,   464,    -1,    -1,    -1,    -1,    -1,
      -1,   617,    -1,    -1,    -1,   621,    -1,   623,    -1,    -1,
     626,    -1,    -1,   483,    -1,    -1,    -1,   395,   396,    -1,
     462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     603,   604,   349,   606,    -1,   608,    -1,   610,    -1,    -1,
      -1,   483,   420,    -1,    -1,   423,   424,    -1,    -1,   427,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   640,    -1,   642,
     387,    -1,    -1,    -1,    -1,    -1,    -1,   547,    -1,   652,
     653,    -1,    -1,    -1,   657,    -1,   659,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   473,    -1,    -1,   476,    -1,
      -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   429,    -1,    -1,    -1,    -1,    -1,   435,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     508,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,   517,
      -1,    -1,   520,   521,    -1,    -1,    -1,    -1,    -1,   527,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,     3,    -1,    -1,    -1,   484,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   561,    -1,   563,    -1,   504,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   581,   582,    -1,    -1,    -1,    -1,   587,
      -1,    -1,    -1,    -1,   592,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   630,   631,    94,    -1,    96,    -1,    98,    99,
     100,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,     1,    -1,    -1,     4,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,
      -1,    -1,    -1,    41,    94,    95,    96,    97,    98,    99,
     100,    49,    -1,     1,    -1,    -1,     4,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    -1,   100,     1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    -1,   100,     1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    83,    84,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    95,    96,    97,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    32,    -1,
      34,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    32,    -1,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    95,
      -1,    97,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    32,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    95,    -1,    97,    44,    45,    46,    47,
      48,    49,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    95,    -1,    97,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,     1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    31,    95,
      -1,    97,    44,    45,    46,    47,    48,    49,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    31,    -1,
      83,    -1,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    -1,
      86,    87,    88,    89,    90,    91,    92,    93,    32,    95,
      -1,    97,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    65,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    95,    96,    97,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    32,    -1,    34,    -1,    36,    -1,    -1,    -1,    95,
      41,    97,    43,    44,    45,    46,    47,    48,    49,    32,
      -1,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    97,     4,     5,     6,
       7,     8,     9,    32,    11,    12,    -1,    36,    37,    -1,
      -1,    31,    95,    -1,    97,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    31,    95,    -1,    97,    -1,
      36,    37,    -1,    -1,    -1,    41,    96,    -1,    -1,    99,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    95,    -1,
      97,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    31,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96
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
     186,   187,   228,   229,   232,   233,   234,   235,   241,   244,
     245,   246,   247,   264,   274,   275,   276,     1,    36,   167,
     167,   167,    34,   165,   199,     1,    33,    49,   138,   164,
     167,   199,   230,   231,   248,   249,   250,   229,   229,     1,
     165,   199,   229,   229,   229,     0,     1,   275,   275,     1,
       4,     5,     6,     7,     8,     9,    11,    12,    32,    44,
      45,    46,    47,    48,    95,    97,   103,   104,   105,   106,
     107,   128,   129,   134,   138,   139,   140,   141,   142,   146,
     147,   149,   167,   200,   201,   202,   204,   205,   208,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   227,   233,   238,   245,   256,     1,   256,
     227,   199,   242,   243,   103,   148,   245,   250,   251,     1,
     248,   103,     1,    38,   164,   169,    40,   109,   165,   228,
     229,   267,   277,    41,   167,   170,   249,    35,   103,   166,
     236,   237,   238,   264,   103,   166,    37,   168,   167,   210,
     210,   167,   167,   210,   167,     1,   210,   223,   224,   226,
     256,    10,    43,   139,   140,   162,   163,   167,   170,   212,
      50,    51,   130,   131,   138,   128,   129,    13,    14,   110,
     111,    15,    16,    52,    53,   112,   113,   135,   136,    17,
      18,   114,   115,   134,    54,   132,    55,   137,    19,   116,
      20,    56,   117,   133,   168,   238,     1,   167,   170,   250,
     257,   258,   238,   168,   168,   168,   169,   103,   203,     1,
     166,   169,   165,   245,   250,   168,   168,   231,   248,   165,
     224,   259,    82,    83,    84,    86,    87,    88,    89,    90,
      91,    92,    93,   103,   157,   164,   166,   188,   189,   190,
     191,   192,   193,   195,   196,   197,   198,   226,   228,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   228,   267,
       1,   168,   199,   229,   252,   253,   254,   255,    42,   138,
     152,   171,   224,   251,   166,     1,   166,   237,    39,   108,
     164,   239,   240,   248,   165,   256,     1,   256,   256,   224,
     164,   166,   168,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   109,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   225,   168,   169,   168,   103,     1,
     103,     1,   168,   209,   224,     1,   226,   212,   212,   212,
     213,   213,   214,   214,   215,   215,   215,   215,   216,   216,
     217,   218,   219,   220,   221,   226,   257,   168,   252,   257,
     138,   152,   171,   224,   251,   258,   167,   170,   106,   109,
     243,   166,   243,   242,   162,   170,   259,   260,   261,   262,
     263,   108,   164,   227,   108,   164,   103,     1,   164,   226,
     167,   167,   167,   265,   167,     1,   164,     1,   166,   269,
     168,   103,   167,   248,   250,   257,   168,     1,   169,     1,
     168,   169,   171,   224,   251,   171,   138,   152,   171,   224,
     237,   227,   164,   169,   108,   236,   168,   168,   168,   168,
     169,   165,     1,   224,   224,   165,   212,   164,   164,   168,
     168,   169,   171,   171,   108,   168,   168,   171,   224,   251,
     171,   152,   171,   224,     1,   168,   252,   138,   152,   171,
     224,   251,   168,   227,   166,   169,   199,   227,     1,   166,
     169,   259,     1,   109,   263,   265,   108,   265,   164,   166,
     164,     1,   226,     1,   226,     1,   226,   196,     1,   228,
     270,   164,   269,    81,   172,   254,   172,   254,   103,   199,
     171,   224,   171,   224,   171,   240,   227,   166,     1,   189,
     206,   207,   256,   260,   164,   166,     1,   260,   224,   223,
     171,   224,   224,   171,   168,   168,   171,   224,   251,   171,
     152,   171,   224,   164,   166,   103,   171,   259,   166,   259,
     261,   263,   265,   168,   168,   168,   168,   168,   168,   167,
     168,   270,   270,   103,   171,   171,   168,   108,     1,   168,
     169,   108,   166,   169,   166,   166,   169,   171,   171,   171,
     224,   224,   171,   259,   265,   265,   265,   265,   226,   265,
     168,   226,   168,   226,   224,   207,   207,   224,   166,   171,
     171,    85,   194,   194,   168,   166,   265,   168,   265,   168,
     265,   265,   164,   265,   265
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
     233,   233,   233,   233,   234,   234,   234,   234,   234,   235,
     235,   236,   236,   236,   237,   237,   237,   238,   238,   238,
     238,   239,   239,   240,   240,   240,   241,   241,   241,   241,
     241,   242,   242,   242,   243,   243,   244,   244,   245,   245,
     245,   245,   246,   246,   247,   247,   247,   248,   248,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   250,   250,   250,   250,   251,
     251,   252,   252,   252,   253,   253,   253,   254,   254,   254,
     255,   255,   255,   256,   256,   256,   257,   257,   257,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   259,   259,   259,   260,   260,   260,   260,   260,   261,
     262,   262,   262,   263,   263,   264,   265,   265,   265,   265,
     265,   265,   266,   266,   266,   267,   267,   268,   268,   268,
     269,   269,   270,   270,   270,   271,   271,   271,   271,   271,
     271,   272,   272,   272,   272,   272,   272,   272,   272,   273,
     273,   273,   273,   273,   273,   274,   274,   274,   275,   275,
     275,   276,   276,   277,   277
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
       1,     1,     1,     1,     4,     6,     3,     3,     4,     1,
       1,     1,     2,     3,     2,     3,     1,     2,     1,     2,
       1,     1,     3,     2,     3,     1,     4,     5,     6,     7,
       3,     1,     3,     3,     4,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     2,     1,     2,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     4,     3,     3,     2,     2,     1,     1,
       2,     3,     1,     3,     1,     3,     3,     2,     2,     1,
       2,     4,     3,     2,     1,     3,     2,     1,     1,     3,
       2,     3,     5,     4,     5,     4,     3,     3,     3,     4,
       6,     5,     5,     6,     4,     4,     2,     3,     3,     4,
       4,     1,     3,     4,     2,     1,     4,     3,     3,     2,
       1,     2,     3,     3,     3,     7,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     1,     2,     3,
       1,     1,     1,     2,     3,     7,     5,     5,     5,     7,
       4,     5,     7,     6,     7,     6,     7,     6,     4,     3,
       2,     2,     2,     3,     3,     1,     2,     3,     1,     1,
       3,     4,     3,     1,     2
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
#line 126 "bison.y"
                             {write((yyvsp[0].stringValue));
		  			 if(!isDeclaration){
						checkInTable((yyvsp[0].stringValue));
					 }else{	
						push(createData("identifier",(yyvsp[0].stringValue)));
						isDeclaration =  0;
					 }
		   }
#line 2834 "bison.tab.c"
    break;

  case 3: /* i_constant: I_CONSTANT  */
#line 137 "bison.y"
                                    {write((yyvsp[0].stringValue));}
#line 2840 "bison.tab.c"
    break;

  case 4: /* f_constant: F_CONSTANT  */
#line 141 "bison.y"
                               {write((yyvsp[0].stringValue));}
#line 2846 "bison.tab.c"
    break;

  case 5: /* string_literal: STRING_LITERAL  */
#line 145 "bison.y"
                                        {write((yyvsp[0].stringValue));}
#line 2852 "bison.tab.c"
    break;

  case 6: /* func_name: FUNC_NAME  */
#line 149 "bison.y"
                           {write((yyvsp[0].stringValue));}
#line 2858 "bison.tab.c"
    break;

  case 7: /* twopoints: TWOPOINTS  */
#line 155 "bison.y"
                   {writeBinary((yyvsp[0].stringValue));}
#line 2864 "bison.tab.c"
    break;

  case 8: /* equals: EQUALS  */
#line 158 "bison.y"
                {writeBinary((yyvsp[0].stringValue));}
#line 2870 "bison.tab.c"
    break;

  case 9: /* left_op: LEFT_OP  */
#line 162 "bison.y"
                 {writeBinary((yyvsp[0].stringValue));}
#line 2876 "bison.tab.c"
    break;

  case 10: /* right_op: RIGHT_OP  */
#line 166 "bison.y"
                  {writeBinary((yyvsp[0].stringValue));}
#line 2882 "bison.tab.c"
    break;

  case 11: /* le_op: LE_OP  */
#line 170 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2888 "bison.tab.c"
    break;

  case 12: /* ge_op: GE_OP  */
#line 174 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2894 "bison.tab.c"
    break;

  case 13: /* eq_op: EQ_OP  */
#line 177 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2900 "bison.tab.c"
    break;

  case 14: /* ne_op: NE_OP  */
#line 180 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2906 "bison.tab.c"
    break;

  case 15: /* and_op: AND_OP  */
#line 183 "bison.y"
                {writeBinary((yyvsp[0].stringValue));}
#line 2912 "bison.tab.c"
    break;

  case 16: /* or_op: OR_OP  */
#line 186 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2918 "bison.tab.c"
    break;

  case 17: /* mul_assign: MUL_ASSIGN  */
#line 189 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2924 "bison.tab.c"
    break;

  case 18: /* div_assign: DIV_ASSIGN  */
#line 192 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2930 "bison.tab.c"
    break;

  case 19: /* mod_assign: MOD_ASSIGN  */
#line 195 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2936 "bison.tab.c"
    break;

  case 20: /* add_assign: ADD_ASSIGN  */
#line 198 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2942 "bison.tab.c"
    break;

  case 21: /* sub_assign: SUB_ASSIGN  */
#line 201 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2948 "bison.tab.c"
    break;

  case 22: /* left_assign: LEFT_ASSIGN  */
#line 204 "bison.y"
                     {writeBinary((yyvsp[0].stringValue));}
#line 2954 "bison.tab.c"
    break;

  case 23: /* right_assign: RIGHT_ASSIGN  */
#line 207 "bison.y"
                      {writeBinary((yyvsp[0].stringValue));}
#line 2960 "bison.tab.c"
    break;

  case 24: /* and_assign: AND_ASSIGN  */
#line 210 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2966 "bison.tab.c"
    break;

  case 25: /* xor_assign: XOR_ASSIGN  */
#line 213 "bison.y"
                    {writeBinary((yyvsp[0].stringValue));}
#line 2972 "bison.tab.c"
    break;

  case 26: /* or_assign: OR_ASSIGN  */
#line 216 "bison.y"
                   {writeBinary((yyvsp[0].stringValue));}
#line 2978 "bison.tab.c"
    break;

  case 27: /* minus: MINUS  */
#line 220 "bison.y"
               {writeBinary((yyvsp[0].stringValue));}
#line 2984 "bison.tab.c"
    break;

  case 28: /* plus: PLUS  */
#line 223 "bison.y"
              {writeBinary((yyvsp[0].stringValue));}
#line 2990 "bison.tab.c"
    break;

  case 29: /* divition: DIVITION  */
#line 226 "bison.y"
                 {writeBinary((yyvsp[0].stringValue));}
#line 2996 "bison.tab.c"
    break;

  case 30: /* modulus: MODULUS  */
#line 229 "bison.y"
                {writeBinary((yyvsp[0].stringValue));}
#line 3002 "bison.tab.c"
    break;

  case 31: /* exponentation: EXPONENTATION  */
#line 233 "bison.y"
                      {writeBinary((yyvsp[0].stringValue));}
#line 3008 "bison.tab.c"
    break;

  case 32: /* ternaryif: TERNARYIF  */
#line 237 "bison.y"
                  {writeBinary((yyvsp[0].stringValue));}
#line 3014 "bison.tab.c"
    break;

  case 33: /* and: AND  */
#line 241 "bison.y"
             {writeBinary((yyvsp[0].stringValue));}
#line 3020 "bison.tab.c"
    break;

  case 34: /* leftless: LEFTLESS  */
#line 244 "bison.y"
                 {writeBinary((yyvsp[0].stringValue));}
#line 3026 "bison.tab.c"
    break;

  case 35: /* rightmore: RIGHTMORE  */
#line 247 "bison.y"
                  {writeBinary((yyvsp[0].stringValue));}
#line 3032 "bison.tab.c"
    break;

  case 36: /* or: OR  */
#line 250 "bison.y"
           {writeBinary((yyvsp[0].stringValue));}
#line 3038 "bison.tab.c"
    break;

  case 37: /* asterisk: ASTERISK  */
#line 256 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3044 "bison.tab.c"
    break;

  case 38: /* inc_op: INC_OP  */
#line 259 "bison.y"
                {writeUnary((yyvsp[0].stringValue));}
#line 3050 "bison.tab.c"
    break;

  case 39: /* dec_op: DEC_OP  */
#line 263 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3056 "bison.tab.c"
    break;

  case 40: /* exclamation: EXCLAMATION  */
#line 267 "bison.y"
                     {writeUnary((yyvsp[0].stringValue));}
#line 3062 "bison.tab.c"
    break;

  case 41: /* not: NOT  */
#line 270 "bison.y"
             {writeUnary((yyvsp[0].stringValue));}
#line 3068 "bison.tab.c"
    break;

  case 42: /* typedef_name: TYPEDEF_NAME  */
#line 274 "bison.y"
                      {writeUnary((yyvsp[0].stringValue));}
#line 3074 "bison.tab.c"
    break;

  case 43: /* typedef: TYPEDEF  */
#line 277 "bison.y"
                 {write((yyvsp[0].stringValue));write(" ");}
#line 3080 "bison.tab.c"
    break;

  case 44: /* alignas: ALIGNAS  */
#line 280 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3086 "bison.tab.c"
    break;

  case 45: /* alignof: ALIGNOF  */
#line 283 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3092 "bison.tab.c"
    break;

  case 46: /* sizeof: SIZEOF  */
#line 286 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3098 "bison.tab.c"
    break;

  case 47: /* atomic: ATOMIC  */
#line 289 "bison.y"
                {writeUnary((yyvsp[0].stringValue));}
#line 3104 "bison.tab.c"
    break;

  case 48: /* generic: GENERIC  */
#line 292 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3110 "bison.tab.c"
    break;

  case 49: /* noreturn: NORETURN  */
#line 295 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3116 "bison.tab.c"
    break;

  case 50: /* static_assert: STATIC_ASSERT  */
#line 298 "bison.y"
                       {writeUnary((yyvsp[0].stringValue));}
#line 3122 "bison.tab.c"
    break;

  case 51: /* static: STATIC  */
#line 301 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3128 "bison.tab.c"
    break;

  case 52: /* extern: EXTERN  */
#line 305 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3134 "bison.tab.c"
    break;

  case 53: /* auto: AUTO  */
#line 309 "bison.y"
             {write((yyvsp[0].stringValue));write(" ");}
#line 3140 "bison.tab.c"
    break;

  case 54: /* register: REGISTER  */
#line 313 "bison.y"
                 {write((yyvsp[0].stringValue));write(" ");}
#line 3146 "bison.tab.c"
    break;

  case 55: /* thread_local: THREAD_LOCAL  */
#line 317 "bison.y"
                      {writeUnary((yyvsp[0].stringValue));}
#line 3152 "bison.tab.c"
    break;

  case 56: /* break: BREAK  */
#line 320 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3158 "bison.tab.c"
    break;

  case 57: /* const: CONST  */
#line 323 "bison.y"
               {write((yyvsp[0].stringValue));write(" ");}
#line 3164 "bison.tab.c"
    break;

  case 58: /* restrict: RESTRICT  */
#line 326 "bison.y"
                  {writeUnary((yyvsp[0].stringValue));}
#line 3170 "bison.tab.c"
    break;

  case 59: /* volatile: VOLATILE  */
#line 329 "bison.y"
                 {writeUnary((yyvsp[0].stringValue));}
#line 3176 "bison.tab.c"
    break;

  case 60: /* inline: INLINE  */
#line 332 "bison.y"
               {writeUnary((yyvsp[0].stringValue));}
#line 3182 "bison.tab.c"
    break;

  case 61: /* point: POINT  */
#line 337 "bison.y"
               {write((yyvsp[0].stringValue));}
#line 3188 "bison.tab.c"
    break;

  case 62: /* ptr_op: PTR_OP  */
#line 341 "bison.y"
                 {write((yyvsp[0].stringValue));}
#line 3194 "bison.tab.c"
    break;

  case 63: /* semmicolon: SEMMICOLON  */
#line 346 "bison.y"
                    {write((yyvsp[0].stringValue));}
#line 3200 "bison.tab.c"
    break;

  case 64: /* leftbracket: LEFTBRACKET  */
#line 349 "bison.y"
                     {write((yyvsp[0].stringValue)); openScope();}
#line 3206 "bison.tab.c"
    break;

  case 65: /* rightbracket: RIGHTBRACKET  */
#line 352 "bison.y"
                      {write((yyvsp[0].stringValue));  printSymTab(); closeScope();}
#line 3212 "bison.tab.c"
    break;

  case 66: /* leftparen: LEFTPAREN  */
#line 355 "bison.y"
                   {write((yyvsp[0].stringValue));}
#line 3218 "bison.tab.c"
    break;

  case 67: /* rightparen: RIGHTPAREN  */
#line 358 "bison.y"
                    {write((yyvsp[0].stringValue));}
#line 3224 "bison.tab.c"
    break;

  case 68: /* comma: COMMA  */
#line 361 "bison.y"
               {write((yyvsp[0].stringValue));}
#line 3230 "bison.tab.c"
    break;

  case 69: /* leftsquarebracket: LEFTSQUAREBRACKET  */
#line 364 "bison.y"
                           {write((yyvsp[0].stringValue));}
#line 3236 "bison.tab.c"
    break;

  case 70: /* rightsquarebracket: RIGHTSQUAREBRACKET  */
#line 367 "bison.y"
                            {write((yyvsp[0].stringValue));}
#line 3242 "bison.tab.c"
    break;

  case 71: /* ellipsis: ELLIPSIS  */
#line 370 "bison.y"
                  {write((yyvsp[0].stringValue));}
#line 3248 "bison.tab.c"
    break;

  case 72: /* bool: BOOL  */
#line 374 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3254 "bison.tab.c"
    break;

  case 73: /* char: CHAR  */
#line 377 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3260 "bison.tab.c"
    break;

  case 74: /* short: SHORT  */
#line 380 "bison.y"
              {writeTypes((yyvsp[0].stringValue));}
#line 3266 "bison.tab.c"
    break;

  case 75: /* int: INT  */
#line 383 "bison.y"
            {writeTypes((yyvsp[0].stringValue));}
#line 3272 "bison.tab.c"
    break;

  case 76: /* long: LONG  */
#line 386 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3278 "bison.tab.c"
    break;

  case 77: /* signed: SIGNED  */
#line 389 "bison.y"
               {writeTypes((yyvsp[0].stringValue));}
#line 3284 "bison.tab.c"
    break;

  case 78: /* unsigned: UNSIGNED  */
#line 392 "bison.y"
                 {writeTypes((yyvsp[0].stringValue));}
#line 3290 "bison.tab.c"
    break;

  case 79: /* float: FLOAT  */
#line 395 "bison.y"
              {writeTypes((yyvsp[0].stringValue));}
#line 3296 "bison.tab.c"
    break;

  case 80: /* double: DOUBLE  */
#line 398 "bison.y"
               {writeTypes((yyvsp[0].stringValue));}
#line 3302 "bison.tab.c"
    break;

  case 81: /* void: VOID  */
#line 401 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3308 "bison.tab.c"
    break;

  case 82: /* complex: COMPLEX  */
#line 404 "bison.y"
                {writeTypes((yyvsp[0].stringValue));}
#line 3314 "bison.tab.c"
    break;

  case 83: /* imaginary: IMAGINARY  */
#line 407 "bison.y"
                  {writeTypes((yyvsp[0].stringValue));}
#line 3320 "bison.tab.c"
    break;

  case 84: /* struct: STRUCT  */
#line 410 "bison.y"
               {writeTypes((yyvsp[0].stringValue));}
#line 3326 "bison.tab.c"
    break;

  case 85: /* union: UNION  */
#line 413 "bison.y"
              {writeTypes((yyvsp[0].stringValue));}
#line 3332 "bison.tab.c"
    break;

  case 86: /* enum: ENUM  */
#line 416 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3338 "bison.tab.c"
    break;

  case 87: /* case: CASE  */
#line 419 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3344 "bison.tab.c"
    break;

  case 88: /* default: DEFAULT  */
#line 422 "bison.y"
                {writeTypes((yyvsp[0].stringValue));}
#line 3350 "bison.tab.c"
    break;

  case 89: /* continue: CONTINUE  */
#line 425 "bison.y"
                 {writeTypes((yyvsp[0].stringValue));}
#line 3356 "bison.tab.c"
    break;

  case 90: /* goto: GOTO  */
#line 428 "bison.y"
             {writeTypes((yyvsp[0].stringValue));}
#line 3362 "bison.tab.c"
    break;

  case 91: /* return: RETURN  */
#line 431 "bison.y"
                {writeTypes((yyvsp[0].stringValue));}
#line 3368 "bison.tab.c"
    break;

  case 92: /* if: IF  */
#line 436 "bison.y"
            {writeIteration((yyvsp[0].stringValue));}
#line 3374 "bison.tab.c"
    break;

  case 93: /* else: ELSE  */
#line 439 "bison.y"
              {writeIteration((yyvsp[0].stringValue));}
#line 3380 "bison.tab.c"
    break;

  case 94: /* switch: SWITCH  */
#line 442 "bison.y"
                {writeIteration((yyvsp[0].stringValue));}
#line 3386 "bison.tab.c"
    break;

  case 95: /* while: WHILE  */
#line 445 "bison.y"
               {writeIteration((yyvsp[0].stringValue));}
#line 3392 "bison.tab.c"
    break;

  case 96: /* do: DO  */
#line 448 "bison.y"
            {writeIteration((yyvsp[0].stringValue));}
#line 3398 "bison.tab.c"
    break;

  case 97: /* for: FOR  */
#line 451 "bison.y"
             {writeIteration((yyvsp[0].stringValue));forFlag=1;}
#line 3404 "bison.tab.c"
    break;

  case 98: /* prepareIdInsertion: %empty  */
#line 455 "bison.y"
                {isDeclaration = 1;}
#line 3410 "bison.tab.c"
    break;

  case 104: /* primary_expression: leftparen error rightparen  */
#line 464 "bison.y"
                                     {yyerrok;}
#line 3416 "bison.tab.c"
    break;

  case 105: /* primary_expression: leftparen error semmicolon  */
#line 465 "bison.y"
                                     {yyerrok;}
#line 3422 "bison.tab.c"
    break;

  case 106: /* primary_expression: leftparen error rightbracket  */
#line 466 "bison.y"
                                       {yyerrok;}
#line 3428 "bison.tab.c"
    break;

  case 110: /* enumeration_constant_two: ENUMERATION_CONSTANT  */
#line 476 "bison.y"
                             {write((yyvsp[0].stringValue));}
#line 3434 "bison.tab.c"
    break;

  case 115: /* generic_selection: generic leftparen assignment_expression comma error rightparen  */
#line 490 "bison.y"
                                                                         {yyerrok;}
#line 3440 "bison.tab.c"
    break;

  case 118: /* generic_assoc_list: generic_assoc_list error generic_association  */
#line 496 "bison.y"
                                                      { yyerrok;}
#line 3446 "bison.tab.c"
    break;

  case 131: /* postfix_expression: postfix_expression leftsquarebracket error rightsquarebracket  */
#line 515 "bison.y"
                                                                        {yyerrok;}
#line 3452 "bison.tab.c"
    break;

  case 132: /* postfix_expression: postfix_expression leftparen error rightparen  */
#line 516 "bison.y"
                                                        {yyerrok;}
#line 3458 "bison.tab.c"
    break;

  case 133: /* postfix_expression: postfix_expression leftparen error semmicolon  */
#line 517 "bison.y"
                                                        {yyerrok;}
#line 3464 "bison.tab.c"
    break;

  case 134: /* postfix_expression: postfix_expression ptr_op error semmicolon  */
#line 518 "bison.y"
                                                     {yyerrok;}
#line 3470 "bison.tab.c"
    break;

  case 135: /* postfix_expression: leftparen error rightparen leftbracket initializer_list rightbracket  */
#line 519 "bison.y"
                                                                               {yyerrok;}
#line 3476 "bison.tab.c"
    break;

  case 136: /* postfix_expression: leftparen type_name rightparen leftbracket error rightbracket  */
#line 520 "bison.y"
                                                                        {yyerrok;}
#line 3482 "bison.tab.c"
    break;

  case 146: /* unary_expression: alignof leftparen error rightparen  */
#line 536 "bison.y"
                                             {yyerrok;}
#line 3488 "bison.tab.c"
    break;

  case 187: /* assignment_expression: unary_expression assignment_operator error rightbracket  */
#line 619 "bison.y"
                                                                  {yyerrok;}
#line 3494 "bison.tab.c"
    break;

  case 188: /* assignment_expression: unary_expression assignment_operator error semmicolon  */
#line 620 "bison.y"
                                                                {yyerrok;}
#line 3500 "bison.tab.c"
    break;

  case 203: /* declaration: declaration_specifiers semmicolon  */
#line 647 "bison.y"
                                            {end_decl();}
#line 3506 "bison.tab.c"
    break;

  case 204: /* declaration: declaration_specifiers init_declarator_list semmicolon  */
#line 648 "bison.y"
                                                                 {end_decl();}
#line 3512 "bison.tab.c"
    break;

  case 205: /* declaration: declaration_specifiers error  */
#line 649 "bison.y"
                                       {yyerrok;}
#line 3518 "bison.tab.c"
    break;

  case 206: /* declaration: declaration_specifiers init_declarator_list error  */
#line 650 "bison.y"
                                                            {yyerrok;}
#line 3524 "bison.tab.c"
    break;

  case 228: /* type_specifier: void  */
#line 687 "bison.y"
               {push(createData("type","void"));}
#line 3530 "bison.tab.c"
    break;

  case 229: /* type_specifier: char  */
#line 688 "bison.y"
               {push(createData("type","char"));}
#line 3536 "bison.tab.c"
    break;

  case 230: /* type_specifier: short  */
#line 689 "bison.y"
                {push(createData("type","short"));}
#line 3542 "bison.tab.c"
    break;

  case 231: /* type_specifier: int  */
#line 690 "bison.y"
               {push(createData("type","int"));}
#line 3548 "bison.tab.c"
    break;

  case 232: /* type_specifier: long  */
#line 691 "bison.y"
               {push(createData("type","long"));}
#line 3554 "bison.tab.c"
    break;

  case 233: /* type_specifier: float  */
#line 692 "bison.y"
                {push(createData("type","float"));}
#line 3560 "bison.tab.c"
    break;

  case 234: /* type_specifier: double  */
#line 693 "bison.y"
                 {push(createData("type","double"));}
#line 3566 "bison.tab.c"
    break;

  case 235: /* type_specifier: signed  */
#line 694 "bison.y"
                  {push(createData("type","signed"));}
#line 3572 "bison.tab.c"
    break;

  case 236: /* type_specifier: unsigned  */
#line 695 "bison.y"
                    {push(createData("type","unsigned"));}
#line 3578 "bison.tab.c"
    break;

  case 237: /* type_specifier: bool  */
#line 696 "bison.y"
               {push(createData("type","bool"));}
#line 3584 "bison.tab.c"
    break;

  case 238: /* type_specifier: complex  */
#line 697 "bison.y"
                   {push(createData("type","complex"));}
#line 3590 "bison.tab.c"
    break;

  case 239: /* type_specifier: imaginary  */
#line 698 "bison.y"
                        {push(createData("type","imaginary"));}
#line 3596 "bison.tab.c"
    break;

  case 247: /* struct_or_union_specifier: struct_or_union error rightbracket  */
#line 709 "bison.y"
                                             {yyerrok;}
#line 3602 "bison.tab.c"
    break;

  case 248: /* struct_or_union_specifier: struct_or_union error identifier rightbracket  */
#line 710 "bison.y"
                                                        {yyerrok;}
#line 3608 "bison.tab.c"
    break;

  case 249: /* struct_or_union: struct  */
#line 714 "bison.y"
                  {push(createData("type","struct"));}
#line 3614 "bison.tab.c"
    break;

  case 250: /* struct_or_union: union  */
#line 715 "bison.y"
                 {push(createData("type","union"));}
#line 3620 "bison.tab.c"
    break;

  case 253: /* struct_declaration_list: struct_declaration_list error struct_declaration  */
#line 721 "bison.y"
                                                           {yyerrok;}
#line 3626 "bison.tab.c"
    break;

  case 273: /* enumerator_list: enumerator_list error enumerator  */
#line 759 "bison.y"
                                           {yyerrok;}
#line 3632 "bison.tab.c"
    break;

  case 277: /* atomic_type_specifier: atomic leftparen error rightparen  */
#line 769 "bison.y"
                                            {yyerrok;}
#line 3638 "bison.tab.c"
    break;

  case 286: /* alignment_specifier: alignas leftparen error rightparen  */
#line 787 "bison.y"
                                             {yyerrok;}
#line 3644 "bison.tab.c"
    break;

  case 303: /* direct_declarator: direct_declarator leftparen error rightparen  */
#line 810 "bison.y"
                                                       {yyerrok;}
#line 3650 "bison.tab.c"
    break;

  case 304: /* direct_declarator: leftparen error rightparen  */
#line 811 "bison.y"
                                     {yyerrok;}
#line 3656 "bison.tab.c"
    break;

  case 313: /* parameter_type_list: parameter_list error ellipsis  */
#line 830 "bison.y"
                                        {yyerrok;}
#line 3662 "bison.tab.c"
    break;

  case 314: /* parameter_list: parameter_declaration  */
#line 834 "bison.y"
                                {end_decl();}
#line 3668 "bison.tab.c"
    break;

  case 315: /* parameter_list: parameter_list comma parameter_declaration  */
#line 835 "bison.y"
                                                     {end_decl();}
#line 3674 "bison.tab.c"
    break;

  case 316: /* parameter_list: parameter_list error parameter_declaration  */
#line 836 "bison.y"
                                                     {yyerrok;}
#line 3680 "bison.tab.c"
    break;

  case 322: /* identifier_list: identifier_list error identifier  */
#line 848 "bison.y"
                                           {yyerrok;}
#line 3686 "bison.tab.c"
    break;

  case 325: /* type_name: specifier_qualifier_list error abstract_declarator  */
#line 854 "bison.y"
                                                             {yyerrok;}
#line 3692 "bison.tab.c"
    break;

  case 350: /* direct_abstract_declarator: direct_abstract_declarator leftparen error rightparen  */
#line 885 "bison.y"
                                                                {yyerrok;}
#line 3698 "bison.tab.c"
    break;

  case 358: /* initializer_list: initializer_list error initializer  */
#line 899 "bison.y"
                                             {yyerrok;}
#line 3704 "bison.tab.c"
    break;

  case 362: /* designator_list: designator_list error designator  */
#line 909 "bison.y"
                                           {yyerrok;}
#line 3710 "bison.tab.c"
    break;

  case 379: /* block_item_list: block_item_list error block_item  */
#line 944 "bison.y"
                                           {yyerrok;}
#line 3716 "bison.tab.c"
    break;

  case 384: /* expression_statement: expression error semmicolon  */
#line 955 "bison.y"
                                      {yyerrok;}
#line 3722 "bison.tab.c"
    break;

  case 388: /* selection_statement: if leftparen error rightparen statement  */
#line 962 "bison.y"
                                                  {yyerrok;}
#line 3728 "bison.tab.c"
    break;

  case 389: /* selection_statement: if leftparen error rightparen statement else statement  */
#line 963 "bison.y"
                                                                 {yyerrok;}
#line 3734 "bison.tab.c"
    break;

  case 390: /* selection_statement: switch leftparen error rightparen  */
#line 964 "bison.y"
                                            {yyerrok;}
#line 3740 "bison.tab.c"
    break;

  case 397: /* iteration_statement: for leftparen error rightparen statement rightbracket  */
#line 974 "bison.y"
                                                                {yyerrok;}
#line 3746 "bison.tab.c"
    break;

  case 398: /* iteration_statement: while leftparen error rightparen  */
#line 975 "bison.y"
                                           {yyerrok;}
#line 3752 "bison.tab.c"
    break;

  case 404: /* jump_statement: return error rightbracket  */
#line 984 "bison.y"
                                    {yyerrok;}
#line 3758 "bison.tab.c"
    break;

  case 407: /* translation_unit: translation_unit error rightbracket  */
#line 990 "bison.y"
                                              {yyerrok;}
#line 3764 "bison.tab.c"
    break;

  case 408: /* external_declaration: function_definition  */
#line 994 "bison.y"
                              {end_decl();}
#line 3770 "bison.tab.c"
    break;

  case 410: /* external_declaration: PREPROCESSING error external_declaration  */
#line 996 "bison.y"
                                                   {yyerrok;}
#line 3776 "bison.tab.c"
    break;


#line 3780 "bison.tab.c"

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

#line 1009 "bison.y"


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
