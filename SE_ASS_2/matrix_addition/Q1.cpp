// Write a C++ program to perform matrix addition on two 2x2 matrics.

#include <iostream>
using namespace std;

int main() {
    // Declare two 2x2 matrices
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input the first matrix
    cout << "Enter elements of the first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    // Input the second matrix
    cout << "Enter elements of the second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Enter element: ";
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result of the matrix addition
    cout << "The result of the matrix addition is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
