#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class bankAccount {
private:
    string holderName;
    int accountNumber;
    string accountType;  // "checking" or "saving"
    double balance;
    double interestRate;

    static int nextAccountNumber; // static variable to auto-assign account numbers

public:
    // Constructors
    bankAccount();
    bankAccount(string name, string type, double initialBalance, double rate);

    // Getters
    int getAccountNumber() const;
    string getHolderName() const;
    string getAccountType() const;
    double getBalance() const;
    double getInterestRate() const;

    // Setters / Actions
    void deposit(double amount);
    void withdraw(double amount);
    void applyMonthlyInterest();

    // Display info
    void displayAccountInfo() const;
};

#endif
