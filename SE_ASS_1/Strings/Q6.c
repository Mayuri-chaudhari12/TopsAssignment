// Write a program in C to count the total number of alphabets, digits and special characters in a string

#include <stdio.h>
#include <ctype.h>  // For isalpha(), isdigit(), and ispunct()

void count_characters(char str[], int *alphabets, int *digits, int *special_chars) {
    int i = 0;
    
    // Loop through the string to count alphabets, digits, and special characters
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            (*alphabets)++;  // Increment alphabet counter
        } else if (isdigit(str[i])) {
            (*digits)++;  // Increment digit counter
        } else if (ispunct(str[i])) {
            (*special_chars)++;  // Increment special character counter
        }
        i++;
    }
}

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special_chars = 0;

    // Ask user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces
    
    // Call function to count alphabets, digits, and special characters
    count_characters(str, &alphabets, &digits, &special_chars);

    // Display the results
    printf("\nTotal Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", special_chars);

    
}
