//WAP to take 10 no. Input from user find out below values
//a. How many even number are there
//b. How many odd number are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include <stdio.h>

int main() {
    int numbers[10];
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    // Accept 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate even and odd counts and their sums
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            evenSum += numbers[i];
        } else {
            oddCount++;
            oddSum += numbers[i];
        }
    }

    // Display the results
    printf("\nResults:\n");
    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}

