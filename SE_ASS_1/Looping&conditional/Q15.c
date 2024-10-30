// Calculate sum of 10 numbers using while loops.
#include <stdio.h>

int main() {
    int count = 0;      // Counter for the number of inputs
    int number;        // Variable to store the current number
    int sum = 0;       // Variable to store the sum

    // Loop until 10 numbers are entered
    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);
        sum += number; // Add the current number to the sum
        count++;       // Increment the counter
    }

    // Output the total sum
    printf("The sum of the 10 numbers is: %d\n", sum);

}
