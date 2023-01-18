#include <iostream>
using namespace std;

void func();
void call_by_value_fun(int data){
    data = 5;    // valore nn cambia all'esterno
}

void call_by_ref_func(int *x , int *y) {
  int swap = *x;
  *x = *y;
  *y = swap;
}

void call_by_ref_func_mode2(int &val) {
    val++;
}

int main( int *argc, char *argv[]){
   
    int dato = 3;
    int x= 500, y= 300;

    func();
    func();
    func();

    call_by_value_fun(dato);
    cout << "valore del dato:" << dato << endl;

    call_by_ref_func(&x,&y);

    cout<< "Value of x is: "<< x <<endl;  
    cout<< "Value of y is: "<< y <<endl;  

    call_by_ref_func_mode2(x); 

     cout<< "Value of x is after ref mode2: "<< x <<endl; 
      
    return 0;
}

void func() {

    static int i=0;
    int j=0;
    i++;
    j++;
    cout << "i=" << i << " j=" << j ;

}
