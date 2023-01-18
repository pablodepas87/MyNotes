#include <iostream>
#include <vector>

using namespace std;

float division ( int x , int y) {

    return (x/y);
}

float division_trycatch(int x , int y){
    if( y== 0) {
        throw "Errore divisione per 0";
    }

    return (x/y);
}

int main( int * argc, char *argv[]) {

    int i = 50;
    int j= 0;

    float k = 0;

    // k= division(i,j);  // avro un'eccezione se nn metto try_catch xchè faccio una divisione per 0 crash dell'applicativo

    try {
       k = division_trycatch(i,j);
       cout << k << endl;

    } catch(const char *e) {
        cerr << e << endl;
    }
    
    vector <int> vect;

    vect.push_back(0);
    vect.push_back(1);  
    
    try {
       vect.at(2);
    } catch( exception &e) {
        cerr << "Exception has occurred!" << endl;
    }

    return 0;
}