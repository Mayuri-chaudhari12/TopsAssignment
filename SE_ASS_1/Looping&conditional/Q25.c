//  (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n, totalSum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of sums using nested loops
    for (int i = 1; i <= n; i++) {
        int sum = 0; // Initialize sum for each k
        for (int j = 1; j <= i; j++) {
            sum += j; // Calculate sum of first i natural numbers
        }
        totalSum += sum; // Add the sum of this series to the total sum
    }

    // Print the result
    printf("The total sum is: %d\n", totalSum);
    
}
