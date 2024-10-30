//find anci value given number

#include <stdio.h>

int main() {
    char character;

    // Input a character from the user
    printf("Enter a number: ");
    scanf("%c", &character);

    // Display the ASCII value
    printf("The ASCII value of '%c' is %d\n", character, (int)character);

    return 0;
}
