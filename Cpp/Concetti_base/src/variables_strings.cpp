/*
I tipi fondamentali rappresentano i tipi più elementari gestiti dai pc e in cui il codice può essere eseguito. 
Ma uno dei principali punti di forza del linguaggio C ++ è il suo ricco set di tipi composti, 
di cui i tipi fondamentali sono semplici elementi costitutivi.

Un esempio di tipo composto è la classe string. Le variabili di questo tipo sono in grado di memorizzare sequenze di caratteri, 
ad esempio parole o frasi.

Una prima differenza con i tipi di dati fondamentali è che per dichiarare e utilizzare oggetti (variabili) di questo tipo, 
il programma deve includere l'intestazione in cui il tipo è definito all'interno della libreria standard (<string>):

Le stringhe possono essere inizializzate con qualsiasi valore letterale stringa valido, proprio come le variabili di tipo numerico possono essere inizializzate su qualsiasi valore letterale numerico valido.
Come per i tipi fondamentali, tutti i formati di inizializzazione sono validi con le stringhe:

Le stringhe possono anche eseguire tutte le altre operazioni di base che i tipi di dati fondamentali riescono a fare, 
come essere dichiarate senza un valore iniziale e modificare il valore durante l'esecuzione

Note: inserting the endl manipulator ends the line (printing a newline character and flushing the stream).

string class reference: https://cplusplus.com/reference/string/string/

*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
   
string mystring;
mystring = "This is a string";
   
string stringa_1("Ciao sono stringa 1 inizializzata con modo construttore");
string stringa_2{"Ciao sono stringa 2 inizialiazzate con modo uniforme"};
string stringa3;

cout << mystring << '\n' << stringa_1 << '\n' << stringa_2;


stringa3 = "This is the initial string content";
cout << stringa3 << endl;
stringa3 = "This is a different string content";
cout << stringa3 << endl;
    
return 0;

}