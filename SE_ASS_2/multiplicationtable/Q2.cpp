// Objective: Practice using loops.


/*
Loops are a fundamental concept in programming that allow you to repeat a block of code multiple times. In C++, there are three primary types of loops:

1. For Loop
2. While Loop
3. Do-While Loop

Let's go over each type of loop with examples to practice their usage.

1. For Loop

A for loop is used when you know in advance how many times you need to repeat a block of code.

Syntax:
for (initialization; condition; increment) {
    // Code to execute
}

Example: Print numbers from 1 to 5 using a `for` loop.
*/
#include <iostream>
using namespace std;

int main() {
    // Using for loop to print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    
}
/*
Output:
1 2 3 4 5

 2. While Loop

A while loop is used when you don't know in advance how many times you'll need to repeat the block of code, but you have a condition to check before each iteration.

Syntax:
while (condition) {
    // Code to execute
}
Example: Print numbers from 1 to 5 using a `while` loop.

*/
#include <iostream>
using namespace std;

int main() {
    int i = 1;  // Initialize the counter
    // Using while loop to print numbers from 1 to 5
    while (i <= 5) {
        cout << i << " ";
        i++;  // Increment the counter
    }
    
}
/*

Output:
1 2 3 4 5


3. Do-While Loop

A do-while loop is similar to a while loop, but it checks the condition after the code has executed. This means the code inside the loop will always run at least once, even if the condition is false initially.

Syntax:

do {
    // Code to execute
} while (condition);


Example: Print numbers from 1 to 5 using a `do-while` loop.
*/
#include <iostream>
using namespace std;

int main() {
    int i = 1;  // Initialize the counter
    // Using do-while loop to print numbers from 1 to 5
    do {
        cout << i << " ";
        i++;  // Increment the counter
    } while (i <= 5);
    
}
/*
 Output:
1 2 3 4 5

Combining Loops and Conditional Statements

You can also combine loops and conditional statements to create more complex programs. Here's an example that combines a **for loop** with an **if statement** to print even numbers from 1 to 10.

Example: Print even numbers from 1 to 10.
*/

#include <iostream>
using namespace std;

int main() {
    // Using a for loop to check for even numbers
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {  // Check if the number is even
            cout << i << " ";
        }
    }
    
}
/*
Output:
2 4 6 8 10

Summary of Loop Types:

1. For Loop: Best used when you know the number of iterations in advance.
2. While Loop: Ideal when the number of iterations is unknown, but you have a condition to check.
3. Do-While Loop: Guarantees that the loop runs at least once before checking the condition.

*/