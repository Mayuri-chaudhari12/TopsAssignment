/*
A
A B
A B C
A B C D
A B C D E
*/

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pattern

    for (int i = 1; i <= rows; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch); // Print the current character
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
