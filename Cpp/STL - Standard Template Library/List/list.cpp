#include <iostream>
#include <list>

using namespace std;

int randNumb(int maxValue){

    return rand()%maxValue;
}

void printList( list<int> &listToPrint){
   
    cout << endl;
    for (auto listElement : listToPrint) {

        cout << listElement << " ";
    }
    cout<< endl; 
}

int main ( int *argc , char *argv[]){

    list<int> listBase { randNumb(10), randNumb(50), randNumb(5) , randNumb(35)};
    
    cout << "----------------My list values-----------" << endl;

    printList(listBase);

    cout << "----------push_back() & push_front()-----------------------" ;

    listBase.push_back(randNumb(17));
    listBase.push_front(randNumb(9));

    printList(listBase);

    cout << "----------pop_back() & pop_front()-----------------------" ;

    listBase.push_back(randNumb(80));
    listBase.push_front(randNumb(55));

    printList(listBase);

    if (!listBase.empty()){

        listBase.insert(listBase.begin(), 1);    // no è possibile fare listBase.begin()+n xcè nella lista nn è permesso
               
        list<int> secondList = {1,2,3,4,5};
        
        cout << "----------secondList-----------------------" ;
       
        printList(secondList);
        secondList.swap(listBase);
        cout << "----------secondList after swap-----------------------" ;
        printList(secondList);
        
        cout << "----------secondList reversed-----------------------";
        secondList.reverse();
        printList(secondList);

        cout << "----------assign()-----------------------"<< endl;
        cout << "   -----LIST base before assign---" << endl;
        printList(listBase);
        cout << "-----LIST base after assign---" << endl;
        listBase.assign(secondList.begin(),secondList.end());
        printList(secondList);

       cout << "----------sort()-----------------------";

       secondList.sort();
       printList(secondList);

        cout << "----------emplace 56 at pos 2-----------------------" ;
    
        secondList.emplace(secondList.begin(),56);
        printList(secondList);
      
        cout << "----------emplace_back() & emplace_front() val 6 -----------------------" ;

        secondList.emplace_back(6);
        secondList.emplace_front(6);

        printList(secondList);

        cout << "----------splice()-----------------------" ;

        // La funzione di giunzione dell'elenco C ++ trasferisce gli elementi dalla lista y in un contenitore di elenchi 
        //in una posizione specificata e questo porta alla modifica delle dimensioni di entrambi gli elenchi.
        list <int>::iterator itr = secondList.begin();
        secondList.splice(itr,listBase);
        printList(secondList);
       
       cout << "----------merge()-----------------------" ;
       list<int> thirdList = {0,0,0,0};
       secondList.merge(thirdList);
       printList(secondList);

       cout << "----------unique()-----------------------" ;
       secondList.unique();
       printList(secondList);
       
    }



    return 0;
}