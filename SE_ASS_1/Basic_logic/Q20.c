//Accept monthaly salary from the user and deduct 10% incurance premiume 10% loan installment find out of remaining salary

#include <stdio.h>

int main() {
    double monthlySalary;
    double insurancePremium;
    double loanInstallment;
    double remainingSalary;

    // Get the monthly salary input from the user
    printf("Enter your monthly salary: ");
    scanf("%lf", &monthlySalary);
    
    // Calculate deductions
    insurancePremium = monthlySalary * 0.10; // 10% insurance premium
    loanInstallment = monthlySalary * 0.10;   // 10% loan installment
    
    // Calculate remaining salary
    remainingSalary = monthlySalary - (insurancePremium + loanInstallment);

    // Output the results
    printf("Insurance Premium deducted: %.2f\n", insurancePremium);
    printf("Loan Installment deducted: %.2f\n", loanInstallment);
    printf("Remaining Salary: %.2f\n", remainingSalary);
    
    return 0;
}

