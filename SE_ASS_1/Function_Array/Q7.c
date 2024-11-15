// WAP Find out length of string without using inbuilt function
#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    
    // Iterate through the string and count characters until '\0' is found
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[100];  // Declare a string with a maximum size of 100 characters
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces
    
    // If fgets includes a newline character, replace it with '\0'
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';  // Remove the newline character
            break;
        }
        i++;
    }
    
    // Calculate the length using our stringLength function
    int length = stringLength(str);
    
    // Output the length of the string
    printf("The length of the string is: %d\n", length);
    
    
}

