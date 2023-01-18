#include <iostream>
#include <set>
using namespace std;

void printSet(set<int> &setToPrint) {

    cout << endl;

    for (auto setElement : setToPrint) {
        cout << setElement << " ";
    } 

    cout << endl;
}

int main (int *argc, char *argv[]) {
    
    set<int> mySet {1 ,2 ,1, 1 , 1,  1  };  // la set avra size 2 xchè i duplicati non vengono inseriti
    set<int> mySecondSet = {rand()%15,rand()%20,rand()%10};
    set<int>::iterator mySet_itr_1, mySet_itr_2; 
   
    int myints[] = {10,20,30,40,50,60};  
    set<int> first (myints,myints+3);  
    set<char> mySetChar = {'a','c','f'};

    printSet(mySet);

    cout << "Set size:" << mySet.size() << endl;

    if ( !mySet.empty()) {
    
        mySet.insert(rand()%100);
        mySet.insert(rand()%100);
        mySet.insert(rand()%100);
        cout << "------------inserted 3 elements with insert()---------" ;
        printSet(mySet);

        mySet.emplace(15);
        mySet.emplace(16);

        cout << "------------inserted 15 e 16 elements with emplace()---------" ;
        printSet(mySet);

        mySet.emplace_hint(mySet.begin(),8);
        mySet.emplace_hint(mySet.end(),24);

        cout << "------------inserted 8 at begin and 24 at the end of set with emplace_hint()---------" ;
        printSet(mySet);    

    }

    mySet.erase(15);
    cout << "------------delated 15 with erase(val)---------" ;
    printSet(mySet);    

    mySet.erase(mySet.begin());
    cout << "------------delated first element with erase(itr)---------" ;
    printSet(mySet);   
    
    mySet_itr_1 = next(mySet.begin(),2);
    mySet_itr_2 = prev(mySet.end(),1);

    mySet.erase(mySet_itr_1,mySet_itr_2);
    cout << "------------delated element in a range with erase(itr_first,itr_last)---------" ;
    printSet(mySet);

    cout << "------------second set---------" ;
    printSet(mySecondSet);

    cout << "------------first set swapped---------" << endl;
    for(mySet_itr_1 = mySet.begin(); mySet_itr_1!= mySet.end(); mySet_itr_1++) {
        cout << *mySet_itr_1 << " " ;
    }
    
    cout << endl;
    cout << "------------finding number 7 with find()---------" << endl;
    if(mySet.find(7) == mySet.end()) {
        cout << "There isn't number 7 into the set" << endl;
    } else {
        cout << "number 7 is into the set" << endl;
    }

    cout << "------------finding number 7 with find()---------" << endl;

    if ( !mySet.count(7)) {
        cout << "There isn't number 7 into the set" << endl;
    } else {
        cout << "number 7 is into the set" << endl;
    }

    printSet(mySet);

    for ( char k= 'a'; k < 'h'; k++) {
        if ( !mySetChar.count(k)) {
            cout << k << " isn't into set" << endl;
        } else {
             cout << k << " is into set" << endl; 
        }
    }

    mySet.clear();
    cout << endl << "------------Set cleared---------" ;



    return 0;
}