/*Write a C++ program that demonstrates the use of variables and constants. 
Create variables of different data types and perform operations on them.*/

#include <iostream>
using namespace std;

int main() {
    // Constants
    const double PI = 3.14159;  
    const int MAX_LIMIT = 100; 

    // Variables of different data types
    int num1 = 10, num2 = 20;  
    double radius = 5.0, area; 
    char grade = 'A';          
    string name = "John";      

    // Performing operations on variables
    int sum = num1 + num2;   
    double circumference = 2 * PI * radius; 
    area = PI * radius * radius;    
    string greeting = "Hello, " + name + "!"; 
    
    // Outputting the results
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    cout << "The circumference of the circle with radius " << radius << " is: " << circumference << endl;
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    cout << "Your grade is: " << grade << endl;
    cout << greeting << endl;

    // Demonstrating the constant usage
    cout << "The value of PI is: " << PI << endl;
    cout << "The maximum limit is: " << MAX_LIMIT << endl;


}

