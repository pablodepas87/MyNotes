/*
    C++ Destructor

    Un distruttore lavora in modo opposto al costruttore; distrugge gli oggetti delle classi. 
    Può essere definito solo una volta in una classe. Come i costruttori, viene richiamato automaticamente.

    Un distruttore è definito come costruttore. Deve avere lo stesso nome della classe. Ma è preceduto da un segno di tilde (~).

    Il distruttore C++ non può avere parametri. Inoltre, i modificatori non possono essere applicati ai distruttori.

*/

#include <iostream>
using namespace std;

class Oggetto_con_distruttore {
    public:
     Oggetto_con_distruttore() {

        cout << "Oggetto invocato";

    }

    ~Oggetto_con_distruttore(){         // distruttore; 
      cout << "Distruttore invocato";
    }   
};
     
int main (int *argc, char *argv[]) {

    Oggetto_con_distruttore obj_distructor;
    return 0;
}