/*
  In C++, l'aggregazione è un processo in cui una classe definisce un'altra classe come qualsiasi riferimento di entità. 
  È un altro modo per riutilizzare la classe. È una forma di associazione che rappresenta la relazione HAS-A.

  In C++, la relazione Has-A è nota anche come composizione. Viene anche utilizzato per la riusabilità del codice in C++. 
  In C++, il significato della relazione Has-A è che un'istanza di una classe ha un riferimento a un'istanza di un'altra classe o a un'istanza della stessa classe. 
  Ad esempio, un autobus ha un motore, una mucca ha una coda e così via.

  quindi se la classe X has a classe y dichiarata all'interno è quel tipo di relazione   
*/
#include <iostream>
#include <string>
using namespace std;

class Address{
    public:
    string addressLine, city , state ;
    Address( string addressLine,string city, string state) {
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
};

class Persona {

   public:
    string nome, cognome;
    Persona( string nome, string cognome, Address *indirizzo) {
        this->nome = nome;
        this->cognome = cognome;
        this->adr = indirizzo;
    }  
    
    void stampa(){
       cout << nome << " " << cognome  << " " << adr->addressLine  << " " << adr->city << " " << adr->state << endl;
    }

    private:
    
    Address *adr;  // Persona has-a relationship with Address
};

int main( int *argc , char *argv[]) {

    Address adr1 = Address("via de amicis 42/D","Novi di Modena","Modena");
    Persona persona = Persona("Fabio","Rapicano",&adr1);

    persona.stampa(); 

    return 0;
}