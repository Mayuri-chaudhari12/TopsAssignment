//WAP to print table up to given numbers

#include <stdio.h>

int main() {
    int number, limit;

    // Input: number for which to print the table
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &number);
    
    // Input: range up to which to print the table
    printf("Enter the range up to which to print the table: ");
    scanf("%d", &limit);

    // Print the multiplication table
    printf("Multiplication table for %d up to %d:\n", number, limit);
    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

