/*     
        *
        * *  
        * * *
        * * * *
        * * * * *
        * * * * * *
        * * * * *
        * * * *
        * * *
        * *
        *
*/

#include <stdio.h>

int main() {
    int rows = 6; // Number of rows for the upper pyramid
    int stars;

    // Print the upward pyramid
    for (int i = 0; i <= rows; i++) {
        for (stars = 0; stars <= i; stars++) {
            printf("* ");
        }
        printf("\n");
    }

    // Print the downward pyramid
    for (int i = rows; i >= 0; i--) {
        for (stars = 1; stars <= i; stars++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
