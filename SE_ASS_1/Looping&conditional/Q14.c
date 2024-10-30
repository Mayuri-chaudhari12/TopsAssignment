// Accept 5 numbers from user and find those numbers factorials.
#include <stdio.h>

long  factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long  result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int numbers[5];

    // Accept 5 numbers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    // Calculate and display factorials
    for (int i = 0; i < 5; i++) {
        printf("The factorial of %d is %ld\n", numbers[i], factorial(numbers[i]));
    }

    return 0;
}
