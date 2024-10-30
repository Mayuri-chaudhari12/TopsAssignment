//Write a program to find out the max from given numbers:1562-->max no is 6
#include <stdio.h>

int main() {
    long long number;
    int maxDigit = 0;

    // Input: number to find the maximum digit from
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Loop to find the maximum digit
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        if (digit > maxDigit) {
            maxDigit = digit; // Update maxDigit if the current digit is greater
        }
        number /= 10; // Remove the last digit
    }

    // Output the maximum digit
    printf("Max digit is: %d\n", maxDigit);

    return 0;
}

