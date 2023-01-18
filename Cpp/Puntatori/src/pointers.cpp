#include <iostream>

using namespace std;

int main ( int argc , char * argv[]) {

  int * mio_puntatore;    // adesso è vuoto e nn è collegato a nessuna variabile
  int mia_variabile = 10;

  cout << mio_puntatore << " Indirizzo puntatore ancora nn assegnato a nessuna variabile: " << endl; 
    
  // mio_puntatore = mia_variabile;   istruzione che da errore xchè assegno un valore ad un puntare a cui nn è stato assegnato un indirizzo di una variabile
   mio_puntatore = &mia_variabile;

  cout << "Indirizzo variabile mia_variabile: " << &mia_variabile << endl;
  cout << "Valore mia_variabile: " << mia_variabile << endl;
  cout << "Indirizzo mio_puntarore dopo assegnazione: " << mio_puntatore << endl;          // se voglio l'inidirizzo nn devo usare ne * ne &
  cout << "Valore della variabile che punta il puntatore: " << *mio_puntatore << endl;     // devo usare x forza l'asterisco altrimenti come sopra stamperei l'indirizzo

  // utilizzando * posso assegnare anche un valore fisso; * serve x accedere in lettura o scrittura al valore del puntatore 
  //e quindi alla variabile a cui è collegato in questo caso mia_variabile

  *mio_puntatore = 22;
  
  cout << "Valore mia_variabile dopo assegnazione valore al puntaore: " << mia_variabile << endl;

  // VOID POINTER 

  void *punt_void;
  int *punt_integer;
  int valore = 10;

  // punt_void = &valore;  in questo ho errore perchè il puntatore void nn è stato assegnato ad un puntatore di tipo integer
  
  punt_void = &valore;
  punt_integer = (int*)punt_void;
 

  cout << "Valore puntatore integer a cui è stato assegnato il valore void:" << *punt_integer << endl;

  return 0; 
}