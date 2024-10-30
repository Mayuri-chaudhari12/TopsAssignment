// Calculate 5 numbers from users and calculate number of even and odd using of while loop.
#include <stdio.h>

int main() {
    int even_count = 0, odd_count = 0;
    int count = 0;
    int number;

    // Use a while loop to get 5 numbers from the user
    while (count < 5) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        // Check if the number is even or odd
        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        count++;
    }

    // Print the results
    printf("Total even numbers: %d\n", even_count);
    printf("Total odd numbers: %d\n", odd_count);

    
}
