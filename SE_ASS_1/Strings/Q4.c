//  Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <stdbool.h>

int count_words(char str[]) {
    int count = 0;
    bool in_word = false;

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a space or a word
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            in_word = false;  // If space, we are outside a word
        } else if (!in_word) {
            in_word = true;  // If not a space, we are inside a word
            count++;         // Increment word count
        }
    }
    return count;
}

int main() {
    char str[100];  // Array to store the input string

    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string with spaces

    // Count and print the total number of words
    int word_count = count_words(str);
    printf("Total number of words: %d\n", word_count);

    
}

