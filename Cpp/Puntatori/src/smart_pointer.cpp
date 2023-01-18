/*
	Smart pointers

	I puntatori vengono utilizzati per accedere alle risorse esterne al programma, ad esempio la memoria heap. Di conseguenza, i puntatori vengono utilizzati per accedere alla memoria heap (se viene creato qualcosa all'interno della memoria heap). 
	Usiamo semplicemente una copia di qualsiasi risorsa esterna quando vi accediamo. Lo cambiamo semplicemente nella versione copiata se apportiamo modifiche. 
	Tuttavia, se utilizziamo un puntatore alla risorsa, possiamo modificare la risorsa originale.

	Smart pointers enable automatic, exception-safe, object lifetime management.
	Defined in header <memory> 
	
	Issues with Normal Pointers

	#include <iostream>  
	using namespace std;  
  
	class Rectangle {  
	private:  
		int length;  
		int breadth;  
	}; 

	void fun()  
	{  
		// By taking a pointer p and  
		// dynamically creating object  
		// of class rectangle  
		Rectangle* p = new Rectangle();  
	}   

	int main()  
	{  
		// Infinite Loop  
		while (1) {  
			fun();  
		}  
	} 

	Function fun genera un puntatore che punta all'oggetto Rectangle. 
	Il rettangolo è costituito da due numeri interi: lunghezza e larghezza.
	Poiché p è una variabile locale, verrà distrutta quando la funzione fun finisce. Tuttavia, perché abbiamo dimenticato di usare delete p; 
	Al termine della funzione, la memoria consumata non verrà deallocata. 
	Ciò significa che la memoria non sarà disponibile per l'utilizzo da parte di altre risorse. Tuttavia, non abbiamo più bisogno della variabile, ma piuttosto della memoria.
	fun() è chiamata in un ciclo infinito nella main function. Ciò significa che continuerà a generare p. Allocherà più memoria ma non la libererà perché non l'abbiamo deallocata. 
	La memoria inutilizzata non può essere riutilizzata. Ciò provoca una perdita di memoria. 
	Per questo motivo, l'intera memoria dell'heap potrebbe diventare inutile. 

	Smart Pointer, una funzionalità di C++11, fornisce una soluzione a questo problema.

	Inconsciamente, non deallocando un puntatore provoca una perdita di memoria, che può causare un arresto anomalo del programma.
	I Garbage Collection Mechanisms vengono utilizzati nei linguaggi Java e C# per deallocare in modo intelligente la memoria inutilizzata in modo che possa essere riutilizzata.
	Il programmatore non deve preoccuparsi delle perdite di memoria.

	Smart Pointer è un meccanismo sviluppato da C++11. Quando l'oggetto viene distrutto, viene rilasciata anche la memoria.
	Di conseguenza, non è necessario eliminarlo perché Smart Pointer lo gestirà.

	Uno Smart Pointer è una classe di wrapper del puntatore che ha operatori come * e -> overloaded. 
	Gli oggetti della classe smart pointer sono simili a puntatori regolari. Tuttavia, a differenza dei puntatori normali, ha la capacità di deallocate e liberare la memoria degli oggetti distrutti.

	Prendi una classe che ha un puntatore, un distruttore e operatori sovraccarichi come * e ->. Poiché il distruttore viene chiamato automaticamente quando un oggetto esce dall'ambito, la memoria allocata dinamicamente verrebbe eliminata (o il conteggio dei riferimenti può essere decrementato). Si consideri la classe SmartPtr mostrata di seguito.
*/
#include <iostream>
using namespace std; 

class SmartPtr_test{

 	int * ptr; // ACTUAL POINTER

	public: 
	// for use of explicit keyword 
	explicit SmartPtr_test(int *p=NULL) { ptr = p;}  // costruttore

	// Distruttore

	~SmartPtr_test() { delete(ptr);}

	// overloading deferencing operator
	int & operator*() { return *ptr;}

   /*
    Questo vale solo per int. Quindi dovremo creare uno Smart Pointer per ogni oggetto? No, Template, è la soluzione. 
	Come puoi vedere nel codice qui sotto, T può essere di qualsiasi tipo.
   
   */
};

template <class T>
class SmartPtr {
	T *ptr; //Actual pointer

	public:
	//Constructor
	explicit SmartPtr(T *p=NULL) { ptr=p;}

	// destructor
	~SmartPtr(){ delete(ptr);}

	// overloading deferencing operator 
	T& operator*(){return *ptr;}

};
	
int main(int argc, char *argv[])
{

    SmartPtr_test my_smart_ptr(new int());
	*my_smart_ptr = 20;

	cout << *my_smart_ptr << endl;

	SmartPtr<int> smartptr(new int());

	*smartptr = 25;

	cout << *smartptr << endl;

	return 0;
}

