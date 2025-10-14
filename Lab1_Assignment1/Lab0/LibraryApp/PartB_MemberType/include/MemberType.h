#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

#include <string>
using namespace std;

class memberType {
private:
    string name;
    string memberID;
    int booksBought;
    double amountSpent;

public:
    // --- Constructors ---
    memberType();
    memberType(string n, string id, int books = 0, double amount = 0.0);

    // --- Setters (mutators) ---
    void setName(string n);
    void setMemberID(string id);
    void setBooksBought(int books);
    void setAmountSpent(double amount);

    // --- Getters (accessors) ---
    string getName() const;
    string getMemberID() const;
    int getBooksBought() const;
    double getAmountSpent() const;

    // --- Update methods ---
    void updateBooksBought(int num);
    void updateAmountSpent(double amount);

    // --- Utility ---
    void showInfo() const;
};

#endif
