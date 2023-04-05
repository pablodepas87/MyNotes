/*
 Il polimorfismo di runtime può essere ottenuto dai membri dei dati in C++. 
 Vediamo un esempio in cui stiamo accedendo al campo per variabile di riferimento che si riferisce all'istanza di classe derivata.
*/

#include <iostream>
#include <string>
using namespace std;

class Animal {

    public:
    string color = "Black";
};

class Dog: public Animal {
    public:
    string color = "grey";
};

int main (int *argc, char *argv[]){
    
    Animal d = Dog();
    cout << "Colore animale : " << d.color << endl;
    
    return 0;
}