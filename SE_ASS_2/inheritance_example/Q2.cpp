//  Objective: Learn the concept of inheritance.


/*
Inheritance is one of the key features of Object-Oriented Programming (OOP), and it allows a class to **inherit** properties and behaviors (methods) from another class. This enables code reusability, reduces redundancy, and allows for the creation of more specialized classes based on general classes.

Key Concepts of Inheritance:
1. Base (Parent) Class: The class whose properties and methods are inherited by another class.
2. Derived (Child) Class: The class that inherits the properties and methods of another class and can also add or override its own properties and methods.
3. Reusability: Inheritance promotes code reusability by allowing a derived class to reuse the code of the base class without having to rewrite it.
4. Access to Members: The derived class can access the public and protected members of the base class, but cannot directly access private members of the base class (unless using getters/setters or friend functions).
5. Method Overriding: The derived class can change or extend the behavior of methods defined in the base class.

Syntax of Inheritance in C++:
The general syntax for inheritance in C++ is:

class DerivedClass : accessSpecifier BaseClass {
    // Additional members for DerivedClass
};


- accessSpecifier** can be one of:
  - `public`: Public members of the base class become public members of the derived class.
  - `protected`: Protected members of the base class become protected members of the derived class.
  - `private`: Private members of the base class cannot be directly accessed by the derived class.
  
Types of Inheritance:
1. Single Inheritance: A derived class inherits from only one base class.
2. Multiple Inheritance: A derived class inherits from more than one base class.
3. Multilevel Inheritance: A derived class is inherited from a class, which is itself derived from another class.
4. Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
5. Hybrid Inheritance: A combination of two or more types of inheritance.

Example of Inheritance:

Basic Example:

Let's go through a basic example with a base class `Person` and derived classes `Student` and `Teacher`.

*/
#include <iostream>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor for Person class
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Method to display basic information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student (inherits from Person)
class Student : public Person {
private:
    int rollNumber;

public:
    // Constructor for Student class
    Student(string n, int a, int roll) : Person(n, a) {
        rollNumber = roll;
    }

    // Method to display student-specific information
    void displayStudentInfo() {
        displayInfo();  // Reuse base class method
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived class: Teacher (inherits from Person)
class Teacher : public Person {
private:
    string subject;

public:
    // Constructor for Teacher class
    Teacher(string n, int a, string sub) : Person(n, a) {
        subject = sub;
    }

    // Method to display teacher-specific information
    void displayTeacherInfo() {
        displayInfo();  // Reuse base class method
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create objects of Student and Teacher classes
    Student student1("Alice", 20, 101);
    Teacher teacher1("Mr. Brown", 40, "Mathematics");

    cout << "Student Information:" << endl;
    student1.displayStudentInfo();
    
    cout << endl;

    cout << "Teacher Information:" << endl;
    teacher1.displayTeacherInfo();


}
/*

Explanation of the Example:
1. Base Class `Person`:
   - It has two protected members: `name` and `age`. These can be accessed by derived classes, but not directly by external code.
   - The `displayInfo()` method prints the common information of a person (name and age).
   
2. Derived Class `Student`:
   - It inherits from `Person` using `: public Person`. This means `Student` has access to the public and protected members of `Person`.
   - `Student` adds its own data member: `rollNumber` and its method `displayStudentInfo()` to display student-specific information.
   
3. Derived Class `Teacher`:
   - It also inherits from `Person` in the same way.
   - It adds the data member `subject` and its own method `displayTeacherInfo()` to display teacher-specific information.

4. Constructor Initialization:
   - When we create a `Student` or `Teacher` object, their constructors call the `Person` constructor to initialize the `name` and `age`.

5. Method Reusability:
   - The `Student` and `Teacher` classes both reuse the `displayInfo()` method from the base class `Person` to print common information (name and age), and then add their own specific information (roll number or subject).

Sample Output:
Student Information:
Name: Alice
Age: 20
Roll Number: 101

Teacher Information:
Name: Mr. Brown
Age: 40
Subject: Mathematics


Key Takeaways from the Example:

1. Reusability: Both the `Student` and `Teacher` classes reused the `Person` class for common attributes (`name` and `age`) and the method `displayInfo()`.
   
2. Code Reduction: Without inheritance, we would have to define the same `name` and `age` attributes and `displayInfo()` method in both `Student` and `Teacher`, resulting in code duplication. Inheritance reduces such redundancy.

3. Access Control: The `Student` and `Teacher` classes can access protected members of the base class (`Person`) but cannot access private members unless provided via a public method or accessor functions.

4. Polymorphism (not yet demonstrated in this example): With inheritance, we can also implement **polymorphism**, which allows us to call methods of the base class via pointers or references to the derived class, enabling dynamic behavior at runtime.

Conclusion:
Inheritance is a powerful mechanism in OOP that promotes **code reuse**, helps to organize and modularize code, and allows for creating more specialized classes from general ones. It also allows derived classes to add or modify behaviors of the base class. By using inheritance, we can create a **hierarchical relationship** between classes, reducing redundancy and improving maintainability.
*/