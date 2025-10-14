#include <iostream>
#include "include/MemberType.h"
using namespace std;

int main() {
    memberType m1("Furairah Zakari", "MBR001", 5, 250.75);
    m1.showInfo();

    cout << "\nUpdating info...\n";
    m1.updateBooksBought(3);
    m1.updateAmountSpent(120.50);

    m1.showInfo();

    return 0;
}
