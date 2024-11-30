/*Highlight the difference between POP and OOP approaches.*/

#include <iostream>
using namespace std;

int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int length = 5, width = 10;
    int area = calculateArea(length, width);
    cout << "Area: " << area << endl;
    
}
