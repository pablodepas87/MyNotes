/*
  C++ Multilevel Inheritance
  
  L'ereditarietà multilivello è un processo di derivazione di una classe da un'altra classe derivata.

  Quando una classe eredita un'altra classe che viene ulteriormente ereditata da un'altra classe, è nota come ereditarietà multilivello in C ++. 
  L'ereditarietà è transitiva, quindi l'ultima classe derivata acquisisce tutti i membri di tutte le sue classi base.  
*/

#include <iostream>
#include <string>
using namespace std;

class Animal {
   public:
        void eat(){
            cout << "Eating" << endl; 
        }  

};

class Dog: public Animal {
   public: 
        void bark(){
            cout << "Barking" << endl;
        }
};

class babyDog: public Dog {

    /* babyDog eredita dalla classe base Dog che a sua volta eredità dalla sua base che è Animal*/
    public: 
        void weep() {
            cout << "weeping" << endl;
        }
};

int main ( int *argc, char *argv) {

    babyDog cucciolo;
    
    cucciolo.eat(); 
    cucciolo.bark();
    cucciolo.weep();
    
    return 0;
}
