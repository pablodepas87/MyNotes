# FUNCTION OBJECTS

Un oggetto Function è una funzione racchiusa in una classe in modo che assomigli a un oggetto. Un oggetto funzione estende le caratteristiche di una funzione regolare utilizzando la funzionalità di una funzione orientata agli oggetti, ad esempio la programmazione generica. Pertanto, possiamo dire che l'oggetto funzione è un puntatore intelligente che presenta molti vantaggi rispetto alla funzione normale.

## advantages of function objects

- Gli oggetti funzione possono avere funzioni membro e attributi membro. 
- Gli oggetti funzione possono essere inizializzati prima del loro utilizzo. 
- Le funzioni regolari possono avere tipi diversi solo quando la firma è diversa. Gli oggetti funzione possono avere tipi diversi anche quando la firma è la stessa. 
- Gli oggetti funzione sono più veloci della funzione normale.

Un oggetto funzione è noto anche come **"functor"**. Un oggetto funzione è un oggetto che contiene almeno una definizione di funzione **operator()**. Significa che se dichiariamo l'oggetto 'd' di una classe in cui è definita la funzione operator(), possiamo usare l'oggetto 'd' come funzione regolare.

Suppose 'd' is an object of a class, operator() function can be called as:

    d();  
    
    which is same as:  
    
    d.operator() ( );  


    #include <iostream>
    using namespace std;

    class function_object {

    public:

        int operator()(int a, int b){
            return (a+b);  
        }

    }

    int main( int *argc, char *argv[]){

        function_object f;

        cout << "add 5+5 =" << f(5,5) << endl; 

        return 0;
    }
