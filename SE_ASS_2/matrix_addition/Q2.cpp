// Objective: Practice multi-dimensional arrays

/*
In C++, multi-dimensional arrays are arrays of arrays. They are used to store data in a grid-like structure. Common examples include matrices (2D arrays), tables, and grids. Understanding multi-dimensional arrays is essential for solving problems that require more than one index for accessing elements.

For this objective, we will focus on:
- 2D Arrays(matrices).
- Matrix operations like addition, subtraction, and multiplication.

Example C++ Program: Matrix Addition Using Multi-Dimensional Arrays

This program will perform the addition of two 2D matrices (2x2) using multi-dimensional arrays.

C++ Code:
*/

#include <iostream>
using namespace std;

int main() {
    // Declare two 2x2 matrices and a result matrix
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input elements for the first matrix
    cout << "Enter elements for the first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements for the second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result of matrix addition
    cout << "The result of the matrix addition is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

/*
Explanation of the Code:

1. Declare Matrices:
   - We define three 2x2 matrices (`matrix1`, `matrix2`, and `result`), all of type `int`.

2. Input Matrices:
   - The program prompts the user to enter the elements for both `matrix1` and `matrix2` using nested `for` loops. Each element is entered one by one.

3. Matrix Addition:
   - A nested loop iterates over each element of the matrices (`matrix1` and `matrix2`) and adds the corresponding elements. The result of the addition is stored in the `result` matrix.

4. Display the Result:
   - Another nested loop is used to display the contents of the `result` matrix.

 Example Output:

Enter elements for the first 2x2 matrix:
Enter element at position (1,1): 1
Enter element at position (1,2): 2
Enter element at position (2,1): 3
Enter element at position (2,2): 4
Enter elements for the second 2x2 matrix:
Enter element at position (1,1): 5
Enter element at position (1,2): 6
Enter element at position (2,1): 7
Enter element at position (2,2): 8
The result of the matrix addition is:
6 8 
10 12 


 Explanation of Output:
- The program first takes input for two 2x2 matrices:
  - `matrix1 = [[1, 2], [3, 4]]`
  - `matrix2 = [[5, 6], [7, 8]]`
- It then adds the corresponding elements:
  - For element (1,1): `1 + 5 = 6`
  - For element (1,2): `2 + 6 = 8`
  - For element (2,1): `3 + 7 = 10`
  - For element (2,2): `4 + 8 = 12`
- The result is displayed as `[[6, 8], [10, 12]]`.

 Key Concepts Reinforced:
1. Multi-Dimensional Arrays: In this example, the arrays are 2-dimensional (matrices), which allows you to represent data in rows and columns.
2. Nested Loops: To handle multi-dimensional arrays, you need nested `for` loops to traverse rows and columns.
3. Matrix Operations: We performed matrix addition by adding corresponding elements of two matrices.

 Practice Exercise:

1. Matrix Multiplication: Modify the program to multiply two 2x2 matrices and display the result.
2. Matrix Transpose: Write a program that takes a 2x2 matrix as input and calculates its transpose (swap rows with columns).
3. Generalize for Larger Matrices: Modify the program to work with matrices of any size (e.g., `mxn` matrices). This will require dynamic memory allocation or using vectors in C++.
4. Matrix Subtraction: Create a program to perform matrix subtraction instead of addition.

*/