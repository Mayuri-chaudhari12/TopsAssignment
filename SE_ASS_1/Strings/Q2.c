//  Write a program in C to separate individual characters from a string.
#include <stdio.h>

int main() {
    char str[100];  // Array to store the input string
    int i;

    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string from user input

    // Loop through the string and print individual characters
    printf("\nIndividual characters in the string are:\n");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);  // Print each character on a new line
    }

    
}

