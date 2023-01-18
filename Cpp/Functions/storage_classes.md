# C++ Storage Classes

La classe Storage viene utilizzata per definire la durata e la visibilità di una variabile e/o di una funzione all'interno di un programma C++.

La durata si riferisce al periodo durante il quale la variabile rimane attiva e la visibilità si riferisce al modulo di un programma in cui la variabile è accessibile.

Ci sono 5 tipi di storage classes che possiamo usare in un C++ program

- Automatic
- Register
- Static
- External
- Mutable

|Storage Class | Keyword	Lifetime |	Visibility | Initial Value|
|----|----|----|-----|----|
|Automatic | auto |	Function Block | Local | Garbage|
|Register |	register |Function Block | Local |	Garbage|
|Mutable  |	mutable	Class |	Local |	Garbage|
|External |	extern |	Whole Program |	Global	Zero|
|Static	|static	|Whole Program	|Local	|Zero|


## Automatic Storage Class

È la classe di archiviazione predefinita per tutte le variabili locali. La parola chiave auto viene applicata automaticamente a tutte le variabili locali.

    {   
        auto int y;  
        float y = 3.45;  
    }  

L'esempio precedente definisce due variabili con una stessa classe di archiviazione, auto può essere utilizzato solo all'interno delle funzioni

## Register Storage Class

La variabile register alloca memoria nel registro rispetto alla RAM. La sua dimensione è la stessa della dimensione del registro. Ha un accesso più veloce rispetto ad altre variabili.

Si consiglia di utilizzare la variabile di registro solo per l'accesso rapido, ad esempio per un contatore.

    register int count = 0;

## Static Storage Class

La variabile statica viene inizializzata una sola volta ed esiste fino alla fine di un programma. Mantiene il suo valore tra più chiamate di funzioni.

    #include <iostream>  
    using namespace std;  
    void func() {    
    static int i=0; //static variable    
    int j=0; //local variable    
    i++;    
    j++;    
    cout<<"i=" << i<<" and j=" <<j<<endl;    
    }    
    int main()  
    {  
    func();    
    func();    
    func();    
    }  

## External Storage Class

La variabile extern è visibile a tutti i programmi. Viene utilizzato se due o più file condividono la stessa variabile o funzione.

    extern int counter = 0;

    