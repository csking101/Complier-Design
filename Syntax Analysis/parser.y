%{
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

%}

// %expect 2

%nonassoc IF
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED 
%token INTs FLOATs CHARs DOUBLEs
%token CONST STRUCT ENUM UNION
%token RETURN MAIN
%token VOID
%token WHILE FOR DO 
%token BREAK
%token ENDIF
%token SWITCH CASE DEFAULT SPREAD
%token AUTO STATIC REGISTER EXTERN VOLATILE INLINE
%token PRINTF SCANF

%token identifier
%token integer_constant string_constant float_constant character_constant

%nonassoc ELSE

%right leftshift_assignment_operator rightshift_assignment_operator
%right XOR_assignment_operator OR_assignment_operator
%right AND_assignment_operator modulo_assignment_operator
%right multiplication_assignment_operator division_assignment_operator
%right addition_assignment_operator subtraction_assignment_operator
%right assignment_operator

%left OR_operator
%left AND_operator
%left pipe_operator
%left caret_operator
%left amp_operator
%left equality_operator inequality_operator
%left lessthan_assignment_operator lessthan_operator greaterthan_assignment_operator greaterthan_operator
%left leftshift_operator rightshift_operator 
%left add_operator subtract_operator
%left multiplication_operator division_operator modulo_operator

%right SIZEOF
%right tilde_operator exclamation_operator
%left increment_operator decrement_operator 

%start program


%%
program
			: declaration_list;

declaration_list
			: declaration D ; 

D
			: declaration_list
			| ;

declaration
			: variable_declaration 
			| function_declaration
			| structure_definition
            | enum_declaration;

variable_declaration
			: type_specifier variable_declaration_list ';' 
			| storage_classes type_specifier variable_declaration_list ';'
			| storage_classes CONST type_specifier variable_declaration_list ';'
			| CONST type_specifier variable_declaration_list ';'
			| structure_declaration ';';

storage_classes
            : AUTO | STATIC | REGISTER | EXTERN | VOLATILE | INLINE ;

variable_declaration_list
			: variable_declaration_identifier V;

V
			: ',' variable_declaration_list 
			| ;

variable_declaration_identifier 
			: identifier { ins(); } vdi;

vdi : identifier_array_type | assignment_operator expression ; 

identifier_array_type
			: '[' initilization_params
			| ;

initilization_params
			: integer_constant ']' identifier_array_type initilization
			| ']' identifier_array_type string_initilization;

initilization
			: string_initilization
			| array_initialization
			| ;

type_specifier 
			: INT | CHAR | FLOAT | DOUBLE | star_specifier
			| LONG long_grammar 
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar 
			| SIGNED signed_grammar
			| VOID ;

star_specifier
			: INTs | CHARs | FLOATs | DOUBLEs ;

unsigned_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar 
			: INT | ;

short_grammar 
			: INT | ;

structure_definition
			: struct_or_union identifier { ins(); } '{' V1  '}' ';';

V1 : variable_declaration V1 | ;

structure_declaration 
			: struct_or_union identifier variable_declaration_list;

struct_or_union
            : STRUCT
            | UNION ;


function_declaration
			: function_declaration_type function_declaration_param_statement;

function_declaration_type
			: type_specifier identifier '('  { ins();};

function_declaration_param_statement
			: params ')' statement;

params 
			: parameters_list | ;

parameters_list 
			: type_specifier parameters_identifier_list;

parameters_identifier_list 
			: param_identifier parameters_identifier_list_breakup;

parameters_identifier_list_breakup
			: ',' parameters_list 
			| ;

param_identifier 
			: identifier { ins(); } param_identifier_breakup;

param_identifier_breakup
			: '[' ']'
			| ;

statement 
			: expression_statment | compound_statement 
			| conditional_statements | iterative_statements 
			| return_statement | break_statement 
			| variable_declaration 
            | switch_case 
			| printf_scanf_statements;

printf_scanf_statements
			: printf_statement ';'
			| scanf_statement ';' 
			;

