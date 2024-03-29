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
    CONTINUE = 285,                /* CONTINUE  */
    DEFAULT = 286,                 /* DEFAULT  */
    SPREAD = 287,                  /* SPREAD  */
    AUTO = 288,                    /* AUTO  */
    STATIC = 289,                  /* STATIC  */
    REGISTER = 290,                /* REGISTER  */
    EXTERN = 291,                  /* EXTERN  */
    VOLATILE = 292,                /* VOLATILE  */
    INLINE = 293,                  /* INLINE  */
    PRINTF = 294,                  /* PRINTF  */
    SCANF = 295,                   /* SCANF  */
    identifier = 296,              /* identifier  */
    integer_constant = 297,        /* integer_constant  */
    string_constant = 298,         /* string_constant  */
    float_constant = 299,          /* float_constant  */
    character_constant = 300,      /* character_constant  */
    ELSE = 301,                    /* ELSE  */
    leftshift_assignment_operator = 302, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 303, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 304, /* XOR_assignment_operator  */
    OR_assignment_operator = 305,  /* OR_assignment_operator  */
    AND_assignment_operator = 306, /* AND_assignment_operator  */
    modulo_assignment_operator = 307, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 308, /* multiplication_assignment_operator  */
    division_assignment_operator = 309, /* division_assignment_operator  */
    addition_assignment_operator = 310, /* addition_assignment_operator  */
    subtraction_assignment_operator = 311, /* subtraction_assignment_operator  */
    assignment_operator = 312,     /* assignment_operator  */
    OR_operator = 313,             /* OR_operator  */
    AND_operator = 314,            /* AND_operator  */
    pipe_operator = 315,           /* pipe_operator  */
    caret_operator = 316,          /* caret_operator  */
    amp_operator = 317,            /* amp_operator  */
    equality_operator = 318,       /* equality_operator  */
    inequality_operator = 319,     /* inequality_operator  */
    lessthan_assignment_operator = 320, /* lessthan_assignment_operator  */
    lessthan_operator = 321,       /* lessthan_operator  */
    greaterthan_assignment_operator = 322, /* greaterthan_assignment_operator  */
    greaterthan_operator = 323,    /* greaterthan_operator  */
    leftshift_operator = 324,      /* leftshift_operator  */
    rightshift_operator = 325,     /* rightshift_operator  */
    add_operator = 326,            /* add_operator  */
    subtract_operator = 327,       /* subtract_operator  */
    multiplication_operator = 328, /* multiplication_operator  */
    division_operator = 329,       /* division_operator  */
    modulo_operator = 330,         /* modulo_operator  */
    SIZEOF = 331,                  /* SIZEOF  */
    tilde_operator = 332,          /* tilde_operator  */
    exclamation_operator = 333,    /* exclamation_operator  */
    increment_operator = 334,      /* increment_operator  */
    decrement_operator = 335       /* decrement_operator  */
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
#define CONTINUE 285
#define DEFAULT 286
#define SPREAD 287
#define AUTO 288
#define STATIC 289
#define REGISTER 290
#define EXTERN 291
#define VOLATILE 292
#define INLINE 293
#define PRINTF 294
#define SCANF 295
#define identifier 296
#define integer_constant 297
#define string_constant 298
#define float_constant 299
#define character_constant 300
#define ELSE 301
#define leftshift_assignment_operator 302
#define rightshift_assignment_operator 303
#define XOR_assignment_operator 304
#define OR_assignment_operator 305
#define AND_assignment_operator 306
#define modulo_assignment_operator 307
#define multiplication_assignment_operator 308
#define division_assignment_operator 309
#define addition_assignment_operator 310
#define subtraction_assignment_operator 311
#define assignment_operator 312
#define OR_operator 313
#define AND_operator 314
#define pipe_operator 315
#define caret_operator 316
#define amp_operator 317
#define equality_operator 318
#define inequality_operator 319
#define lessthan_assignment_operator 320
#define lessthan_operator 321
#define greaterthan_assignment_operator 322
#define greaterthan_operator 323
#define leftshift_operator 324
#define rightshift_operator 325
#define add_operator 326
#define subtract_operator 327
#define multiplication_operator 328
#define division_operator 329
#define modulo_operator 330
#define SIZEOF 331
#define tilde_operator 332
#define exclamation_operator 333
#define increment_operator 334
#define decrement_operator 335

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
