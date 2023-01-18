/*
    C++ Enumeration

    Enum in C++ è un tipo di dati che contiene un set fisso di costanti

    può essere utilizzato per i giorni della settimana (DOMENICA, LUNEDÌ, MARTEDÌ, MERCOLEDÌ, GIOVEDÌ, VENERDÌ e SABATO), direzioni (NORD, SUD, EST e OVEST) ecc. 
    Le costanti di enumerazione C++ sono implicitamente statiche e finali.

    Gli enum C++ possono essere pensati come classi che hanno un insieme fisso di costanti.

    Points to remember for C++ Enum

    ENUM migliora la sicurezza dei tipi
    ENUM può essere facilmente utilizzato in switch
    ENUM può essere attraversato
    ENUM può avere campi, costruttori e metodi
    ENUM può implementare molte interfacce ma non può estendere alcuna classe perché estende internamente la classe Enum

    senza dichiararne una variabile è possibile accedere ad un elemento con l'operatore di scope :: altrimenti con il . se abbiamo
    dichiarato una variabile di tipo ENUM

    enum DayWeek {

    LUN,
    MAR,
    MERC,
    GIOV,
    VEN,
    SAB,
    DOM, 
    };

    DayWeek days;
    DayWeek::DOM;

    enum  {

    LUN,
    MAR,
    MERC,
    GIOV,
    VEN,
    SAB,
    DOM, 
    } DayWeek;

    sopra una dichiarazione errata di Enum
*/

#include <iostream>
using namespace std;

enum DayWeek {

    LUN,
    MAR,
    MERC,
    GIOV,
    VEN,
    SAB,
    DOM, 
};

int main (int *argc , char *argv[]) {

    DayWeek days;
    DayWeek::DOM;
    
    cout << "Day: " << days+1<<endl;
    cout << "Day: " << DayWeek::DOM +1<<endl; 

    days = MAR;
    cout << "Day: " << days+1<<endl;   
    return 0;
}

