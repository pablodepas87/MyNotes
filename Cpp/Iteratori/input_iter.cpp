#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(int *argc, char *argv[]){

    vector<int> v{1,2,4,8,9};
    vector<int>::iterator itr, itr1, temp;
   
    itr = v.begin();
    itr1 = v.begin()+1;

    if( itr == itr1){
        cout<< "Entrambi gli iteratori sono uguali" << endl;
    } else {
        cout << "Gli iteratori non sono uguali" << endl;
    }

    itr = v.begin();
    cout << *itr << endl;
    
    // swap iterator
    temp = itr;
    itr = itr1;
    itr1 = temp; 
    
    cout << "iterator dopo lo swap:" << endl; 
    cout << *itr << endl;
    cout << *itr1 << endl;

    return 0;
}