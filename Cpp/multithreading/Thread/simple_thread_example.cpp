#include <iostream>
#include <thread>


void randomNumbers() {

    for (int i=0; i< 5; i++) {
        std::cout << rand()<< std::endl;
    }
}

void printValue(int value) {
    std::cout << "Il valore passato al thread vale:" << value << std::endl;
}

class EsempioThread {

   public: 

   void constructor() {
     std::cout << "ciao sono la classe EsempioThread ed ho fatto l'override dell'operatore ()" << std::endl;
   }
   void StampaNomeCognome(std::string nome, std::string cognome) {
     std::cout << "Il mio nome " << nome << " il mio cognome  " << cognome << std::endl;
   } 

};

int main(int *argc , char *argv[]) {
    
    std::cout << "Esempio semplice di thread" << std::endl;
    EsempioThread esThread;
    
    auto lambda = [] ( int valore) { 
        std::cout << "Il mio valore = " << valore << std::endl;
    };
    
    std::thread th1 {randomNumbers};   // come ogni instanza di una nuova varibile/oggetto posso usare sia {} = oppure () x inizializzare
    th1.join();                        // senza join() il thred nn riesce ad essere terminato ne parte se nn c'è altro codice; generando un'eccezione
    std::thread th2 (printValue, 10);
    th2.join();
    std::thread th3 (EsempioThread::StampaNomeCognome,esThread,"Fabio","Rapicano");
    th3.join();
    std::thread th4 {lambda , 15};
    th4.join();
    
    return 0;
}