#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main ( int*argc, char *argv[]) {

    vector<int> myVect{1,5,8,0,9};
    vector<int>::iterator itr;
    vector<int>::reverse_iterator ritr;

    for(itr = myVect.begin(); itr != myVect.end(); itr++) {
        cout << *itr ;
    }

    cout << endl;

    for(ritr = myVect.rbegin(); ritr!= myVect.rend(); ritr++) {
        cout << *ritr ;
    }

    return 0;
}