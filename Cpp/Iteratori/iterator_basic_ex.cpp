#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main( int *argc , char *argv[]){

    vector<int> myVect{1,2,3};

    vector<int>::iterator itr;  // dichiaro un iteratore per il mio vettore di interi utilizzando ::iterator

    // a questo punto tramite un for itero sul mio vettore

    for (itr = myVect.begin(); itr != myVect.end(); itr++) {
         cout << *itr << " " ;
    }
    
    // add element to vector at the end of it
    myVect.push_back(10);

    for(itr = myVect.begin(); itr != myVect.end() ; itr++) {
        cout << *itr ;
    }

   // add element to position n 
    myVect.insert(myVect.begin()+1,12);

    for(itr = myVect.begin(); itr!= myVect.end(); itr++) {
        cout << *itr ;
    }
}