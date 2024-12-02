/* Write a C++ program that takes  a student’s marks as input and calculates the grade
based on if-else conditions.*/

#include <iostream>
using namespace std;

int main() {
    float marks;  
    char grade;   

    cout << "Enter the student's marks: ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        grade = 'A';  
    } 
    else if (marks >= 80 && marks < 90) {
        grade = 'B'; 
    }
    else if (marks >= 70 && marks < 80) {
        grade = 'C';  
    }
    else if (marks >= 60 && marks < 70) {
        grade = 'D';  
    }
    else if (marks >= 50 && marks < 60) {
        grade = 'E'; 
    }
    else {
        grade = 'F'; 
    }
    cout << "The student's grade is: " << grade << endl;

}
