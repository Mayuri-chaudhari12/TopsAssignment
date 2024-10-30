//find circumference of rectangele formula:c=4*a;

#include <stdio.h>

int main() {
    float width, length, perimeter;

    // Input the width and length from the user
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Calculate the perimeter
    perimeter = 2 * (width + length); // P = 2 * (width + length)

    // Output the result
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
