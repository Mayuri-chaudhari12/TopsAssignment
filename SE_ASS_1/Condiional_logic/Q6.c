//Find the character vovel or not

#include <stdio.h>

int main() {
    char ch;

    // Input: Read a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch); // Notice the space before %c to ignore any whitespace

    // Check if the character is a vowel (both lowercase and uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
