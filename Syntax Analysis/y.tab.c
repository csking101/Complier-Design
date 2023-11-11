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
#line 1 "parser.y"

	void yyerror(char* s);
	int yylex();

	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"

	void ins();
	void insV();
	
	int flag=0;

	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];


#line 91 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_INTs = 12,                      /* INTs  */
  YYSYMBOL_FLOATs = 13,                    /* FLOATs  */
  YYSYMBOL_CHARs = 14,                     /* CHARs  */
  YYSYMBOL_DOUBLEs = 15,                   /* DOUBLEs  */
  YYSYMBOL_CONST = 16,                     /* CONST  */
  YYSYMBOL_STRUCT = 17,                    /* STRUCT  */
  YYSYMBOL_ENUM = 18,                      /* ENUM  */
  YYSYMBOL_UNION = 19,                     /* UNION  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_MAIN = 21,                      /* MAIN  */
  YYSYMBOL_VOID = 22,                      /* VOID  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_ENDIF = 27,                     /* ENDIF  */
  YYSYMBOL_SWITCH = 28,                    /* SWITCH  */
  YYSYMBOL_CASE = 29,                      /* CASE  */
  YYSYMBOL_CONTINUE = 30,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_SPREAD = 32,                    /* SPREAD  */
  YYSYMBOL_AUTO = 33,                      /* AUTO  */
  YYSYMBOL_STATIC = 34,                    /* STATIC  */
  YYSYMBOL_REGISTER = 35,                  /* REGISTER  */
  YYSYMBOL_EXTERN = 36,                    /* EXTERN  */
  YYSYMBOL_VOLATILE = 37,                  /* VOLATILE  */
  YYSYMBOL_INLINE = 38,                    /* INLINE  */
  YYSYMBOL_PRINTF = 39,                    /* PRINTF  */
  YYSYMBOL_SCANF = 40,                     /* SCANF  */
  YYSYMBOL_identifier = 41,                /* identifier  */
  YYSYMBOL_integer_constant = 42,          /* integer_constant  */
  YYSYMBOL_string_constant = 43,           /* string_constant  */
  YYSYMBOL_float_constant = 44,            /* float_constant  */
  YYSYMBOL_character_constant = 45,        /* character_constant  */
  YYSYMBOL_ELSE = 46,                      /* ELSE  */
  YYSYMBOL_leftshift_assignment_operator = 47, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 48, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 49,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 50,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 51,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 52, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 53, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 54, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 55, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 56, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 57,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 58,               /* OR_operator  */
  YYSYMBOL_AND_operator = 59,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 60,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 61,            /* caret_operator  */
  YYSYMBOL_amp_operator = 62,              /* amp_operator  */
  YYSYMBOL_equality_operator = 63,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 64,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 65, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 66,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 67, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 68,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 69,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 70,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 71,              /* add_operator  */
  YYSYMBOL_subtract_operator = 72,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 73,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 74,         /* division_operator  */
  YYSYMBOL_modulo_operator = 75,           /* modulo_operator  */
  YYSYMBOL_SIZEOF = 76,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 77,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 78,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 79,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 80,        /* decrement_operator  */
  YYSYMBOL_81_ = 81,                       /* ';'  */
  YYSYMBOL_82_ = 82,                       /* ','  */
  YYSYMBOL_83_ = 83,                       /* '['  */
  YYSYMBOL_84_ = 84,                       /* ']'  */
  YYSYMBOL_85_ = 85,                       /* '{'  */
  YYSYMBOL_86_ = 86,                       /* '}'  */
  YYSYMBOL_87_ = 87,                       /* '('  */
  YYSYMBOL_88_ = 88,                       /* ')'  */
  YYSYMBOL_89_ = 89,                       /* '.'  */
  YYSYMBOL_90_ = 90,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_program = 92,                   /* program  */
  YYSYMBOL_declaration_list = 93,          /* declaration_list  */
  YYSYMBOL_D = 94,                         /* D  */
  YYSYMBOL_declaration = 95,               /* declaration  */
  YYSYMBOL_variable_declaration = 96,      /* variable_declaration  */
  YYSYMBOL_storage_classes = 97,           /* storage_classes  */
  YYSYMBOL_variable_declaration_list = 98, /* variable_declaration_list  */
  YYSYMBOL_V = 99,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 100, /* variable_declaration_identifier  */
  YYSYMBOL_101_1 = 101,                    /* $@1  */
  YYSYMBOL_vdi = 102,                      /* vdi  */
  YYSYMBOL_identifier_array_type = 103,    /* identifier_array_type  */
  YYSYMBOL_initilization_params = 104,     /* initilization_params  */
  YYSYMBOL_initilization = 105,            /* initilization  */
  YYSYMBOL_type_specifier = 106,           /* type_specifier  */
  YYSYMBOL_star_specifier = 107,           /* star_specifier  */
  YYSYMBOL_unsigned_grammar = 108,         /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 109,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 110,             /* long_grammar  */
  YYSYMBOL_short_grammar = 111,            /* short_grammar  */
  YYSYMBOL_structure_definition = 112,     /* structure_definition  */
  YYSYMBOL_113_2 = 113,                    /* $@2  */
  YYSYMBOL_V1 = 114,                       /* V1  */
  YYSYMBOL_structure_declaration = 115,    /* structure_declaration  */
  YYSYMBOL_struct_or_union = 116,          /* struct_or_union  */
  YYSYMBOL_function_declaration = 117,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 118, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 119, /* function_declaration_param_statement  */
  YYSYMBOL_params = 120,                   /* params  */
  YYSYMBOL_parameters_list = 121,          /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 122, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 123, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 124,         /* param_identifier  */
  YYSYMBOL_125_3 = 125,                    /* $@3  */
  YYSYMBOL_param_identifier_breakup = 126, /* param_identifier_breakup  */
  YYSYMBOL_statement = 127,                /* statement  */
  YYSYMBOL_printf_scanf_statements = 128,  /* printf_scanf_statements  */
  YYSYMBOL_printf_statement = 129,         /* printf_statement  */
  YYSYMBOL_scanf_statement = 130,          /* scanf_statement  */
  YYSYMBOL_printf_parameters = 131,        /* printf_parameters  */
  YYSYMBOL_scanf_parameters = 132,         /* scanf_parameters  */
  YYSYMBOL_compound_statement = 133,       /* compound_statement  */
  YYSYMBOL_statment_list = 134,            /* statment_list  */
  YYSYMBOL_expression_statment = 135,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 136,   /* conditional_statements  */
  YYSYMBOL_conditional_statements_breakup = 137, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 138,     /* iterative_statements  */
  YYSYMBOL_return_statement = 139,         /* return_statement  */
  YYSYMBOL_return_statement_breakup = 140, /* return_statement_breakup  */
  YYSYMBOL_break_statement = 141,          /* break_statement  */
  YYSYMBOL_string_initilization = 142,     /* string_initilization  */
  YYSYMBOL_array_initialization = 143,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 144,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 145, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 146,               /* expression  */
  YYSYMBOL_expression_breakup = 147,       /* expression_breakup  */
  YYSYMBOL_simple_expression = 148,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 149, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 150,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 151,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 152, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 153,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 154, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 155,     /* relational_operators  */
  YYSYMBOL_sum_expression = 156,           /* sum_expression  */
  YYSYMBOL_sum_operators = 157,            /* sum_operators  */
  YYSYMBOL_term = 158,                     /* term  */
  YYSYMBOL_MULOP = 159,                    /* MULOP  */
  YYSYMBOL_factor = 160,                   /* factor  */
  YYSYMBOL_mutable = 161,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 162,          /* mutable_breakup  */
  YYSYMBOL_immutable = 163,                /* immutable  */
  YYSYMBOL_call = 164,                     /* call  */
  YYSYMBOL_arguments = 165,                /* arguments  */
  YYSYMBOL_arguments_list = 166,           /* arguments_list  */
  YYSYMBOL_A = 167,                        /* A  */
  YYSYMBOL_constant = 168,                 /* constant  */
  YYSYMBOL_enum_declaration = 169,         /* enum_declaration  */
  YYSYMBOL_enum_list = 170,                /* enum_list  */
  YYSYMBOL_enumerator = 171,               /* enumerator  */
  YYSYMBOL_switch_case = 172,              /* switch_case  */
  YYSYMBOL_case_list = 173,                /* case_list  */
  YYSYMBOL_case_entry = 174                /* case_entry  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  187
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   335


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
      87,    88,     2,     2,    82,     2,    89,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,    81,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,    86,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    68,    68,    71,    74,    75,    78,    79,    80,    81,
      84,    85,    86,    87,    88,    91,    91,    91,    91,    91,
      91,    94,    97,    98,   101,   101,   103,   103,   106,   107,
     110,   111,   114,   115,   116,   119,   119,   119,   119,   119,
     120,   121,   122,   123,   124,   127,   127,   127,   127,   130,
     130,   130,   130,   133,   133,   133,   133,   136,   136,   139,
     139,   142,   142,   144,   144,   147,   150,   151,   155,   158,
     161,   164,   164,   167,   170,   173,   174,   177,   177,   180,
     181,   184,   184,   185,   185,   186,   186,   187,   188,   189,
     192,   193,   197,   200,   203,   204,   207,   208,   209,   212,
     215,   216,   219,   220,   223,   226,   227,   230,   231,   232,
     233,   236,   239,   240,   243,   246,   249,   252,   255,   256,
     259,   260,   261,   264,   265,   266,   267,   268,   269,   270,
     271,   274,   277,   277,   280,   283,   284,   287,   288,   291,
     294,   295,   298,   298,   298,   299,   299,   299,   302,   303,
     306,   307,   310,   311,   314,   314,   314,   317,   317,   320,
     321,   324,   325,   328,   329,   329,   332,   335,   335,   338,
     341,   342,   345,   346,   347,   348,   351,   355,   356,   359,
     360,   364,   367,   368,   372,   373,   374,   375
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "INTs",
  "FLOATs", "CHARs", "DOUBLEs", "CONST", "STRUCT", "ENUM", "UNION",
  "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF",
  "SWITCH", "CASE", "CONTINUE", "DEFAULT", "SPREAD", "AUTO", "STATIC",
  "REGISTER", "EXTERN", "VOLATILE", "INLINE", "PRINTF", "SCANF",
  "identifier", "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "leftshift_assignment_operator",
  "rightshift_assignment_operator", "XOR_assignment_operator",
  "OR_assignment_operator", "AND_assignment_operator",
  "modulo_assignment_operator", "multiplication_assignment_operator",
  "division_assignment_operator", "addition_assignment_operator",
  "subtraction_assignment_operator", "assignment_operator", "OR_operator",
  "AND_operator", "pipe_operator", "caret_operator", "amp_operator",
  "equality_operator", "inequality_operator",
  "lessthan_assignment_operator", "lessthan_operator",
  "greaterthan_assignment_operator", "greaterthan_operator",
  "leftshift_operator", "rightshift_operator", "add_operator",
  "subtract_operator", "multiplication_operator", "division_operator",
  "modulo_operator", "SIZEOF", "tilde_operator", "exclamation_operator",
  "increment_operator", "decrement_operator", "';'", "','", "'['", "']'",
  "'{'", "'}'", "'('", "')'", "'.'", "':'", "$accept", "program",
  "declaration_list", "D", "declaration", "variable_declaration",
  "storage_classes", "variable_declaration_list", "V",
  "variable_declaration_identifier", "$@1", "vdi", "identifier_array_type",
  "initilization_params", "initilization", "type_specifier",
  "star_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "structure_definition", "$@2", "V1",
  "structure_declaration", "struct_or_union", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@3",
  "param_identifier_breakup", "statement", "printf_scanf_statements",
  "printf_statement", "scanf_statement", "printf_parameters",
  "scanf_parameters", "compound_statement", "statment_list",
  "expression_statment", "conditional_statements",
  "conditional_statements_breakup", "iterative_statements",
  "return_statement", "return_statement_breakup", "break_statement",
  "string_initilization", "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "expression_breakup",
  "simple_expression", "simple_expression_breakup", "and_expression",
  "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "mutable_breakup", "immutable", "call",
  "arguments", "arguments_list", "A", "constant", "enum_declaration",
  "enum_list", "enumerator", "switch_case", "case_list", "case_entry", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-274)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     320,  -274,  -274,  -274,  -274,    17,    34,    84,    93,  -274,
    -274,  -274,  -274,   409,  -274,    19,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,    72,  -274,   320,  -274,   390,    36,
    -274,  -274,     4,    41,  -274,   409,  -274,  -274,  -274,  -274,
    -274,  -274,    17,    34,  -274,  -274,    17,    34,  -274,    55,
      14,  -274,  -274,  -274,   409,    55,    21,    29,    35,  -274,
      55,    89,  -274,    37,  -274,  -274,  -274,  -274,  -274,  -274,
      53,    94,    55,    56,  -274,   -46,  -274,    55,  -274,  -274,
      51,  -274,  -274,    57,   236,  -274,    83,     1,  -274,    69,
    -274,    13,    -8,  -274,  -274,  -274,   355,    59,   409,  -274,
      64,     8,    67,    71,   236,    75,    73,    74,    77,    78,
    -274,  -274,  -274,  -274,    97,    79,  -274,   236,    13,  -274,
      55,   118,  -274,  -274,    86,    91,  -274,  -274,  -274,  -274,
    -274,  -274,    92,  -274,   104,   115,  -274,    81,    54,  -274,
     230,  -274,  -274,  -274,  -274,   134,    94,    96,  -274,  -274,
     107,   109,  -274,   355,   108,   111,  -274,  -274,    79,  -274,
    -274,   112,    13,   175,   173,  -274,   157,   159,   160,    13,
    -274,  -274,   -64,   236,   114,   116,    55,  -274,  -274,  -274,
      79,  -274,    79,  -274,  -274,  -274,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,    20,    20,  -274,  -274,  -274,    20,    13,
      13,    13,    13,    13,    13,  -274,  -274,    13,   164,  -274,
    -274,  -274,  -274,  -274,   109,   149,  -274,   126,  -274,   120,
    -274,   121,   129,    55,   124,   125,  -274,   -59,  -274,   -47,
     132,   127,  -274,  -274,  -274,  -274,   104,   115,    61,    54,
    -274,  -274,  -274,  -274,  -274,  -274,  -274,   133,  -274,   161,
     177,  -274,  -274,   236,   236,    79,   140,    79,   137,    13,
    -274,   -19,  -274,    13,  -274,  -274,  -274,  -274,  -274,    -7,
    -274,  -274,  -274,  -274,   178,  -274,   142,    79,   138,    -5,
    -274,  -274,   184,   132,   185,   236,  -274,    13,   147,   150,
       3,   143,   -17,   204,  -274,  -274,   152,   146,  -274,   148,
      13,  -274,   -23,   236,  -274,   209,   156,   185,  -274,  -274,
    -274,   166,     3,   236,  -274,   176,  -274,  -274,  -274,   198,
    -274,  -274,   236,  -274
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    35,    36,    37,    38,    58,    60,    56,    52,    45,
      47,    46,    48,     0,    66,     0,    67,    44,    15,    16,
      17,    18,    19,    20,     0,     2,     5,     6,     0,     0,
      39,     8,     0,     0,     7,    72,     9,    57,    40,    59,
      41,    53,    58,    60,    43,    49,    58,    60,    42,     0,
       0,     1,     4,     3,     0,     0,    24,     0,    23,    14,
      61,     0,    68,     0,    71,    54,    55,    50,    51,    24,
       0,     0,     0,     0,    69,    29,    10,     0,    21,    65,
       0,    77,    73,    76,     0,    13,   179,     0,   177,     0,
      11,     0,     0,    25,    26,    22,    64,    80,     0,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   159,
     172,   173,   174,   175,     0,     0,   103,   101,     0,    87,
       0,     0,    70,    89,     0,     0,    82,    81,    83,    84,
      85,    86,     0,   121,   133,   136,   138,   141,   149,   153,
     158,   157,   164,   165,    88,     0,     0,     0,    12,    27,
       0,    29,    28,    64,     0,     0,    78,    75,     0,   112,
     111,     0,     0,     0,     0,   114,     0,     0,     0,   168,
     122,   137,   158,   101,     0,     0,     0,    90,    91,   102,
       0,   131,     0,   134,   146,   147,   143,   145,   142,   144,
     150,   151,   139,     0,     0,   154,   155,   156,     0,     0,
       0,     0,     0,     0,     0,   129,   130,     0,     0,   120,
     160,   180,   178,   176,    29,     0,    63,     0,    79,     0,
     113,     0,     0,     0,     0,     0,    95,     0,    98,     0,
     171,     0,   167,   100,    99,   163,   133,   136,   140,   148,
     152,   128,   126,   127,   124,   125,   123,     0,   162,    34,
       0,    31,    62,     0,     0,     0,     0,     0,     0,     0,
      92,     0,    93,     0,   169,   166,   132,   135,   161,     0,
      30,    32,    33,   115,   106,   107,     0,     0,     0,   187,
      94,    96,     0,   171,     0,     0,   104,     0,     0,     0,
       0,     0,   187,     0,    97,   170,   119,     0,   105,     0,
       0,   110,     0,     0,   181,     0,     0,     0,   117,   116,
     108,     0,     0,     0,   186,     0,   182,   118,   109,     0,
     184,   183,     0,   185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -274,  -274,   237,  -274,  -274,     2,  -274,   -45,  -274,  -274,
    -274,  -274,  -143,  -274,  -274,     5,  -274,  -274,  -274,    48,
      62,  -274,  -274,   113,  -274,    16,  -274,  -274,  -274,  -274,
     167,  -274,  -274,  -274,  -274,  -274,   -84,  -274,  -274,  -274,
    -274,  -274,  -274,    95,  -274,  -274,  -274,  -274,  -274,  -274,
    -274,    18,  -274,   -18,  -274,   -88,  -274,  -151,    58,   110,
      60,  -109,  -274,  -274,  -274,    98,  -274,    99,  -274,   101,
    -114,  -274,  -274,  -274,  -274,  -274,     9,  -273,  -274,  -274,
     154,  -274,  -274,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    24,    25,    53,    26,   119,    28,    57,    78,    58,
      75,    93,    94,   152,   270,   120,    30,    48,    44,    38,
      40,    31,    80,   154,    32,   121,    34,    35,    62,    63,
      64,    82,    99,    83,    97,   156,   173,   123,   124,   125,
     227,   229,   126,   174,   127,   128,   286,   129,   130,   160,
     131,   251,   272,   297,   308,   132,   209,   133,   181,   134,
     183,   135,   136,   192,   193,   137,   194,   138,   198,   139,
     140,   210,   141,   142,   231,   232,   264,   143,    36,    87,
      88,   144,   292,   293
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     122,   172,    27,   149,    70,    29,   171,   219,   215,   312,
      73,    91,   290,   161,   291,    79,    33,   302,    49,   207,
     164,    37,   281,   259,   290,   208,   291,    89,    27,   260,
     175,    29,    95,    55,   150,   261,   273,    92,    39,   319,
      61,   262,    33,   282,   172,   110,   111,   112,   113,   109,
     110,   111,   112,   113,   109,   110,   111,   112,   113,    72,
      50,   109,   110,   111,   112,   113,   172,   313,   172,   304,
     114,   249,    51,   237,   221,   114,   151,    56,   284,   172,
     172,   230,    60,   146,   172,    59,   115,   147,    41,   159,
      65,   115,    42,    43,    67,   118,    69,    45,   153,    71,
     118,    46,    47,    61,   276,    66,   278,   118,    74,    68,
      76,   241,   242,   243,   244,   245,   246,    77,   222,   247,
     109,   110,   111,   112,   113,    84,   288,   195,   196,   197,
      81,    79,   190,   191,    85,    86,    96,    90,   170,    98,
     145,   172,   155,   172,   184,   185,   186,   187,   188,   189,
     148,   158,   190,   191,   162,   153,   165,   115,   163,   176,
     166,   167,   180,   172,   168,   169,   118,   177,   223,   274,
     275,   280,   178,   179,   182,   283,   211,   213,   256,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   214,    92,   220,   217,   218,   224,    17,   225,   299,
     234,   298,   226,   228,   235,   248,   250,   252,   253,   254,
     255,   257,   311,   258,   263,   265,    69,   268,   269,   314,
     273,   277,   279,   287,   285,   294,   289,   296,   300,   320,
     306,   301,   309,   303,   307,   315,   310,   316,   323,   100,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   318,    16,   101,   321,    17,   102,
     103,   104,   105,    52,   106,   157,   216,   271,   233,    18,
      19,    20,    21,    22,    23,   107,   108,   109,   110,   111,
     112,   113,   199,   200,   201,   202,   203,   204,   322,   317,
     236,   238,   295,   239,   266,     0,     0,   267,   114,   240,
     212,     0,   305,     0,     0,     0,     0,     0,     0,   205,
     206,     0,     0,   207,   115,     0,     0,   116,     0,   208,
       0,   117,     0,   118,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,    23,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     0,    16,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    19,
      20,    21,    22,    23,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    54,     0,     0,     0,
       0,     0,    17,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,     0,     0,
       0,    17
};

static const yytype_int16 yycheck[] =
{
      84,   115,     0,    91,    49,     0,   115,   158,   151,    32,
      55,    57,    29,   101,    31,    60,     0,   290,    13,    83,
     104,     4,    41,    82,    29,    89,    31,    72,    26,    88,
     118,    26,    77,    28,    42,    82,    43,    83,     4,   312,
      35,    88,    26,    62,   158,    42,    43,    44,    45,    41,
      42,    43,    44,    45,    41,    42,    43,    44,    45,    54,
      41,    41,    42,    43,    44,    45,   180,    90,   182,    86,
      62,   214,     0,   182,   162,    62,    84,    41,    85,   193,
     194,   169,    41,    82,   198,    81,    78,    86,     4,    81,
      42,    78,     8,     9,    46,    87,    41,     4,    96,    85,
      87,     8,     9,    98,   255,    43,   257,    87,    87,    47,
      81,   199,   200,   201,   202,   203,   204,    82,   163,   207,
      41,    42,    43,    44,    45,    88,   277,    73,    74,    75,
      41,   176,    71,    72,    81,    41,    85,    81,    41,    82,
      57,   255,    83,   257,    63,    64,    65,    66,    67,    68,
      81,    87,    71,    72,    87,   153,    81,    78,    87,    41,
      87,    87,    58,   277,    87,    87,    87,    81,   163,   253,
     254,   259,    81,    81,    59,   263,    42,    81,   223,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    84,    83,    81,    86,    84,    23,    22,    41,   287,
      86,   285,    43,    43,    88,    41,    57,    81,    88,    88,
      81,    87,   300,    88,    82,    88,    41,    84,    57,   303,
      43,    81,    85,    81,    46,    41,    88,    42,    81,   313,
      26,    81,    86,    90,    82,    26,    88,    81,   322,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    88,    19,    20,    81,    22,    23,
      24,    25,    26,    26,    28,    98,   153,   249,   173,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    52,    53,    54,    55,    56,    57,    90,   307,
     180,   193,   283,   194,   236,    -1,    -1,   237,    62,   198,
     146,    -1,   292,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    -1,    -1,    83,    78,    -1,    -1,    81,    -1,    89,
      -1,    85,    -1,    87,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    22,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    22,    33,    34,
      35,    36,    37,    38,    92,    93,    95,    96,    97,   106,
     107,   112,   115,   116,   117,   118,   169,     4,   110,     4,
     111,     4,     8,     9,   109,     4,     8,     9,   108,   106,
      41,     0,    93,    94,    16,   106,    41,    98,   100,    81,
      41,   106,   119,   120,   121,   110,   111,   110,   111,    41,
      98,    85,   106,    98,    87,   101,    81,    82,    99,    98,
     113,    41,   122,   124,    88,    81,    41,   170,   171,    98,
      81,    57,    83,   102,   103,    98,    85,   125,    82,   123,
       3,    20,    23,    24,    25,    26,    28,    39,    40,    41,
      42,    43,    44,    45,    62,    78,    81,    85,    87,    96,
     106,   116,   127,   128,   129,   130,   133,   135,   136,   138,
     139,   141,   146,   148,   150,   152,   153,   156,   158,   160,
     161,   163,   164,   168,   172,    57,    82,    86,    81,   146,
      42,    84,   104,    96,   114,    83,   126,   121,    87,    81,
     140,   146,    87,    87,   127,    81,    87,    87,    87,    87,
      41,   152,   161,   127,   134,   146,    41,    81,    81,    81,
      58,   149,    59,   151,    63,    64,    65,    66,    67,    68,
      71,    72,   154,   155,   157,    73,    74,    75,   159,    52,
      53,    54,    55,    56,    57,    79,    80,    83,    89,   147,
     162,    42,   171,    81,    84,   103,   114,    86,    84,   148,
      81,   146,    98,   106,    23,    41,    43,   131,    43,   132,
     146,   165,   166,   134,    86,    88,   150,   152,   156,   158,
     160,   146,   146,   146,   146,   146,   146,   146,    41,   103,
      57,   142,    81,    88,    88,    81,    98,    87,    88,    82,
      88,    82,    88,    82,   167,    88,   149,   151,    84,    57,
     105,   142,   143,    43,   127,   127,   148,    81,   148,    85,
     146,    41,    62,   146,    85,    46,   137,    81,   148,    88,
      29,    31,   173,   174,    41,   167,    42,   144,   127,   146,
      81,    81,   168,    90,    86,   174,    26,    82,   145,    86,
      88,   146,    32,    90,   127,    26,    81,   144,    88,   168,
     127,    81,    90,   127
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    98,    99,    99,   101,   100,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   107,   107,   108,
     108,   108,   108,   109,   109,   109,   109,   110,   110,   111,
     111,   113,   112,   114,   114,   115,   116,   116,   117,   118,
     119,   120,   120,   121,   122,   123,   123,   125,   124,   126,
     126,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   129,   130,   131,   131,   132,   132,   132,   133,
     134,   134,   135,   135,   136,   137,   137,   138,   138,   138,
     138,   139,   140,   140,   141,   142,   143,   144,   145,   145,
     146,   146,   146,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   149,   149,   150,   151,   151,   152,   152,   153,
     154,   154,   155,   155,   155,   155,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   163,   164,   165,   165,   166,
     167,   167,   168,   168,   168,   168,   169,   170,   170,   171,
     171,   172,   173,   173,   174,   174,   174,   174
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     1,
       3,     4,     5,     4,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     0,     3,     1,     2,     2,     0,
       4,     3,     1,     1,     0,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     1,     2,     2,     0,     1,     0,     1,
       0,     0,     7,     2,     0,     3,     1,     1,     2,     3,
       3,     1,     0,     2,     2,     2,     0,     0,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     4,     4,     3,     1,     3,     4,     1,     3,
       2,     0,     2,     1,     6,     2,     0,     5,     8,     9,
       7,     2,     1,     2,     2,     2,     4,     2,     2,     0,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     3,     0,     2,     3,     0,     2,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     3,     1,     1,     4,     1,     0,     2,
       3,     0,     1,     1,     1,     1,     6,     1,     3,     1,
       3,     7,     3,     4,     4,     6,     3,     0
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 24: /* $@1: %empty  */
#line 101 "parser.y"
                                     { ins(); }
