#include <iostream>
#include <cstdlib>

using namespace std;

int main (int*argc , char *argv[]){

   int *ptr;
   ptr = (int*) malloc(5*sizeof(int));

   cout << "Enter 5 integer" << endl;
   
    for (int i=0; i<5; i++)  
    {  
    // *(ptr+i) can be replaced by ptr[i]  
        cin >>ptr[i];  
    }  
    cout << endl << "User entered value"<< endl;  

    for (int i=0; i<5; i++)  
    {  
        cout <<*(ptr+i)  << " ";  
    }  
    free(ptr);

    
   return 0;

}