/* 
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage */

#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int empNo;
    char empName[100];
    char address[200];
    int age;
};

// Function to display employee details
void displayEmployee(struct Employee emp) {
    printf("\nEmployee No: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee employees[5]; // Array to hold information of 5 employees

    // Input information for 5 employees
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Enter Employee No: ");
        scanf("%d", &employees[i].empNo);
        getchar(); // To consume the newline character left by scanf

        printf("Enter Employee Name: ");
        fgets(employees[i].empName, sizeof(employees[i].empName), stdin);
        employees[i].empName[strcspn(employees[i].empName, "\n")] = '\0'; // Remove newline

        printf("Enter Address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = '\0'; // Remove newline

        printf("Enter Age: ");
        scanf("%d", &employees[i].age);
        getchar(); // To consume the newline character left by scanf
    }

    // Display information for all employees
    printf("\nEmployee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d Details:", i + 1);
        displayEmployee(employees[i]);
    }

    
}
