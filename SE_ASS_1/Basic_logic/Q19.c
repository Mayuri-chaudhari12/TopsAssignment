// calculate compound interest.
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, amount, compoundInterest;
    int time, n;

    // Get user input for principal, rate, time, and number of compounding periods
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter the number of years: ");
    scanf("%d", &time);
    
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    
    // Convert the rate from percentage to decimal
    rate = rate / 100;

    // Calculate the amount after interest
    amount = principal * pow((1 + rate / n), n * time);
    
    // Calculate compound interest
    compoundInterest = amount - principal;

    // Output the results
    printf("Total amount after %.2f years: %.2f\n", (double)time, amount);
    printf("Compound Interest: %.2f\n", compoundInterest);
    
    return 0;
}

