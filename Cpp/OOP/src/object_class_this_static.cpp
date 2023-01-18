/*
    this keyword:

    Nella programmazione C++, this è una parola chiave che fa riferimento all'istanza corrente della classe. 
    Ci possono essere 3 utilizzi principali di this in C ++.

    --> può essere utilizzato per passare l'oggetto corrente come parametro a un altro metodo.
    --> Può essere utilizzato per fare riferimento alla variabile dell'istanza di classe corrente.
    --> Può essere utilizzato per dichiarare gli indicizzatori.
    
    C++ static

    In C++, static è una parola chiave o un modificatore che appartiene al tipo non all'istanza. 
    Pertanto, l'istanza non è necessaria per accedere ai membri statici. In C++, static può essere field, method, constructor, class, properties, operator ed event.
    
    Advantage of C++ static keyword

    Efficienza in termini di memoria: ora non è necessario creare un'istanza per accedere ai membri statici, quindi si risparmia memoria. 
    Inoltre, appartiene al tipo, quindi non otterrà memoria ogni volta che viene creata l'istanza.

    C++ Static Field

    Un campo dichiarato come statico è chiamato campo statico. 
    A differenza del campo di istanza che ottiene memoria ogni volta che si crea un oggetto, c'è solo una copia del campo statico creato nella memoria. 
    È condiviso con tutti gli oggetti.
    
*/

#include <iostream>
#include <string>
using namespace std;

class Oggetto {
    public:

        int id;
        string name;
        float salary;
        static int obj_count;

        Oggetto(int id, string name, float salary){
            this->id = id;
            this->name = name;
            this->salary = salary;
            
            obj_count++;
        }    
    
        void stampa_valori(){
            cout << "id: " << id << " name: " << name << " salary: " << salary << endl ;
        }
};

int Oggetto::obj_count = 0;   // assegno un valore al campo statico (nn può essere inizializzato nella dichiarazione) che sarà quello per tutte le volte che creo un nuovo oggetto, risparmiando memoria

int main ( int *argc, char *argv[]){

    Oggetto obj = Oggetto(1000, "Fabio Rapicano", 38000.00) ;
    obj.stampa_valori();

    Oggetto obj1(1001,"Aniello Rapicano",40000.00);
    obj1.stampa_valori();

    cout<< "Totale persone: " << Oggetto::obj_count;

    return 0;
}