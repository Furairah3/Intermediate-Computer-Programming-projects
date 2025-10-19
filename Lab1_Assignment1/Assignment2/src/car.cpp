#include "../include/car.h"
#include <iostream>
using namespace std;



Car::Car(string b, string m) : brand(b), model(m), engine(nullptr) {
    cout << "Created Car: " << brand << " " << model 
         << " at " << this << endl;
}

void Car::setBrand(string b){
    brand = b;
}

Car::~Car() {
    cout << "Car destroyed: " << brand << " " << model << endl;
}

void Car::setModel(string m){
    model = m;

}
void Car::setEngine(Engine* e){
    engine = e;
}

string Car::getBrand() const{
    return brand;
}

string Car::getModel() const{
    return model;
}
Engine* Car::getEngine() const{
    return engine;
}

void Car::display() const{
    cout << "\nCar brand:" << brand << endl;
    cout << "Model: "<< model<<endl;
    engine->display();
}
void Car::installEngine(Engine* e) {
    setEngine(e);
}

void Car::displayDetails() const {
    cout << "Model: " << model << endl;

    if (engine != nullptr) {
        cout << "Engine Number: " << engine->getNumber()
             << ", Horsepower: " << engine->getHorsepower() << endl;
    } else {
        cout << "No engine installed yet!" << endl;
    }
}