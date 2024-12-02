//Write a C++ program that performs both implicit and explicit type conversions and print the result.
#include <iostream>
using namespace std;

int main() {
    // Implicit Type Conversion
    int intVar = 10;              // Integer variable
    double doubleVar = 5.5;       // Double variable
    cout << "Implicit Type Conversion:" << endl;
    cout << "intVar: " << intVar << ", doubleVar: " << doubleVar << endl;

    // Implicit conversion occurs when int is assigned to a double
    double result1 = intVar + doubleVar; // intVar is implicitly converted to double
    cout << "Result of intVar + doubleVar (Implicit Conversion): " << result1 << endl;

    // Explicit Type Conversion (Type Casting)
    cout << "\nExplicit Type Conversion (Type Casting):" << endl;
    
    // Casting double to int using static_cast (explicit conversion)
    int castedResult = static_cast<int>(doubleVar); // doubleVar is explicitly casted to int
    cout << "doubleVar: " << doubleVar << " after explicit conversion to int: " << castedResult << endl;

    // Explicit casting from int to double (not necessary, but for demonstration)
    double castedDouble = static_cast<double>(intVar); // intVar is explicitly casted to double
    cout << "intVar: " << intVar << " after explicit conversion to double: " << castedDouble << endl;

    // Casting float to int (Explicit Type Conversion)
    float floatVar = 9.8f;  // Float variable
    int castedInt = static_cast<int>(floatVar); // floatVar is explicitly casted to int
    cout << "floatVar: " << floatVar << " after explicit conversion to int: " << castedInt << endl;

}
