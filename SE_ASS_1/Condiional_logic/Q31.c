// Write a program in C to read any Month Number in integer and display the
//number of days for this month
#include <stdio.h>

int main() {
    int month, year, days;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Input year for checking leap year
    printf("Enter the year: ");
    scanf("%d", &year);

    // Determine the number of days in the month
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        case 2: // February
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; // Leap year
            } else {
                days = 28; // Non-leap year
            }
            break;
        default:
            printf("Invalid month number.\n");
            return 1; // Exit with an error code
    }

    // Print the number of days
    printf("Number of days in month %d of year %d: %d days\n", month, year, days);

    return 0;
}
