/*Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50*/

#include <stdio.h>

int main() {
    int N;

    // Ask the user for input
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &N);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", N);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    
}
