#include <stdio.h>

// Define a typedef for a custom data type
typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK
} Color;

int main() {
    // Declare and initialize a static variable
    static int counter = 0;

    // Increment the counter
    counter++;

    // Display the current value of the counter
    printf("Counter: %d\n", counter);

    // Declare a variable of the custom data type 'Color'
    Color myColor = BLUE;

    // Use a switch statement to perform actions based on 'myColor'
    switch (myColor) {
        case RED:
            printf("The color is RED.\n");
            break;
        case GREEN:
            printf("The color is GREEN.\n");
            break;
        case BLUE:
            printf("The color is BLUE.\n");
            break;
        case YELLOW:
            printf("The color is YELLOW.\n");
            break;
        default:
            printf("The color is not recognized.\n");
    }

    // Use logical and arithmetic operators
    int a = 10;
    int b = 5;
    int c = 15;

    if (a > b && a > c) {
        printf("a is the largest.\n");
    } else if (b > a && b > c) {
        printf("b is the largest.\n");
    } else {
        printf("c is the largest.\n");
    }

    return 0;
}
