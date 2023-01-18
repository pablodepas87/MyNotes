/*
    C++ Structs

    In C++, le classi e le strutture sono blueprint utilizzati per creare l'istanza di una classe. 
    Le strutture vengono utilizzate per oggetti leggeri come rettangolo, colore, punto, ecc. 

    A differenza della classe, le strutture in C++ sono di tipo valore e non di tipo di riferimento. 
    È utile se si dispone di dati che non devono essere modificati dopo la creazione di struct.

    La struttura C++ è una raccolta di diversi tipi di dati. È simile alla classe che contiene diversi tipi di dati.

    The Syntax Of Structure

    struct structure_name  
    {  
     // member declarations.  
    }  

    struct Student  
    {  
        char name[20];  
        int id;  
        int age;  
    }
    
    struct {
        int altezza;
        int base;
    }Rectangle;
    
    N.B.:Questa sopra è una dichiarazione errata

    Quando la struttura viene dichiarata, non viene allocata alcuna memoria. 
    Quando viene creata la variabile di una struttura, viene allocata la memoria.  

    Come creare l'istanza di Structure?

    Structure variable can be defined as:

    Student s;

    Qui, s è una variabile di struttura di tipo Student. Quando viene creata la variabile struttura, la memoria verrà allocata. 
    La struttura dello studente contiene una variabile char e due variabili integer

    How to access the variable of Structure:

    È possibile accedere alla variabile della struttura semplicemente 
    utilizzando l'istanza della struttura seguita dall'operatore punto (.) e quindi dal campo della struttura.

    s.id = 4;  

    Structure v/s Class

        Structure:
            Se l'identificatore di accesso non viene dichiarato esplicitamente, per impostazione predefinita lo specificatore di accesso sarà pubblico.

            Syntax of Structure:

            struct structure_name
            {
                // body of the structure.
            }

            L'istanza della struttura è nota come "Variabile struttura".

        Class

            Se l'identificatore di accesso non viene dichiarato esplicitamente, per impostazione predefinita lo specificatore di accesso sarà privato.

            Syntax of Class:

            class class_name
            {
                // body of the class.
            }  

            L'istanza della classe è nota come "Oggetto della classe".  
*/

#include <iostream>
using namespace std;

struct Rectangle {
    int altezza;
    int base;
};

struct Struct_width_constr_and_methods {

    int par1;
    int par2;

    Struct_width_constr_and_methods(int par_1, int par_2) {
        par1= par_1;
        par2= par_2;
    }

    void method() {
        cout << "Mul parameters:" << par1*par2 << endl;
    }

};

int main (int *argc ,char *argv[]) {
    
    Rectangle rectangle;
    rectangle.altezza = 10;
    rectangle.base = 15;

    cout << "L'altezza del triangolo è:" << rectangle.altezza * rectangle.base << endl;
    
    Struct_width_constr_and_methods str_constr_methods = Struct_width_constr_and_methods(10,23);

    str_constr_methods.method();
    str_constr_methods.par1 = 7;
    str_constr_methods.method();
    
    return 0;

}