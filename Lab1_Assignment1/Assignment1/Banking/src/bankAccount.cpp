#include "bankAccount.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Initialize static variable
int bankAccount::nextAccountNumber = 1001;

// Default constructor
bankAccount::bankAccount() {
    holderName = "Unknown";
    accountType = "checking";
    balance = 0.0;
    interestRate = 0.01;
    accountNumber = nextAccountNumber++;
}

// Parameterized constructor
bankAccount::bankAccount(string name, string type, double initialBalance, double rate) {
    holderName = name;
    accountType = type;
    balance = initialBalance;
    interestRate = rate;
    accountNumber = nextAccountNumber++;
}

// Getters
int bankAccount::getAccountNumber() const { return accountNumber; }
string bankAccount::getHolderName() const { return holderName; }
string bankAccount::getAccountType() const { return accountType; }
double bankAccount::getBalance() const { return balance; }
double bankAccount::getInterestRate() const { return interestRate; }

// Deposit
void bankAccount::deposit(double amount) {
    if (amount > 0)
        balance += amount;
    else
        cout << "Invalid deposit amount!" << endl;
}

// Withdraw
void bankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance)
        balance -= amount;
    else
        cout << "Invalid or insufficient funds!" << endl;
}

// Apply monthly interest
void bankAccount::applyMonthlyInterest() {
    balance += (balance * interestRate / 12);
}

// Display account info
void bankAccount::displayAccountInfo() const {
    cout << fixed << showpoint << setprecision(2);
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder: " << holderName << endl;
    cout << "Account Type: " << accountType << endl;
    cout << "Balance: $" << balance << endl;
    cout << "Interest Rate: " << interestRate * 100 << "%" << endl;
    cout << "-----------------------------------" << endl;
}
