//for loop
//continue
//while loop
//do while loop

#include<stdio.h>

int main()
{
    for (int a = 0; a < 10; a++){
        continue;
    }
    
    int x = 0;
    int* y = &x;
    const int** z = &y;
    while(x>0) {
        x--;
    }

    do {
        x++;
    }while(x<10);
}