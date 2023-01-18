/*
    CLASS TEMPLATE

    Syntax

    template<class Ttype>  
    class class_name  
    {  
  
    }  

    Ttype è un nome placeholder che verrà determinato quando viene creata un'istanza della classe. 
    Possiamo definire più di un tipo di dati generico utilizzando un elenco separato da virgole. 
    Il Ttype può essere utilizzato all'interno del corpo della classe.
    
    Now, we create an instance of a class

    class_name<type> ob;  

    where class_name: It is the name of the class
    type: It is the type of the data that the class is operating on.
    ob: It is the name of the object.

    CLASS TEMPLATE WITH MULTIPLE PARAMETERS:

    È possibile utilizzare più tipi di dati generici in un modello di classe e ogni tipo di dati generico è separato dalla virgola.

    template<class T1, class T2, ......>   
    class class_name  
    {  
    // Body of the class.  
    }  

    
    Nontype Template Arguments
    
    Il Template può contenere più argomenti e possiamo anche usare gli argomenti non di tipo Oltre all'argomento di tipo T, 
    possiamo anche usare altri tipi di argomenti come stringhe, nomi di funzioni, espressioni costanti e tipi incorporati

    template<class T, int size>  
    class array  
    {  
            T arr[size];           // automatic array initialization.  
    };  

    Arguments are specified when the objects of a class are created:

        array<int, 15> t1;                        // array of 15 integers.  
        array<float, 10> t2;                    // array of 10 floats.   
        array<char, 4> t3;                      // array of 4 chars.       

    Points to Remember:

    C++ supporta una potente funzionalità nota come template per implementare il concetto di programmazione generica.
    Un modello ci consente di creare una famiglia di classi o una famiglia di funzioni per gestire diversi tipi di dati.
    Le classi e le funzioni del modello eliminano la duplicazione del codice di diversi tipi di dati e rendono quindi lo sviluppo più semplice e veloce.
    È possibile utilizzare più parametri sia nel modello di classe che in quello di funzione. 
    Anche x le funzioni del template si può fare overloaded. 
    Possiamo anche usare argomenti non di tipo come tipi di dati incorporati o derivati come argomenti del template.
*/

#include <iostream>
#include <string>

using namespace std;

template < class T> 
class A {

    public :
    T num1 = 5;
    T num2 = 7;

    void add() {
        cout << "Addition value is: " << num1 + num2 << endl;
    }
};

template <class T1, class T2>
class MultiParClass{

    T1 valt1;
    T2 valt2;

    public:
    MultiParClass(T1 valt1 , T2 valt2){
        valt1 = valt1;
        valt2 = valt2;
    }

    void display(){
        cout << "Values of a and b are : " << valt1 << " " << valt2 << endl;
    }
};

template<class T, int size>  
class array  
{  
    public:
    T arr[size];           // automatic array initialization.  

     void insert()  
    {  
        int i =1;  
        for (int j=0;j<size;j++)  
        {  
            arr[j] = i;  
            i++;  
        }  
    }  
     
    void display()  
    {  
        for(int i=0;i<size;i++)  
        {  
            cout << arr[i] << " ";  
        }  
    }  
};  

int main (int* argc, char* argv[]) {

    A<int> mia_classe ;
    mia_classe.add();

    MultiParClass<int,float> multiparClass(10,2);
    multiparClass.display();

    array< int, 10> my_array;
    my_array.insert();
    my_array.display();
    return 0;
}