/*
   C++ Polymorphism
   Il termine "polimorfismo" è la combinazione di "poli" + "morphs" che significa molte forme. È una parola greca. 
   Nella programmazione orientata agli oggetti, utilizziamo 3 concetti principali: ereditarietà, incapsulamento e polimorfismo.

   Esempio di polimorfismo nella vita reale

   Una signora si comporta come un'insegnante in una classe, madre o figlia in una casa e cliente in un mercato. 
   Qui, una singola persona si comporta in modo diverso a seconda delle situazioni.

   There are two types of polymorphism in C++:

   Compile time polymorphism
   run-time polymorpishm

   Compile time polymorphism: Le funzioni di overload vengono richiamate facendo corrispondere il tipo e il numero di argomenti. 
        Queste informazioni sono disponibili in fase di compilazione e, pertanto, il compilatore seleziona la funzione appropriata in fase di compilazione. 
        Si ottiene mediante sovraccarico di funzioni e sovraccarico dell'operatore che è anche noto come associazione statica o associazione precoce.

   Run time polymorphism: Il polimorfismo in fase di esecuzione si ottiene quando il metodo dell'oggetto viene richiamato in fase di esecuzione anziché in fase di compilazione. 
        Si ottiene mediante l'override del metodo, noto anche come binding dinamico o binding tardivo. 

   features:
    La funzione da richiamare è nota in fase di esecuzione.
    È anche noto come overriding, binding dinamico e binding tardivo.
    L'override è un polimorfismo in fase di esecuzione in cui più di un metodo ha lo stesso nome, numero di parametri e tipo di parametri.
    Si ottiene da funzioni virtuali e puntatori.
    Fornisce un'esecuzione lenta come è noto in fase di esecuzione.
    È più flessibile in quanto tutte le cose vengono eseguite in fase di esecuzione.

*/

#include <iostream>
#include <string>
using namespace std;

class Animal {
     public:
     void eat() {
          cout << "eating...";
     }
    
};

class Dog: Animal {
     public:
     void eat(){
          cout << "eating bread...";
     }
};

int main ( int *argc, char* argv[]){

  Dog d;
  d.eat();
  return 0;

}