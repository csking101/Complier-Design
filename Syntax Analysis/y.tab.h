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
    SIGNED = 265,                  /* SIGNED  */
    UNSIGNED = 266,                /* UNSIGNED  */
    INTs = 267,                    /* INTs  */
    FLOATs = 268,                  /* FLOATs  */
    CHARs = 269,                   /* CHARs  */
    DOUBLEs = 270,                 /* DOUBLEs  */
    CONST = 271,                   /* CONST  */
    STRUCT = 272,                  /* STRUCT  */
    ENUM = 273,                    /* ENUM  */
    UNION = 274,                   /* UNION  */
    RETURN = 275,                  /* RETURN  */
    MAIN = 276,                    /* MAIN  */
    VOID = 277,                    /* VOID  */
    WHILE = 278,                   /* WHILE  */
    FOR = 279,                     /* FOR  */
    DO = 280,                      /* DO  */
    BREAK = 281,                   /* BREAK  */
    ENDIF = 282,                   /* ENDIF  */
    SWITCH = 283,                  /* SWITCH  */
    CASE = 284,                    /* CASE  */
    DEFAULT = 285,                 /* DEFAULT  */
    SPREAD = 286,                  /* SPREAD  */
    AUTO = 287,                    /* AUTO  */
    STATIC = 288,                  /* STATIC  */
    REGISTER = 289,                /* REGISTER  */
    EXTERN = 290,                  /* EXTERN  */
    VOLATILE = 291,                /* VOLATILE  */
    INLINE = 292,                  /* INLINE  */
    PRINTF = 293,                  /* PRINTF  */
    SCANF = 294,                   /* SCANF  */
    identifier = 295,              /* identifier  */
    integer_constant = 296,        /* integer_constant  */
    string_constant = 297,         /* string_constant  */
    float_constant = 298,          /* float_constant  */
    character_constant = 299,      /* character_constant  */
    ELSE = 300,                    /* ELSE  */
    leftshift_assignment_operator = 301, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 302, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 303, /* XOR_assignment_operator  */
    OR_assignment_operator = 304,  /* OR_assignment_operator  */
    AND_assignment_operator = 305, /* AND_assignment_operator  */
    modulo_assignment_operator = 306, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 307, /* multiplication_assignment_operator  */
    division_assignment_operator = 308, /* division_assignment_operator  */
    addition_assignment_operator = 309, /* addition_assignment_operator  */
    subtraction_assignment_operator = 310, /* subtraction_assignment_operator  */
    assignment_operator = 311,     /* assignment_operator  */
    OR_operator = 312,             /* OR_operator  */
    AND_operator = 313,            /* AND_operator  */
    pipe_operator = 314,           /* pipe_operator  */
    caret_operator = 315,          /* caret_operator  */
    amp_operator = 316,            /* amp_operator  */
    equality_operator = 317,       /* equality_operator  */
    inequality_operator = 318,     /* inequality_operator  */
    lessthan_assignment_operator = 319, /* lessthan_assignment_operator  */
    lessthan_operator = 320,       /* lessthan_operator  */
    greaterthan_assignment_operator = 321, /* greaterthan_assignment_operator  */
    greaterthan_operator = 322,    /* greaterthan_operator  */
    leftshift_operator = 323,      /* leftshift_operator  */
    rightshift_operator = 324,     /* rightshift_operator  */
    add_operator = 325,            /* add_operator  */
    subtract_operator = 326,       /* subtract_operator  */
    multiplication_operator = 327, /* multiplication_operator  */
    division_operator = 328,       /* division_operator  */
    modulo_operator = 329,         /* modulo_operator  */
    SIZEOF = 330,                  /* SIZEOF  */
    tilde_operator = 331,          /* tilde_operator  */
    exclamation_operator = 332,    /* exclamation_operator  */
    increment_operator = 333,      /* increment_operator  */
    decrement_operator = 334       /* decrement_operator  */
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
#define SIGNED 265
#define UNSIGNED 266
#define INTs 267
#define FLOATs 268
#define CHARs 269
#define DOUBLEs 270
#define CONST 271
#define STRUCT 272
#define ENUM 273
#define UNION 274
#define RETURN 275
#define MAIN 276
#define VOID 277
#define WHILE 278
#define FOR 279
#define DO 280
#define BREAK 281
#define ENDIF 282
#define SWITCH 283
#define CASE 284
#define DEFAULT 285
#define SPREAD 286
#define AUTO 287
#define STATIC 288
#define REGISTER 289
#define EXTERN 290
#define VOLATILE 291
#define INLINE 292
#define PRINTF 293
#define SCANF 294
#define identifier 295
#define integer_constant 296
#define string_constant 297
#define float_constant 298
#define character_constant 299
#define ELSE 300
#define leftshift_assignment_operator 301
#define rightshift_assignment_operator 302
#define XOR_assignment_operator 303
#define OR_assignment_operator 304
#define AND_assignment_operator 305
#define modulo_assignment_operator 306
#define multiplication_assignment_operator 307
#define division_assignment_operator 308
#define addition_assignment_operator 309
#define subtraction_assignment_operator 310
#define assignment_operator 311
#define OR_operator 312
#define AND_operator 313
#define pipe_operator 314
#define caret_operator 315
#define amp_operator 316
#define equality_operator 317
#define inequality_operator 318
#define lessthan_assignment_operator 319
#define lessthan_operator 320
#define greaterthan_assignment_operator 321
#define greaterthan_operator 322
#define leftshift_operator 323
#define rightshift_operator 324
#define add_operator 325
#define subtract_operator 326
#define multiplication_operator 327
#define division_operator 328
#define modulo_operator 329
#define SIZEOF 330
#define tilde_operator 331
#define exclamation_operator 332
#define increment_operator 333
#define decrement_operator 334

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
