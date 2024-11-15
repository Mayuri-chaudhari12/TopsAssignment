// Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa

#include <stdio.h>
#include <ctype.h>  // For tolower() and toupper()

void swap_case(char str[]) {
    int i = 0;
    
    // Loop through the string and swap the case of each character
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);  // Convert lowercase to uppercase
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);  // Convert uppercase to lowercase
        }
        i++;
    }
}

int main() {
    char str[100];
    
    // Ask the user to input a sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces

    // Swap the case of each character in the string
    swap_case(str);

    // Display the modified sentence
    printf("Modified sentence: %s\n", str);

    
}
