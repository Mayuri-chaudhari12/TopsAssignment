//convert years into days and month.
#include <stdio.h>

int main() {
    int years, months, days;

    // Input number of years
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Calculate months and days
    months = years * 12;            // Total months
    days = years * 365;             // Total days

    // Output the result
    printf("%d years is equivalent to %d months and %d days.\n", years, months, days);

    return 0;
}

