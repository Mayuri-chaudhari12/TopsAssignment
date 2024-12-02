// Objective: Rainforce the concept of variable scope.

/*

Understanding variable scope is a fundamental concept in C++ programming. The scope of a variable refers to the region of the program where the variable can be accessed or modified. In C++, there are generally two types of variable scope:

1. **Local Scope**: A variable is declared inside a function or a block (like a loop or a conditional block). It is only accessible within that function or block and is destroyed once the function or block execution is completed.

2. Global Scope: A variable is declared outside of all functions, typically at the top of the program. It can be accessed and modified by any function throughout the program.

Key Points:
- Local variables are visible only within the function or block they are declared in.
- Global variables are visible throughout the entire program and can be accessed by any function.
- Shadowing occurs when a local variable has the same name as a global variable, causing the local variable to "shadow" or take precedence over the global one in that function or block.

Example: Reinforcing the Concept of Variable Scope

Here is a C++ program that demonstrates the difference between **local and global variables** and reinforces the concept of **variable scope**:
*/
#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

// Function to demonstrate local and global variables
void demonstrateScope() {
    // Local variable with the same name as the global variable
    int globalVar = 50;  
    // Display both local and global variables
    cout << "Inside demonstrateScope function:" << endl;
    cout << "Local Variable (shadows global): " << globalVar << endl;  
    cout << "Global Variable (accessed directly): " << ::globalVar << endl;  
}

void localVariableDemo() {
    int localVar = 10;
    cout << "Inside localVariableDemo function:" << endl;
    cout << "Local Variable: " << localVar << endl;
}

int main() {
    
    cout << "In main function:" << endl;
    cout << "Global Variable: " << globalVar << endl;

    demonstrateScope();
    localVariableDemo();
    

}


/*
 Explanation:
1. Global Variable (`globalVar`):
   - The variable `globalVar` is declared outside all functions, so it is a global variable. It is accessible by all functions, including `main()`, `demonstrateScope()`, and others in the program.
   
2. Local Variable (`globalVar` in `demonstrateScope()`):
   - A local variable named `globalVar` is declared within the function `demonstrateScope()`. This **shadows** the global variable `globalVar` within the scope of this function. 
   - When we print `globalVar` inside `demonstrateScope()`, it refers to the local variable, not the global one.

3. Accessing the Global Variable in the Function:
   - To access the global `globalVar` inside `demonstrateScope()`, we use the **scope resolution operator `::`**. This tells the program to refer to the global variable, not the local one.

4. Local Variables in Functions:
   - The function `localVariableDemo()` demonstrates the concept of a local variable (`localVar`) that is only accessible within the `localVariableDemo()` function.
   - If we try to access `localVar` in `main()`, it will result in a **compile-time error** because `localVar` is out of scope.

5. Error Due to Scope:
   - The line `cout << "Accessing local variable from main: " << localVar << endl;` is commented out because `localVar` is not in scope in `main()` (it’s defined only inside the `localVariableDemo()` function).

Example Output:
In main function:
Global Variable: 100
Inside demonstrateScope function:
Local Variable (shadows global): 50
Global Variable (accessed directly): 100
Inside localVariableDemo function:
Local Variable: 10

 Key Concepts Reinforced:

1. Global Variables are accessible from any function, and you can reference them using their name directly. They have **global scope**.
   
2. Local Variables exist only within the function or block in which they are defined. They are created when the function is called and destroyed once the function execution is completed. They have **local scope**.

3. Shadowing: If a local variable has the same name as a global variable, the local variable **shadows** the global variable inside the function or block, and the global variable cannot be accessed directly without using the scope resolution operator (`::`).

4. Scope Resolution Operator (`::`): This is used to access global variables when there is a local variable with the same name, or when you want to refer to global variables explicitly in functions.

 Practice Exercise:
- Modify the program to change the global variable from within a function.
- Add more functions with local variables to explore how variable scope works.
- Experiment with using `const` with global and local variables to ensure the variable cannot be changed within a certain scope.

*/