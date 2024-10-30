//WAP to find area and circumference of circal
#include <stdio.h>

int main() {
    float radius, area, circumference;
    float PI=3.14;
    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius; // Area = πr^2
    circumference = 2 * PI * radius; // Circumference = 2πr

    // Output the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}



		

