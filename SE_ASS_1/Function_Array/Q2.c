//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    // Display the menu
    do {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // If the user chooses to exit, break out of the loop
        if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        }

        // Prompt for two numbers to perform the operation
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Perform the operation based on user input
        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2: // Subtraction
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3: // Multiplication
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4: // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }

    } while (choice != 5); // Repeat the menu until user chooses to exit

    
}
