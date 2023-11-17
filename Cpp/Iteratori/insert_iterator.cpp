#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <map>
int main(){
    std::vector<int> myVector;
    /**** back_insert_iterator aggiunge elementi in fondo al vettore ****/
    std::back_insert_iterator<std::vector<int>> bck_ins(myVector);

    for (int i=0 ; i<5; i++){
        *bck_ins = i;
    }


    /** front_insert_iterator inserisce all'inizio di contenitori come una lista***/

    std::list<int> mylist;
    std::front_insert_iterator<std::list<int>> front_inserter(mylist);

    *front_inserter=23;
    ++front_inserter;
    *front_inserter = 17;

    for (const int& element : mylist){
        std::cout<< " " << element;
    }

    /**** std::insert_ierator aggiunge in una posizione specifica in contenitori come una mappa **/

    std:map<std::string,int> myMap;
    std::map<std::string,int>::iterator myMapIterator = myMap.begin();

    std::inserter(myMap,myMapIterator) = std::make_pair("one",1);
    myMapIterator = myMap.begin();
    std::inserter(myMap,myMapIterator) = std::make_pair("two",2);

    for(const auto&pair , myMap){
        std::cout << pair.first << pair.second << std::endl;
    }

;

std::inserturn -1;
}
