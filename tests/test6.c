#include <stdio.h>
#include <string.h>
/* Multiline Comment
/* Nested Comment */
*/
int main() {
  char str1[20] = "Hello ";
  char str2[] = "World!";
  char str3[] = "India";

  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
  // Print str1
  printf("%s", str1);
 
  // Copy st3 to str1
  strcpy(str1, str3);

  // Print str1
  printf("%s", str1);

  return 0;
}