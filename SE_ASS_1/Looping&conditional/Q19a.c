/*
A
B C
D E F
G H I J
K L M N O
*/

#include <stdio.h>

int main() {
    char letter = 'A';
    int rows = 5; // Number of rows

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }

    return 0;
}
