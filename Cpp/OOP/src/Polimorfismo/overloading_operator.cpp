/*
    C++ Operators Overloading

    L'overload dell'operatore è un polimorfismo in fase di compilazione in cui l'operatore viene sovraccaricato per 
    fornire il significato speciale al tipo di dati definito dall'utente. 
    L'overload degli operatori viene utilizzato per sovraccaricare o ridefinire la maggior parte degli operatori disponibili in C++.
    Viene utilizzato per eseguire l'operazione sul tipo di dati definito dall'utente.

    Il vantaggio dell'overload degli operatori è quello di eseguire operazioni diverse sullo stesso operando.

    Gli operatori che non possono essere sovraccaricati sono i seguenti:

    Scope operator (::)
    Sizeof
    member selector(.)
    member pointer selector(*)
    ternary operator(?:)

    Syntax of Operator Overloading:
    return_type class_name  :: operator op(argument_list)  
    {  
     // body of the function.  
    } 

    Where the return type is the type of value returned by the function.

    class_name is the name of the class.

    operator op is an operator function where op is the operator being overloaded, and the operator is the keyword.

    Regole per il sovraccarico dell'operatore:
        Gli operatori esistenti possono essere solo sovraccaricati, ma i nuovi operatori non possono essere sovraccaricati.
        L'operatore di overload contiene almeno un operando del tipo di dati definito dall'utente. 
        Non possiamo usare la funzione amico per sovraccaricare determinati operatori. Tuttavia, la funzione membro può essere utilizzata per sovraccaricare tali operatori. 
        Quando gli operatori unari sono sovraccaricati attraverso una funzione membro non prendono argomenti espliciti, ma, se sono sovraccaricati da una funzione amico, prende un argomento. 
        Quando gli operatori binari vengono sovraccaricati tramite una funzione membro accetta un argomento esplicito, e se sono sovraccaricati tramite una funzione friend accetta due argomenti espliciti.

*/

#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A() {}  // COSTRUTTORE CLASSE default
    A( int i) {  // costruttore classe parametrizzato
        x=i;
    }
    void operator ++(){
        x=x+2;
    }
    void operator +(A a);
    void display();
};

void A::operator+(A a){
    int m = x+a.x;
    cout<<"The result of the addition of two objects is : "<<m;  
}

int main( int*argc , char *argv[]) {

    A a1(5);
    A a2(10);
    a1+a2;
    ++a1;
    a1+a2;
    return 0;
}