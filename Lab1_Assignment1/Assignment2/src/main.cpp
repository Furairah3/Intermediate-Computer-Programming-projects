#include <iostream>
#include <limits>
#include <cstring>          // For strlen() in pointer example
#include "../include/circleType.h"
#include "../include/cylinderType.h"
#include "../include/student.h"
#include "../include/engine.h"
#include "../include/car.h"
#include "../include/factory.h"
#include "../include/pointerReverse.h"
using namespace std;

void CircleAndCylinderMain() {
    cout << "\n===== MY TEST FOR CIRCLE AND CYLINDER =====\n";

    CircleType c1(5);
    c1.print();

    CylinderType cy1(5, 10);
    cy1.print();

    // Shipping & painting cost example
    cout << "\n--- Shipping & Painting Cost Example ---\n";
    double radius, height, shipCostPerLiter, paintCostPerSqFt;
    cout << "Enter radius (ft): ";
    cin >> radius;
    cout << "Enter height (ft): ";
    cin >> height;
    cout << "Enter shipping cost per liter: ";
    cin >> shipCostPerLiter;
    cout << "Enter paint cost per sq. ft: ";
    cin >> paintCostPerSqFt;

    CylinderType container(radius, height);
    double volume_cu_ft = container.volume();
    double volume_liters = volume_cu_ft / 0.0353146667;  
    double surface_area = container.surfaceArea();
     double shippingCost = volume_liters * shipCostPerLiter;
    double paintCost = surface_area * paintCostPerSqFt;

    cout << fixed;
    cout << "\n--- Container Details ---\n";
    container.print();
    cout << "\nShipping cost: $" << (shipCostPerLiter * volume_liters);
    cout << "\nPainting cost: $" << (paintCostPerSqFt * surface_area);
    cout << endl;
}

void PointerMain() {
    cout << "\n===== MY TEST FOR POINTER STRING REVERSAL =====\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    testPointerProgram();  
    cout << "\nProgram finished successfully!\n";
}

void StudentMain() { 
    cout << "\n===== MY TEST FOR STUDENT CLASS =====\n";
    Student s1;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    s1.inputFromUser();
    s1.displayInfo();

    cout << "\nCreating a copy of the student...\n";
    Student s2 = s1;
    s2.displayInfo();

    cout << "\nResetting original student's classes...\n";
    s1.resetClasses();
    s1.displayInfo();
}

void CarFactoryMain() {
    cout << "\n===== MY TEST FOR CAR FACTORY SYSTEM =====\n";

    
    Engine* e1 = new Engine("E101", 200, "Petrol");
    Engine* e2 = new Engine("E102", 300, "Diesel");
    Engine* e3 = new Engine("E103", 250, "Electric");

    
    Car* c1 = new Car("Toyota", "Corolla");
    Car* c2 = new Car("BMW", "M3");
    Car* c3 = new Car("Tesla", "Model S");

    
    c1->installEngine(e1);
    c2->installEngine(e2);
    c3->installEngine(e3);

    
    Factory* f = new Factory(3);

    
    f->addCar(c1);
    f->addCar(c2);
    f->addCar(c3);

    
    f->displayInventory();

    
    f->burnDownFactory();

   
    delete e1;
    delete e2;
    delete e3;
    delete f;

    cout << "\n All cars built successfully!\n";
    cout << "        END OF CAR FACTORY DEMO              \n";
    cout << "=============================================\n";
}

int main() {
    cout << "==============================\n";
    cout << "   LAB ASSIGNMENT 2 TESTING   \n";
    cout << "==============================\n";

    CircleAndCylinderMain();
    PointerMain();
    StudentMain();
    CarFactoryMain();

    cout << "\nProgram finished successfully!\n";
    return 0;
}