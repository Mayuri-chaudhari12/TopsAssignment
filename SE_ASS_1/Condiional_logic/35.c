//Accept the input month number and print number of days in that month.

#include <stdio.h>

int main() {
    int month;

    // Prompt the user to enter a month number
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Determine the number of days based on the month
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            printf("Number of days in month %d: 31\n", month);
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            printf("Number of days in month %d: 30\n", month);
            break;
        case 2: // February
            printf("Number of days in month %d: 28 (or 29 in a leap year)\n", month);
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
