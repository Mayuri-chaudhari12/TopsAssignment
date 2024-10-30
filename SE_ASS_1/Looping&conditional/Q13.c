//calculate the factorial of a given number using while loop
#include <stdio.h>
int main() {
    int number;
    unsigned long long factorial = 1; // Using unsigned long long for larger results

    // Input: Accept a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1; // Initialize counter
        // Calculate factorial using a while loop
        while (i <= number) {
            factorial *= i; // Multiply current value of factorial by i
            i++;            // Increment i
        }

       // Output the result
        printf("Factorial of %d is %llu\n", number, factorial);
    }

    
}
