#include <stdio.h>
#include <math.h>

int main() {
    double num = 25.0;
    double squareRoot = sqrt(num);
    double powerResult = pow(num, 3);
    double logarithm = log(num);
    double floorValue = floor(num);

    printf("SQRT of %.2f is %.2f\n", num, squareRoot);
    printf("%.2f ^ 3 is %.2f\n", num, powerResult);
    printf("Log of %.2f is %.2f\n", num, logarithm);
    printf("Floor of %.2f is %.2f\n", num, floorValue);

    return 0;
}
