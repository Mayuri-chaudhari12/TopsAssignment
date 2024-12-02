// Write a C++ program that asks the user to guess a number between 1 and 100. The program should
// provide hints if the guess is too high or too low. Use loops to allow the user multiple attempts.
#include <iostream>
using namespace std;

int main() {
    int secretNumber = 42; // The secret number to be guessed (can be changed to any number)
    int userGuess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    // Loop to allow multiple attempts
    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        // Check if the guess is correct, too high, or too low
        if (userGuess < secretNumber) {
            cout << "Your guess is too low! Try again." << endl;
        } 
        else if (userGuess > secretNumber) {
            cout << "Your guess is too high! Try again." << endl;
        } 
        else {
            cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts." << endl;
            break; // Exit the loop when the guess is correct
        }
    }

}
