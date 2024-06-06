#include "include/myclass.h"
#include <iostream>

Myclass::myclass (){
    mynumber = 10;
}

Myclass::~myclass() {
    std::cout << "Distruttore chiamato" << std::endl;
}

void MyClass::printMessage(){
    std::cout << "il numero vale " << mynumber << std::endl;
}