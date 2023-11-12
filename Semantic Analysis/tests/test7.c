#include <stdio.h>

static int count = 5; /* global variable */

void func(int num)
{
    static int i = 5;
    i++;
    num++;
}

int main()
{
    while (count--)
    {
        func(5);
    }

    return 0;
}