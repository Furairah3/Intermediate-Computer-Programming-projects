#ifndef CAR_H
#define CAR_H

#include <string>
#include "../include/engine.h"
using namespace std;

class Car {
private:
    string brand;
    string model;
    Engine* engine; 

public:
    Car();
    Car(string b = "Unknown", string m = "Base");


    
    void setBrand(string b);
    void setModel(string m);
    void setEngine(Engine* e);

    
    string getBrand() const;
    string getModel() const;
    Engine* getEngine() const;

    void installEngine(Engine* e);
    void displayDetails() const;
    void display() const;
    ~Car();
};

#endif