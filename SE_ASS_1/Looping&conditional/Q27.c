//1 2 3 6 9 18 27 54....
#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of terms
    printf("Enter the number of terms to generate: ");
    scanf("%d", &n);

    // Declare an array to hold the sequence
    int sequence[n];
    sequence[0] = 1; // First term

    // Generate the sequence
    for (int i = 1; i < n; i++) {
        if (i % 2 == 1) {
            // Odd index: multiply by 2
            sequence[i] = sequence[i - 1] * 2;
        } else {
            // Even index: multiply by 1.5 (or 3/2)
            sequence[i] = sequence[i - 1] * 3 / 2;
        }
    }

    // Print the generated sequence
    printf("The generated sequence is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    
}
