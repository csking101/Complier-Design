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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    LONG = 263,                    /* LONG  */
    SHORT = 264,                   /* SHORT  */
    UNSIGNED = 265,                /* UNSIGNED  */
    SIGNED = 266,                  /* SIGNED  */
    CONST = 267,                   /* CONST  */
    STRUCT = 268,                  /* STRUCT  */
    ENUM = 269,                    /* ENUM  */
    UNION = 270,                   /* UNION  */
    RETURN = 271,                  /* RETURN  */
    MAIN = 272,                    /* MAIN  */
    VOID = 273,                    /* VOID  */
    WHILE = 274,                   /* WHILE  */
    FOR = 275,                     /* FOR  */
    DO = 276,                      /* DO  */
    BREAK = 277,                   /* BREAK  */
    ENDIF = 278,                   /* ENDIF  */
    SWITCH = 279,                  /* SWITCH  */
    CASE = 280,                    /* CASE  */
    DEFAULT = 281,                 /* DEFAULT  */
    SPREAD = 282,                  /* SPREAD  */
    AUTO = 283,                    /* AUTO  */
    STATIC = 284,                  /* STATIC  */
    REGISTER = 285,                /* REGISTER  */
    EXTERN = 286,                  /* EXTERN  */
    identifier = 287,              /* identifier  */
    integer_constant = 288,        /* integer_constant  */
    string_constant = 289,         /* string_constant  */
    float_constant = 290,          /* float_constant  */
    character_constant = 291,      /* character_constant  */
    ELSE = 292,                    /* ELSE  */
    leftshift_assignment_operator = 293, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 294, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 295, /* XOR_assignment_operator  */
    OR_assignment_operator = 296,  /* OR_assignment_operator  */
    AND_assignment_operator = 297, /* AND_assignment_operator  */
    modulo_assignment_operator = 298, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 299, /* multiplication_assignment_operator  */
    division_assignment_operator = 300, /* division_assignment_operator  */
    addition_assignment_operator = 301, /* addition_assignment_operator  */
    subtraction_assignment_operator = 302, /* subtraction_assignment_operator  */
    assignment_operator = 303,     /* assignment_operator  */
    OR_operator = 304,             /* OR_operator  */
    AND_operator = 305,            /* AND_operator  */
    pipe_operator = 306,           /* pipe_operator  */
    caret_operator = 307,          /* caret_operator  */
    amp_operator = 308,            /* amp_operator  */
    equality_operator = 309,       /* equality_operator  */
    inequality_operator = 310,     /* inequality_operator  */
    lessthan_assignment_operator = 311, /* lessthan_assignment_operator  */
    lessthan_operator = 312,       /* lessthan_operator  */
    greaterthan_assignment_operator = 313, /* greaterthan_assignment_operator  */
    greaterthan_operator = 314,    /* greaterthan_operator  */
    leftshift_operator = 315,      /* leftshift_operator  */
    rightshift_operator = 316,     /* rightshift_operator  */
    add_operator = 317,            /* add_operator  */
    subtract_operator = 318,       /* subtract_operator  */
    multiplication_operator = 319, /* multiplication_operator  */
    division_operator = 320,       /* division_operator  */
    modulo_operator = 321,         /* modulo_operator  */
    SIZEOF = 322,                  /* SIZEOF  */
    tilde_operator = 323,          /* tilde_operator  */
    exclamation_operator = 324,    /* exclamation_operator  */
    increment_operator = 325,      /* increment_operator  */
    decrement_operator = 326       /* decrement_operator  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define UNSIGNED 265
#define SIGNED 266
#define CONST 267
#define STRUCT 268
#define ENUM 269
#define UNION 270
#define RETURN 271
#define MAIN 272
#define VOID 273
#define WHILE 274
#define FOR 275
#define DO 276
#define BREAK 277
#define ENDIF 278
#define SWITCH 279
#define CASE 280
#define DEFAULT 281
#define SPREAD 282
#define AUTO 283
#define STATIC 284
#define REGISTER 285
#define EXTERN 286
#define identifier 287
#define integer_constant 288
#define string_constant 289
#define float_constant 290
#define character_constant 291
#define ELSE 292
#define leftshift_assignment_operator 293
#define rightshift_assignment_operator 294
#define XOR_assignment_operator 295
#define OR_assignment_operator 296
#define AND_assignment_operator 297
#define modulo_assignment_operator 298
#define multiplication_assignment_operator 299
#define division_assignment_operator 300
#define addition_assignment_operator 301
#define subtraction_assignment_operator 302
#define assignment_operator 303
#define OR_operator 304
#define AND_operator 305
#define pipe_operator 306
#define caret_operator 307
#define amp_operator 308
#define equality_operator 309
#define inequality_operator 310
#define lessthan_assignment_operator 311
#define lessthan_operator 312
#define greaterthan_assignment_operator 313
#define greaterthan_operator 314
#define leftshift_operator 315
#define rightshift_operator 316
#define add_operator 317
#define subtract_operator 318
#define multiplication_operator 319
#define division_operator 320
#define modulo_operator 321
#define SIZEOF 322
#define tilde_operator 323
#define exclamation_operator 324
#define increment_operator 325
#define decrement_operator 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
