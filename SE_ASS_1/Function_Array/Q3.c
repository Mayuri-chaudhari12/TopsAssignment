//3. WAP to find reverse of string using recursion
#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    // Base case: If start index is greater than or equal to end index, return
    if (start >= end) {
        return;
    }

    // Swap the characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call to reverse the remaining substring
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // To read input with spaces

    // Remove newline character if present from fgets
    str[strcspn(str, "\n")] = '\0';

    // Find the length of the string
    int len = strlen(str);

    // Call the recursive function to reverse the string
    reverseString(str, 0, len - 1);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

