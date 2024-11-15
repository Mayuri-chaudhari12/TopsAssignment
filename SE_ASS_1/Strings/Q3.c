//  Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>

int main() {
    char str[100];  // Array to store the input string
    int i, length = 0;

    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string from user input

    // Find the length of the string (excluding the null character)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print individual characters in reverse order
    printf("\nIndividual characters in reverse order are:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);  // Print each character on a new line
    }

    
}

