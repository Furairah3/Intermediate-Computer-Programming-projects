#include <iostream>
#include <cstring>
#include "../include/pointerReverse.h"
using namespace std;
void reverseCString(char* myString){
    int length = strlen(myString);

    char* head = myString;
    char* tail = myString + length -1;

    cout << "\nBefore I reverse (Addresses): "<< endl;
    for(int i=0; i<length; i++){
        cout << "Character: "<< myString[i]
        <<" => Address: " << static_cast<void*>(&myString[i]) << endl;

    }
    while (head<tail){
        char temp = *head;
        *head = *tail;
        *tail = temp;

        head++;
        tail--;
    }
    cout << "\nAfter I reverse (Addresses): "<< endl;
    for(int i=0; i<length; i++){
        cout << "Character: "<< myString[i]
        <<" => Address: " << static_cast<void*>(&myString[i]) << endl;
    }
    cout << "\nReversed string: " << myString << endl;

}
void testPointerProgram(){
     char input[100];
     cout << "Enter a string to reverse: ";
     cin.getline(input, 100);

     cout << "\n Original string: " << input << endl;
     reverseCString(input);
}