/*
    Interfaces in C++ (Abstract Classes)

    Le classi astratte sono il modo per ottenere l'astrazione in C++. L'astrazione in C ++ è il processo per nascondere i dettagli interni e mostrare solo la funzionalità.

    Abstraction can be achieved by two ways:

        Abstract class
        Interface

    La classe astratta e l'interfaccia possono entrambe avere metodi astratti necessari per l'astrazione.    

    C++ Abstract class

    In C++ la classe è resa astratta dichiarando almeno una delle sue funzioni come funzione virtuale pura.
    Una funzione virtuale pura viene specificata inserendo "= 0" nella sua dichiarazione. La sua implementazione deve essere fornita da classi derivate.
*/
#include <iostream>
using namespace std;

class Shape{
   public:
   virtual void show() = 0 ; //cosi facendo rendo la classe astratta
};

class Rectangle: public Shape{
    public:
    void show() {
        cout << "drawing rectangle..." << endl;    
    } 
};

class Circle: public Shape{
    public:
    void show() {
        cout << "drawing circle..." << endl;     
    }
};

int main( int *argc,char *argv[]){
    
    //Shape sh;  // nn posso crearlo perchè è classe astratta
    Rectangle rect;
    Circle cir;

    rect.show();
    cir.show();    

    return 0;
} 