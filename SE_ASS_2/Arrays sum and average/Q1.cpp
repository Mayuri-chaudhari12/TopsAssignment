// Write a C++ program that accepts an array of integers, calculates the sum and average,and displays the results.

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Ask user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Declare the array with size n
    int arr[n];
    
    // Input the elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the average of the elements
    double average = (sum) / n;

    // Display the results
    cout << "The sum of the elements is: " << sum << endl;
    cout << "The average of the elements is: " << average << endl;

    
}
