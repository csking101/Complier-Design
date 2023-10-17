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


#line 88 "y.tab.c"

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
  YYSYMBOL_CONST = 12,                     /* CONST  */
  YYSYMBOL_STRUCT = 13,                    /* STRUCT  */
  YYSYMBOL_ENUM = 14,                      /* ENUM  */
  YYSYMBOL_UNION = 15,                     /* UNION  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_MAIN = 17,                      /* MAIN  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_DO = 21,                        /* DO  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_ENDIF = 23,                     /* ENDIF  */
  YYSYMBOL_SWITCH = 24,                    /* SWITCH  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_DEFAULT = 26,                   /* DEFAULT  */
  YYSYMBOL_SPREAD = 27,                    /* SPREAD  */
  YYSYMBOL_AUTO = 28,                      /* AUTO  */
  YYSYMBOL_STATIC = 29,                    /* STATIC  */
  YYSYMBOL_REGISTER = 30,                  /* REGISTER  */
  YYSYMBOL_EXTERN = 31,                    /* EXTERN  */
  YYSYMBOL_identifier = 32,                /* identifier  */
  YYSYMBOL_integer_constant = 33,          /* integer_constant  */
  YYSYMBOL_string_constant = 34,           /* string_constant  */
  YYSYMBOL_float_constant = 35,            /* float_constant  */
  YYSYMBOL_character_constant = 36,        /* character_constant  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_leftshift_assignment_operator = 38, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 39, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 40,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 41,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 42,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 43, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 44, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 45, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 46, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 47, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 48,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 49,               /* OR_operator  */
  YYSYMBOL_AND_operator = 50,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 51,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 52,            /* caret_operator  */
  YYSYMBOL_amp_operator = 53,              /* amp_operator  */
  YYSYMBOL_equality_operator = 54,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 55,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 56, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 57,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 58, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 59,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 60,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 61,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 62,              /* add_operator  */
  YYSYMBOL_subtract_operator = 63,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 64,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 65,         /* division_operator  */
  YYSYMBOL_modulo_operator = 66,           /* modulo_operator  */
  YYSYMBOL_SIZEOF = 67,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 68,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 69,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 70,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 71,        /* decrement_operator  */
  YYSYMBOL_72_ = 72,                       /* ';'  */
  YYSYMBOL_73_ = 73,                       /* ','  */
  YYSYMBOL_74_ = 74,                       /* '['  */
  YYSYMBOL_75_ = 75,                       /* ']'  */
  YYSYMBOL_76_ = 76,                       /* '{'  */
  YYSYMBOL_77_ = 77,                       /* '}'  */
  YYSYMBOL_78_ = 78,                       /* '('  */
  YYSYMBOL_79_ = 79,                       /* ')'  */
  YYSYMBOL_80_ = 80,                       /* '.'  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 82,                  /* $accept  */
  YYSYMBOL_program = 83,                   /* program  */
  YYSYMBOL_declaration_list = 84,          /* declaration_list  */
  YYSYMBOL_D = 85,                         /* D  */
  YYSYMBOL_declaration = 86,               /* declaration  */
  YYSYMBOL_variable_declaration = 87,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 88, /* variable_declaration_list  */
  YYSYMBOL_V = 89,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 90, /* variable_declaration_identifier  */
  YYSYMBOL_91_1 = 91,                      /* $@1  */
  YYSYMBOL_vdi = 92,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 93,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 94,      /* initilization_params  */
  YYSYMBOL_initilization = 95,             /* initilization  */
  YYSYMBOL_type_specifier = 96,            /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 97,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 98,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 99,              /* long_grammar  */
  YYSYMBOL_short_grammar = 100,            /* short_grammar  */
  YYSYMBOL_structure_definition = 101,     /* structure_definition  */
  YYSYMBOL_102_2 = 102,                    /* $@2  */
  YYSYMBOL_V1 = 103,                       /* V1  */
  YYSYMBOL_structure_declaration = 104,    /* structure_declaration  */
  YYSYMBOL_struct_or_union = 105,          /* struct_or_union  */
  YYSYMBOL_storage_classes = 106,          /* storage_classes  */
  YYSYMBOL_function_declaration = 107,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 108, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 109, /* function_declaration_param_statement  */
  YYSYMBOL_params = 110,                   /* params  */
  YYSYMBOL_parameters_list = 111,          /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 112, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 113, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 114,         /* param_identifier  */
  YYSYMBOL_115_3 = 115,                    /* $@3  */
  YYSYMBOL_param_identifier_breakup = 116, /* param_identifier_breakup  */
  YYSYMBOL_statement = 117,                /* statement  */
  YYSYMBOL_compound_statement = 118,       /* compound_statement  */
  YYSYMBOL_statment_list = 119,            /* statment_list  */
  YYSYMBOL_expression_statment = 120,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 121,   /* conditional_statements  */
  YYSYMBOL_conditional_statements_breakup = 122, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 123,     /* iterative_statements  */
  YYSYMBOL_return_statement = 124,         /* return_statement  */
  YYSYMBOL_return_statement_breakup = 125, /* return_statement_breakup  */
  YYSYMBOL_break_statement = 126,          /* break_statement  */
  YYSYMBOL_string_initilization = 127,     /* string_initilization  */
  YYSYMBOL_array_initialization = 128,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 129,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 130, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 131,               /* expression  */
  YYSYMBOL_expression_breakup = 132,       /* expression_breakup  */
  YYSYMBOL_simple_expression = 133,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 134, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 135,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 136,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 137, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 138,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 139, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 140,     /* relational_operators  */
  YYSYMBOL_sum_expression = 141,           /* sum_expression  */
  YYSYMBOL_sum_operators = 142,            /* sum_operators  */
  YYSYMBOL_term = 143,                     /* term  */
  YYSYMBOL_MULOP = 144,                    /* MULOP  */
  YYSYMBOL_factor = 145,                   /* factor  */
  YYSYMBOL_mutable = 146,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 147,          /* mutable_breakup  */
  YYSYMBOL_immutable = 148,                /* immutable  */
  YYSYMBOL_call = 149,                     /* call  */
  YYSYMBOL_arguments = 150,                /* arguments  */
  YYSYMBOL_arguments_list = 151,           /* arguments_list  */
  YYSYMBOL_A = 152,                        /* A  */
  YYSYMBOL_constant = 153,                 /* constant  */
  YYSYMBOL_enum_declaration = 154,         /* enum_declaration  */
  YYSYMBOL_enum_list = 155,                /* enum_list  */
  YYSYMBOL_enumerator = 156,               /* enumerator  */
  YYSYMBOL_switch_case = 157,              /* switch_case  */
  YYSYMBOL_case_list = 158,                /* case_list  */
  YYSYMBOL_case_entry = 159                /* case_entry  */
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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   313

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  277

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


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
      78,    79,     2,     2,    73,     2,    80,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    72,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,    77,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    66,    69,    70,    73,    74,    75,    76,
      79,    80,    81,    84,    87,    88,    91,    91,    93,    93,
      96,    97,   100,   101,   104,   105,   106,   109,   109,   109,
     109,   110,   111,   112,   113,   114,   117,   117,   117,   117,
     120,   120,   120,   120,   123,   123,   126,   126,   129,   129,
     131,   131,   134,   137,   138,   141,   141,   141,   141,   141,
     144,   147,   150,   153,   153,   156,   159,   162,   163,   166,
     166,   169,   170,   173,   173,   174,   174,   175,   175,   176,
     177,   180,   183,   184,   187,   188,   191,   194,   195,   198,
     199,   200,   203,   206,   207,   210,   213,   216,   219,   222,
     223,   226,   227,   230,   231,   232,   233,   234,   235,   236,
     237,   240,   243,   243,   246,   249,   250,   253,   254,   257,
     260,   261,   264,   264,   264,   265,   265,   265,   268,   269,
     272,   273,   276,   277,   280,   280,   280,   283,   283,   286,
     287,   290,   291,   294,   295,   295,   298,   301,   301,   304,
     307,   308,   311,   312,   313,   314,   317,   321,   322,   325,
     326,   330,   333,   334,   338,   339,   340,   341
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
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "CONST",
  "STRUCT", "ENUM", "UNION", "RETURN", "MAIN", "VOID", "WHILE", "FOR",
  "DO", "BREAK", "ENDIF", "SWITCH", "CASE", "DEFAULT", "SPREAD", "AUTO",
  "STATIC", "REGISTER", "EXTERN", "identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "ELSE",
  "leftshift_assignment_operator", "rightshift_assignment_operator",
  "XOR_assignment_operator", "OR_assignment_operator",
  "AND_assignment_operator", "modulo_assignment_operator",
  "multiplication_assignment_operator", "division_assignment_operator",
  "addition_assignment_operator", "subtraction_assignment_operator",
  "assignment_operator", "OR_operator", "AND_operator", "pipe_operator",
  "caret_operator", "amp_operator", "equality_operator",
  "inequality_operator", "lessthan_assignment_operator",
  "lessthan_operator", "greaterthan_assignment_operator",
  "greaterthan_operator", "leftshift_operator", "rightshift_operator",
  "add_operator", "subtract_operator", "multiplication_operator",
  "division_operator", "modulo_operator", "SIZEOF", "tilde_operator",
  "exclamation_operator", "increment_operator", "decrement_operator",
  "';'", "','", "'['", "']'", "'{'", "'}'", "'('", "')'", "'.'", "':'",
  "$accept", "program", "declaration_list", "D", "declaration",
  "variable_declaration", "variable_declaration_list", "V",
  "variable_declaration_identifier", "$@1", "vdi", "identifier_array_type",
  "initilization_params", "initilization", "type_specifier",
  "unsigned_grammar", "signed_grammar", "long_grammar", "short_grammar",
  "structure_definition", "$@2", "V1", "structure_declaration",
  "struct_or_union", "storage_classes", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@3",
  "param_identifier_breakup", "statement", "compound_statement",
  "statment_list", "expression_statment", "conditional_statements",
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

