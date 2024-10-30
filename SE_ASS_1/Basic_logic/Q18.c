//calculate persion,s annual salary.
#include <stdio.h>

int main() {
    double monthlySalary;
    double annualSalary;

    // Get the monthly salary input from the user
    printf("Enter your monthly salary: ");
    scanf("%lf", &monthlySalary);
    
    // Calculate the annual salary
    annualSalary = monthlySalary * 12;

    // Output the calculated annual salary
    printf("Your annual salary is: %.2f\n", annualSalary);
    
    return 0;
}
