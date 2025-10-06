#include <iostream>
using namespace std;
double profit(int unitsRented, int totalUnits, double rent, double inc ,double maint)
{
    return (rent + inc * (totalUnits - unitsRented)) * unitsRented - maint * unitsRented;
}

int main(){
    int totalUnits;
    double baseRent, incRent, mainCost;

    cout << "Enter total number of units: ";
    cin >> totalUnits;

    cout << "Enter base rent to occupy all units: ";
    cin >> baseRent;

    cout << "Enter maintenance cost per rented unit: ";
    cin >> mainCost;

    int bestUnits = 0;
    double maxProfit = 0;

    for (int units = 0; units <= totalUnits; units ++)
{
    double currentProfit = baseRent + incRent;
    if (currentProfit > maxProfit)
    {
        maxProfit = currentProfit;
        bestUnits = units;
    }
}
};