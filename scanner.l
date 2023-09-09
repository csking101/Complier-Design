%{
int lineNumber = 1;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include"hash.h"

enum TOKEN {
	AUTO = 1,
	BREAK,
	CASE,
	CHAR,
	CONST,
	CONTINUE,
	DEFAULT,
	DO,
	DOUBLE,
	ELSE,
	ENUM,
	EXTERN,
	FLOAT,
	FOR,
	GOTO,
	IF,
	INT,
	LONG,
	REGISTER,
	RETURN,
	SHORT,
	SIGNED,
	SIZEOF,
	STATIC,
	STRUCT,
	SWITCH,
	TYPEDEF,
	UNION,
	UNSIGNED,
	VOID,
	VOLATILE,
	WHILE,

	IDENTIFIER,
	SLC,
	MLCS,
	MLCE,

	LEQ,
	GEQ,
	EQEQ,
	NEQ,
	LOR,
	LAND,
	ASSIGN,
	PLUS,
	SUB,
	MULT,
	DIV,
	MOD,
	LESSER,
	GREATER,
	INCR,
	DECR,

	COMMA,
	SEMI,

	HEADER,
	MAIN,

	PRINTF,
	SCANF,
	MALLOC,
	CALLOC,
	REALLOC,
	FREE,
	DEFINE,


	INT_CONST,
	FLOAT_CONST,

	TYPE_SPEC,

	DQ,

	OBO,
	OBC,
	CBO,
	CBC,
	HASH,

	ARR,
	FUNC,

	NUM_ERR,
	UNKNOWN,

	CHAR_CONST,
	SIGNED_CONST,
	STRING_CONST,

	GETCH,
	STRLEN,
	PUTS,
	STRCMP,
	STRCAT,
	STRCPY,
	STRINGH,
	MATH,

	CEIL,
	FLOOR,
	FABS,
	LOG,
	SQRT,
	POW,
	EXP,
};
%}

