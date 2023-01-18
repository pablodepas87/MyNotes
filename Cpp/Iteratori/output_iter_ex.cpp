#include <iostream>    // 
#include <iterator>    // std:front_inserter
#include <vector>      // std::list
#include <algorithm>   // std::copy

using namespace std;

int main (int *argc, char *argv[]){
    
    vector<int> vect1, vect2;

    for (int i=0; i<=7;i++) {
        vect1.push_back(i);
        vect2.push_back(i+3);
    }

    vector<int>::iterator itr;
    itr= vect1.begin();
    advance(itr,3);
    copy(vect2.begin(),vect2.end(),inserter(vect1,itr)); 
    cout << "Elements of vect1 are";
    for(itr=vect1.begin(); itr!= vect1.end();++itr)
    cout << ' ' << *itr;
    cout << '\n'; 

    for (int i=1; i<=5;i++){
        vect1.push_back(i*10);
    }
    ostream_iterator<int> out(cout,",");
    copy(vect1.begin(),vect1.end(),out);

    ostream_iterator<int> out(cout,",");
    *out = 5;
    out++;
    *out =10;
    out++;
    *out = 15;

    return 0;
}

