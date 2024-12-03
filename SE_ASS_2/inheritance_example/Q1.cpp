 /* Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance*/

#include <iostream>
using namespace std;
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
    // Create an object of Student class
    Student student1("John Doe", 20, 101);
    cout << "Student Information:" << endl;
    student1.displayStudentInfo();
    cout << endl;

    // Create an object of Teacher class
    Teacher teacher1("Dr. Smith", 45, "Mathematics");
    cout << "Teacher Information:" << endl;
    teacher1.displayTeacherInfo();
}
