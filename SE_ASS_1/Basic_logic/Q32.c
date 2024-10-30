//Accept 2 numbers and find out its sum check it size.
#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Output the result
    printf("Sum: %d\n", sum);

    // Check and print the size of the variables
    printf("Size of num1: %zu bytes\n", sizeof(num1));
    printf("Size of num2: %zu bytes\n", sizeof(num2));
    printf("Size of sum: %zu bytes\n", sizeof(sum));

}
