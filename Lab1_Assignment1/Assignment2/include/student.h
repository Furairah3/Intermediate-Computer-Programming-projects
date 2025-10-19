#include <iostream>
#include <string>
using namespace std;
#ifndef STUDENT_H
#define STUDENT_H

class Student {
    private:
    
        string name;
        int numberOfClasses;
        string* classList;
    

    public:
            Student();
            Student(const Student& other);

            ~Student();

            Student& operator=(const Student& other);

            void inputFromUser();
            void displayInfo() const;
            void resetClasses();

        

};

#endif