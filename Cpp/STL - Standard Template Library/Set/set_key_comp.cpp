#include <iostream>
#include <set>
using namespace std;

typedef set<int> setObj;

int main(int *argc, char *argv[] ) {
   
    set<int> mySet;
    set<int>::key_compare comp = mySet.key_comp();
    int highest;

    cout << "Confronto tra chiavi del set (1 is true 0 is false):" << comp(10,5) << endl;
    cout << "Confronto tra chiavi del set (1 is true 0 is false):" << comp(2,5) << endl;    

    for (int i = 0; i < 5; i++)
    {
        mySet.insert(i);
    }
    
    cout << "myset contains" ;
    
    highest = *mySet.rbegin();

    set<int>::iterator myItr = mySet.begin();
    do {
      cout << ' ' << *myItr;
    } while (comp(*(++myItr),highest))
    
    cout << endl;

    set<int,less<int>> set1;
    set<int,less<int>>::key_compare kc= set1.key_comp();

    bool result1 = kc(2,3);
    if (result1 == true) {
         cout << "kc1( 2,3 ) returns value of true, "    
           << "where kc1 is the function object of s1."    
           << endl;   
    } else {
         cout << "kc1( 2,3 ) returns value of false "    
           << "where kc1 is the function object of s1."    
           << endl;    
    }

    
    set< int, greater<int>> set2;
    set< int, greater<int>>::key_compare kc2 = set2.key_comp();

    bool result2 = kc2(2,3);

    if(result2 == true)       
   {    
      cout << "kc2( 2,3 ) returns value of true, "    
           << "where kc2 is the function object of s2."    
           << endl;    
   }    
   else       
   {    
      cout << "kc2( 2,3 ) returns value of false, "    
           << "where kc2 is the function object of s2."    
           << endl;    
   } 
    

    setObj set;
    setObj::key_compare kc3 = set.key_comp();

     cout << "use function object kc to find less of (10, 4)..."   
        << endl 

    if (kc3(10,4) == true) {
        cout << "kc(10, 4) == true, which means 10 < 4" << endl ;  
    } else {
        cout << "kc(10, 4) == false, which means 10 > 4" << endl ; 
    }

    return 0;
}
