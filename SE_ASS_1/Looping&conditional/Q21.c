/*
 Accept 3 numbers from users using while loop and check each numbers palindrome
*/
#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Check if original number is equal to the reversed number
    return original == reversed;
}

int main() {
    int count = 0; // To track the number of inputs
    int number;

    while (count < 3) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (isPalindrome(number)) {
            printf("%d is a palindrome.\n", number);
        } else {
            printf("%d is not a palindrome.\n", number);
        }

        count++; // Increment the count
    }

    
}
