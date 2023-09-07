#include <stdio.h>

// Define a struct for representing a point in 2D space
struct Point {
    int x;
    int y;
};

// Define a union for representing a value that can be either an int or a float
union Data {
    int intValue;
    float floatValue;
};

int main() {
    // Declare a struct variable to represent a point
    struct Point myPoint;
    
    // Initialize the point's coordinates
    myPoint.x = 5;
    myPoint.y = 10;

    // Declare a union variable
    union Data myData;

    // Initialize the union with an integer
    myData.intValue = 42;

    // Create a variable for the user's choice
    int choice;

    do {
        // Display a menu
        printf("Menu:\n");
        printf("1. Display Point\n");
        printf("2. Display Union Value\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Point Coordinates: (%d, %d)\n", myPoint.x, myPoint.y);
                break;
            case 2:
                printf("Union Value: %d (as an int) or %.2f (as a float)\n", myData.intValue, myData.floatValue);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}
