#include <iostream>
#include "circleType.h"
using namespace std;

#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H

class CylinderType : public CircleType {
    private:
        double height;
    public: 
    CylinderType(double r = 0, double h = 0);
    
    void setHeight(double h);
    double getHeight()const;

    double volume();
    double surfaceArea();

    void print();

};

#endif