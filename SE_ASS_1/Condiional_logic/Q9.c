//C program to check uppercase or lowercase or digit or special character
#include <stdio.h>

int main() {
    char ch;

    // Input: Read a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch); // Notice the space before %c to ignore any whitespace

    // Check the character type
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
