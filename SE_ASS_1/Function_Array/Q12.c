// WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include <stdio.h>

int main() {
    int numbers[5]; // Array to store 5 numbers
    int i;

    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Display the numbers in reverse order
    printf("\nNumbers in reverse order are:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    
}

