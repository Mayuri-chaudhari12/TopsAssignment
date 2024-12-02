//Objective: Understand the difference between variables and constants.
/*
In C++, **variables** and **constants** are both used to store data, but they serve different purposes. 
Here's a breakdown of the key differences between them:

 1. Variables:
A **variable** is a container used to store data that can be changed or modified during the program execution. The value of a variable can vary throughout the execution of the program.

- Definition: A variable is declared with a specific data type (such as `int`, `double`, `char`, etc.) and can hold different values at different times.
- Modifiability: The value of a variable can be changed or reassigned at any point in the program.

 Example of a Variable:*/
#include <iostream>
using namespace std;

int main() {
    int num = 5;   // Declare a variable num and assign it a value of 5
    cout << "Initial value of num: " << num << endl;

    num = 10;      // Change the value of num to 10
    cout << "New value of num: " << num << endl;

    return 0;
}


/*
2. **Constants:
A constant is similar to a variable but with a key difference: its value **cannot** be changed once it is assigned. Constants are used to represent fixed values that should not change during the program's execution.

- Definition: A constant is declared using the `const` keyword in C++. Once a constant is assigned a value, it cannot be modified throughout the program.
- Modifiability: The value of a constant cannot be changed after it is initialized.

 Example of a Constant:
*/
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;  // Declare a constant PI and assign it a value
    cout << "The value of PI is: " << PI << endl;

    // Attempting to change PI will result in a compile-time error:
    // PI = 3.14; // Uncommenting this line will cause an error

    return 0;
}

/*
 Key Differences Between Variables and Constants:

| Feature            | Variable                                   | Constant                            |
|--------------------|--------------------------------------------|-------------------------------------|
| Modifiability      | Can be changed at any point in the program | Cannot be changed after initialization |
| Keyword            | Declared without `const`                   | Declared with `const`               |
| Purpose            | Used to store values that may change       | Used to store fixed, unchanging values |
| Memory             | Typically can be modified in memory during program execution | Stored in memory but cannot be altered |
| Example            | `int age = 25;`                            | `const double PI = 3.14159;`        |



### When to Use Constants vs Variables:

- **Use Variables**: When the value may need to change during the program execution. For example, counters, user input, or values that are calculated.
- **Use Constants**: When you have a value that should remain unchanged throughout the program. For example, mathematical constants like `PI`, configuration settings, or fixed settings (like `MAX_LIMIT`).

*/