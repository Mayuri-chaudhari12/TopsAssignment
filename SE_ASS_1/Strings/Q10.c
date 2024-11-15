//  Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>

void extract_substring(char str[], int start, int length, char result[]) {
    // Check if the starting index and length are valid
    int i;
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        result[i] = str[start + i];  // Copy characters from the source string to the result
    }
    
    // Null-terminate the result string
    result[i] = '\0';
}

int main() {
    char str[100], result[100];
    int start, length;

    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces
    
    // Remove newline character that fgets may include
    str[strcspn(str, "\n")] = '\0';  // Removes the newline at the end of the string

    // Ask the user for the starting index and length of the substring
    printf("Enter the starting index: ");
    scanf("%d", &start);
    
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    // Extract the substring
    extract_substring(str, start, length, result);

    // Display the extracted substring
    printf("Extracted Substring: %s\n", result);

    
}

