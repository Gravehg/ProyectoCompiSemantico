/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PREPROCESSING = 258,           /* PREPROCESSING  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    I_CONSTANT = 260,              /* I_CONSTANT  */
    F_CONSTANT = 261,              /* F_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    FUNC_NAME = 263,               /* FUNC_NAME  */
    SIZEOF = 264,                  /* SIZEOF  */
    PTR_OP = 265,                  /* PTR_OP  */
    INC_OP = 266,                  /* INC_OP  */
    DEC_OP = 267,                  /* DEC_OP  */
    LEFT_OP = 268,                 /* LEFT_OP  */
    RIGHT_OP = 269,                /* RIGHT_OP  */
    LE_OP = 270,                   /* LE_OP  */
    GE_OP = 271,                   /* GE_OP  */
    EQ_OP = 272,                   /* EQ_OP  */
    NE_OP = 273,                   /* NE_OP  */
    AND_OP = 274,                  /* AND_OP  */
    OR_OP = 275,                   /* OR_OP  */
    MUL_ASSIGN = 276,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 277,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 278,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 279,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 280,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 281,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 282,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 283,              /* AND_ASSIGN  */
    XOR_ASSIGN = 284,              /* XOR_ASSIGN  */
    OR_ASSIGN = 285,               /* OR_ASSIGN  */
    TYPEDEF_NAME = 286,            /* TYPEDEF_NAME  */
    ENUMERATION_CONSTANT = 287,    /* ENUMERATION_CONSTANT  */
    SEMMICOLON = 288,              /* SEMMICOLON  */
    LEFTBRACKET = 289,             /* LEFTBRACKET  */
    RIGHTBRACKET = 290,            /* RIGHTBRACKET  */
    LEFTPAREN = 291,               /* LEFTPAREN  */
    RIGHTPAREN = 292,              /* RIGHTPAREN  */
    COMMA = 293,                   /* COMMA  */
    TWOPOINTS = 294,               /* TWOPOINTS  */
    EQUALS = 295,                  /* EQUALS  */
    LEFTSQUAREBRACKET = 296,       /* LEFTSQUAREBRACKET  */
    RIGHTSQUAREBRACKET = 297,      /* RIGHTSQUAREBRACKET  */
    POINT = 298,                   /* POINT  */
    AND = 299,                     /* AND  */
    EXCLAMATION = 300,             /* EXCLAMATION  */
    NOT = 301,                     /* NOT  */
    MINUS = 302,                   /* MINUS  */
    PLUS = 303,                    /* PLUS  */
    ASTERISK = 304,                /* ASTERISK  */
    DIVITION = 305,                /* DIVITION  */
    MODULUS = 306,                 /* MODULUS  */
    LEFTLESS = 307,                /* LEFTLESS  */
    RIGHTMORE = 308,               /* RIGHTMORE  */
    EXPONENTATION = 309,           /* EXPONENTATION  */
    OR = 310,                      /* OR  */
    TERNARYIF = 311,               /* TERNARYIF  */
    TYPEDEF = 312,                 /* TYPEDEF  */
    EXTERN = 313,                  /* EXTERN  */
    STATIC = 314,                  /* STATIC  */
    AUTO = 315,                    /* AUTO  */
    REGISTER = 316,                /* REGISTER  */
    INLINE = 317,                  /* INLINE  */
    CONST = 318,                   /* CONST  */
    RESTRICT = 319,                /* RESTRICT  */
    VOLATILE = 320,                /* VOLATILE  */
    BOOL = 321,                    /* BOOL  */
    CHAR = 322,                    /* CHAR  */
    SHORT = 323,                   /* SHORT  */
    INT = 324,                     /* INT  */
    LONG = 325,                    /* LONG  */
    SIGNED = 326,                  /* SIGNED  */
    UNSIGNED = 327,                /* UNSIGNED  */
    FLOAT = 328,                   /* FLOAT  */
    DOUBLE = 329,                  /* DOUBLE  */
    VOID = 330,                    /* VOID  */
    COMPLEX = 331,                 /* COMPLEX  */
    IMAGINARY = 332,               /* IMAGINARY  */
    STRUCT = 333,                  /* STRUCT  */
    UNION = 334,                   /* UNION  */
    ENUM = 335,                    /* ENUM  */
    ELLIPSIS = 336,                /* ELLIPSIS  */
    CASE = 337,                    /* CASE  */
    DEFAULT = 338,                 /* DEFAULT  */
    IF = 339,                      /* IF  */
    ELSE = 340,                    /* ELSE  */
    SWITCH = 341,                  /* SWITCH  */
    WHILE = 342,                   /* WHILE  */
    DO = 343,                      /* DO  */
    FOR = 344,                     /* FOR  */
    GOTO = 345,                    /* GOTO  */
    CONTINUE = 346,                /* CONTINUE  */
    BREAK = 347,                   /* BREAK  */
    RETURN = 348,                  /* RETURN  */
    ALIGNAS = 349,                 /* ALIGNAS  */
    ALIGNOF = 350,                 /* ALIGNOF  */
    ATOMIC = 351,                  /* ATOMIC  */
    GENERIC = 352,                 /* GENERIC  */
    NORETURN = 353,                /* NORETURN  */
    STATIC_ASSERT = 354,           /* STATIC_ASSERT  */
    THREAD_LOCAL = 355,            /* THREAD_LOCAL  */
    LOWER_THAN_ELSE = 356          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "bison.y"

    int intValue; // Puedes cambiar int a tu tipo de dato deseado
    char* stringValue; // Puedes cambiar char* a tu tipo de dato deseado
    // Agrega aquí otros tipos si es necesario

#line 171 "bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
