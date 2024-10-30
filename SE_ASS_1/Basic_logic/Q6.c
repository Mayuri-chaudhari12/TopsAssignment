// Find area of Triangle Formula:A=1/2*b*h
#include <stdio.h>

int main() {
    float base, height, area;

    // Input the base and height from the user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area
    area = 0.5 * base * height; // A = 1/2 * b * h

    // Output the result
    printf("Area of the triangle: %.2f\n", area);

    return 0;
}
