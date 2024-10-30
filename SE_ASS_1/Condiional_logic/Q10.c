//WAP to check whether a number is negative,positive or ziro.
#include <stdio.h>

int main() {
    float number;

    // Input: Read a number from the user
    printf("Enter a number: ");
    scanf("%f", &number);

    // Check if the number is negative, positive, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
