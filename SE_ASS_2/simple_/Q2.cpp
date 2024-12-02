// Objective: Practice defining and using functions in C++

/*
In C++, functions are used to organize code into modular blocks, which can be reused, making programs more efficient and easier to manage. By practicing defining and using functions, you learn how to:

- Define functions
- Pass arguments to functions
- Return values from functions
- Call functions in the main program

 Key Points:
1. Function Definition: Specifies the function's name, return type, parameters, and body (the code that runs when the function is called).
2. Function Call: When a function is invoked, the control is transferred to the function's code block.
3. Function Parameters: Functions can take inputs (parameters) to process data.
4. Return Type: Functions can return a value (e.g., `int`, `float`, `void`).

 Example: Defining and Using Functions

Below is a simple C++ program where we define functions to perform basic arithmetic operations. We will practice defining functions and calling them from the main program.

 C++ Program to Demonstrate Functions:
*/

#include <iostream>
using namespace std;

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b) {
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
}

// Function to print a welcome message
void printWelcomeMessage() {
    cout << "Welcome to the Basic Calculator!" << endl;
}

int main() {
    float num1, num2;
    int choice;

    // Calling the welcome message function
    printWelcomeMessage();

    // Display the menu
    cout << "\nSelect an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Perform the chosen operation
    switch(choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    
}
/*

Breakdown of the Program:

1. Function Definitions:
   - `add(float a, float b)`: This function takes two `float` arguments and returns their sum.
   - `subtract(float a, float b)`: This function takes two `float` arguments and returns their difference.
   - `multiply(float a, float b)`: This function takes two `float` arguments and returns their product.
   - `divide(float a, float b)`: This function divides `a` by `b`. It checks if `b` is zero to avoid division by zero errors.
   - `printWelcomeMessage()`: This function prints a welcome message to the user. It does not return anything, so its return type is `void`.

2. Function Calls in `main()`:
   - The `printWelcomeMessage()` function is called at the start to greet the user.
   - Based on user input, the program calls one of the arithmetic operation functions (`add`, `subtract`, `multiply`, or `divide`) to perform the required calculation.

3. User Input:
   - The program prompts the user to choose an arithmetic operation and enter two numbers to perform the operation.

4. Switch-Case:
   - The program uses a `switch` statement to execute the correct function based on the user's input. Each case corresponds to one of the arithmetic operations.

5. Error Handling:
   - In the `divide()` function, there is a check to prevent division by zero, which would otherwise result in a runtime error.

 Example Output:

Welcome to the Basic Calculator!

Select an operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice (1-4): 1
Enter first number: 5
Enter second number: 3
Result: 8

 Key Concepts Covered:
1. Function Definition: We defined multiple functions (`add`, `subtract`, `multiply`, `divide`, and `printWelcomeMessage`).
2. Function Parameters and Return Values: We passed `float` arguments to the arithmetic functions and returned a `float` result.
3. Void Function: The `printWelcomeMessage()` function does not return a value, demonstrating a `void` return type.
4. Function Calls: The `main()` function calls other functions based on user input.

 Practice Exercise:
Try modifying the program:
- Add more functions to handle other operations, like modulus or power.
- Allow the user to perform multiple operations without restarting the program.
- Implement error handling for invalid input (like entering a non-numeric value).
*/

