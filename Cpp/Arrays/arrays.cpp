#include <iostream>
using namespace std;

void printArray(int arr[5]);  

int main( int *argc, char *argv[]) {

    int arr[5] = {10,20,30,40,50};

    for( int i=0; i<5;i++){
        cout << arr[i] << endl;
    }

    for (int i:arr){
        cout << i << endl;
    }

    printArray(arr);

// array multidimensionale 

    int test[3][3];
    test[0][0]=5;  //initialization   
    test[0][1]=10;   
    test[1][1]=15;  
    test[1][2]=20;  
    test[2][0]=30;  
    test[2][2]=10;  
    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; //new line at each row   
    }  

    return 0;
}


void printArray(int arr[5]){

    cout << "Printing array elements:"<< endl;  
    for (int i = 0; i < 5; i++)  
    {  
                   cout<<arr[i]<<"\n";    
    } 
}
