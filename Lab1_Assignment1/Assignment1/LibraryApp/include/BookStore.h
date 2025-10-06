#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <vector>
#include "BookType.h"
#include "MemberType.h"
using namespace std;

class BookStore {
private:
    vector<bookType> books;
    vector<memberType> members;

public:
    BookStore();

    void addBook();
    void addMember();
    void showBooks() const;
    void showMembers() const;
    void buyBookAsMember();
    void buyBookAsGuest();
    void displayMenu();
};

#endif
