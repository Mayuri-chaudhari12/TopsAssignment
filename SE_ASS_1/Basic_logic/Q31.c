//convert kilometer into meter
#include <stdio.h>

int main() {
    float kilometers, meters;

    // Input distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters
    meters = kilometers * 1000; // 1 kilometer = 1000 meters

    // Output the result
    printf("%.2f kilometers is equivalent to %.2f meters.\n", kilometers, meters);

    return 0;
}

