#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
    const double PI = 3.1416;
    string shape; 
    cout<< "Enter the shape ty( rectangular, circle, cylender):";
    cin >> shape;

    if (shape == "rectangle: ")
    {
        double length, width;
    cout << "enter the lenght of the rectngle: ";
    cin >> length;

    cout << "enter the width of the rectangle: "; 
    cin >> width;

    cout << fixed << showpoint << setprecision(2);
        cout << "Area of the rectangle = " << length * width << endl;
        cout << "Perimeter of the rectangle = " << 2 * (length + width) << endl;

    }
    
    else if (shape == "circle")
    {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        cout << fixed << showpoint << setprecision(2);
        cout << "Are of the circle = " << PI * pow(radius, 2) << endl;

    }

    else if (shape == "cylinder")
    {
        double radius ,height;
        cout << "Enter the radius of the base of the cylender: ";
        cin >> radius;
        cout << "Enter the height of the cylender: ";
        cin >> height;

        cout << fixed << showpoint << setprecision(2);
        cout << "Volume of the cylinder -" << PI * pow(radius, 2) * height << endl;
        cout << "Surface area of the cylinder = "<< 2 * PI * radius + 2 *PI *pow(radius, 2)<<endl;

    }
    else{
        cout << "The program does not handle "<< shape << endl;
    }
    return 0;



};