#define YYPACT_NINF (-149)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-84)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     255,  -149,  -149,  -149,  -149,    16,    26,   105,   116,  -149,
     -25,  -149,  -149,  -149,  -149,  -149,  -149,    40,  -149,   227,
    -149,    10,  -149,  -149,    44,   204,  -149,   270,  -149,  -149,
    -149,  -149,  -149,  -149,    16,    26,  -149,  -149,    16,    26,
    -149,    11,  -149,  -149,  -149,    22,    99,   270,    99,   108,
    -149,    42,  -149,  -149,  -149,  -149,  -149,   117,  -149,  -149,
    -149,    78,    82,    99,    87,  -149,  -149,    81,   152,   113,
      38,  -149,   -19,    99,  -149,    35,    88,  -149,    92,   270,
    -149,    84,    50,    85,   100,   152,    97,   101,   111,  -149,
    -149,  -149,  -149,    72,  -149,     3,    72,  -149,   138,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,   119,  -149,   128,   148,
    -149,    80,   -12,  -149,   149,  -149,  -149,  -149,  -149,   167,
     117,   129,    72,    -7,  -149,  -149,  -149,    35,   125,  -149,
     130,  -149,  -149,    72,  -149,  -149,   132,    72,    72,   184,
    -149,   174,    72,  -149,    36,     3,   140,   139,    99,  -149,
      72,  -149,    72,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,   -22,   -22,  -149,  -149,  -149,   -22,    72,
      72,    72,    72,    72,    72,  -149,  -149,    72,   193,  -149,
    -149,  -149,  -149,  -149,  -149,   151,   179,  -149,  -149,   171,
    -149,   165,  -149,   168,   176,   172,   170,   173,   175,  -149,
    -149,  -149,  -149,   128,   148,    39,   -12,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,   177,  -149,   203,   219,  -149,  -149,
     152,   152,    72,    72,   191,    72,  -149,  -149,  -149,  -149,
    -149,    -6,  -149,  -149,  -149,  -149,   234,  -149,   200,   208,
     131,   173,   249,   152,  -149,    72,   217,   112,   209,    20,
     269,  -149,   220,   215,  -149,   216,  -149,   -23,   152,  -149,
     272,   224,   249,  -149,  -149,  -149,   112,   152,  -149,   225,
    -149,  -149,   218,  -149,  -149,   152,  -149
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      59,    27,    28,    29,    30,    45,    47,    43,    39,    53,
       0,    54,    35,    55,    56,    57,    58,     0,     2,     5,
       6,     0,     8,    12,     0,     0,     7,    64,     9,    44,
      31,    46,    32,    40,    45,    47,    34,    36,    45,    47,
      33,     0,     1,     4,     3,     0,    48,     0,     0,     0,
      60,     0,    63,    41,    42,    37,    38,     0,    61,    16,
      52,    15,     0,     0,     0,    69,    65,    68,    59,   159,
       0,   157,    21,     0,    13,    59,     0,    10,    72,     0,
      66,     0,     0,     0,     0,    59,     0,     0,   139,   152,
     153,   154,   155,     0,    85,    59,     0,    79,     0,    62,
      74,    73,    75,    76,    77,    78,     0,   102,   113,   116,
     118,   121,   129,   133,   138,   137,   144,   145,    80,     0,
       0,     0,     0,     0,    17,    18,    14,    59,     0,    11,
       0,    70,    67,     0,    93,    92,     0,     0,     0,     0,
      95,     0,   148,   117,   138,    59,     0,     0,     0,    84,
       0,   111,     0,   114,   126,   127,   123,   125,   122,   124,
     130,   131,   119,     0,     0,   134,   135,   136,     0,     0,
       0,     0,     0,     0,     0,   109,   110,     0,     0,   101,
     140,   160,   158,   156,    19,     0,     0,    20,    50,     0,
      71,     0,    94,     0,     0,     0,     0,   151,     0,   147,
      82,    81,   143,   113,   116,   120,   128,   132,   108,   106,
     107,   104,   105,   103,     0,   142,    26,     0,    23,    49,
      59,    59,     0,     0,     0,     0,   149,   146,   112,   115,
     141,     0,    22,    24,    25,    96,    88,    89,     0,     0,
     167,   151,     0,    59,    86,     0,     0,     0,     0,   167,
       0,   150,   100,     0,    87,     0,    91,     0,    59,   161,
       0,     0,     0,    98,    97,    90,     0,    59,   166,     0,
     162,    99,     0,   164,   163,    59,   165
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,   279,  -149,  -149,     2,    -4,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,    24,  -149,  -149,    89,    91,  -149,
    -149,   178,  -149,    98,  -149,  -149,  -149,  -149,  -149,   221,
    -149,  -149,  -149,  -149,  -149,   -68,  -149,   156,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,    86,  -149,    41,  -149,   -81,
    -149,  -128,   103,   154,   104,   -85,  -149,  -149,  -149,   144,
    -149,   145,  -149,   142,   -90,  -149,  -149,  -149,  -149,  -149,
      70,  -148,  -149,  -149,   192,  -149,  -149,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    17,    18,    44,    19,    97,    60,    74,    61,    72,
     124,   125,   187,   232,    21,    40,    36,    30,    32,    22,
      62,   128,    23,    98,    25,    26,    27,    50,    51,    52,
      66,    80,    67,    78,   131,   145,   100,   146,   101,   102,
     244,   103,   104,   135,   105,   218,   234,   253,   263,   106,
     179,   107,   151,   108,   153,   109,   110,   162,   163,   111,
     164,   112,   168,   113,   114,   180,   115,   116,   198,   199,
     226,   117,    28,    70,    71,   118,   249,   250
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,   136,    20,   144,   266,   191,    81,    41,   143,   193,
      88,    89,    90,    91,    92,   147,     9,   139,    11,    82,
      29,    20,    83,    84,    85,    86,   185,    87,   235,   122,
      31,    13,    14,    15,    16,    88,    89,    90,    91,    92,
      42,   184,    45,   144,    64,   247,   248,   144,     9,    48,
      11,    49,   165,   166,   167,   123,    96,   194,   267,    76,
     144,   197,   144,    13,    14,    15,    16,   204,   186,   126,
     242,    63,    93,   144,   144,    94,    46,   127,   144,    95,
     -83,    96,    88,    89,    90,    91,    92,    57,   208,   209,
     210,   211,   212,   213,   238,   239,   214,   259,    24,   257,
      58,   160,   161,    49,    88,    89,    90,    91,    92,    33,
     177,   120,   -51,    34,    35,   121,   178,    24,   272,    93,
      37,    68,   134,    53,    38,    39,    54,    55,    96,   127,
      56,    59,   144,   144,   154,   155,   156,   157,   158,   159,
      65,    93,   160,   161,   241,    89,    90,    91,    92,    69,
      96,    73,   236,   237,    79,    81,   247,   248,    75,    77,
     129,   119,   133,   137,   255,     9,   130,    11,    82,   140,
     148,    83,    84,    85,    86,   254,    87,   150,   138,   141,
      13,    14,    15,    16,    88,    89,    90,    91,    92,   142,
     268,   149,   169,   170,   171,   172,   173,   174,   152,   273,
     181,   183,   189,   195,   192,   190,   196,   276,     1,     2,
       3,     4,     5,     6,     7,     8,    47,   201,   202,   175,
     176,    93,    12,   177,    94,   215,   216,   217,    95,   178,
      96,     1,     2,     3,     4,     5,     6,     7,     8,   -59,
       9,    10,    11,   219,   220,    12,   225,   221,   222,   224,
     223,   231,   230,   235,   227,    13,    14,    15,    16,     1,
       2,     3,     4,     5,     6,     7,     8,   240,     9,    10,
      11,   243,   245,    12,     1,     2,     3,     4,     5,     6,
       7,     8,   252,    13,    14,    15,    16,   246,    12,   256,
     258,   261,   264,   262,   269,   265,   270,   274,    43,   275,
     132,   200,   233,   271,   203,   188,   228,   205,   229,   206,
     207,   251,   182,   260
};

