#include <iostream>
#include <set>
using namespace std;

int main (int *argc, char *argv[]) {

    set<int> mySet;
    set<int>::value_compare valComp= mySet.value_comp();

    cout << "Compare 2 to 5 (1 is true and 0 is false): "<< valComp(2, 5) << endl;  
    cout << "Compare 8 to 5 (1 is true and 0 is false): "<< valComp(8, 5) << endl;  

    /*In the above example, comp(2, 5) returns true because 2 is less than 5. 
    And comp(8, 5) returns false because 8 is not less than 5.*/

    for (int i=0; i<5;i++) {
        mySet.insert(i);
    }

    cout << "myset contains:";

    int highest = *mySet.rbegin();
    set<int>::iterator itr = mySet.begin();

    do{
        cout << ' ' << *itr;
    }while(valComp(*(++itr),highest));

    set<int, less<int>> set1;
    set<int, less<int>>::value_compare valComp2 = set1.value_comp();

    bool result =valComp2(2,3);

   if( result1 == true )     
   {  
      cout << "vc1( 2,3 ) returns value of true, "  
           << "where vc1 is the function object of s1."  
           << endl;  
   }  
   else     
   {  
      cout << "vc1( 2,3 ) returns value of false, "  
           << "where vc1 is the function object of s1."  
           << endl;  
   }  
    
   set<int,greater<int>> set2;
   set<int,greater<int>>::value_compare grValueComp = set2.value_comp();

   bool result = grValueComp(2,3);
   
   if( result2 == true )     
   {  
      cout << "vc2( 2,3 ) returns value of true, "  
           << "where vc2 is the function object of s2."  
           << endl;  
   }  
   else     
   {  
      cout << "vc2( 2,3 ) returns value of false, "  
           << "where vc2 is the function object of s2."  
           << endl;  
   }  

    
   return 0;
}