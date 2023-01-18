/*
C++ Polymorphism

Polimorfismo in fase di compilazione: le funzioni di overload vengono richiamate facendo corrispondere il tipo e il numero di argomenti. Queste informazioni sono disponibili in fase di compilazione e, pertanto, il compilatore seleziona la funzione appropriata in fase di compilazione. Si ottiene mediante sovraccarico di funzioni e sovraccarico dell'operatore che è anche noto come associazione statica o associazione precoce. 
Ora, consideriamo il caso in cui il nome della funzione e il prototipo sono uguali.

Compile time polymorphism
    La funzione da richiamare è nota in fase di compilazione.
    È anche noto come sovraccarico, legame precoce e legame statico.
    L'overloading è un polimorfismo in fase di compilazione in cui più di un metodo ha lo stesso nome ma con il diverso numero di parametri o il tipo dei parametri.
    Si ottiene mediante sovraccarico di funzioni e sovraccarico dell'operatore.
    Fornisce un'esecuzione rapida come è noto in fase di compilazione.
    È meno flessibile in quanto principalmente tutte le cose vengono eseguite in fase di compilazione.
*/
#include <iostream>
using namespace std;

class A                                  //  base class declaration.  
{  
       int a;  
       public:  
       void display()  
       {   
             cout<< "Class A ";  
        }  
};  

class B : public A                       //  derived class declaration.  
{  
   int b;  
   
   public:  
   void display()  
   {  
        cout<<"Class B";  
   }  
};  

int main(int *argv , char *argc[]){

    B b;
    b.display();
    return 0;
}

