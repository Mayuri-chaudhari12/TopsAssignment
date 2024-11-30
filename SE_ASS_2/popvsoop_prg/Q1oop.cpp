#include <iostream>
using namespace std;

// Class to represent a Rectangle
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Method to calculate area
    double getArea() {
        return length * width;
    }
};

int main() {
    double length, width;

    // Get user input
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Create an object of the Rectangle class
    Rectangle rect(length, width);

    // Output the area using the getArea method
    cout << "The area of the rectangle is: " << rect.getArea() << endl;


}
