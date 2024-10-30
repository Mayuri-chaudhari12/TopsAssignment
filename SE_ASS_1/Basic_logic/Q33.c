//C program to read Integer and print First Three Powers(N^1,N^2,N^3)
#include <stdio.h>
#include <math.h> // Include math.h for power function

int main() {
    int num;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate and print the first three powers
    printf("The first three powers of %d are:\n", num);
    printf("%d^1 = %d\n", num, (int)pow(num, 1)); // N^1
    printf("%d^2 = %d\n", num, (int)pow(num, 2)); // N^2
    printf("%d^3 = %d\n", num, (int)pow(num, 3)); // N^3

    return 0;
}
