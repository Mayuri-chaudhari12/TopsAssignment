// write a C++ program to display the multiplication table of a given number using a for loop.

#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to input a number
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    // Display multiplication table using a for loop
    cout << "Multiplication table for " << number << " is:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << number * i << endl;
    }
}
