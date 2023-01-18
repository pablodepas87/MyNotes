#include <iostream>
#include <deque>
using namespace std;

void print_myDeque(deque<int> &my_deque) {

    cout << endl << endl;  

    for(auto myDeq_element : my_deque) {

        cout << myDeq_element << " ";
    }
    
    cout << endl << endl;
}

int main (int *argc, char *argv[]){

    deque<int> myDeque_0 {rand(),rand(),rand(),rand()};
    deque<int> myDeque;
    deque<int>::iterator myDeque_Itr;
    
    myDeque.assign(myDeque_0.begin(),myDeque_0.end());

    cout << "----------assign() initialize deque-----------------------";
    
    print_myDeque(myDeque);      

    if ( !myDeque.empty()) {

    cout << "----------push_back() & push_front()-----------------------" ;
    
    myDeque.push_back(rand());
    myDeque.push_front(rand());

    print_myDeque(myDeque); 

    cout << "----------pop_back() & pop_front()-----------------------" ;

    myDeque.pop_back();
    myDeque.pop_front();  

    print_myDeque(myDeque);

    cout << "----------emplace 56 at pos 3-----------------------" ;
    
    myDeque.emplace(myDeque.begin()+2,56);
    print_myDeque(myDeque);

    cout << "----------emplace_back() & emplace_front() val 6 -----------------------" ;

    myDeque.emplace_back(6);
    myDeque.emplace_front(6);

    print_myDeque(myDeque);

    cout << "----------erase() val 6 from pop and front-----------------------";

    myDeque.erase(myDeque.begin());
    myDeque.erase(myDeque.end());
    
    print_myDeque (myDeque);

    cout << "----------back() the last element is-----------------------";
    cout<< endl<< myDeque.back() << endl; 
    cout << "----------insert() 11 at pos 3-----------------------";
    myDeque.insert(myDeque.begin()+3, 11);
    print_myDeque (myDeque);

    }

    cout << "----------deque printed reversed rbegin() e rend()-----------------------" << endl;
    for(deque<int>::reverse_iterator myDeque_RItr = myDeque.rbegin(); myDeque_RItr != myDeque.rend(); myDeque_RItr++)   
    {  
        cout<< *myDeque_RItr;  
        cout<< " ";  
    }  

    cout << endl << "----------size() at()-----------------------" << endl;

    for(int i=0;i< myDeque.size();i++)  
        cout<< myDeque.at(i) << " ";  
    
    cout<< endl;
    cout << endl << "----------swap()----------------------";
    
    deque<int> dequeToSwap{rand()};
    dequeToSwap.swap(myDeque);

    cout<< endl << "-----deque 1";
    print_myDeque(myDeque);
    cout<< "-----deque 2";
    print_myDeque(dequeToSwap);
    myDeque.clear(); 
    dequeToSwap.clear();
    cout << "----------clear() deque cleared-----------------------";

    return 0;
}