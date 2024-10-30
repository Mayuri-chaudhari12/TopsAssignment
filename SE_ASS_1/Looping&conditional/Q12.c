//Program of Armstrong number in c using for loop & while loop
#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, digits = 0, sum = 0;

    // Input: Accept a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits using a for loop
    for (int temp = number; temp != 0; temp /= 10) {
        digits++;
    }

    // Calculate the sum of the digits raised to the power of the number of digits using a while loop
    while (originalNumber != 0) {
        remainder = originalNumber % 10; // Get the last digit
        sum += pow(remainder, digits);    // Add the power of the digit to the sum
        originalNumber /= 10;              // Remove the last digit
    }

    // Check if the number is an Armstrong number
    if (sum == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
