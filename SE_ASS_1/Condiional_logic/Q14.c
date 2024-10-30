//WAP to find the largest of 3 numbers
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

    // Find the largest number
    int largest;
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Output the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
