#include <stdio.h>
#include <math.h>

int main() {
    double num = 25.0;
    double squareRoot = sqrt(num);
    double powerResult = pow(num, 3);
    double logarithm = log(num);
    double floorValue = floor(num);

    printf("Square root of %.2f is %.2f\n", num, squareRoot);
    printf("%.2f raised to the power of 3 is %.2f\n", num, powerResult);
    printf("Natural logarithm of %.2f is %.2f\n", num, logarithm);
    printf("Floor value of %.2f is %.2f\n", num, floorValue);

    return 0;
}
