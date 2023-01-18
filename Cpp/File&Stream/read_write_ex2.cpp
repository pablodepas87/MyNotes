#include <iostream>
#include <fstream>
using namespace std;

int main () {

    char input[75];
    ofstream os;

    os.open("testout.txt");
    os.clear();  // nel caso lo abbia gia scritto con un altro esercizio
    
    cout << "Writing to a text file:" << endl;
    cout << "Please enter yout name:" ;
    cin.getline(input,100);

    os << input << endl;
    cout << "Please enter your age:" ;
    cin >> input;
    cin.ignore();
    os << input << endl;
    os.close();

    ifstream is;
    string line;

    is.open("testout.txt");
    cout << "Reading from a text file:" << endl;
    
    while (getline(is,line)) {
        cout << line << endl;            
    }
    
    is.close();

    return 0;
}

