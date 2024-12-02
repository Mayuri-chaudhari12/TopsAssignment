// Objective: Understand basic array manipulation.

/*

In C++, arrays are used to store multiple values of the same type in a single variable.
 Array manipulation involves tasks such as:
- Storing and accessing array elements.
- Modifying array values.
- Traversing the array using loops.
- Performing operations like finding the sum, average, maximum, and minimum values.

 Key Operations on Arrays:
1. Input: Accept values into the array.
2. Access: Retrieve or modify values at specific positions.
3. Traverse: Iterate through the array elements using loops.
4. Manipulate: Perform operations like sum, average, finding max/min, etc.

 C++ Program to Demonstrate Basic Array Manipulation

In this program, we will:
- Accept an array of integers.
- Calculate the sum and average.
- Find the largest and smallest elements.
- Display the results.

 C++ Code:
*/
#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask user for the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Declare the array with size n
    int arr[n];
    
    // Input the elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize sum and variables for max and min
    int sum = 0;
    int max = arr[0]; // Initialize max to the first element
    int min = arr[0]; // Initialize min to the first element

    // Traverse the array to calculate the sum, max, and min
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Calculate sum

        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger element is found
        }
        if (arr[i] < min) {
            min = arr[i];  // Update min if a smaller element is found
        }
    }

    // Calculate the average
    double average = static_cast<double>(sum) / n;

    // Display the results
    cout << "The sum of the elements is: " << sum << endl;
    cout << "The average of the elements is: " << average << endl;
    cout << "The largest element is: " << max << endl;
    cout << "The smallest element is: " << min << endl;

}

/*
 Explanation of the Code:

1. Array Declaration:
   - An array `arr` is declared based on user input for the size `n`.
   
2. Input the Array:
   - A loop is used to accept `n` integer elements from the user into the array.

3. Sum Calculation:
   - We initialize a `sum` variable to 0 and use a loop to add each element of the array to this sum.

4. Finding Maximum and Minimum:
   - The `max` and `min` variables are initialized to the first element of the array. As we traverse the array, if we find an element greater than `max`, we update `max`. Similarly, if we find an element smaller than `min`, we update `min`.

5. Average Calculation:
   - The average is computed by dividing the `sum` by the number of elements `n`. We cast the `sum` to `double` to ensure we get a floating-point result.

6. Output:
   - The program outputs the sum, average, largest, and smallest elements of the array.

 Example Output:
Enter the number of elements in the array: 5
Enter 5 elements:
10 20 30 40 50
The sum of the elements is: 150
The average of the elements is: 30
The largest element is: 50
The smallest element is: 10


Key Concepts Reinforced:

1. Array Input and Output: Accepting and displaying values in an array using loops.
2. Traversing Arrays: Iterating through the array to perform operations like summing elements, finding maximum/minimum.
3. Array Manipulation: Performing operations on array elements like sum, average, and finding largest and smallest values.
4. Integer and Double Operations: Demonstrating type conversion using `static_cast<double>` for computing the average with floating-point precision.

Practice Exercises:

1. Modify the Program to Reverse the Array:
   - After inputting the array, print the elements in reverse order.

2. Find the Median:
   - Sort the array and find the median value. If the number of elements is odd, return the middle element; if even, return the average of the two middle elements.

3. Array Sorting:
   - Implement a sorting algorithm (like bubble sort) to sort the array in ascending or descending order.

4. Search for an Element:
   - Write a function to search for a specific element in the array and return its index.

*/