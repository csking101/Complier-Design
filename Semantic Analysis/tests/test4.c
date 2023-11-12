#include <stdio.h>

int square(int a)
{
    return (a * a);
}

struct abc
{
    int a;
    char b;
};

int main()
{
    struct abc A;
    const int num = 2;
    int x;
    printf("Square of %d is %d", num, square(num));
    scanf("%d", &x);

    return 0;
}