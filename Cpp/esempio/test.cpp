#include <iostream>
using namespace std;

int rest( int a, int b) {
    int resto = 0;
    return resto = a%b;
}

void add(int *val) {
   
    *val = *val+1;
}

int main ( int* argc, char *argv[]) {

    int x = 5 , y = 6;
    cout << "val:" << rest(x,y) << endl;

    add(&x);

    cout << "x:" << x << endl;     

    return 0;
}