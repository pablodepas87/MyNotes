#include <iostream>
#include <set>
using namespace std;


int main ( int *argc, char *argv[]){

   set<char> m = {'a','b','c','d'};
   
   auto it = m.lower_bound('c');  // lower bound restituisce un iteratore

   cout << "Lower bound is(=) " << *it << endl ;  

   set<int> mySet;

   for(int i = 1 ; i<10; i++) {
        mySet.insert(i*10);
   }

   auto itLowBound = mySet.lower_bound(30);
   auto itHighBound = mySet.lower_bound(60);

   mySet.erase(itLowBound,itHighBound);

   for (set<int>::iterator itr = mySet.begin(); itr!= mySet.end() ; itr++) {
    cout << ' ' << *itr;  
    cout << '\n'; 
   }

    auto itr1 = mySet.lower_bound(110);  
    cout << "The lower bound of key 100 is ";  
    cout << (*itr1); 


   return 0;
}