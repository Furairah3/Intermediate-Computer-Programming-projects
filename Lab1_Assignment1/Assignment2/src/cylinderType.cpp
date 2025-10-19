#include <iostream>
#include "../include/cylinderType.h"

using namespace std;

CylinderType::CylinderType(double r, double h) : CircleType(r){
    setHeight(h);
}

void CylinderType::setHeight(double h){
    if (h >= 0)
        height = h;
    else
        height = 0;
}

double CylinderType::getHeight()const
{
    return height;
}

double CylinderType::volume()
{
    return area() * height;
}

double CylinderType::surfaceArea()
{
    return 2 * 3.1416 * getRadius() * (getRadius() + height);
}

void CylinderType::print()
{
    cout << "=== MY CYLINDER DETAILS ===" << endl;
    cout << "Radius: " << getRadius() << endl;
    cout << "Height: " << height << endl;
    cout << "surface area: " << surfaceArea() <<endl;
    cout << "Volume: " << volume() << endl;
}