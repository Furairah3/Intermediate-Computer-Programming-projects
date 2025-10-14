#include "../include/BookType.h"
#include <iostream>
using namespace std;

// ----- Default Constructor -----
bookType::bookType() {
    title = "";
    publisher = "";
    ISBN = "";
    price = 0.0;
    copiesInStock = 0;
    numAuthors = 0;
}

// ----- Parameterized Constructor -----
bookType::bookType(string t, string a[], int nA, string pub, string id, double p, int copies) {
    title = t;
    numAuthors = (nA > 4) ? 4 : nA;  // limit to 4 authors
    for (int i = 0; i < numAuthors; i++)
        authors[i] = a[i];
    publisher = pub;
    ISBN = id;
    price = p;
    copiesInStock = copies;
}

// ----- Setters -----
void bookType::setTitle(string t) { title = t; }
void bookType::setAuthors(string a[], int nA) {
    numAuthors = (nA > 4) ? 4 : nA;
    for (int i = 0; i < numAuthors; i++)
        authors[i] = a[i];
}
void bookType::setPublisher(string pub) { publisher = pub; }
void bookType::setISBN(string id) { ISBN = id; }
void bookType::setPrice(double p) { price = p; }
void bookType::setCopiesInStock(int copies) { copiesInStock = copies; }

// ----- Getters -----
string bookType::getTitle() const { return title; }
string bookType::getPublisher() const { return publisher; }
string bookType::getISBN() const { return ISBN; }
double bookType::getPrice() const { return price; }
int bookType::getCopiesInStock() const { return copiesInStock; }
int bookType::getNumAuthors() const { return numAuthors; }

void bookType::showAuthors() const {
    for (int i = 0; i < numAuthors; i++)
        cout << "Author " << (i + 1) << ": " << authors[i] << endl;
}

// ----- Update methods -----
void bookType::updateCopies(int change) {
    copiesInStock += change;
    if (copiesInStock < 0) copiesInStock = 0;
}

bool bookType::compareTitle(string t) const {
    return (title == t);
}

// ----- Display all book information -----
void bookType::displayBookInfo() const {
    cout << "\n----- BOOK INFORMATION -----\n";
    cout << "Title: " << title << endl;
    showAuthors();
    cout << "Publisher: " << publisher << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Price: $" << price << endl;
    cout << "Copies in Stock: " << copiesInStock << endl;
}
