#include <iostream>
#include <ctime>  // For displaying current date and time
using namespace std;

// BankAccount class definition to manage user account details
class BankAccount {
private:
    double balance;  // Private member to store account balance
    int pin;         // Private member to store ATM PIN
    
public:
    // Constructor to initialize balance and ATM PIN
    BankAccount() {
        balance = 0.0;  // Initialize balance to 0
        pin = 12345;    // Set the ATM PIN
    }
    
    // Method to check balance
    void checkBalance() {
        cout << "\nYour current balance is: $" << balance << endl;
    }
    
    // Method to deposit money
    void depositMoney() {
        double depositAmount;
        cout << "\nEnter the amount you want to deposit: $";
        cin >> depositAmount;
        
        if (depositAmount > 0) {
            balance += depositAmount;
            cout << "\nSuccessfully deposited $" << depositAmount << endl;
        } else {
            cout << "\nInvalid deposit amount!" << endl;
        }
    }
    
    // Method to withdraw money
    void withdrawMoney() {
        double withdrawAmount;
        cout << "\nEnter the amount you want to withdraw: $";
        cin >> withdrawAmount;
        
        if (withdrawAmount > 0 && withdrawAmount <= balance) {
            balance -= withdrawAmount;
            cout << "\nSuccessfully withdrawn $" << withdrawAmount << endl;
        } else if (withdrawAmount > balance) {
            cout << "\nInsufficient funds!" << endl;
        } else {
            cout << "\nInvalid withdrawal amount!" << endl;
        }
    }
    
    // Method to validate the ATM PIN
    bool validatePin(int enteredPin) {
        return enteredPin == pin;
    }
    
    // Method to display welcome screen with current date and time
    void displayWelcomeScreen() {
        // Get current date and time
        time_t currentTime = time(0);  
        tm* localTime = localtime(&currentTime);
        
        // Display the current date and time
        cout << "\n----------------------------------------\n";
        cout << "Welcome to the ATM Banking System\n";
        cout << "Current Date and Time: " 
             << (localTime->tm_mon + 1) << "/"
             << localTime->tm_mday << "/"
             << (localTime->tm_year + 1900) << " "
             << localTime->tm_hour << ":"
             << localTime->tm_min << ":"
             << localTime->tm_sec << endl;
        cout << "----------------------------------------\n";
    }
};

// Main function to drive the ATM application
int main() {
    BankAccount account;  // Create an account object
    int enteredPin;
    bool isLoggedIn = false;
    int choice;
    
    // Display the welcome screen with date and time
    account.displayWelcomeScreen();
    
    // ATM PIN verification loop
    while (!isLoggedIn) {
        cout << "\nEnter your ATM PIN: ";
        cin >> enteredPin;
        
        // Validate the entered PIN
        if (account.validatePin(enteredPin)) {
            cout << "\nPIN validated successfully.\n";
            isLoggedIn = true;  // User logged in
        } else {
            cout << "\nIncorrect PIN. Please try again.\n";
        }
    }
    
    // Main menu loop after successful PIN validation
    do {
        // Display menu options
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                account.checkBalance();
                break;
            case 2:
                account.depositMoney();
                break;
            case 3:
                account.withdrawMoney();
                break;
            case 4:
                cout << "\nExiting... Thank you for using the ATM.\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
                break;
        }
    } while (choice != 4);  // Continue looping until the user chooses to exit

}
