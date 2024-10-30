// 1/2-2/3+3/4-4/5+5/6.....n

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Ask the user for input
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate the series
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            // Even index, subtract the fraction
            sum -= (double)i / (i + 1);
        } else {
            // Odd index, add the fraction
            sum += (double)i / (i + 1);
        }
    }

    // Print the result
    printf("The sum of the series up to %d terms is: %.6f\n", n, sum);
    
}
