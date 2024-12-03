/*create a class BankAccount with data members like balance and member functions
like deposit and withdraw. Implement encapsulation by keeping the data members
private.*/

#include <iostream>
using namespace std;

// Define the BankAccount class with encapsulation
class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize the balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        }
    }

    // Deposit function to add money to the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Withdraw function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    // Getter function to retrieve the current balance
    double getBalance() {
        return balance;
    }
};

int main() {
    // Create a BankAccount object with an initial balance of $1000
    BankAccount account(1000);

    // Display initial balance
    cout << "Initial balance: $" << account.getBalance() << endl;

    // Deposit some money
    account.deposit(500);
    cout << "Balance after deposit: $" << account.getBalance() << endl;

    // Withdraw some money
    account.withdraw(300);
    cout << "Balance after withdrawal: $" << account.getBalance() << endl;

    // Attempt to withdraw more money than available
    account.withdraw(1500);

    
}

