//Write a c program to read the valvue of an integers m and display the value of 
//n is 1 when m is larger than 0,0 when m is 0 and -1 when m is less then 0.
#include <stdio.h>

int main() {
    int m, n;

    // Input: Read the value of m
    printf("Enter an integer value for m: ");
    scanf("%d", &m);

    // Determine the value of n based on the value of m
    if (m > 0) {
        n = 1; // m is larger than 0
    } else if (m == 0) {
        n = 0; // m is 0
    } else {
        n = -1; // m is less than 0
    }

    // Output the value of n
    printf("The value of n is: %d\n", n);

    return 0;
}
