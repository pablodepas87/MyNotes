#include <iostream>
using namespace std;

int main( int *argc , char* argv[]) {
   int size;
   int *myarray = new int[size];

   cout << "Inserire dimensione array" << endl;
   cin >> size;
   cout << "\n Inserire ora i valori dell'array" << endl;
   
   for (int i=0 ; i<size ; i++) {
     
        cin >> myarray[i] ;
   }

   cout<<"\nThe elements that you have entered are :";  
    for(int i=0;i<size;i++)    // for loop  
    {  
    cout<< myarray[i]<<" ";  
    }  

   delete myarray; // libero spazio in memoria

   return 0 ;

}