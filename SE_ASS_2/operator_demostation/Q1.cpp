// Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators.
// Perform operations using each type of operator and display the results.

#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators
    int a = 10, b = 5;
    cout << "Arithmetic Operations:" << endl;
    cout << "a + b = " << a + b << endl;  // Addition
    cout << "a - b = " << a - b << endl;  // Subtraction
    cout << "a * b = " << a * b << endl;  // Multiplication
    cout << "a / b = " << a / b << endl;  // Division
    cout << "a % b = " << a % b << endl;  // Modulus

    // Relational Operators
    cout << "\nRelational Operations:" << endl;
    cout << "a == b: " << (a == b) << endl;  // Equal to
    cout << "a != b: " << (a != b) << endl;  // Not equal to
    cout << "a > b: " << (a > b) << endl;    // Greater than
    cout << "a < b: " << (a < b) << endl;    // Less than
    cout << "a >= b: " << (a >= b) << endl;  // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl;  // Less than or equal to

    // Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operations:" << endl;
    cout << "x && y: " << (x && y) << endl;  // Logical AND
    cout << "x || y: " << (x || y) << endl;  // Logical OR
    cout << "!x: " << (!x) << endl;          // Logical NOT

    // Bitwise Operators
    int p = 12, q = 5;  // Binary: 12 = 1100, 5 = 0101
    cout << "\nBitwise Operations:" << endl;
    cout << "p & q = " << (p & q) << endl;   // Bitwise AND
    cout << "p | q = " << (p | q) << endl;   // Bitwise OR
    cout << "p ^ q = " << (p ^ q) << endl;   // Bitwise XOR
    cout << "~p = " << (~p) << endl;         // Bitwise NOT
    cout << "p << 1 = " << (p << 1) << endl; // Bitwise Left Shift
    cout << "p >> 1 = " << (p >> 1) << endl; // Bitwise Right Shift

    
}

