// convert days int month
#include <stdio.h>

int main() {
    int days, months, remainingDays;

    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Calculate months and remaining days
    months = days / 30;              // Assuming 30 days per month
    remainingDays = days % 30;       // Remaining days after calculating months

    // Output the result
    printf("%d days is approximately %d months .\n", days, months);

    return 0;
}
