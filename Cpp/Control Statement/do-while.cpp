#include <iostream>
using namespace std;

int main (int *argc, char *argv[]){
    
    int i = 1 , j=1;

    do {

        cout << "i vale:" << i << endl;
        i++;

    }while( i<4);

    // nested do while loop
    cout << "\n \n";
    i=1;
    do{
        cout << "i vale:" << i << endl;
        j=1;
        do{
            cout << "j vale:" << j << endl;
        }while(j<4);

        i++;
    }while( i<5 );

    return 0;
}