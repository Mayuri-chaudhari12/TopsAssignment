// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of squares using a for loop
    for (int i = 1; i <= n; i++) {
        sum += i * i; // Add the square of the current number to sum
    }

    // Print the result
    printf("Sum of squares of the first %d natural numbers is: %d\n", n, sum);
    
}
