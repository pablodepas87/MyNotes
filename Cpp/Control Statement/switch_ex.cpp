#include <iostream>
using namespace std;

int main( int *argc, char*argv[]){

    int num;
    cout << "Enter a number" << endl; 

    cin >> num;

    switch (num)
    {
    case 10: cout << " hai digitato 10" << endl;
        break;
    case 20: cout << "hai digitato 20" << endl;
        break;
    case 30: cout << "hai digitato 30" << endl;
        break;    
    default: cout << "NOT 10 , 20 or 30" << endl;
        break;
    }

    return 0;
}