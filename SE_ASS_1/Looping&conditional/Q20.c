/*
WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50
*/
#include <stdio.h>

int main() {
    int rows = 5;    // Number of rows
    int columns = 10; // Number of columns
    int num = 1;     // Starting number

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            // Print the number with leading zeros
            printf("%02d ", num);
            num++; // Increment the number
        }
        printf("\n"); // Move to the next line after each row
    }

    
}
