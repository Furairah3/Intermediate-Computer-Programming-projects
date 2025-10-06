#include <iostream>
#include "bankAccount.h"
using namespace std;

int main() {
    bankAccount customers[10]; // array of 10 customers

    // Example: create two accounts manually
    customers[0] = bankAccount("Foureiratou ZAKARI YAOU IDI", "saving", 5000.0, 0.03);
    customers[1] = bankAccount("Fatme ALI", "checking", 2500.0, 0.02);

    // Deposit and withdraw
    customers[0].deposit(1000);
    customers[1].withdraw(500);

    // Apply interest
    for (int i = 0; i < 2; i++) {
        customers[i].applyMonthlyInterest();
    }

    // Display all accounts
    for (int i = 0; i < 2; i++) {
        customers[i].displayAccountInfo();
    }

    return 0;
}

