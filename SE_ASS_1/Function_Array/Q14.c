// WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>

int main() {
    int numbers[5]; // Array to store 5 numbers
    int i;

    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Check each number and print whether it's even or odd
    printf("\nChecking if the entered numbers are Even or Odd:\n");
    for(i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is Even\n", numbers[i]);
        } else {
            printf("%d is Odd\n", numbers[i]);
        }
    }

    
}
