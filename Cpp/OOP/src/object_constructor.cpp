/*
    C++ Constructor

    In C++, il costruttore è un metodo speciale che viene richiamato automaticamente al momento della creazione dell'oggetto. Viene utilizzato per inizializzare i membri dei dati del nuovo oggetto in generale. 
    Il costruttore in C++ ha lo stesso nome della classe o della struttura.

    In C++ possono esistere due tipi di costruttori.

        Default constructor
        Parameterized constructor
    
    Default Constructor: Un costruttore che non ha argomenti è noto come costruttore predefinito. 
        Viene richiamato al momento della creazione dell'oggetto.

    Parameterized Constructor: Un costruttore che dispone di parametri è chiamato costruttore con parametri. 
        Viene utilizzato per fornire valori diversi a oggetti distinti    
*/

#include <iostream>
using namespace std;

class Oggetto_con_Costruttore_default{
    public:
        Oggetto_con_Costruttore_default(){
            cout << "Ciao sono la classe con Costruttore Default"<< endl ;
        }

};

class Oggetto_con_costruttore_parametrizzato{
    public:

      int par1;
      float par2;

      Oggetto_con_costruttore_parametrizzato(int param1, float param2){
        par1 = param1;
        par2 = param2;
      }

      void stampa_parametri(){
        cout << "Classe con costruttore parametrizzato: " <<  "Par1: " << par1 << " Par2: " << par2; 
      }
};

int main (int *argc, char *argv[]){
    
    Oggetto_con_Costruttore_default objconstruct_def;
    Oggetto_con_costruttore_parametrizzato  objconstruct_par = Oggetto_con_costruttore_parametrizzato(123, 3.14159);
    objconstruct_par.stampa_parametri();
    return 0;
}
