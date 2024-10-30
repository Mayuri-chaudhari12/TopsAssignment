//Write a program make a summation of given number 
#include <stdio.h>

int main() {
    long long number;
    int sum = 0;

    // Input: number to find the summation of its digits
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Loop to calculate the summation of the digits
    while (number > 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10;       // Remove the last digit
    }

    // Output the summation of the digits
    printf("The summation of the digits is: %d\n", sum);

    return 0;
}
