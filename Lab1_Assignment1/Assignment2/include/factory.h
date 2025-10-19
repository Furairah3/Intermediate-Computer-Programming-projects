#ifndef FACTORY_H
#define FACTORY_H

#include "car.h"
#include <vector>
#include <iostream>
using namespace std;

class Factory {
private:
    vector<Car*> inventory;
    int capacity;
    int count;

public:
    Factory(int size = 5);
    ~Factory();

    void addCar(Car* car);
    void displayInventory() const;
    void burnDownFactory();

};

#endif