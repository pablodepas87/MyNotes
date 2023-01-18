#include <iostream>

using namespace std;

int main( int* argc, char *argv[]){
    
    //ciclo for esempio

    for( int i = 0 ; i< 10 ; i++) {

        cout << "sn nel ciclo for principale per la " << i <<" volta" << endl;
    }

    cout << "\n \n esempio ciclo for nidificato \n \n " << endl;
    // ciclo for nidificato 

    for ( int i=0; i< 5; i++) {
       cout << "sn nel ciclo for per la " << i+1 <<" volta" << endl;
       for(int k = 0; k < 2; k++) {
        cout << "   sn nel ciclo for interno per la " << i+(k+1) <<" volta" << endl;
       } 
    }
    
    return 0;
}