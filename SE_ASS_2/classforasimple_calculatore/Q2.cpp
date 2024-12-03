// Objective: Introduce basic class structure

/*
To introduce the basic class structure in C++, let's first break down the fundamental components of a C++ class. Here's a simplified explanation:

 Key Concepts of a C++ Class:
1. Class Definition:
   A class is a user-defined blueprint for creating objects. It encapsulates data for the object and methods (functions) to manipulate that data.

2. Member Variables:
   These are the data attributes of a class that represent the properties of an object.

3. Member Functions (Methods):
   These are functions that define the behaviors or actions an object of the class can perform.

4. Access Specifiers:
   - `public`: Members declared as public can be accessed from outside the class.
   - `private`: Members declared as private can only be accessed from within the class itself.

 Example of Basic Class Structure in C++:
*/
#include <iostream>
using namespace std;

// Define a simple class called "Car"
class Car {
public:
    // Member variables (Attributes)
    string make;
    string model;
    int year;

    // Constructor (initializes the object)
    Car(string m, string mod, int y) {
        make = m;
        model = mod;
        year = y;
    }

    // Member function (Method)
    void displayInfo() {
        cout << "Car Make: " << make << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

int main() {
    // Creating an object of the class "Car"
    Car car1("Toyota", "Corolla", 2020);

    // Using the method of the Car class to display information
    car1.displayInfo();


}
/*

### Explanation:
1. Class Declaration:
   - `class Car`: This declares a class named `Car`.
   - The `Car` class has three public member variables: `make`, `model`, and `year`.
   - The class has a constructor `Car(string m, string mod, int y)` that initializes these member variables when a `Car` object is created.
   - The method `displayInfo()` is a public member function that displays the car's details.

2. Object Creation:
   - In the `main()` function, an object `car1` of type `Car` is created and initialized with values `"Toyota"`, `"Corolla"`, and `2020` for `make`, `model`, and `year`, respectively.
   - The `displayInfo()` method is called on `car1` to display the car's details.

 Key Concepts Introduced:
1. Class Definition: `class Car` defines the blueprint for the objects (like `car1`).
2. Constructor: `Car(string m, string mod, int y)` initializes the object when created.
3. Object Creation: `Car car1("Toyota", "Corolla", 2020);` creates an object.
4. Member Function: `displayInfo()` is used to print the attributes of the object.

Sample Output:
Car Make: Toyota
Car Model: Corolla
Car Year: 2020


This example is a simple introduction to the basic structure of a class in C++, showing how to define a class with member variables, a constructor, and a method to interact with the object.
*/