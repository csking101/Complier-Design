#include <stdio.h>

struct Point {
    float x;
    float y;
};

union Coordinate {
    float x;
    float y;
};

int main() {
    struct Point myPoint;
    union Coordinate coord;
    
    myPoint.x = 3.0;
    myPoint.y = 4.0;

    printf("Point coordinates: (%.2f, %.2f)\n", myPoint.x, myPoint.y);
    coord.x = myPoint.x;
    printf("X-coordinate from union: %.2f\n", coord.x);
    coord.y = myPoint.y;
    printf("Y-coordinate from union: %.2f\n", coord.y);

    return 0;
}
