// calculate the sum of natural numbers using the while loop.
#include <stdio.h>

int main() {
    int n, sum = 0, count = 1; // Initialize sum and counter

    // Input from the user
    printf("Enter a natural number: ");
    scanf("%d", &n);

    // Check if the input is a natural number
    if (n < 1) {
        printf("Please enter a natural number greater than 0.\n");
        return 1;
    }

    // Calculate the sum of natural numbers using a while loop
    while (count <= n) {
        sum += count; // Add the current number to the sum
        count++;      // Increment the counter
    }

    // Output the total sum
    printf("The sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
