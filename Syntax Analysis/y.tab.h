/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    INT = 259,
    CHAR = 260,
    FLOAT = 261,
    DOUBLE = 262,
    LONG = 263,
    SHORT = 264,
    SIGNED = 265,
    UNSIGNED = 266,
    CONST = 267,
    STRUCT = 268,
    ENUM = 269,
    UNION = 270,
    RETURN = 271,
    MAIN = 272,
    VOID = 273,
    WHILE = 274,
    FOR = 275,
    DO = 276,
    BREAK = 277,
    ENDIF = 278,
    SWITCH = 279,
    CASE = 280,
    DEFAULT = 281,
    SPREAD = 282,
    AUTO = 283,
    STATIC = 284,
    REGISTER = 285,
    EXTERN = 286,
    identifier = 287,
    integer_constant = 288,
    string_constant = 289,
    float_constant = 290,
    character_constant = 291,
    ELSE = 292,
    leftshift_assignment_operator = 293,
    rightshift_assignment_operator = 294,
    XOR_assignment_operator = 295,
    OR_assignment_operator = 296,
    AND_assignment_operator = 297,
    modulo_assignment_operator = 298,
    multiplication_assignment_operator = 299,
    division_assignment_operator = 300,
    addition_assignment_operator = 301,
    subtraction_assignment_operator = 302,
    assignment_operator = 303,
    OR_operator = 304,
    AND_operator = 305,
    pipe_operator = 306,
    caret_operator = 307,
    amp_operator = 308,
    equality_operator = 309,
    inequality_operator = 310,
    lessthan_assignment_operator = 311,
    lessthan_operator = 312,
    greaterthan_assignment_operator = 313,
    greaterthan_operator = 314,
    leftshift_operator = 315,
    rightshift_operator = 316,
    add_operator = 317,
    subtract_operator = 318,
    multiplication_operator = 319,
    division_operator = 320,
    modulo_operator = 321,
    SIZEOF = 322,
    tilde_operator = 323,
    exclamation_operator = 324,
    increment_operator = 325,
    decrement_operator = 326
  };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
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
