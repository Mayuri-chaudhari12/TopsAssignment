//Find area of Square formula :a=a2
#include <stdio.h>

int main() {
    float side, area;

    // Input the length of the side from the user
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Calculate the area
    area = side * side; // Area = a^2

    // Output the result
    printf("Area of the square: %.2f\n", area);

    return 0;
}

