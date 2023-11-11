//error test for function return mismatch
#include<stdio.h>

void voidReturningFunc(int a)
{
    int abc=1;
    a = a + 5;
    
}

enum token {
    qwer=9,
    sdakfgk=23,
    lsahf
};


int main()
{
    int i,n;

    voidReturningFunc(i);

    switch (i) {
        case 1:
            printf("asfas");
            break;
        case 3:
            printf("asfas");
            break;
        case 4 ... 7:
            scanf("%d", n);
            break;
        default:
            printf("this is default");
            break;
    }


    printf("%d",i);

}