static const yytype_int16 yycheck[] =
{
      68,    82,     0,    93,    27,   133,     3,    32,    93,   137,
      32,    33,    34,    35,    36,    96,    13,    85,    15,    16,
       4,    19,    19,    20,    21,    22,    33,    24,    34,    48,
       4,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,   122,    32,   133,    48,    25,    26,   137,    13,    25,
      15,    27,    64,    65,    66,    74,    78,   138,    81,    63,
     150,   142,   152,    28,    29,    30,    31,   152,    75,    73,
      76,    47,    69,   163,   164,    72,    32,    75,   168,    76,
      77,    78,    32,    33,    34,    35,    36,    76,   169,   170,
     171,   172,   173,   174,   222,   223,   177,    77,     0,   247,
      78,    62,    63,    79,    32,    33,    34,    35,    36,     4,
      74,    73,    77,     8,     9,    77,    80,    19,   266,    69,
       4,    79,    72,    34,     8,     9,    35,    38,    78,   127,
      39,    32,   222,   223,    54,    55,    56,    57,    58,    59,
      32,    69,    62,    63,   225,    33,    34,    35,    36,    32,
      78,    73,   220,   221,    73,     3,    25,    26,    76,    72,
      72,    48,    78,    78,   245,    13,    74,    15,    16,    72,
      32,    19,    20,    21,    22,   243,    24,    49,    78,    78,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    78,
     258,    72,    43,    44,    45,    46,    47,    48,    50,   267,
      33,    72,    77,    19,    72,    75,    32,   275,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    77,    79,    70,
      71,    69,    18,    74,    72,    32,    75,    48,    76,    80,
      78,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    72,    79,    18,    73,    79,    72,    79,
      78,    48,    75,    34,    79,    28,    29,    30,    31,     4,
       5,     6,     7,     8,     9,    10,    11,    76,    13,    14,
      15,    37,    72,    18,     4,     5,     6,     7,     8,     9,
      10,    11,    33,    28,    29,    30,    31,    79,    18,    72,
      81,    22,    77,    73,    22,    79,    72,    72,    19,    81,
      79,   145,   216,   262,   150,   127,   203,   163,   204,   164,
     168,   241,   120,   249
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    13,
      14,    15,    18,    28,    29,    30,    31,    83,    84,    86,
      87,    96,   101,   104,   105,   106,   107,   108,   154,     4,
      99,     4,   100,     4,     8,     9,    98,     4,     8,     9,
      97,    32,     0,    84,    85,    32,    32,    12,    96,    96,
     109,   110,   111,    99,   100,    99,   100,    76,    78,    32,
      88,    90,   102,    96,    88,    32,   112,   114,    79,    32,
     155,   156,    91,    73,    89,    76,    88,    72,   115,    73,
     113,     3,    16,    19,    20,    21,    22,    24,    32,    33,
      34,    35,    36,    69,    72,    76,    78,    87,   105,   117,
     118,   120,   121,   123,   124,   126,   131,   133,   135,   137,
     138,   141,   143,   145,   146,   148,   149,   153,   157,    48,
      73,    77,    48,    74,    92,    93,    88,    87,   103,    72,
      74,   116,   111,    78,    72,   125,   131,    78,    78,   117,
      72,    78,    78,   137,   146,   117,   119,   131,    32,    72,
      49,   134,    50,   136,    54,    55,    56,    57,    58,    59,
      62,    63,   139,   140,   142,    64,    65,    66,   144,    43,
      44,    45,    46,    47,    48,    70,    71,    74,    80,   132,
     147,    33,   156,    72,   131,    33,    75,    94,   103,    77,
      75,   133,    72,   133,   131,    19,    32,   131,   150,   151,
     119,    77,    79,   135,   137,   141,   143,   145,   131,   131,
     131,   131,   131,   131,   131,    32,    75,    48,   127,    72,
      79,    79,    72,    78,    79,    73,   152,    79,   134,   136,
      75,    48,    95,   127,   128,    34,   117,   117,   133,   133,
      76,   131,    76,    37,   122,    72,    79,    25,    26,   158,
     159,   152,    33,   129,   117,   131,    72,   153,    81,    77,
     159,    22,    73,   130,    77,    79,    27,    81,   117,    22,
      72,   129,   153,   117,    72,    81,   117
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    85,    85,    86,    86,    86,    86,
      87,    87,    87,    88,    89,    89,    91,    90,    92,    92,
      93,    93,    94,    94,    95,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      98,    98,    98,    98,    99,    99,   100,   100,   102,   101,
     103,   103,   104,   105,   105,   106,   106,   106,   106,   106,
     107,   108,   109,   110,   110,   111,   112,   113,   113,   115,
     114,   116,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   119,   119,   120,   120,   121,   122,   122,   123,
     123,   123,   124,   125,   125,   126,   127,   128,   129,   130,
     130,   131,   131,   132,   132,   132,   132,   132,   132,   132,
     132,   133,   134,   134,   135,   136,   136,   137,   137,   138,
     139,   139,   140,   140,   140,   140,   140,   140,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   145,   145,   146,
     146,   147,   147,   148,   148,   148,   149,   150,   150,   151,
     152,   152,   153,   153,   153,   153,   154,   155,   155,   156,
     156,   157,   158,   158,   159,   159,   159,   159
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     1,
       4,     5,     1,     2,     2,     0,     0,     3,     1,     2,
       2,     0,     3,     2,     1,     1,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     2,     2,     0,
       1,     2,     2,     0,     1,     0,     1,     0,     0,     7,
       2,     0,     3,     1,     1,     1,     1,     1,     1,     0,
       2,     3,     3,     1,     0,     2,     2,     2,     0,     0,
       3,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     2,     1,     6,     2,     0,     5,
       8,     7,     2,     1,     2,     2,     2,     4,     2,     2,
       0,     2,     1,     2,     2,     2,     2,     2,     2,     1,
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
  case 16: /* $@1: %empty  */
#line 91 "parser.y"
                                     { ins(); }
#line 1655 "y.tab.c"
    break;

  case 48: /* $@2: %empty  */
#line 129 "parser.y"
                                                     { ins(); }
#line 1661 "y.tab.c"
    break;

  case 61: /* function_declaration_type: type_specifier identifier '('  */
#line 147 "parser.y"
                                                         { ins();}
#line 1667 "y.tab.c"
    break;

  case 69: /* $@3: %empty  */
#line 166 "parser.y"
                                     { ins(); }
#line 1673 "y.tab.c"
    break;

  case 96: /* string_initilization: assignment_operator string_constant  */
#line 213 "parser.y"
                                                              { insV(); }
#line 1679 "y.tab.c"
    break;

  case 152: /* constant: integer_constant  */
#line 311 "parser.y"
                                                { insV(); }
#line 1685 "y.tab.c"
    break;

  case 153: /* constant: string_constant  */
#line 312 "parser.y"
                                                { insV(); }
#line 1691 "y.tab.c"
    break;

  case 154: /* constant: float_constant  */
#line 313 "parser.y"
                                                { insV(); }
#line 1697 "y.tab.c"
    break;

  case 155: /* constant: character_constant  */
#line 314 "parser.y"
                                            { insV(); }
#line 1703 "y.tab.c"
    break;


#line 1707 "y.tab.c"

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

#line 344 "parser.y"


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
