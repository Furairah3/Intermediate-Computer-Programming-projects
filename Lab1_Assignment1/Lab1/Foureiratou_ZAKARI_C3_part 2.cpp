#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double netBalance, payment, d1, d2, rate;
    cout << "enter net blance: ";
    cin >> netBalance;
    cout << "enter payement made: ";
    cin >> payment;
    cout << "enter the number of days in billing cycle: ";
    cin >>d2;
    cout << "enter nymber of days before end of cycle payment was made: ";
    cin >> d2;
    cout << "enter montly interest rate : ";
    cin >> rate;


    double averageBalance = (netBalance * d1 - payment * d2) / d1;
    double interest = averageBalance * rate;

    cout << fixed << showpoint << setprecision(2);
    cout << "Interest on unpaid balance is :$" << interest << endl;

    return 0;
}