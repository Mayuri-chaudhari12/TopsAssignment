// Accept 5 numbers from user and perform sum of array
#include <stdio.h>

int main() {
    int numbers[5], i, sum = 0;

    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the array elements
    for(i = 0; i < 5; i++) {
        sum += numbers[i];  // Add each element to the sum
    }

    // Display the sum of the array elements
    printf("\nSum of the entered numbers is: %d\n", sum);

    
}

