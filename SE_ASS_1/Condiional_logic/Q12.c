//WAP to find maximum number among 3 numbers using ternary operator
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

    // Find the maximum number using the ternary operator
    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Output the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