#line 1743 "y.tab.c"
    break;

  case 61: /* $@2: %empty  */
#line 142 "parser.y"
                                                     { ins(); }
#line 1749 "y.tab.c"
    break;

  case 69: /* function_declaration_type: type_specifier identifier '('  */
#line 158 "parser.y"
                                                         { ins();}
#line 1755 "y.tab.c"
    break;

  case 77: /* $@3: %empty  */
#line 177 "parser.y"
                                     { ins(); }
#line 1761 "y.tab.c"
    break;

  case 115: /* string_initilization: assignment_operator string_constant  */
#line 246 "parser.y"
                                                              { insV(); }
#line 1767 "y.tab.c"
    break;

  case 172: /* constant: integer_constant  */
#line 345 "parser.y"
                                                { insV(); }
#line 1773 "y.tab.c"
    break;

  case 173: /* constant: string_constant  */
#line 346 "parser.y"
                                                { insV(); }
#line 1779 "y.tab.c"
    break;

  case 174: /* constant: float_constant  */
#line 347 "parser.y"
                                                { insV(); }
#line 1785 "y.tab.c"
    break;

  case 175: /* constant: character_constant  */
#line 348 "parser.y"
                                            { insV(); }
#line 1791 "y.tab.c"
    break;


#line 1795 "y.tab.c"

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
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 378 "parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	
	yyin = fopen(argv[1], "r");

	yyparse();

	if(flag == 0)
	{
		printf("Status: Parsing Complete - Valid" "\n");
		printf("%30s" "SYMBOL TABLE" "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" "CONSTANT TABLE" "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf("Status: Parsing Failed - Invalid\n");
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}
