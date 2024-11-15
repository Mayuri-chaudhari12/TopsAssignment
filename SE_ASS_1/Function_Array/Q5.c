// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>

// Function to sort an array in ascending order
void sortAscending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap the elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort an array in descending order
void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Swap the elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;
    int choice;

    // Take the size and input for first array
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements for first array: \n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Take the size and input for second array
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements for second array: \n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Ask the user for sorting order
    printf("\nChoose the sorting order:\n");
    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Perform sorting based on user's choice
    if (choice == 1) {
        printf("\nSorting both arrays in ascending order...\n");
        sortAscending(arr1, n1);
        sortAscending(arr2, n2);
    } else if (choice == 2) {
        printf("\nSorting both arrays in descending order...\n");
        sortDescending(arr1, n1);
        sortDescending(arr2, n2);
    } else {
        printf("Invalid choice. Sorting will not be performed.\n");
        return 0;
    }

    // Display the sorted arrays
    printf("\nSorted first array: ");
    printArray(arr1, n1);

    printf("Sorted second array: ");
    printArray(arr2, n2);

    
}
