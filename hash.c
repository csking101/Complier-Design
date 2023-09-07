#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_IDENTIFIER_LENGTH 31
#define MAX_ATTR_LENGTH 100
#define HASH_PRIME 31
#define SYMBOL_TABLE_SIZE 100

//Intermediate Data Structures
typedef struct {
	char name[MAX_IDENTIFIER_LENGTH];
	char attr[MAX_ATTR_LENGTH];
} Token;

typedef struct {
	Token data;
	Token* next;
} Bucket; //For the sake of differentiation, we are calling the linked list nodes of the tokens as buckets

typedef struct {
	Bucket** tablePtr;
	int size;
} SymbolTable;

//Required Hash Functions
unsigned int Hash(const char* key, int tableSize){
	unsigned int hashValue = 0;

	for (int i = 0; key[i] != '\0';i++){
		//The string has a HASH_PRIME value that determines the efficiency of the hash function
		hashValue += (hashValue * HASH_PRIME + key[i]); 
	}

	return hashValue % tableSize;
}

//Hash Table Management Functions
SymbolTable* createSymbolTable(int size){
	SymbolTable* table = malloc(sizeof(SymbolTable));

	table->size = size;
	table->tablePtr = malloc(sizeof(Bucket) * size);

	for (int i = 0;i < size;i++) table->tablePtr[i] = NULL;

	return table;
}

void insertSymbol(SymbolTable* table, const char* name, const char* attr){
	int index = Hash(name, table->size);

	Token newToken;
	strcpy(newToken.name, name);
	strcpy(newToken.attr, attr);

	//Insertion by adding to the start of the linked list(Bucket)
	Bucket* newBucket = malloc(sizeof(Bucket));
	newBucket->data = newToken;
	newBucket->next = table->tablePtr[index];

	table->tablePtr[index] = newBucket;

	printf("Inserted Token with name \"%s\"\n",name);
}

int lookupSymbol(SymbolTable* table, const char* name){
	int index = Hash(name, table->size);

	Bucket* current = table->tablePtr[index];

	while (current != NULL){
		if (strcmp(current->data.name, name) == 0) return 1;
	
		current = current->next;
	}

	return 0;
}

//To prevent memory leaks
void destroySymbolTable(SymbolTable* table){
	for (int i = 0;i < table->size;i++){
		Bucket* current = table->tablePtr[i];

		while (current != NULL){
			Bucket* temp = current;
			current = current->next;

			free(temp);
		}

	}

	free(table->tablePtr);
	free(table);
}

void printSymbolTable(SymbolTable* table){
	for (int i = 0;i < table->size;i++){
		printf("Index %d: ",i);
		Bucket* current = table->tablePtr[i];

		while (current != NULL){
			printf("{\"%s\",\"%s\"} -> ",current->data.name,current->data.attr);
			current = current->next;
		}
		printf("\n");
	}
	printf("\n");
}


int main(){
	SymbolTable* st = createSymbolTable(SYMBOL_TABLE_SIZE);

	insertSymbol(st,"int", "KEYWORD");
	insertSymbol(st,"main", "IDENTIFIER");
	insertSymbol(st,"{","OPEN-BRACKET");
	insertSymbol(st,"printf", "PRE-DEFINED FUNCTION");
	insertSymbol(st,"\"Hello World! \\n\"", "STRING");
	insertSymbol(st,";", "LINE-TERMINATOR");
	insertSymbol(st,"}","CLOSE-BRACKET");

	printf("\n");

	printSymbolTable(st);

	destroySymbolTable(st);
}
