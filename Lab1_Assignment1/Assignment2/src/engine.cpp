#include "../include/engine.h"
#include <iostream>
using namespace std;


Engine::Engine(string num, int hp, string fuel)
    : engineNumber(num), horsepower(hp), fuelType(fuel) {
    cout << "Created Engine: " << engineNumber << " at " << this << endl;
}

void Engine::setFuelType(string m) {
    fuelType = m;
}

void Engine::setHorsepower(int hp) {
    horsepower = hp;
}

string Engine::getFuelType() const {
    return fuelType;
}

int Engine::getHorsepower() const{
    return horsepower;
}

void Engine::display() const{
    cout << "Engine Number: " << engineNumber<<endl;
    cout << ", Fuel Type: " << fuelType << endl;
    cout <<"Horsepower: "<< horsepower << "HP" << endl;
}
Engine::~Engine() {
    cout << "Destroying Engine: " << engineNumber
         << " located at " << this << endl;
}
string Engine::getNumber() const {
    return engineNumber;
}
void Engine::setNumber(string number) {
    engineNumber = number;
}
