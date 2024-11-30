/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.*/

#include <iostream>
using namespace std;

int main() {
    double length, width;

    // Get user input
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate area using the function
    double area = length * width;

    // Output the area
    cout << "The area of the rectangle is: " << area << endl;


}
