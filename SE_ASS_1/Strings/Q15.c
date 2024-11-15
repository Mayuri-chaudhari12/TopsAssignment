// Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>

void find_largest_and_smallest_words(char str[]) {
    char largest[100], smallest[100];
    int max_len = 0, min_len = 1000;  // Set initial values for max and min lengths
    int len;
    
    // Pointer to traverse through the string
    char *token = strtok(str, " ");  // Split the string into words

    // Initialize the largest and smallest words to empty strings
    largest[0] = smallest[0] = '\0';
    
    while (token != NULL) {
        len = strlen(token);  // Get the length of the current word
        
        // Check if this word is the largest
        if (len > max_len) {
            max_len = len;
            strcpy(largest, token);  // Update the largest word
        }

        // Check if this word is the smallest
        if (len < min_len) {
            min_len = len;
            strcpy(smallest, token);  // Update the smallest word
        }

        token = strtok(NULL, " ");  // Get the next word
    }

    // Print the largest and smallest words
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}

int main() {
    char str[1000];

    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces

    // Remove the newline character that fgets may include
    str[strcspn(str, "\n")] = '\0';

    // Call the function to find the largest and smallest words
    find_largest_and_smallest_words(str);

    
}
