// Objective: Understand while loops and conditional logic.

/*
In C++, while loops and conditional logic are essential constructs that allow you to execute blocks of code repeatedly and conditionally. These tools are particularly useful in situations where you need to iterate based on a condition or make decisions during the execution of your program.

1. While Loop:
A while loop is used when you want to repeat a block of code as long as a condition remains true. The syntax of a while loop is:

while (condition) {
    // Code to execute as long as condition is true
}

- The loop checks the condition before executing the code inside the loop.
- If the condition is true, it executes the code inside the loop, then rechecks the condition and repeats.
- If the condition is false initially, the loop body is not executed at all. */


#include <iostream>
using namespace std;

int main() {
    int count = 1;
    
    // While loop that prints numbers from 1 to 5
    while (count <= 5) {
        cout << "Count is: " << count << endl;
        count++;  // Increment the count
    }

}


/* 2. Conditional Logic (If-Else):
Conditional statements like `if`, `else if`, and `else` are used to make decisions in your program. These statements check conditions and execute different blocks of code based on whether the condition is true or false.

- if: Executes the block of code if the condition is true.
- else if: Checks another condition if the previous one was false.
- else: Executes the block of code if all previous conditions are false.

Syntax:
if (condition) {
    // Code to execute if condition is true
} else if (another_condition) {
    // Code to execute if another_condition is true
} else {
    // Code to execute if none of the conditions are true
}
*/
#include <iostream>
using namespace std;

int main() {
    int num = 10;

    // Conditional logic to check if the number is positive, negative, or zero
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    
    return 0;
}

/*
 Explanation of the Program:
1. While Loop: The `while(true)` loop keeps running indefinitely until the user guesses the correct number. The loop continues to prompt the user for guesses until the condition `userGuess == secretNumber` is met.
2. If-Else Conditional Logic: Inside the loop:
   - If the user's guess is too low, it prints `"Your guess is too low. Try again."`.
   - If the user's guess is too high, it prints `"Your guess is too high. Try again."`.
   - If the guess is correct, it prints a congratulatory message and exits the loop using `break`.
3. Attempts Counter: The variable `attempts` tracks how many guesses the user has made, and this is displayed once the correct guess is made.

Example Output:
Welcome to the Guess the Number Game!
I have selected a number between 1 and 100. Try to guess it!
Enter your guess: 50
Your guess is too high. Try again.
Enter your guess: 30
Your guess is too low. Try again.
Enter your guess: 42
Congratulations! You guessed the correct number 42 in 3 attempts!
*/
