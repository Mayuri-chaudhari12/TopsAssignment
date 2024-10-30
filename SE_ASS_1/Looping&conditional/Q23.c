//  1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum using a for loop
    for (int i = 1; i <= n; i++) {
        sum += i; // Add the current number to sum
    }

    // Print the result
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    
}
