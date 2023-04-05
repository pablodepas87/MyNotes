/*
C++ is an object-oriented language (OOL), program is designed using objects and classes in C++.

In C ++, l'oggetto è un'entità del mondo reale, ad esempio sedia, auto, penna, cellulare, laptop ecc. 
In altre parole, l'oggetto è un'entità che ha stati e comportamento. 
Qui, stato significa dati e comportamento significa funzionalità.

Object is a runtime entity, it is created at runtime.

Object is an instance of a class. All the members of the class can be accessed through object.

C++ Class

In C++, class is a group of similar objects. It is a template from which objects are created. 
It can have fields, methods, constructors etc.

class Student    
 {    
     public:  
     int id;  //field or data member     
     float salary; //field or data member  
     String name;//field or data member    
 }  

*/

#include <iostream>
using namespace std;

class Oggetto {
  public:
    int parametro_1;      //data member (also instance variable)      
	float parametro_2;   //data member (also instance variable)      
};

int main (int *argc , char *argv[]) {

Oggetto obj;
obj.parametro_1 = 10;
obj.parametro_2 = 10.5;

cout << "Oggetto parametro 1: " << obj.parametro_1 << endl;
cout << "Oggetto parametro 2: " << obj.parametro_2 << endl;

return 0;

}

