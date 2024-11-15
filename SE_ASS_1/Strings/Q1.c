// Write a program in C to find the length of a string without using library functions.
#include <stdio.h>

int string_length(char str[]) {
    int length = 0;
    
    // Loop through the string until the null terminator is encountered
    while (str[length] != '\0') {
        length++; // Increment the length for each character
    }
    
    return length; // Return the calculated length
}

int main() {
    char str[100];

    // Ask the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string input
    
    // Find the length of the string
    int length = string_length(str);

    // Print the length of the string
    printf("Length of the string is: %d\n", length);

    
}
