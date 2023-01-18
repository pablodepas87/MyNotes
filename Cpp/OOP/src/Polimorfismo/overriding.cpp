/*
  C++ Function Overriding

  Se la classe derivata definisce la stessa funzione definita nella relativa classe base, è nota come override della funzione in C++. 
  Viene utilizzato per ottenere il polimorfismo di runtime. 
  Consente di fornire un'implementazione specifica della funzione già fornita dalla sua classe base.
*/

#include <iostream>  
using namespace std;  
class Animal {  
    public:  
void eat(){    
cout<<"Eating...";    
    }      
};   
class Dog: public Animal    
{    
 public:  
 void eat()    
    {    
       cout<<"Eating bread...";    
    }    
};  
int main(void) {  
   Dog d = Dog();    
   d.eat();  
   return 0;  
}