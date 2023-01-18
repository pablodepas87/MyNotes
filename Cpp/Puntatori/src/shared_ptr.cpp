/*
    shared pointer

    shared pointer, più puntatori possono puntare allo stesso oggetto contemporaneamente e manterrà un contatore di riferimento utilizzando il metodo use count()
    
    use_count() mi dice quanti altri puntatori fanno riferimento a l'oggetto

    weak_ptr:
    
    weak_ptr:

    È molto simile al ptr condiviso, tranne per il fatto che non mantiene un contatore di riferimento. In questo caso, un puntatore non avrà una roccaforte sull'oggetto. 
    La ragione di ciò è che se i puntatori tengono l'oggetto mentre richiedono altri oggetti, possono formare un deadlock.

*/

#include <iostream>
#include <memory>

using namespace std;

class Rectangle{

    int base;
    int altezza;

    public:

    Rectangle ( int b , int a) {
        base = b;
        altezza = a;
    }

    int areaRect(){ return base*altezza;}

};

int main (int *argc , char *argv[]) {

    shared_ptr<Rectangle> shPRect1(new Rectangle(2,6));

    cout<< shPRect1->areaRect() << endl;
    cout << shPRect1.use_count() << endl;

    shared_ptr<Rectangle> shPRect2;
    shPRect2 = shPRect1;

    cout << shPRect2->areaRect() << endl;
    cout << shPRect2.use_count() << endl;

    shared_ptr<Rectangle> shPRect3;
    shPRect3 = shPRect1;

    cout << shPRect3->areaRect() << endl;
    cout << shPRect3.use_count() << endl;

    return 0;
}
