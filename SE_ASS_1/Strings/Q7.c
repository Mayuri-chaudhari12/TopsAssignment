// Write a program in C to copy one string to another string.
#include <stdio.h>

void copy_string(char source[], char destination[]) {
    int i = 0;

    // Loop to copy each character from source to destination
    while (source[i] != '\0') {
        destination[i] = source[i];  // Copy character
        i++;
    }

    // Add null terminator to the destination string
    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];

    // Ask the user to input a string
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);  // Read the string, including spaces
    
    // Copy the source string to destination
    copy_string(source, destination);

    // Display the original and copied strings
    printf("Source String: %s", source);
    printf("Copied String: %s", destination);

    
}
