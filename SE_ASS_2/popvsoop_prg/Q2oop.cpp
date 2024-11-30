#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}
    int getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(5, 10);
    cout << "Area: " << rect.getArea() << endl;
    
}
