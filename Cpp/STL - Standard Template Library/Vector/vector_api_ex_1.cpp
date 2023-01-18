#include <iostream>
#include <vector>
using namespace std;

int main (int *argc , char *argv[]) {

    // push_back perr inizializzare
    int i = 0;

    vector<int> myVect;
    vector<int>::iterator myVect_iterator;
    vector<int>::reverse_iterator myVect_rev_iterator;
    for ( i=0 ; i<10; i++){
        myVect.push_back(rand());
    }

    // at per leggere un valore ad una determinata posizone
    i = 0 ;
    while (i < 10) {
        cout << myVect.at(i) << " ";
        i++;
    }
    

    cout << endl << "deleting last element...";

    myVect.pop_back();

    while (i < myVect.size()) {
        cout << myVect.at(i) << " ";
        i++;
    }

    // resize 

    myVect.resize(5) ; // do al vettore la size 5 essendo di 10 elimino gli ultimi 5 elementi;
    
    cout << endl << "vector after resizing...";

    // utillo l'iteratre e begin() end() metodi 
    for ( myVect_iterator = myVect.begin() ; myVect_iterator != myVect.end(); myVect_iterator++) {
        cout << *myVect_iterator << " ";
    }

    myVect.resize(12,rand()); // faccio il resize e assegno i valori al vettore
    
    cout << endl << "vector after resizing...";

    for( auto vectElement : myVect){
        cout << vectElement << " "; 
    }

    if(!myVect.empty()) {
        vector<int>::iterator it = myVect.emplace(myVect.begin()+3,11);  // emplace restistuisce un iteratore
        myVect.emplace(it+5,23);
        cout << endl << "vector after adding two element with emplace...";
        for( auto vectElement : myVect){
            cout << vectElement << " "; 
        }
        cout << endl << "vector after adding element with emplace back...";
        myVect.emplace_back(589);  // This function is used to insert new element at the end of the vector and increases the size of the vector container.

        for( auto vectElement : myVect){
            cout << vectElement << " "; 
        }
    }

    int *k = myVect.data();
    cout << endl;  
    
    for( i=0 ; i < myVect.size() ; i++ ) {
        cout << *k++ << " ";
    }
    cout << endl << "print vector reversed..." << endl;
    for ( myVect_rev_iterator = myVect.rbegin() ; myVect_rev_iterator != myVect.rend(); myVect_rev_iterator++) {
        cout << *myVect_rev_iterator << " ";
    }

    myVect.erase(myVect.begin()+4);
    myVect.erase(myVect.begin()+2,myVect.end()-3);

    cout << endl << "print vector after erased element..." << endl;

    for( auto vectElement : myVect){
            cout << vectElement << " "; 
    }

    myVect.clear();
   
    cout << endl << "vector cleared bye bye..." << endl;

    return 0;
}