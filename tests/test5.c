#include <stdio.h>

typedef enum {
    ADD, SUBTRACT, MULTIPY
} Calculator;

int main() {
    Calculator operation = ADD;
    int a = 10, b = 8;

    switch (operation) {
        case ADD:
            printf("Sum is %d", a + b);
            break;
        case SUBTRACT:
            printf("Sum is %d", a - b);
            break;
        case MULTIPY:
            printf("Sum is %d", a * b);
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
