// Write a program in C to remove characters from a string except alphabets.
#include <stdio.h>
#include <ctype.h>  // For isalpha()

void remove_non_alphabets(char str[]) {
    int i = 0, j = 0;
    
    // Traverse through the string
    while (str[i] != '\0') {
        // If the character is an alphabet, keep it in the string
        if (isalpha(str[i])) {
            str[j] = str[i];
            j++;
        }
        // Move to the next character
        i++;
    }
    
    // Null-terminate the modified string
    str[j] = '\0';
}

int main() {
    char str[100];
    
    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces

    // Call function to remove non-alphabet characters
    remove_non_alphabets(str);

    // Display the modified string
    printf("String with only alphabetic characters: %s\n", str);

    
}

