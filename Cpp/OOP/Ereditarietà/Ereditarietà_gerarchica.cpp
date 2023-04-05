/*
    C++ Hierarchical Inheritance

    Hierarchical inheritance is defined as the process of deriving more than one class from a base class.

    Syntax of Hierarchical inheritance:

    class A  
    {  
        // body of the class A.  
    }    
    class B : public A   
    {  
        // body of class B.  
    }  
    class C : public A  
    {  
        // body of class C.  
    }   
    class D : public A  
    {  
        // body of class D.  
    }   

*/

#include <iostream>
using namespace std;

class Shape {
   
   public:
   int lato_a;
   int lato_b;
   void set_data(int n , int m) {
    lato_a = n;
    lato_b = m;
   }

};

class Rectangle : public Shape {

    public:
    int rect_area() {
        return lato_a * lato_b;
    }
};

class Triangle: public Shape {
    public:
    float triangle_area(){
        return 0.5 * lato_a * lato_b;
    }
};

int main (int *argc, char *argv[]) {

    Rectangle r;
    Triangle tr;
    int lenght,breadth,base, height;
    cout <<  "Inserire lati rettangolo base-altezza: " << endl;
    cin >> base >> height;
    r.set_data(base,height);

    cout << "Area rettangolo: " << r.rect_area() << endl;
    cout <<  "Inserire lati triangolo latoMax-latoMin: " << endl;
    cin >> lenght >> breadth;
    tr.set_data(lenght,breadth);
    cout << "Area Triangolo: " << tr.triangle_area() << endl;


}