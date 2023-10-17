//error test for function return mismatch
#include<stdio.h>

void voidReturningFunc(int a)
{
    int abc=1;
    return a;
}

// struct thisisastruct {
//     register int bismillah;
// };

// union thisisaunion {
//     extern int mashallah;
//     static const int allahisnotreal;
// };

enum token {
    qwer=9,
    sdakfgk=23,
    lsahf
};


void main()
{
    int i,n;

    voidReturningFunc(i);

    switch (i) {
        case 1:
            printf("asfas");
        case 3:
            printf("asfas");
        case 4 ... 7:
            scanf("%d", n);
        default:
            printf("this is default");
    }


    printf("%d",i);

}