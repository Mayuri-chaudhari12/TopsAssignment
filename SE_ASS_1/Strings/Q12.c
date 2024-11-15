// Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_word_occurrences(char str[], const char *word) {
    int count = 0;
    char *ptr = str;
    
    // Loop through the string and look for the word
    while ((ptr = strstr(ptr, word)) != NULL) {
        // Ensure the word is a standalone word, not part of another word
        if ((ptr == str || !isalpha(*(ptr - 1))) && 
            (!isalpha(*(ptr + strlen(word))))) {
            count++;
        }
        // Move to the next character after the found word
        ptr += strlen(word);
    }
    
    return count;
}

int main() {
    char str[1000];
    const char *word = "is";  // Word to search for

    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Call the function to count occurrences of the word "is"
    int count = count_word_occurrences(str, word);

    // Output the result
    printf("The word \"%s\" appears %d times in the string.\n", word, count);

    
}
