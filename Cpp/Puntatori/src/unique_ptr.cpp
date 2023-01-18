/*
    unique ptr

    Solo un puntatore è memorizzato in ptr univoco. 
    Rimuovendo l'oggetto corrente dal puntatore, possiamo assegnare un oggetto diverso.
    Prendi nota del codice qui sotto. Innanzitutto, il unique_pointer punta a P1. 
    Tuttavia, rimuoviamo P1 e lo sostituiamo con P2, quindi il puntatore ora punta a P2.
     
    Smart pointers enable automatic, exception-safe, object lifetime management.
        Defined in header <memory> 

*/

#include <iostream>
#include <memory>
using namespace std;

class Rectangle {

    int lenght;
    int breadth;

    public: 

    Rectangle(int altezza, int base){
        lenght = altezza;
        breadth = base;
    }

    int area() {
        return lenght*breadth;
    }
};

int main ( int *argc , char *argv[]) {
    
    // unique_ptr;

    unique_ptr<Rectangle> myRect(new Rectangle(10,5));  // potevo fare anche myRect= new Rectangle(10,5);

    cout << myRect->area() << endl;
     
    unique_ptr<Rectangle> myRect2;

    myRect2 = move(myRect);

    cout << myRect2->area() << endl;

    return 0;
}