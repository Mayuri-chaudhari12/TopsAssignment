//Find area of ractangle formula:A=wl
#include <stdio.h>

int main() {
    float width, length, area;

    // Input the width and length from the user
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Calculate the area
    area = width * length; // A = w * l

    // Output the result
    printf("Area of the rectangle: %.2f\n", area);

    return 0;
}


