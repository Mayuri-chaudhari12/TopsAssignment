//simple calculator +,-,*,/,%;
#include <stdio.h>

int main() {
    float number1, number2;
    char operation;

    // Prompting user for input
    printf("Enter two numbers: ");
    scanf("%f %f", &number1, &number2);

    printf("Enter an operation (+, -, *, /, %%): ");
    scanf(" %c", &operation);  
    // Notice the space before %c to capture the previous newline character.

    // Processing the operation using a switch statement
    switch(operation) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", number1, number2, number1 + number2);
            break;

        case '-':
            printf("%.2f - %.2f = %.2f\n", number1, number2, number1 - number2);
            break;

        case '*':
            printf("%.2f * %.2f = %.2f\n", number1, number2, number1 * number2);
            break;

        case '/':
            if(number2 != 0.0) {
                printf("%.2f / %.2f = %.2f\n", number1, number2, number1 / number2);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        
        case '%':
            if((int)number2 != 0) {
                printf("%.0f %% %.0f = %d\n", number1, number2, (int)number1 % (int)number2);
            } else {
                printf("Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operation.\n");
    }

    return 0;
}

