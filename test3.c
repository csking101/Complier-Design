/* 
C program to find the size of int, char,
float and double data types
*/
#include <stdio.h>

int main()
{
	int integerType = 4;
	char charType = 'd';
	float floatType = 5.4;
	double doubleType = 5.4.6;

	// Calculate and Print
	// the size of integer type
	printf("Size of int is: %ld", sizeof(integerType));

	// Calculate and Print
	// the size of charType
	printf("Size of char is: %ld", sizeof(charType));

	// Calculate and Print
	// the size of floatType
	printf("Size of float is: %ld", sizeof(floatType));

	// Calculate and Print
	// the size of doubleType
	printf("Size of double is: %ld", sizeof(doubleType));

	return 0;
}
