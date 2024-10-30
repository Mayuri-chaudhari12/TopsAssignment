//Calculate persion insurance premium based on salary
#include <stdio.h>


int main() {
    double salary;
    double premium;
    float PREMIUM_RATE;

    // Get the salary input from the user
    printf("Enter your salary: ");
    scanf("%lf", &salary);
    
    printf("Enter premium rate:");
    scanf("%f",&PREMIUM_RATE);
    // Calculate the insurance premium
    premium = salary * PREMIUM_RATE;

    // Output the calculated premium
    printf("Your insurance premium is: %.2f\n", premium);
    
    return 0;
}
