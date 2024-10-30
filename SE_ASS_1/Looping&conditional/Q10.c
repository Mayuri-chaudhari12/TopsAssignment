//Write a program you have to make a summation of first and last digit
#include <stdio.h>

int main() {
    long long number;
    int lastDigit, firstDigit;

    // Input: number to find the first and last digit
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Find the last digit
    lastDigit = number % 10;

    // Find the first digit
    while (number >= 10) {
        number /= 10; // Reduce number until we have the first digit
    }
    firstDigit = number;

    // Calculate the summation of the first and last digit
    int sum = firstDigit + lastDigit;

    // Output the result
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Summation of first and last digit: %d\n", sum);

    return 0;
}
