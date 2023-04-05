/*
    C++ Multiple Inheritance

    L'ereditarietà multipla è il processo di derivazione di una nuova classe che eredita gli attributi da due o più classi.

    Syntax of the Derived class:

    class D : visibility B-1, visibility B-2, ?  
    {  
        // Body of the class;  
    }   

    L'ambiguità può verificarsi nell'utilizzo dell'ereditarietà multipla quando esiste una funzione con lo stesso nome 
    in più di una classe base.
    Il problema precedente può essere risolto utilizzando l'operatore di risoluzione della classe con la funzione

    baseclasseONE::same_name_method 
*/

#include <iostream>
using namespace std;

class A {

  public: 
    void set_a(int n) {
        a = n;
    }

    void stampa() {
        cout << "A vale: " << a << endl;
    }

  protected:
    int a;  
};

class B {
    public:
    void set_b( int n) {
        b = n;
    }

    void stampa() {
        cout << "B vale: " << b << endl;
    }

    protected:
    int b;
};

class C: public A, public B {
    public :
    void stampa(){
         A::stampa();   // to solve Ambiquity 
         B::stampa();   // to solve ambiquity
         
        cout << "a + b = " << a+b << endl;
    }
};

int main( int *argc , char *argv ) {

    C c;
    c.set_a(4);
    c.set_b(8);
    c.stampa();

    return 0;
}