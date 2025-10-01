#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
LAB1 - Section B 
*/
int main(){
/*
1. The function pow(x,y) raises x to the power of y
Header file to include is <cmath> or <math.h>
*/
//Question 2
double height;
string name;
/*
Input example (a) : 5.4 Christy Miller
height = 5.4, name = "Christy Miller"
Input example (b): 5.4
Christy Miller
height = 5.4, name = "Christy Miller"
 */
// 3.
    string str1 = "Low", str2 = "High", str3 = "Medium";
    cout << boolalpha;
    cout << "(a) " << (str1 <= str2) << endl; // false
    cout << "(b) " << (str2 <= str1) << endl; // true
    cout << "(c) " << (str3 > "Medium") << endl; // false
    cout << "(d) " << (str3 <= "Light") << endl; // false

// 4.
    int num = 17;
    double gpa = 3.85;
    bool done;
    done = (num == static_cast<int>(2 * gpa + 9.3));
    cout << "The value of done is: " << done << endl;


// 5. Corrected shipping charges code:
    int numOfItemsBought;
    double shippingCharges;
    cout << "Enter number of items bought: ";
    cin >> numOfItemsBought;

    if (numOfItemsBought >= 10)
        shippingCharges = 0.0;
    else if (numOfItemsBought >= 5)
        shippingCharges = 3.00 * numOfItemsBought;
    else if (numOfItemsBought > 0)
        shippingCharges = 7.00 * numOfItemsBought;

    cout << "Shipping charges: $" << shippingCharges << endl;

    return 0;
};