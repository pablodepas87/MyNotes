#include <iostream>
#include <string>
using namespace std;

int add(int a, int b){

    return a+b;
}

void printname(string name)  
{  
    cout << "Name is :" <<name<< endl;  
} 

void func1()  
{  
    cout<<"func1 is called";  
} 

void func2(void(*funcPtr)()){

     funcPtr();  // puntatore di funzione passato come parametro di funzione       
}

int main(int *argc , char *argv[]){

    int (*funcPtr)(int,int);      // dichiarazione puntatore di funzione

    funcPtr = add;                // assegno la funzione al puntatore di funzione in modo che lo possa utilizzare  
    cout << "il risultato di 3+7=" << funcPtr(3,7) << endl;

    // example 2
    string s;
    void (*ptr)(string);
    cout << "Enter the name of the person: " << endl;  
    cin>>s;  
    ptr= printname;
    ptr(s);

    func2(func1);  // passo una funzione ad un'altra funzione
  
    return 0;
}
