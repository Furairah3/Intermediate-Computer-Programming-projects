#include <iostream>
#include "include/BookType.h"
using namespace std;

int main() {
    string authors[] = {"Chimamanda Adichie", "Ngugi wa Thiong'o"};
    bookType b1("African Literature", authors, 2, "Penguin Publishers", "12345ABC", 45.50, 10);

    b1.displayBookInfo();

    cout << "\nUpdating copies...\n";
    b1.updateCopies(-3);
    cout << "Copies left: " << b1.getCopiesInStock() << endl;

    cout << "\nComparing title: " << (b1.compareTitle("African Literature") ? "Match" : "No Match") << endl;

    return 0;
}
