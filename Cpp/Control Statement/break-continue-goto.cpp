#include <iostream>
using namespace std;

int main( int*argc, char *argv[]) {

    for (int i ; i<10; i++) {
        if( i == 5) {
            break;
        } else {
            cout << i <<endl;
        }
    }

    for(int i=1;i<=3;i++){        
        for(int j=1;j<=3;j++){        
            if(i==2&&j==2){        
                break;        
            }        
            cout<<i<<" "<<j<<"\n";             
        }        
    }

    for(int i=1; i<=10;i++){      
        if(i==5){      
            continue;      
        }      
        cout<<i<<"\n";      
    }        

    inelegibile:
        cout << " You are not eligibile to vote!\n" << endl;

    cout << "Enter you age:\n" ;

    int age;
    if (age < 18) {
        goto inelegibile;
    } else {
        cout << "You are eligibile to vote!"  << endl;
    }    

    return 0;
}