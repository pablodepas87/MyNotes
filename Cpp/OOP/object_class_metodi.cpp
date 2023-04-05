#include <iostream>
#include <string>

using namespace std;

class Oggetto_con_Metodo {
 public:
  int parametro_1;
  string parametro_2;

  void inserisci_parametri ( int par1, string par2){
    parametro_1 = par1;
    parametro_2 = par2;
  }

  void stampa_parametri(){

    cout << "parametro 1: " << parametro_1 << " parametro 2:" << parametro_2 << endl; 
  }

};

int main ( int * argc , char *argv[]){

 Oggetto_con_Metodo obj;

 obj.inserisci_parametri(10,"Fabio Rapicano");
 obj.stampa_parametri();

 return 0;
}