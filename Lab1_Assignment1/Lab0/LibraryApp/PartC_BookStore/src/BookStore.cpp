#include "../include/BookStore.h"
#include <iostream>
#include <limits>
using namespace std;

BookStore::BookStore() {}

// ---------------- ADD BOOK ----------------
void BookStore::addBook() {
    if (books.size() >= 1000) {
        cout << "Cannot add more books (limit reached)." << endl;
        return;
    }

    string title, publisher, isbn;
    double price;
    int year, copies, numAuthors;

    cout << "\nEnter book title: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, title);

    cout << "Enter number of authors (max 4): ";
    cin >> numAuthors;
    cin.ignore();

    string authors[4];
    for (int i = 0; i < numAuthors && i < 4; i++) {
        cout << "Author " << i + 1 << ": ";
        getline(cin, authors[i]);
    }

    cout << "Enter publisher: ";
    getline(cin, publisher);

    cout << "Enter ISBN: ";
    getline(cin, isbn);

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter number of copies: ";
    cin >> copies;

    // Create a book object and add to the list
    bookType newBook(title, authors, numAuthors, publisher, isbn, price, copies);
    books.push_back(newBook);

    cout << "\n✅ Book added successfully!\n";
}

// ---------------- ADD MEMBER ----------------
void BookStore::addMember() {
    if (members.size() >= 500) {
        cout << "Cannot add more members (limit reached)." << endl;
        return;
    }

    string name, id;
    cout << "\nEnter member name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);

    cout << "Enter member ID: ";
    getline(cin, id);

    memberType newMember(name, id);
    members.push_back(newMember);

    cout << "\n✅ Member added successfully! ($10 yearly membership fee applied)\n";
}

// ---------------- SHOW BOOKS ----------------
void BookStore::showBooks() const {
    if (books.empty()) {
        cout << "\nNo books available in the store.\n";
        return;
    }

    cout << "\n=== BOOK LIST ===\n";
    for (size_t i = 0; i < books.size(); i++) {
        cout << i << ". " << books[i].getTitle()
             << " | $" << books[i].getPrice()
             << " | Copies: " << books[i].getCopiesInStock() << endl;
    }
}

// ---------------- SHOW MEMBERS ----------------
void BookStore::showMembers() const {
    if (members.empty()) {
        cout << "\nNo members found.\n";
        return;
    }

    cout << "\n=== MEMBER LIST ===\n";
    for (size_t i = 0; i < members.size(); i++) {
        cout << i << ". " << members[i].getName()
             << " | ID: " << members[i].getMemberID()
             << " | Books Bought: " << members[i].getBooksBought()
             << " | Amount Spent: $" << members[i].getAmountSpent() << endl;
    }
}

// ---------------- MEMBER BUY BOOK ----------------
void BookStore::buyBookAsMember() {
    if (books.empty() || members.empty()) {
        cout << "\nPlease add books and members first.\n";
        return;
    }

    showMembers();
    cout << "\nEnter member index: ";
    int mIndex;
    cin >> mIndex;

    if (mIndex < 0 || mIndex >= (int)members.size()) {
        cout << "Invalid member index.\n";
        return;
    }

    showBooks();
    cout << "\nEnter book index: ";
    int bIndex;
    cin >> bIndex;

    if (bIndex < 0 || bIndex >= (int)books.size()) {
        cout << "Invalid book index.\n";
        return;
    }

    if (books[bIndex].getCopiesInStock() <= 0) {
        cout << "\n Book out of stock.\n";
        return;
    }

    double price = books[bIndex].getPrice() * 0.95; // 5% discount
    members[mIndex].updateBooksBought(1);
    members[mIndex].updateAmountSpent(price);
    books[bIndex].updateCopies(-1);

    int booksBought = members[mIndex].getBooksBought();
    if (booksBought % 11 == 0) {
        cout << "\n Bonus! You get a free book discount (average of last 10 purchases)!\n";
        members[mIndex].setAmountSpent(0); // Reset after bonus
    }

    cout << "\n" << members[mIndex].getName()
         << " bought \"" << books[bIndex].getTitle()
         << "\" for $" << price << endl;
}

// ---------------- GUEST BUY BOOK ----------------
void BookStore::buyBookAsGuest() {
    if (books.empty()) {
        cout << "\nNo books available.\n";
        return;
    }

    showBooks();
    cout << "\nEnter book index: ";
    int bIndex;
    cin >> bIndex;

    if (bIndex < 0 || bIndex >= (int)books.size()) {
        cout << "Invalid index.\n";
        return;
    }

    if (books[bIndex].getCopiesInStock() <= 0) {
        cout << "\n Book out of stock.\n";
        return;
    }

    double price = books[bIndex].getPrice();
    books[bIndex].updateCopies(-1);

    cout << "\nGuest bought \"" << books[bIndex].getTitle()
         << "\" for $" << price << endl;
}

// ---------------- MENU ----------------
void BookStore::displayMenu() {
    int choice;

    do {
        cout << "\n=============================\n";
        cout << " BOOKSTORE MAIN MENU \n";
        cout << "=============================\n";
        cout << "1. Add Book\n";
        cout << "2. Add Member\n";
        cout << "3. Show Books\n";
        cout << "4. Show Members\n";
        cout << "5. Buy Book (Member)\n";
        cout << "6. Buy Book (Guest)\n";
        cout << "0. Exit\n";
        cout << "=============================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: addMember(); break;
            case 3: showBooks(); break;
            case 4: showMembers(); break;
            case 5: buyBookAsMember(); break;
            case 6: buyBookAsGuest(); break;
            case 0: cout << "Exiting program. Goodbye!\n"; break;
            default: cout << "Invalid choice. Please try again.\n"; break;
        }

    } while (choice != 0);
}
