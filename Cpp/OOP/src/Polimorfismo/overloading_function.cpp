/*
    Overloading

    Se creiamo due o più membri con lo stesso nome ma diversi per numero o tipo di parametro, è noto come overload C ++. 
    In C ++, possiamo sovraccaricare:

    methods,
    constructors, and
    indexed properties

    perché questi membri hanno solo parametri.

    Types of overloading in C++ are:

    Function overloading
    Operator overloading

    Function Overloading

    Il sovraccarico delle funzioni è definito come il processo di avere due o più funzioni con lo stesso nome, 
    ma diversi parametri è noto come overload di funzioni in C ++. 
    Nell'overload delle funzioni, la funzione viene ridefinita utilizzando diversi tipi di argomenti o un numero diverso di argomenti. 
    È solo attraverso queste differenze che il compilatore può differenziare tra le funzioni.

    Il vantaggio dell'overloading delle funzioni è che aumenta la leggibilità 
    del programma perché non è necessario utilizzare nomi diversi per la stessa azione.

    Ambiguity

    Quando il compilatore non è in grado di decidere quale funzione deve essere richiamata tra la funzione di overload, 
    questa situazione è nota come overload delle funzioni.

    Quando il compilatore mostra l'errore di ambiguità, il compilatore non esegue il programma.
    Cause di sovraccarico di funzioni: 
        Conversione del tipo. 
        Funzione con argomenti predefiniti. 
        Funzione con passaggio per riferimento.

        
*/
#include <iostream>
using namespace std;
int mul (int, int);
float mul( float, int);

int mul(int a, int b){
    return a*b;
}

float mul(double x , int y ){
    return x*y;
}

class Cal {
    public:

    static int add( int a,int b) {
        return a+b;
    }
    static int add( int a, int b, int c) {
        return a+b+c;
    }
};

int main (int * argc , char *argv[]){

    Cal C;
    cout << C.add(10,12) << endl;
    cout << C.add(12,20,23) << endl;

    int r1 = mul(6,7);
    float r2= mul(0.2,3);

    cout << "r1 is : " <<r1 << endl;  
    cout << "r2 is : " <<r2 << endl;  
}

