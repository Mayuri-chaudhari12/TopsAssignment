//  Write a program in C to count the total number of vowels or consonants in a string

#include <stdio.h>
#include <ctype.h>  // For tolower() and isalpha()

void count_vowels_consonants(char str[], int *vowels, int *consonants) {
    int i = 0;
    
    // Loop through the string to count vowels and consonants
    while (str[i] != '\0') {
        // Convert the character to lowercase for uniformity
        char ch = tolower(str[i]);

        // Check if the character is an alphabetic letter
        if (isalpha(ch)) {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {  // If not a vowel, it's a consonant
                (*consonants)++;
            }
        }
        i++;
    }
}

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces

    // Count vowels and consonants in the string
    count_vowels_consonants(str, &vowels, &consonants);

    // Display the results
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    
}
