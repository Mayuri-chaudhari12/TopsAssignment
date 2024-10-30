//Accept 5 employee name and salary and count average and total salary

#include <stdio.h>

struct Employee {
    char name[50];  // Array of characters to store the name
    float salary;
};

int main() {
    // Declare variables to store details for five employees
    struct Employee employee1, employee2, employee3, employee4, employee5;

    // Input details for the first employee
    printf("\nInput details for Employee 1:\n");
    printf("Name: ");
    scanf("%s", employee1.name); // Assuming names do not contain spaces
    printf("Salary: ");
    scanf("%f", &employee1.salary);

    // Input details for the second employee
    printf("\nInput details for Employee 2:\n");
    printf("Name: ");
    scanf("%s", employee2.name);
    printf("Salary: ");
    scanf("%f", &employee2.salary);

    // Input details for the third employee
    printf("\nInput details for Employee 3:\n");
    printf("Name: ");
    scanf("%s", employee3.name);
    printf("Salary: ");
    scanf("%f", &employee3.salary);

    // Input details for the fourth employee
    printf("\nInput details for Employee 4:\n");
    printf("Name: ");
    scanf("%s", employee4.name);
    printf("Salary: ");
    scanf("%f", &employee4.salary);

    // Input details for the fifth employee
    printf("\nInput details for Employee 5:\n");
    printf("Name: ");
    scanf("%s", employee5.name);
    printf("Salary: ");
    scanf("%f", &employee5.salary);

    // Calculate total and average salary
    double Total = employee1.salary + employee2.salary + employee3.salary + employee4.salary + employee5.salary;
    double Avg = Total / 5.0;

    // Print total and average salary
    printf("\nTotal Salary of Employees: %.2lf\n", Total);
    printf("Average Salary of Employees: %.2lf\n", Avg);

    return 0;
}
