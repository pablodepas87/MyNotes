/*
  C++ virtual function

  Una funzione virtuale C++ è una funzione membro della classe base ridefinita in una classe derivata. 
  Viene dichiarato utilizzando la parola chiave virtual.
  
  Viene utilizzato per indicare al compilatore di eseguire il collegamento dinamico o l'associazione tardiva sulla funzione.

  È necessario utilizzare il puntatore singolo per fare riferimento a tutti gli oggetti delle diverse classi. 
  Quindi, creiamo il puntatore alla classe base che fa riferimento a tutti gli oggetti derivati. 
  Tuttavia, quando il puntatore della classe base contiene l'indirizzo dell'oggetto classe derivato, esegue sempre la funzione della classe base. 
  Questo problema può essere risolto solo utilizzando la funzione "virtuale".

  Un "virtuale" è una parola chiave che precede la normale dichiarazione di una funzione.

  Quando la funzione viene resa virtuale, C++ determina quale funzione deve essere richiamata in fase di esecuzione in base al tipo di oggetto puntato dal puntatore della classe base.

  Late binding or Dynamic linkage:
  Nell'associazione tardiva la chiamata alla funzione viene risolta durante il runtime. 
  Pertanto, il compilatore determina il tipo di oggetto in fase di esecuzione e quindi associa la chiamata di funzione.

  Rules of Virtual Function:

    Le funzioni virtuali devono essere membri di alcune classi. 
    Le funzioni virtuali non possono essere membri statici. 
    Vi si accede tramite puntatori oggetto. 
    Possono essere amici di un'altra classe. 
    Una funzione virtuale deve essere definita nella classe base, anche se non viene utilizzata.
    I prototipi di una funzione virtuale della classe base e di tutte le classi derivate devono essere identici. Se le due funzioni hanno lo stesso nome ma prototipi diversi, C++ le considererà come funzioni di overload.
    Non possiamo avere un costruttore virtuale, ma possiamo avere un distruttore virtuale
    Considera la situazione in cui non usiamo la parola chiave virtuale


    Pure Virtual Function

    Pure virtual function can be defined as:

            virtual void display() = 0;   

    Una funzione virtuale non viene utilizzata per eseguire alcuna attività. Serve solo come segnaposto.        
    Quando la funzione non ha una definizione, tale funzione è nota come funzione "do-nothing".
    La funzione "do-nothing" è nota come Pure virtual function. Una funzione virtuale pura è una funzione dichiarata nella classe base che non ha alcuna definizione relativa alla classe base.
    Una classe contenente la funzione virtuale pura non può essere utilizzata per dichiarare gli oggetti propri, tali classi sono note come classi base astratte.
    L'obiettivo principale della classe base è fornire i tratti alle classi derivate e creare il puntatore di base utilizzato per ottenere il polimorfismo di runtime.

*/
#include <iostream>
using namespace std;

class A {
    public:
    virtual void display(){
         cout << "Base class is invoked"<<endl; 
    }
};

class B: public A {
    public:
    void display(){
        cout << "Derived Class is invoked"<<endl;   
    }

};

class Base {
    public:
    virtual void show() = 0;
};

class Derived: public Base{
    public:
    void show() {
        cout << "Derived class is derived from the base class." << endl;  
    }
};

int main() {

    A *a; // pointer of base class
    B b;

    a=&b;
    b.display();
    a->display();

    Base *bptr;
    //Base b;      // da errore xchè contiene una pure virtual function qindi nn posso dichiararne un oggetto (è cosi una classe astratta)
    Derived d;
    bptr = &d;
    bptr->show();
    
    /*
    Nell'esempio precedente, la classe base contiene la funzione virtuale pura. Pertanto, la classe base è una classe base astratta. 
    Non è possibile creare l'oggetto della classe base.
    */

    return 0;
}