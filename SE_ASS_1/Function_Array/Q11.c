//  WAP to perform Palindrome number using for loop and function
#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    int original_num = num;
    int reversed_num = 0, remainder;

    // Loop to reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        reversed_num = reversed_num * 10 + remainder; // Append to reversed number
        num /= 10; // Remove the last digit from num
    }

    // Check if the original number is equal to the reversed number
    if (original_num == reversed_num) {
        return 1; // Return 1 for palindrome
    } else {
        return 0; // Return 0 for not a palindrome
    }
}

int main() {
    int number;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a palindrome using the function
    if (is_palindrome(number)) {
        printf("%d is a Palindrome number.\n", number);
    } else {
        printf("%d is not a Palindrome number.\n", number);
    }

    
}
