#include <iostream>
#include <ctime>  // For displaying current date and time
#include<conio.h>
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
        cout << "\nYour current balance is: Rs." << balance << endl;
    }
    
    // Method to deposit money
    void depositMoney() {
        double depositAmount;
        cout << "\n----------------ATM ACCOUNT DEPOSIT SYSTEM-----------------";
        cout << "\nThe name of the Account Holders are : Mayuri chaudhari";
        cout << "\nThe Account Holder adderes is:Vyara";
        cout << "\nThe branch location is: Songhdh";
        cout << "\nAccount Number:1321 2356 1244 2135";
        cout << "\nPresent Available balance:"<<balance;
        cout << "\nEnter the amount you want to deposit: Rs.";
        cin >> depositAmount;
        
        if (depositAmount > 0) {
            balance += depositAmount;
            cout << "\nSuccessfully deposited Rs." << depositAmount << endl;
             cout<<"Your new avilable balanced amount is RS."<<balance;
             cout<<"\n                  Thank you!";
             cout<<"\nPress any kay to return to the main menu.";
             getch();
        } else {
            cout << "\nATM ACCOUNT WITHDRAW!" << endl;
            cout << "\nThe Account Holder adderes is:Vyara";
            cout << "\nThe branch location is: Songhdh";
            cout << "\nAccount Number:1321 2356 1244 2135";
            cout<<"Insufficient Available Balance in your Account.";
            cout<<"Sorry !!";
            cout<<"Press any kay to return to the main menu.";
             getch();
        }
    }
    
    // Method to withdraw money
    void withdrawMoney(){
        double withdrawAmount;
        cout << "\nEnter the amount you want to withdraw: Rs.";
        cin >> withdrawAmount;
        
        if (withdrawAmount > 0 && withdrawAmount <= balance) {
            balance -= withdrawAmount;
            cout << "\nSuccessfully withdrawn Rs." << withdrawAmount << endl;
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
        cout << "\n\n----------------Welcome to ATM----------------\n";
        cout << "\n----------------------------------------\n";
        cout << "\n----------Current Date and Time: " 
             << (localTime->tm_mon + 1) << "/"
             << localTime->tm_mday << "/"
             << (localTime->tm_year + 1900) << " "
             << localTime->tm_hour << ":"
             << localTime->tm_min << ":"
             << localTime->tm_sec<<"------------"<< endl;
        cout << "\n\n----------------------------------------\n";
    }
};

// Main function to drive the ATM application
int main() {
    BankAccount account;  // Create an account object
    int enteredPin;
    bool isLoggedIn = false;
    int choice,choose;
    int num;
    // Display the welcome screen with date and time
    account.displayWelcomeScreen();
    
    cout<<"Press 1 and then press Enter to access your account  pin number\nor\npress 0 and press Enter to get help.";
    cin>>choose;
    switch (choose)
    {
    case 0:
        /* code */
        break;
    case 1:
          cout<<"----------------ATM ACCOUNT ACCESS----------------";

       // while (!isLoggedIn) {
        cout << "\nEnter Your Acc Pin Access Number! [Only one attempt is allowed] ";
        cin >> enteredPin;
        
        // Validate the entered PIN
        if (account.validatePin(enteredPin)) {
            cout << "\nPIN validated successfully.\n";
            isLoggedIn = true;  // User logged in

            cout<<"\n---------------ATM ACCOUNT STATUS---------------";
            cout<<"\nYou must have the current pin number to access this account. see your \nbank representative for assistance during bank opening hours \nthanks for,your choice today.";
            cout<<"\nPress any kay to continue:";
            getch();
            do {
        // Display menu options
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Please Enter a Selection and press return kay: ";
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
    } while (choice != 4);
        } else {
            //cout << "\nIncorrect PIN. Please try again.\n";
            //cout << "\nThank you.\n";
            cout << "\nyou had made your attempt which failed!!! no more attempt allowed !! Sorry!!\n";
            }
    //}
        break;
    default:
        break;
    }
    

}
