/*
        *
      * * *
    * * * * *
  * * * * * * *
 * * * * * * * * *
*/

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pyramid
    int spaces, stars;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        // Print stars
        for (stars = 1; stars <= (2 * i - 1); stars++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    
}