alphabet [A-Za-z]
digit [0-9]
underscore [_]
space [ ]
tab [	]
line [\n]
char \'.\'
unknowns [@~`$^]
string \"(\\[nt\"'\\]|[^\n\"])*\"
identifier ({alphabet}|{underscore})({alphabet}|{digit}|{underscore})*

%%
{space}* {}
{tab}* {}
{string} return STRING_CONST;
{char} return CHAR_CONST;
{line} {lineNumber++;}
auto return AUTO;
break return BREAK;
case return CASE;
char return CHAR;
const return CONST;
continue return CONTINUE;
default return DEFAULT;
do return DO;
double return DOUBLE;
else return ELSE;
enum return ENUM;
extern return EXTERN;
float return FLOAT;
for return FOR;
goto return GOTO;
if return IF;
int return INT;
long return LONG;
register return REGISTER;
return return RETURN;
short return SHORT;
signed return SIGNED;
sizeof\([^)]*\) return SIZEOF;
static return STATIC;
struct return STRUCT;
switch return SWITCH;
typedef return TYPEDEF;
union return UNION;
unsigned return UNSIGNED;
void return VOID;
volatile return VOLATILE;
while return WHILE;

printf return PRINTF;
scanf return SCANF;
malloc\([^)]*\) return MALLOC;
calloc\([^)]*\) return CALLOC;
realloc\([^)]*\) return REALLOC;
free\([^)]*\) return FREE;

getch return GETCH;
strlen return STRLEN;
puts return PUTS;
strcmp return STRCMP;
strcat return STRCAT;
strcpy return STRCPY;

ceil return CEIL;
floor return FLOOR;
fabs return FABS;
log return LOG;
sqrt return SQRT;
pow return POW;
exp return EXP;

{identifier} return IDENTIFIER;

[+-][0-9]{digit}*(\.{digit}+)? return SIGNED_CONST;

"//" return SLC;
"/*" return MLCS;
"*/" return MLCE;

"<=" return LEQ;
">=" return GEQ;
"==" return EQEQ;
"!=" return NEQ;
"||" return LOR;
"&&" return LAND;
"=" return ASSIGN;
"+" return PLUS;
"-" return SUB;
"*" return MULT;
"/" return DIV;
"%" return MOD;
"<" return LESSER;
">" return GREATER;
"++" return INCR;
"--" return DECR;

"," return COMMA;
";" return SEMI;

"#include"{space}*"<stdio.h>" return HEADER;
"#include"{space}*"<string.h>" return STRINGH;
"#include"{space}*"<math.h>" return MATHH;
"main()" return MAIN;

{digit}+ return INT_CONST;
({digit}+)\.({digit}+) return FLOAT_CONST;

"\"" return DQ;
"(" return OBO;
")" return OBC;
"{" return CBO;
"}" return CBC;
"#" return HASH;

{identifier}\[({digit}*|{identifier})\] return ARR;
({digit}+)\.({digit}+)\.({digit}|\.)* return NUM_ERR;
({digit}|{unknowns})+({alphabet}|{digit}|{underscore}|{unknowns})* return UNKNOWN;
%%
// {alphabet}({alphabet}|{digit}|{underscore})*\(({alphabet}|{digit}|{underscore}|{space})*\) return FUNC;

/*
void display()
{
    	struct node *myNode;
    	int i,j, k=1;
    	printf("-------------------------------------------------------------------");
    	printf("\nSNo \t|\tToken \t\t|\tToken Type \t\n");
        printf("-------------------------------------------------------------------\n");
    	for (i = 0; i < eleCount; i++)
    	{
        	if (hashTable[i].count == 0)
            		continue;
        	myNode = hashTable[i].head;
        	if (!myNode)
            		continue;
        	while (myNode != NULL)
        	{
            		printf("%d\t\t", k++);
            		printf("%s\t\t\t", myNode->token);
            		printf("%s\t\n", myNode->attr);
            		myNode = myNode->next;
        	}
	}
   	return;
}
*/

int main(int argc, char *argv[])
{
	if(argc == 1){
		printf("Please give input file name");
		return 0;
	}
	SymbolTable* st = createSymbolTable(SYMBOL_TABLE_SIZE);
	
	int scan;
	int singleLineCommentLine = 0; 
	int isMultiLineComment = 0, multiLineCommentLine = 0;
	int doubleQuote = 0, doubleQuoteLine = 0;
	yyin = fopen(argv[argc - 1],"r");
	printf("\n\n");
	scan = yylex();
	while(scan)
	{
		if(lineNumber == singleLineCommentLine)
		{
			scan = yylex();
			continue;
		}

		if(lineNumber!=doubleQuoteLine && doubleQuoteLine!=0)
		{
			if(doubleQuote%2!=0)
				printf("\n******** ERROR!! INCOMPLETE STRING at Line %d ********\n\n", doubleQuoteLine);
			doubleQuote=0;
		}

		if(isMultiLineComment == 0){
			switch (scan) {
				case AUTO ... WHILE:
					printf("%s\t\t\tKEYWORD\t\t\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "KEYWORD");
					break;
				case IDENTIFIER:
					if (yyleng > 31) {
        				printf("\n******** ERROR!! Identifier '%s' is longer than 31 characters at Line %d ********\n\n", yytext, lineNumber);
            		}else{
					printf("%s\t\t\tIDENTIFIER\t\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "IDENTIFIER");
					}
					break;
				case SLC:
					printf("%s\t\t\tSingleline Comment\t\tLine %d\n", yytext, lineNumber);
					singleLineCommentLine = lineNumber;
					break;
				case MLCS:
					printf("%s\t\t\tMultiline Comment Start\t\tLine %d\n", yytext, lineNumber);
					multiLineCommentLine = lineNumber;
					isMultiLineComment = 1;
				case MLCE:
					printf("\n******** ERROR!! UNMATCHED MULTILINE COMMENT END %s at Line %d ********\n\n", yytext, lineNumber);
					break;
				case LEQ ... DECR:
					printf("%s\t\t\tOPERATOR\t\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "OPERATOR");
					break;
				case COMMA:
				case SEMI:
				case OBO ... HASH:
					printf("%s\t\t\tSPECIAL SYMBOL\t\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "SPECIAL SYMBOL");
					break;
				case DQ:
					printf("%s\t\t\tSPECIAL SYMBOL\t\t\tLine %d\n", yytext, lineNumber);
					doubleQuote++;
					doubleQuoteLine = lineNumber;
					insertToHashQuadraticProbing(st, yytext, "SPECIAL SYMBOL");
					break;
				case HEADER:
				case STRINGH:
				case MATH:
					printf("%s\tHEADER\t\t\t\tLine %d\n",yytext, lineNumber);
					break;
				case MAIN:
					printf("%s\t\t\tMAIN FUNCTION\t\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "IDENTIFIER");
					break;
				case PRINTF ... FREE:
					printf("%s\t\t\tPRE DEFINED FUNCTION\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "PRE DEFINED FUNCTION");
					break;
				case GETCH ... STRCPY:
				case CEIL ... EXP:
					printf("%s\t\t\tLIBRARY DEFINED FUNCTION\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "LIBRARY DEFINED FUNCTION");
					break;
				case DEFINE:
					printf("%s\t\t\tPRE PROCESSOR DIRECTIVE\t\tLine %d\n", yytext, lineNumber);
					break;
				case INT_CONST:
					printf("%s\t\t\tINTEGER CONSTANT\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "INTEGER CONSTANT");
					break;
				case FLOAT_CONST:
					printf("%s\t\t\tFLOATING POINT CONSTANT\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "FLOATING POINT CONSTANT");
					break;
				case TYPE_SPEC:
					printf("%s\t\t\tTYPE SPECIFIER\t\t\tLine %d\n", yytext, lineNumber);
					break;
				case ARR:
					printf("%s\t\t\tARRAY\t\t\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "ARRAY");
					break;
				// case FUNC:
				// 	printf("%s\t\t\tUSER DEFINED FUNCTION\t\tLine %d\n", yytext, lineNumber);
				// 	insertToHashQuadraticProbing(st, yytext, "USER DEFINED FUNCTION");
				// 	break;
				case NUM_ERR:
					printf("\n******** ERROR!! CONSTANT ERROR %s at Line %d ********\n\n", yytext, lineNumber);
					break;
				case UNKNOWN:
					printf("\n******** ERROR!! UNKNOWN TOKEN %s at Line %d ********\n\n", yytext, lineNumber);
					break;
				case CHAR_CONST:
					printf("%s\t\t\tCHARACTER CONSTANT\t\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "CHARACTER CONSTANT");
					break;
				case SIGNED_CONST:
					printf("%s\t\t\tSIGNED CONSTANT\t\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "SIGNED CONSTANT");
					break;
				case STRING_CONST:
					printf("%s\t\t\tSTRING CONSTANT\t\t\tLine %d\n", yytext, lineNumber);
					insertToHashQuadraticProbing(st, yytext, "STRING CONSTANT");
					break;
				default:
					printf("\n******** ERROR!! TOKEN NOT SUPPORTED BY COMPILER %s at Line %d ********\n\n", yytext, lineNumber);		
			}
		}
		if (scan == MLCE && isMultiLineComment == 1) {
			isMultiLineComment = 0;
			printf("%s\t\t\tMultiline Comment End\t\tLine %d\n", yytext, lineNumber);
		}
		
		scan = yylex();
	}
	if(isMultiLineComment == 1)
		printf("\n******** ERROR!! UNMATCHED COMMENT STARTING at Line %d ********\n\n",multiLineCommentLine);
	printf("\n");
	printf("\n\t******** SYMBOL TABLE ********\t\t\n");
	// display();
        printf("-------------------------------------------------------------------\n\n");
	printSymbolTable(st);
	destroySymbolTable(st);
}
int yywrap()
{
	return 1;
}
