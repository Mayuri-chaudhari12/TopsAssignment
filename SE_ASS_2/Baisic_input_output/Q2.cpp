// Objective: practice input/output operation using cin and cout.

/*
 1. Introduction to `cin` and `cout`

- `cin`: This is the standard input stream in C++. It is used to take input from the user.
- `cout`: This is the standard output stream in C++. It is used to display output to the user.


 Explanation:
- `cin.clear()`: Clears the error flag if an invalid input is entered.
- `cin.ignore()`: Ignores the invalid input in the buffer until a valid input is given.
*/
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age; // takes input from the user
    cout << "Your age is: " << age << endl; // displays the value
    return 0;
}



