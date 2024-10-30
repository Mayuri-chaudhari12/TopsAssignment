//pattern
/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1*/

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Loop to print each column in the current row
        for (int j = 1; j <= i; j++) {
            // Print 1 if j is odd, 0 if j is even
            if (j % 2 != 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
