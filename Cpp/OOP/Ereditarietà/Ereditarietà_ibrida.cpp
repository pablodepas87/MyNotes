/*

  C++ Hybrid Inheritance

  L'ereditarietà ibrida è una combinazione di più di un tipo di ereditarietà.

*/

#include <iostream>
using namespace std;

class A {
   
    public:
        void get_a() {
            cout << "Inserisci A: " << endl;
            cin >> a;
        }
    
    protected:
        int a;
};

class B: public A {
   
   public:
    void get_b() {
        cout << "Inserisci B: " << endl;
        cin >> b;
    }
   protected:
    int b;
}; 

class C {
   // classe base 
   public:
   void get_c() {
    cout << "Inserisci C: " << endl;
    cin >> c;
   }

   protected:
    int c;
};

class D: public B, public C {

    public :
    void mul () {

        get_a();
        get_b();
        get_c();

        cout << "Moltiplication value:" << a*b*c << endl;
    }
};

int main ( int *argc, char *argv) {

  D d;
  d.mul();

  return 0;   
}