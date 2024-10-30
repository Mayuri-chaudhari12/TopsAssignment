//WAP to find minimum number among 3 numbers using temparary operatore

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input: Read three numbers from the user
    printf("Enter three integers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    // Find the minimum number using the ternary operator
    int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Output the minimum number
    printf("The minimum number is: %d\n", min);

    return 0;
}
