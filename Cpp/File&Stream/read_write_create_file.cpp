#include <iostream>
#include <fstream>
using namespace std;

int main(int *argc, char*argv[]) {
  
    string srg;

    ofstream miofile("testout.txt");

    if (miofile.is_open()) {
        miofile.clear();
        miofile << "Welcome to the jungle \n";
        miofile << "C++ Tutorial\n";
        miofile.close();
    } else {
        cout << "File opening is fail.";
    }
 
    ifstream testmiofile("testout.txt");
    string myFilecurrentline;

    if(testmiofile.is_open()){
        while (getline(testmiofile,myFilecurrentline))
        {
            cout << myFilecurrentline << endl; 
        }
        
    } else {
        cout << "File opening is fail.";
    }

    return 0;
}
