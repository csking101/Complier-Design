#include<stdio.h>
// type mismatch
int main()
{
    int a = "hi";

    for(int i = 0; i < 9; i++){
        printf("Hello");
    }
    return 0;
}