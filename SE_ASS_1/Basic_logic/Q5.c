//Find area of cube formula = 6a2
#include <stdio.h>

int main() {
    float edgeLength, surfaceArea;

    // Input the length of the edge from the user
    printf("Enter the length of the edge of the cube: ");
    scanf("%f", &edgeLength);

    // Calculate the surface area
    surfaceArea = 6 * edgeLength * edgeLength; // Area = 6a^2

    // Output the result
    printf("Surface area of the cube: %.2f\n", surfaceArea);

    return 0;
}
