/*
    C++ Inheritance

    In C++, l'ereditarietà è un processo in cui un oggetto acquisisce automaticamente tutte le proprietà e i comportamenti del relativo oggetto padre.
    In questo modo, è possibile riutilizzare, estendere o modificare gli attributi e i comportamenti definiti in altre classi.
    In C++, la classe che eredita i membri di un'altra classe è chiamata classe derivata e la classe i cui membri sono ereditati è chiamata classe base.

    La classe derivata è la classe specializzata per la classe base.

    Advantage of C++ Inheritance

    Riusabilità del codice: ora è possibile riutilizzare i membri della classe padre. 
    Quindi, non è necessario definire nuovamente il membro. Quindi è richiesto meno codice nella classe.

    Types Of Inheritance
    
    C++ supports five types of inheritance:
      Single inheritance
      Multiple inheritance
      Hierarchical inheritance
      Multilevel inheritance
      Hybrid inheritance

    Derived Classes:

    Una classe derivata è definita come la classe derivata dalla classe base.

    The Syntax of Derived class:

    class derived_class_name :: visibility-mode base_class_name  
    {  
        // body of the derived class.  
    }  

    derived_class_name: It is the name of the derived class.

    visibility mode: The visibility mode specifies whether the features of the base class are publicly inherited or privately inherited. 
        It can be public or private.
    base_class_name: It is the name of the base class.

    Quando la classe base viene ereditata privatamente dalla classe derivata, i membri pubblici della classe base diventano i membri privati della classe derivata. 
    Pertanto, i membri pubblici della classe base non sono accessibili dagli oggetti della classe derivata solo dalle funzioni membro della classe derivata.    

    Quando la classe base viene ereditata pubblicamente dalla classe derivata, anche i membri pubblici della classe base diventano membri pubblici della classe derivata. 
    Pertanto, i membri pubblici della classe base sono accessibili dagli oggetti della classe derivata e dalle funzioni membro della classe base.

    In C++, la modalità predefinita di visibilità è privata.I membri privati della classe base non sono mai ereditati.

    C++ Single Inheritance:

    Quando una classe eredita un'altra classe, è nota come ereditarietà a livello singolo.

    How to make a Private Member Inheritable:

    Il membro privato non è ereditabile. Se modifichiamo la modalità di visibilità rendendola pubblica, ma questo toglie il vantaggio di nascondere i dati.

    C++ introduce un terzo modificatore di visibilità, ovvero protected. Il membro dichiarato protected sarà accessibile a tutte le 
    funzioni membro all'interno della classe e alla classe immediatamente derivata da essa.

    Visibility modes can be classified into three categories:

    Public: When the member is declared as public, it is accessible to all the functions of the program.
    Private: When the member is declared as private, it is accessible within the class only.
    Protected: When the member is declared as protected, it is accessible within its own class as well as the class immediately derived from it.

    Un'ambiguità (metodi con lo stesso nome) può verificarsi nell'eredità singola:
        la funzione della classe derivata sostituisce il metodo della classe base. 
        Pertanto, la chiamata alla funzione chiamerà semplicemente la funzione definita nella classe derivata. 
        Se vogliamo richiamare la funzione di classe base (se definita public), possiamo usare l'operatore di risoluzione della classe ::
*/

#include <iostream>
using namespace std;

class A {
   int value_1 = 5;
   int value_2 = 7;

   public:
     float param_cl_base = 60;
     void metodo_cl_base(){
        cout << "Metodo cl base" << endl;
     }

     int mul() {
        int c= value_1 * value_2;
        return c;
     }

     void saluta() {
        cout << "Hello i'm class A" << endl;
     }

};
class B: public A {
   public:
    float param_cl_derivata = 500;
    void metodo_cl_derivata(){
        cout << "Metodo cl derivata" << endl;
    }

     void saluta() {
        cout << "Hello i'm class B" << endl;
     }
};

class C: private A {
   // i metodi di A nn saranno accessibili dall'esterno e 
   //quindi dagli oggetti dichiarati di tipo classe C 
   
   public:
   void display(){
        cout << "Moltiplication of value 1 and value 2 is: " << mul() << endl; 
   }

};

int main(void){

    B obj_class_b;
    C obj_class_c;
    
    obj_class_b.saluta();
    obj_class_b.A::saluta();                // to solve ambiguity

    cout << "Param classe Base: " << obj_class_b.param_cl_base << endl;
    cout << "Param classe Figlia: " << obj_class_b.param_cl_derivata << endl; 
    
    obj_class_b.metodo_cl_base();
    obj_class_b.metodo_cl_derivata();
    
    obj_class_c.display();

    return 0;
}