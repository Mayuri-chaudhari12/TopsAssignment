//WAP to convert years into days and days into years
#include <stdio.h>

int main() {
    int years, days;

    // Input for years to convert to days
    printf("Enter number of years: ");
    scanf("%d", &years);
    days = years * 365; // Convert years to days
    printf("%d years is equivalent to %d days.\n", years, days);

    // Input for days to convert to years
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365; // Convert days to years
    printf("%d days is approximately %d years.\n", days, years);

    return 0;
}
