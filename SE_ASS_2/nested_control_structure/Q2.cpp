// Objective: Learn Learn control structures.

/*
Control structures in C++ are used to control the flow of execution in a program. These structures allow you to make decisions, repeat actions, and control the sequence of operations. The primary control structures in C++ are:

1. Sequential Control
2. Selection (Decision) Structures
3. Repetition (Looping) Structures
4. Jump Statements

Let's explore these control structures in detail:

1. Sequential Control
By default, C++ programs execute statements sequentially, one after the other, in the order they are written.

Example of sequential control:
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;  // Executes first
    cout << "Learning control structures!" << endl;  // Executes second
    return 0;
}

/*
 2. Selection (Decision) Structures

Decision-making allows you to control the flow of the program based on conditions. C++ provides several decision-making constructs:

a. If Statement

The `if` statement is used to execute a block of code if a condition is true.
*/
#include <iostream>
using namespace std;

int main() {
    int number = 10;

    if (number > 0) {
        cout << "The number is positive." << endl;
    }


}

/*
b. If-Else Statement

The `if-else` statement lets you choose between two blocks of code, one for the true condition and one for the false.

*/
#include <iostream>
using namespace std;

int main() {
    int number = -5;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is negative or zero." << endl;
    }

}
/*
 c. If-Else If-Else Statement

The `else if` statement is used to check multiple conditions sequentially.

*/
#include <iostream>
using namespace std;

int main() {
    int number = 0;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

}

/*
3. Repetition (Looping) Structures

Looping allows a block of code to be repeated multiple times based on a condition.

#### a. **For Loop**

A `for` loop is used when the number of iterations is known beforehand. It consists of an initialization, a condition, and an increment/decrement statement.

Example: Print numbers from 1 to 5.

*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }

}
/*

 b. While Loop

A `while` loop is used when you want to repeat a block of code an unknown number of times, but you know the condition that should terminate the loop.

Example: Print numbers from 1 to 5 using a `while` loop.
*/
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    
}
/*

 c. Do-While Loop

A `do-while` loop executes the code at least once, and then checks the condition after executing.

Example: Print numbers from 1 to 5 using a `do-while` loop.

*/
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    return 0;
}
/*

 4. Jump Statements

Jump statements allow you to alter the flow of control within loops or functions.

 a. Break Statement

The `break` statement is used to terminate the loop or switch statement prematurely.

Example: Exit the loop if a specific condition is met.

*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // Exit the loop when i is 3
        }
        cout << i << " ";
    }
    
}

/*
 b. Continue Statement

The `continue` statement is used to skip the rest of the current loop iteration and move to the next iteration.

Example: Skip printing `3` in the loop.

*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skip printing 3
        }
        cout << i << " ";
    }
    
}
/*

c. Return Statement

The `return` statement is used to exit from a function and return a value.

Example: Return a value from a function.

*/
#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b;  // Return the sum of a and b
}

int main() {
    int sum = addNumbers(5, 7);
    cout << "The sum is: " << sum << endl;
    return 0;
}


/*
 Summary of Control Structures

1. Sequential Control: Executes code in order, one statement at a time.
2. Selection (Decision) Structures:
   - `if`, `if-else`, `else if` for making decisions based on conditions.
3. Repetition (Looping) Structures:
   - `for`, `while`, `do-while` for repeating code.
4. Jump Statements:
   - `break`, `continue`, and `return` alter the flow of execution.


 Practice Exercises:
To reinforce your learning of control structures, try the following exercises:

1. Write a program to check if a number is prime or not using loops and conditional statements.
2. Create a program that prints a pattern of stars, such as a pyramid or diamond, using loops.
3. Modify the number-guessing game to give the user hints about whether their guess is too high or too low.

*/