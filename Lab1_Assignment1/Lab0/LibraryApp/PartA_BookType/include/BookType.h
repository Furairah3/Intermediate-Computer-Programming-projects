#ifndef BOOKTYPE_H
#define BOOKTYPE_H

#include <string>
using namespace std;

class bookType {
private:
    string title;
    string authors[4];       // up to 4 authors
    int numAuthors;          // number of actual authors
    string publisher;
    string ISBN;
    double price;
    int copiesInStock;

public:
    // ---- Constructors ----
    bookType();
    bookType(string t, string a[], int nA, string pub, string id, double p, int copies);

    // ---- Setters (mutators) ----
    void setTitle(string t);
    void setAuthors(string a[], int nA);
    void setPublisher(string pub);
    void setISBN(string id);
    void setPrice(double p);
    void setCopiesInStock(int copies);

    // ---- Getters (accessors) ----
    string getTitle() const;
    string getPublisher() const;
    string getISBN() const;
    double getPrice() const;
    int getCopiesInStock() const;
    int getNumAuthors() const;
    void showAuthors() const;

    // ---- Update methods ----
    void updateCopies(int change);   // add or remove stock
    bool compareTitle(string t) const; // check if title matches

    // ---- Utility ----
    void displayBookInfo() const;
};

#endif