printf_statement
			: PRINTF '(' printf_parameters ')' ;

scanf_statement
			:  SCANF '(' scanf_parameters ')' ;

printf_parameters
			: printf_parameters ',' expression
			| string_constant;

scanf_parameters
			: scanf_parameters ',' identifier
			| scanf_parameters ',' amp_operator identifier
			| string_constant;

compound_statement 
			: '{' statment_list '}' ;

statment_list 
			: statement statment_list 
			| ;

expression_statment 
			: expression ';' 
			| ';' ;

conditional_statements 
			: IF '(' simple_expression ')' statement conditional_statements_breakup;

conditional_statements_breakup
			: ELSE statement
			| ;

iterative_statements 
			: WHILE '(' expression ')' statement 
			| FOR '(' variable_declaration_list ';' simple_expression ';' expression ')' 
			| FOR '(' type_specifier variable_declaration_list ';' simple_expression ';' expression ')' 
			| DO statement WHILE '(' simple_expression ')' ';';

return_statement 
			: RETURN return_statement_breakup;

return_statement_breakup
			: ';' 
			| expression ';' ;

break_statement 
			: BREAK ';' ;

string_initilization
			: assignment_operator string_constant { insV(); };

array_initialization
			: assignment_operator '{' array_int_declarations '}';

array_int_declarations
			: integer_constant array_int_declarations_breakup;

array_int_declarations_breakup
			: ',' array_int_declarations 
			| ;

expression 
			: mutable expression_breakup
			| simple_expression
			| amp_operator identifier;

expression_breakup
			: assignment_operator expression 
			| addition_assignment_operator expression 
			| subtraction_assignment_operator expression 
			| multiplication_assignment_operator expression 
			| division_assignment_operator expression 
			| modulo_assignment_operator expression 
			| increment_operator 
			| decrement_operator;

simple_expression 
			: and_expression simple_expression_breakup;

simple_expression_breakup 
			: OR_operator and_expression simple_expression_breakup | ;

and_expression 
			: unary_relation_expression and_expression_breakup;

and_expression_breakup
			: AND_operator unary_relation_expression and_expression_breakup
			| ;

unary_relation_expression 
			: exclamation_operator unary_relation_expression 
			| regular_expression ;

regular_expression 
			: sum_expression regular_expression_breakup;

regular_expression_breakup
			: relational_operators sum_expression 
			| ;

relational_operators 
			: greaterthan_assignment_operator | lessthan_assignment_operator | greaterthan_operator 
			| lessthan_operator | equality_operator | inequality_operator ;

sum_expression 
			: sum_expression sum_operators term 
			| term ;

sum_operators 
			: add_operator 
			| subtract_operator ;

term
			: term MULOP factor 
			| factor ;

MULOP 
			: multiplication_operator | division_operator | modulo_operator ;

factor 
			: immutable | mutable ;

mutable 
			: identifier 
			| mutable mutable_breakup;

mutable_breakup
			: '[' expression ']' 
			| '.' identifier;

immutable 
			: '(' expression ')' 
			| call | constant;

call
			: identifier '(' arguments ')';

arguments 
			: arguments_list | ;

arguments_list 
			: expression A;

A
			: ',' expression A 
			| ;

constant 
			: integer_constant 	{ insV(); } 
			| string_constant	{ insV(); } 
			| float_constant	{ insV(); } 
			| character_constant{ insV(); };

enum_declaration
            : ENUM identifier '{' enum_list '}' ';'
            ;

enum_list
            : enumerator
            | enum_list ',' enumerator ;

enumerator
            : identifier
            | identifier assignment_operator integer_constant
            ;

switch_case
            : SWITCH  '(' identifier ')' '{' case_list '}' ;

case_list
            : case_entry BREAK ';'
            | case_list case_entry BREAK ';'
            ;

case_entry  
            : CASE constant ':' statement
            | CASE constant SPREAD constant':' statement
            | DEFAULT ':' statement
            |
            ;

%%

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