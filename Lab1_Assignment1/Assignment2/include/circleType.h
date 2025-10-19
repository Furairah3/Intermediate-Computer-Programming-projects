#include <iostream>
using namespace std;

#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H


class CircleType {
    private:
    double radius;
    public:
    CircleType(double r=0);

    void setRadius(double r);
    double getRadius()const;

    double area();
    double circumference();

    void print();


};
#endif

