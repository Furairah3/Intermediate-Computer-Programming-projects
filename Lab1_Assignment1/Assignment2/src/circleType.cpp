#include <iostream>
#include "../include/circleType.h"
using namespace std;
CircleType::CircleType(double r){
    setRadius(r);
}

void CircleType::setRadius(double r){
    if (r>=0)
        radius = r;
    else 
        radius = 0;
}
double CircleType::getRadius()const{
    return radius;
}

double CircleType::area(){
    return 3.1416 * radius * radius;
}

double CircleType::circumference(){
    return 2 * 3.1416 * radius;

}

void CircleType::print(){
    cout << "Radius: "<<radius<<endl;
    cout<< "Area: "<<area() << endl;
    cout << "Circumference: "<<circumference() << endl;

}
