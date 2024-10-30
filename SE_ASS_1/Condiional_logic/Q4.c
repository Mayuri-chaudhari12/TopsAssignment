//WAP to make simple calculator(operation include Addition,Subtraction,Multiplication,Division,Modulo)using conditional statment
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input: Accept two numbers and an operator
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Notice the space before %c to ignore any whitespace

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform the operation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (operator == '%') {
        if ((int)num2 != 0) {
            result = (int)num1 % (int)num2; // Perform modulo on integers
            printf("%.0lf %% %.0lf = %.0lf\n", num1, num2, result);
        } else {
            printf("Error: Modulo by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
