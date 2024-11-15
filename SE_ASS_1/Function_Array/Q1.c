//Write a program to find out the max number from given array using function

#include <stdio.h>

// Function to find the maximum number in an array
int findMax(int arr[], int n) {
    int max = arr[0]; // Assume first element is the maximum
    
    // Loop through the array to find the maximum value
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int n;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array of size n

    // Input the elements of the array
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find the maximum number
    int max = findMax(arr, n);
    
    // Print the maximum number
    printf("The maximum number in the array is: %d\n", max);

    return 0;
}
