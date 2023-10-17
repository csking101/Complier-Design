#include <stdio.h>

static int count = 5; /* global variable */

int main()
{

    while (count--)
    {
        func();
    }

    return 0;
}

/* function definition */
void func()
{

    static int i = 5; /* local static variable */
    i++;

    printf("i is %d and count is %d\n", i, count);
}