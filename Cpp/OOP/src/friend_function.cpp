/*
   C++ Friend function
   
   Se una funzione è definita come funzione friend in C++, è possibile accedere ai dati protetti e privati di una classe utilizzando la funzione.

   Utilizzando la parola chiave friend compiler sa che la funzione data è una funzione friend.

   Per accedere ai dati, la dichiarazione di una funzione di amicizia dovrebbe essere fatta all'interno del corpo di una classe che inizia con la parola chiave amico.

   Declaration of friend function in C++

   class class_name    
   {    
        friend data_type function_name(argument/s);            // syntax of friend function.  
   }; 

   La funzione può essere definita in qualsiasi punto del programma come una normale funzione C ++. La definizione della funzione non utilizza né la parola chiave friend né l'operatore di risoluzione dell'ambito.

   Characteristics of a Friend function:

    La funzione non rientra nell'ambito della classe a cui è stata dichiarata come amico.
    Non può essere chiamato utilizzando l'oggetto in quanto non rientra nell'ambito di tale classe
    Può essere richiamato come una normale funzione senza utilizzare l'oggetto. 
    Non può accedere direttamente ai nomi dei membri e deve utilizzare un nome oggetto e un operatore di appartenenza punto con il nome membro. 
    Può essere dichiarato sia nella parte privata che in quella pubblica.
*/

#include <iostream>
using namespace std;

class B;
class A{
    int x;
    public:
        void setdata(int i){
            x=i;
        }
    friend void min(A,B);       // friend function    
    friend class C;             // friend class
};

class B {
    int y;
    public:
        void setdata(int i){
            y=i;
        }
    friend void min(A,B);    // friend function

};

class C {
    public:
        void display(A &a) {
            cout << "value of x is:" << a.x << endl; 
        } 

    // Nell'esempio precedente, la classe C viene dichiarata come amica all'interno della classe A. 
    // Pertanto, C è un amico della classe A. La classe C può accedere ai membri privati della classe A.    
};

void min( A a, B b){
    
    if (a.x <= b.y){
        cout << a.x << endl;
    } else {
        cout << b.y << endl;
    }
}

int main ( int *argc , char* argv[]) {

    A a;
    B b;
    C c;

    a.setdata(5);
    b.setdata(8);
    min(a,b);
    c.display(a);

    return 0;

}