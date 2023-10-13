#include <iostream>
#include <vector>
#include <iterator>
int main(){
    std::vector<int> myVector;
    std::back_insert_iterator<std::vector<int>> bck_ins(myVector);

    for (int i=0 ; i<5; i++){
        *bck_ins = i;
    }
    return -1;
}
