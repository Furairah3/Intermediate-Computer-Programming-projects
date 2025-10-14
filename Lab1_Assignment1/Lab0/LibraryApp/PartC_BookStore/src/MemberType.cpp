#include "../include/MemberType.h"
#include <iostream>
using namespace std;

// --- Default Constructor ---
memberType::memberType() {
    name = "";
    memberID = "";
    booksBought = 0;
    amountSpent = 0.0;
}

// --- Parameterized Constructor ---
memberType::memberType(string n, string id, int books, double amount) {
    name = n;
    memberID = id;
    booksBought = books;
    amountSpent = amount;
}

// --- Setters ---
void memberType::setName(string n) { name = n; }
void memberType::setMemberID(string id) { memberID = id; }
void memberType::setBooksBought(int books) { booksBought = books; }
void memberType::setAmountSpent(double amount) { amountSpent = amount; }

// --- Getters ---
string memberType::getName() const { return name; }
string memberType::getMemberID() const { return memberID; }
int memberType::getBooksBought() const { return booksBought; }
double memberType::getAmountSpent() const { return amountSpent; }

// --- Update methods ---
void memberType::updateBooksBought(int num) {
    booksBought += num;
    if (booksBought < 0) booksBought = 0;
}

void memberType::updateAmountSpent(double amount) {
    amountSpent += amount;
    if (amountSpent < 0) amountSpent = 0;
}

// --- Display Info ---
void memberType::showInfo() const {
    cout << "\n----- MEMBER INFORMATION -----\n";
    cout << "Name: " << name << endl;
    cout << "Member ID: " << memberID << endl;
    cout << "Books Bought: " << booksBought << endl;
    cout << "Amount Spent: $" << amountSpent << endl;
}
