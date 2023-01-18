#include <iostream>
using namespace std;

int main( int *argc, char *argv[]){

    int i= 0 , j =0;

    while(i<3) {
        cout << " i vale:" << i+1 << endl;
        i++;
    } 

    // NESTED WHILE LOOP
    
    i=0;
    cout << "\n\n nested loop \n\n" << endl;

    while(i<3) {
        cout << " i vale:" << i+1 << endl;
        j=0;
        while ( j < 3) {
            cout << "   j vale " << (j+1) << endl;
            j++;
        }    

        i++;
    }


    return 0;

}