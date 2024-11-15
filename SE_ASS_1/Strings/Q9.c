// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

void find_max_char_frequency(char str[]) {
    int freq[256] = {0};  // Array to store frequency of each character (ASCII size)

    int i = 0;
    // Traverse the string to count the frequency of each character
    while (str[i] != '\0') {
        freq[(int)str[i]]++;  // Increment the frequency of the current character
        i++;
    }

    // Find the maximum frequency and the corresponding character
    int max_freq = 0;
    char max_char = str[0];

    for (i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = (char)i;  // Convert back to character
        }
    }

    // Output the result
    printf("The character with maximum frequency is '%c' and it appears %d times.\n", max_char, max_freq);
}

int main() {
    char str[100];

    // Ask user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces

    // Find the character with maximum frequency
    find_max_char_frequency(str);

    
}

