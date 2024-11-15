// Write a program in C to combine two strings manually

#include <stdio.h>
#include <string.h>

void combine_strings(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Find the end of the first string (str1)
    while (str1[i] != '\0') {
        i++;
    }

    // Append the second string (str2) to the first string (str1)
    while (str2[j] != '\0') {
        str1[i] = str2[j];  // Copy each character from str2 to str1
        i++;
        j++;
    }

    // Null-terminate the combined string
    str1[i] = '\0';
}

int main() {
    char str1[200], str2[100];

    // Ask the user to input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  // Read the first string

    // Remove the newline character that fgets may append
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  // Read the second string

    // Remove the newline character from the second string
    str2[strcspn(str2, "\n")] = '\0';

    // Combine the two strings
    combine_strings(str1, str2);

    // Display the combined string
    printf("Combined string: %s\n", str1);

    
}

    


