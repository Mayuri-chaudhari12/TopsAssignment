// Write a program in C to compare two strings without using string library function

#include <stdio.h>

void remove_newline(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';  // Replace the newline character with the null terminator
            break;
        }
        i++;
    }
}

int compare_strings(char str1[], char str2[]) {
    int i = 0;
    
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    
    return 1;
}

int main() {
    char str1[100], str2[100];
    
    // Ask user to input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    remove_newline(str1);  // Remove newline character from str1
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    remove_newline(str2);  // Remove newline character from str2
    
    // Compare the strings
    int result = compare_strings(str1, str2);
    
    if (result == 1) {
        printf("Both strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    

}
