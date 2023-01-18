/*
     Templates (Modello)

     Un Template C++ è una potente funzionalità aggiunta a C++. Consente di definire le classi generiche e le funzioni generiche 
     e quindi fornisce supporto per la programmazione generica. 
     La programmazione generica è una tecnica in cui i tipi generici vengono utilizzati come parametri negli algoritmi 
     in modo che possano funzionare per una varietà di tipi di dati.
    
     Templates can be represented in two ways:

     Function templates
     Class templates

     Function templates:

     Possiamo definire un modello per una funzione. Ad esempio, se abbiamo una funzione add(), possiamo creare versioni della funzione add 
     per aggiungere i valori int, float o double type.

     Class Template:

     Possiamo definire un modello per una classe. Ad esempio, è possibile creare un modello di classe per la classe di matrice in grado di 
     accettare la matrice di vari tipi come int array, float array o double array.

     Function Template

     Le funzioni generiche utilizzano il concetto di modello di funzione. 
     Le funzioni generiche definiscono un insieme di operazioni che possono essere applicate ai vari tipi di dati.

     Il tipo di dati su cui opererà la funzione dipende dal tipo di dati passati come parametro.
     Ad esempio, l'algoritmo di ordinamento rapido viene implementato utilizzando una funzione generica, 
     può essere implementato su un array di interi o array di float.

     Una funzione Generic viene creata utilizzando la parola chiave Template. Il Template definisce quale funzionerà.

    Syntax of Function Template:

    template < class Ttype> ret_type func_name(parameter_list)  
    {  
        // body of function.  
    }

    Where Ttype: È un placeholder per un tipo di dati utilizzato dalla funzione. 
        Viene utilizzato all'interno della definizione della funzione. 
        È solo un placeholder che il compilatore sostituirà automaticamente con il tipo di dati effettivo.  

    class: una parola chiave class viene utilizzata per specificare un tipo generico in una dichiarazione modello.  

    Function Templates with Multiple Parameters:
    Possiamo usare più di un tipo generico nella funzione del modello usando la virgola per separare l'elenco.

    Syntax

    template<class T1, class T2,.....>  
    return_type function_name (arguments of type T1, T2....)  
    {  
        // body of function.  
    }  

    Overloading a Function Template:
    Possiamo sovraccaricare la funzione generica significa che le funzioni del Template overloaded possono differire nell'elenco dei parametri.

    Le funzioni generiche eseguono la stessa operazione per tutte le versioni di una funzione, ad eccezione del tipo di dati diverso. 
    Non possiamo sovraccaricare le funzioni generiche poiché entrambe le funzioni hanno funzionalità diverse.
*/
#include <iostream>
using namespace std;

template < class T > T add(T &par, T &par1) {
    T result = par + par1;
    return result ;
}


template <class T> T maxNum(T par1,T par2) {
    if( par1 > par2)
        return par1;
    
    return par2;
} 


// template multiple parameters

template < class X,class Y> void fun( X a, Y b) {
        cout<< "Value of a is:" << a << endl;
        cout << "Value of b is:" << b << endl;

}

// template overloaded 

template <class T> void functionEx(T a) {
    cout << "Value of first overloaded template example" << a << endl;
}

template <class T, class X > void functionEx(T t , X x) {
        cout << "Value of t is : " << t << endl;  
        cout << "Value of c is : " << x << endl; 
} 

int main (int *argc , char *argv[]) {
    
     int int_a = 5, int_b = 6 ;
     float fl_a = 3.1, fl_b = 4.3 ;

    cout << "Additional of int is:" << add(int_a, int_b) << endl;
    cout << "Additional of float is:" << add(fl_a,fl_b) << endl;
    
    cout << "Max num int: " << maxNum(int_a,int_b) << endl;

    fun (int_a, fl_b);
    functionEx(10);
    functionEx(3,"c");

    return 0;
}
