#include <iostream> 
#include "../include/student.h"
using namespace std;

Student::Student(){
    name = "";
    numberOfClasses = 0;
    classList = nullptr;
}

Student::Student(const Student& other){
    name = other.name;
    numberOfClasses = other.numberOfClasses;

    if(numberOfClasses > 0){
        classList = new string[numberOfClasses];
        for (int i = 0; i < numberOfClasses; i++){
            classList[i] = other.classList[i];

        }

    }
        else
        {classList = nullptr;
        }
}

Student& Student::operator=(const Student& other){
    if (this!= &other){
        delete[] classList;
         name = other.name;
         numberOfClasses = other.numberOfClasses;

         if(numberOfClasses > 0){
            classList = new string[numberOfClasses];
            for(int i = 0; i < numberOfClasses; i++ ){
                classList[i] = other.classList[i];

            }

         }else {
            classList = nullptr;
         }
        }
        return *this;
    }

    Student::~Student(){
        delete[] classList;
        cout << "I am Calling Destructor for Student: " << name << endl;

    }

    void Student::inputFromUser(){
        cout << "Enter the student name: ";
        getline(cin,name);

        cout << "Enter number of classes: ";
        cin >> numberOfClasses;
        cin.ignore();

        classList = new string[numberOfClasses];
        for (int i = 0; i < numberOfClasses; i++){
            cout << "Enter name of class " << i + 1 << ";";
            getline(cin, classList[i]);
        }

    }
void Student::displayInfo() const {
    cout << "\nStudent Name: " << name << endl;
    cout << "Number of Classes: " << numberOfClasses << endl;

    if (numberOfClasses > 0) {
        cout << "Classes Enrolled:" << endl;
        for (int i = 0; i < numberOfClasses; i++) {
            cout << "  - " << classList[i] << endl;
        }
    }
}

// Reset all values
void Student::resetClasses() {
    delete[] classList; // free the memory
    numberOfClasses = 0;
    classList = nullptr;
    cout << "Classes have been reset for " << name << "." << endl;
}
