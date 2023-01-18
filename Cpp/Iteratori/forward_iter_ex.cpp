#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

template <class ForwardIterator>
void display(ForwardIterator first, ForwardIterator second){
    while (first!=second)
    {
        cout << *first << " ";
        first++;
    }
    
}

int main( int *argc, char *argv[]){

    vector<int> a;

    for(int i=0; i<10;i++){
        a.push_back(i);
    }

    display(a.begin(),a.end());

    return 0;
}

