/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compoundInterest;

    // Input from the user
    printf("Enter the principal amount (P): ");
    scanf("%lf", &principal);
    
    printf("Enter the annual interest rate (R in %%): ");
    scanf("%lf", &rate);
    
    printf("Enter the time in years (t): ");
    scanf("%lf", &time);

    // Calculate the amount
    amount = principal * pow((1 + rate / 100), time);

    // Calculate compound interest
    compoundInterest = amount - principal;

    // Output the results
    printf("Amount after %.2f years: %.2f\n", time, amount);
    printf("Compound Interest: %.2f\n", compoundInterest);


}
