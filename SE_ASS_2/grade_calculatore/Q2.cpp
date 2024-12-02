//  Objective: Practice conditional statements (if-else)

#include <iostream>
using namespace std;

int main() {
    float marks;  // Variable to store the marks input by the student
    char grade;   // Variable to store the grade

    // Ask the user to input marks
    cout << "Enter the student's marks: ";
    cin >> marks;

    // Determine the grade based on the marks using if-else conditions
    if (marks >= 90 && marks <= 100) {
        grade = 'A';  // Grade A for marks between 90 and 100
    } 
    else if (marks >= 80 && marks < 90) {
        grade = 'B';  // Grade B for marks between 80 and 89
    }
    else if (marks >= 70 && marks < 80) {
        grade = 'C';  // Grade C for marks between 70 and 79
    }
    else if (marks >= 60 && marks < 70) {
        grade = 'D';  // Grade D for marks between 60 and 69
    }
    else if (marks >= 50 && marks < 60) {
        grade = 'E';  // Grade E for marks between 50 and 59
    }
    else {
        grade = 'F';  // Grade F for marks below 50
    }

    // Output the grade
    cout << "The student's grade is: " << grade << endl;

    return 0;
}

/*
 Explanation:
1. Input Marks: The program first asks the user to input the student's marks.
2. Grade Calculation: The program uses a series of **if-else conditions** to determine the grade based on the input marks:
   - A: Marks between 90 and 100.
   - B: Marks between 80 and 89.
   - C: Marks between 70 and 79.
   - D: Marks between 60 and 69.
   - E: Marks between 50 and 59.
   - F: Marks below 50.
3. Output: Based on the marks, the corresponding grade is displayed.

Example Output:
Enter the student's marks: 85
The student's grade is: B
*/