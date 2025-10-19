#include "../include/factory.h"
#include <iostream>
using namespace std;


Factory::Factory(int cap) : capacity(cap), count(0) {
    inventory.reserve(capacity); 
    cout << "Factory created with capacity " << capacity << endl;
}
void Factory::addCar(Car* c) {
    if ((int)inventory.size() < capacity) {
        inventory.push_back(c);  
        cout << "Car added to factory inventory.\n";
    } else {
        cout << "Factory is full! Cannot add more cars.\n";
    }
}

void Factory::displayInventory() const {
    cout << "\nFactory Inventory:\n";
    for (int i = 0; i < count; i++) {
        cout << "\nCar " << (i + 1) << ":\n";
        inventory[i]->displayDetails();
    }
}

void Factory::burnDownFactory() {
    cout << "\nBurning down the factory... all cars destroyed!\n";
    for (int i = 0; i < count; i++) {
        delete inventory[i];
    }
    count = 0;
}

Factory::~Factory() {
    cout << "Factory shutdown complete.\n";
}

