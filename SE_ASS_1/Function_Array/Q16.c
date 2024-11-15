// Store 5 numbers in array and sort it in ascending order
#include <stdio.h>

int main() {
    int numbers[5], i, j, temp;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sorting the array in ascending order using Bubble Sort
    for(i = 0; i < 4; i++) {  // Loop through the entire array
        for(j = 0; j < 4 - i; j++) {  // Loop through the unsorted part
            if(numbers[j] > numbers[j + 1]) {
                // Swap the numbers if they are in the wrong order
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("\nSorted array in ascending order:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

}
