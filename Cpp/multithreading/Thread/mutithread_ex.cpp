#include <iostream>
#include <thread>
#include <chrono>

void estrai(int quanti, std::string chi) {
    auto inizio = std::chrono::high_resolution_clock::now();
    for ( int i=0; i<quanti; i++) {
        rand();
    }
    auto fine = std::chrono::high_resolution_clock::now();
    // calcoliamo la differenza in ms
    auto int_ms =std::chrono::duration_cast<std::chrono::milliseconds>(fine-inizio).count(); 
    std::cout << "Durata algoritmo " << chi << ": "<< int_ms << " ms" << std::endl;
}

int main( int *argc, char *argv[]) {

     const int QUANTI = 400000000;

    /*-----------THREAD--------------------*/
   
    std::thread th1 {estrai,QUANTI,"thread 1"};
    std::thread th2 {estrai,QUANTI,"thread 2"};
    std::thread th3 {estrai,QUANTI,"thread 3"};
    std::thread th4 {estrai,QUANTI,"thread 4"};
   
    /*-------------MAIN-------------------*/
   
    estrai (QUANTI,"main");
    th1.join();
    th2.join();
    th3.join();
    th4.join();
    
    return 0;
}