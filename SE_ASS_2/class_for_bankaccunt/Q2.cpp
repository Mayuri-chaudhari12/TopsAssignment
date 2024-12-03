// Objective: Understand encapsulation in classes.

/*
Encapsulation is one of the core principles of Object-Oriented Programming (OOP). It refers to the bundling of data (variables) and methods (functions) that operate on the data within a single unit or class. Furthermore, encapsulation restricts direct access to some of an object's components, which can prevent the accidental modification of data.

In C++, encapsulation is achieved by:

1. Private Data Members: Making the data members of a class private so that they cannot be accessed directly from outside the class.
2. Public Methods: Providing public methods (functions) to allow controlled access to the data members. These methods can be getters (to retrieve values) and setters (to modify values).

 Key Points of Encapsulation:
- Access Control: Using access specifiers (`private`, `protected`, `public`) to control the visibility of members.
- Data Protection: The internal state of an object is protected from unauthorized access and modification.
- Modularity: Each object manages its own state via functions, improving code organization.

Example: Bank Account Class Demonstrating Encapsulation

Let's implement a `BankAccount` class, which encapsulates the `balance` data, and provides public methods to interact with the balance safely.

*/
#include <iostream>
using namespace std;

// Define the BankAccount class
class BankAccount {
private:
    // Private data member: balance
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

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Public method to withdraw money
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

    // Public method to get the current balance (getter method)
    double getBalance() const {
        return balance;
    }
};

// Main function
int main() {
    // Creating an object of the BankAccount class with an initial balance of $1000
    BankAccount account(1000);

    // Displaying the initial balance
    cout << "Initial balance: $" << account.getBalance() << endl;

    // Depositing money into the account
    account.deposit(500);
    cout << "Balance after deposit: $" << account.getBalance() << endl;

    // Withdrawing money from the account
    account.withdraw(200);
    cout << "Balance after withdrawal: $" << account.getBalance() << endl;

    // Attempting to withdraw more than the available balance
    account.withdraw(1500);

    
}
/*
 Explanation:

1. Private Data Member: 
   - `balance`: The balance of the account is kept as a private variable, meaning it cannot be accessed directly outside the class. This prevents unauthorized changes to the balance.

2. Public Methods:
   - Constructor: The constructor `BankAccount(double initialBalance)` initializes the balance. If an invalid (negative) value is passed, it defaults to `0` and provides an error message.
   - deposit(): This method allows money to be deposited into the account. It checks if the amount is positive before adding it to the balance.
   - withdraw(): This method allows money to be withdrawn. It checks if the withdrawal amount is positive and if the account has sufficient funds.
   - getBalance(): This method provides read-only access to the balance. It is a getter function that allows users to check the balance without modifying it.

3. Encapsulation in Action:
   - Data Hiding: The `balance` is private and cannot be accessed directly. All interactions with it occur through the public methods (`deposit()`, `withdraw()`, and `getBalance()`).
   - Controlled Access: Methods such as `deposit()` and `withdraw()` provide controlled ways to modify the `balance`. This ensures that only valid operations are performed on the `balance` and prevents direct modification.

 Sample Output:
Initial balance: $1000
Deposited: $500
Balance after deposit: $1500
Withdrew: $200
Balance after withdrawal: $1300
Insufficient funds!

 Benefits of Encapsulation:
1. Data Integrity: By keeping data private and controlling how it's modified, we ensure that it remains consistent and valid. For instance, we prevent negative balances or withdrawals exceeding the balance.
   
2. Security: Encapsulation helps hide the internal implementation of the class, allowing us to modify the class's behavior without affecting the code that uses the class.
   
3. Modularity: The object manages its own state (balance), making the code easier to maintain and understand.

4. Ease of Maintenance: If we need to change how the balance is updated (e.g., adding interest, changing deposit rules), we only need to modify the methods in the `BankAccount` class, not the rest of the program.

 Summary:
Encapsulation is a key concept in OOP that ensures the internal state of an object is protected and modified only through controlled means. In the `BankAccount` class, we encapsulated the `balance` by making it private and providing public methods to interact with it. This ensures that the balance cannot be accessed or modified directly, maintaining the integrity of the object’s state.
*/