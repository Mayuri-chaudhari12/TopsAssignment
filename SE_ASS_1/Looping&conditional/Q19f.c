/*
1 2 3 4 5 6 7 8 9 10
36 37 38 39 40 41 42 43 44 11
35 64 65 66 67 68 69 70 45 12
34 63 84 85 86 87 88 71 46 13
33 62 83 96 97 98 89 72 47 14
32 61 82 95 100 99 90 73 48 15
31 60 81 94 93 92 91 74 49 16
30 59 80 79 78 77 76 75 50 17
29 58 57 56 55 54 53 52 51 18
28 27 26 25 24 23 22 21 20 19


*/

#include <stdio.h>

#define SIZE 10

int main() {
    int matrix[SIZE][SIZE];
    int startRow = 0, endRow = SIZE - 1;
    int startCol = 0, endCol = SIZE - 1;
    int num = 1;

    while (startRow <= endRow && startCol <= endCol) {
        // Fill the top row
        for (int col = startCol; col <= endCol; col++) {
            matrix[startRow][col] = num++;
        }
        startRow++;

        // Fill the right column
        for (int row = startRow; row <= endRow; row++) {
            matrix[row][endCol] = num++;
        }
        endCol--;

        // Fill the bottom row
        if (startRow <= endRow) {
            for (int col = endCol; col >= startCol; col--) {
                matrix[endRow][col] = num++;
            }
            endRow--;
        }

        // Fill the left column
        if (startCol <= endCol) {
            for (int row = endRow; row >= startRow; row--) {
                matrix[row][startCol] = num++;
            }
            startCol++;
        }
    }

    // Print the matrix
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            printf("%2d ", matrix[row][col]);
        }
        printf("\n");
    }

    
}
