//find circumference of square formula:c=4*a;

#include <stdio.h>

int main() {
    float side, circumference;

    // Input the length of the side from the user
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Calculate the circumference
    circumference = 4 * side; // C = 4 * a

    // Output the result
    printf("Circumference of the square: %.2f\n", circumference);

    return 0;
}
