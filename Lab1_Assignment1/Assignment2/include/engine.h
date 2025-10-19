#ifndef ENGINE_H
#define ENGINE_H

#include <string>
using namespace std;

class Engine {
private:
    string engineNumber;
    string fuelType;
    int horsepower;

public:
    
    Engine();
    ~Engine();
    
    Engine(string num = "ENG-000", int hp= 0, string fuel = "Petrol");
    
    void setFuelType(string m);
    void setHorsepower(int hp);


    
    string getFuelType() const;
    int getHorsepower() const;
    string getNumber() const;
    void setNumber(string number);

    
    void display() const;
};

#endif