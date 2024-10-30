/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pattern
    int num = 1;  // Starting number

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++; // Increment the number
        }
        printf("\n"); // Move to the next line after each row
    }
}
