//convert minutes into seconds and hours.
#include <stdio.h>

int main() {
    int minutes, seconds, hours;

    // Input number of minutes
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    // Calculate seconds and hours
    seconds = minutes * 60;         // Convert minutes to seconds
    hours = minutes / 60;           // Convert minutes to hours

    // Output the result
    printf("%d minutes is equivalent to %d hours and %d seconds.\n", minutes, hours, seconds);

    return 0;
}
