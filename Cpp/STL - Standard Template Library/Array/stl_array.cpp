#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void use_get(array<int,4> arr) {

    std::cout << get<0>(arr) << " " << get<1>(arr) << " " << get<2>(arr) << " " << get<3>(arr);
}

void fill_example () {

    constexpr size_t xy =4;
    using Cell = array<unsigned char,8>;

    array<Cell , xy*xy> board;

    board.fill({ { 0XE2, 0x96, 0x84, 0xE2,0x96, 0x80, 0, 0}});
    int i= 0;
    for (Cell c : board){
         std::cout << c.data() << ((++i) % xy ? "": "\n");
    }
}

int main(int *argc, char *argv[]){

    cout << "STL-ARRAY EXAMPLE " << endl;
    
    array<int,4> mioArray{rand(), rand(), rand() ,rand()};
    array<int,4>::iterator arrIterator;

    // with at() method we can change value at position n
    
    try{
         mioArray.at(2) = 32;
    } catch ( std::out_of_range const &exc) {
            std::cout << exc.what() << "endl";
    }
    
    std::cout << endl << "l'array e composta da " 
            << mioArray.size() << " elementi e questi sono: " << endl;

    if ( !mioArray.empty()) {
        for (int elem : mioArray){
            std::cout << elem << " ";    
        }

        std::cout << "front() method to get first element array -> the first value is " << mioArray.front() << endl;
        std::cout << endl << "back() method to get the last element array -> last value is  " << mioArray.back() << endl;

        arrIterator = &mioArray.at(3);    
        
        std::cout << "The value " << mioArray.at(3) << " si trova alla posizione " << distance(mioArray.begin(),arrIterator)+1;
    
        std::cout << "print value with std::get method" << endl;
        use_get(mioArray);

        std::cout << "sort array with std::sort : " << endl;
        std::sort(mioArray.begin(),mioArray.end());

        for (arrIterator = mioArray.begin() ; arrIterator != mioArray.end(); arrIterator++) {
            std::cout << arrIterator;
        }
        std::cout << endl;
        fill_example();
    } 
       
    return -1;
}