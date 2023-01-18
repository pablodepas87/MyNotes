# Function Pointer in C++

Come sappiamo, i puntatori vengono utilizzati per puntare alcune variabili; Analogamente, il puntatore a funzione è un puntatore utilizzato per puntare le funzioni. È fondamentalmente usato per memorizzare l'indirizzo di una funzione. Possiamo chiamare la funzione usando il puntatore della funzione oppure possiamo anche passare il puntatore a un'altra funzione come parametro.

Sono utili principalmente per applicazioni basate su eventi, callback e persino per l'archiviazione delle funzioni in array.

## What is the address of a function?

![](https://static.javatpoint.com/cpp/images/function-pointer-in-cpp.png)

Il computer comprende solo il linguaggio di basso livello, cioè la forma binaria. Il programma che scriviamo in C ++ è sempre in linguaggio di alto livello, quindi per convertire il programma in forma binaria, usiamo il compilatore. Compiler è un programma che converte il codice sorgente in un file eseguibile. Questo file eseguibile viene memorizzato nella RAM. La CPU avvia l'esecuzione dal metodo main() e legge la copia nella RAM ma non il file originale.

Tutte le funzioni e le istruzioni del codice macchina sono dati. Questi dati sono un mucchio di byte e tutti questi byte hanno un indirizzo nella RAM. Il puntatore a funzione contiene l'indirizzo RAM della prima istruzione di una funzione.

## Syntax for Declaration

Di seguito è riportata la sintassi per la dichiarazione di un puntatore di funzione:

    int (*FuncPtr) (int,int);  

La sintassi precedente è la dichiarazione di funzione. Poiché le funzioni non sono semplici come variabili, ma C ++ è un tipo sicuro, i puntatori a funzione hanno un tipo restituito e un elenco di parametri. Nella sintassi precedente, forniamo prima il tipo restituito e quindi il nome del puntatore, ad esempio FuncPtr che è circondato dalle parentesi tonde e preceduto dal simbolo del puntatore, ad esempio (*). Successivamente, abbiamo fornito l'elenco dei parametri (int, int). Il puntatore della funzione precedente può puntare a qualsiasi funzione che accetta due parametri interi e restituisce un valore di tipo intero.    


## Address of a function

Possiamo ottenere l'indirizzo di una funzione molto facilmente. Abbiamo solo bisogno di menzionare il nome della funzione, non abbiamo bisogno di chiamare la funzione.

    #include <iostream>  
    using namespace std;  
    int main()  
    {  
    std::cout << "Address of a main() function is : " <<&main<< std::endl;  
    return 0;  
    } 


## Calling a function indirectly

Possiamo chiamare la funzione con l'aiuto di un puntatore a funzione semplicemente usando il nome del puntatore della funzione. La sintassi della chiamata della funzione tramite il puntatore a funzione è simile a quella della chiamata della funzione originale.

## Passing a function pointer as a parameter

Il puntatore a funzione può essere passato come parametro a un'altra funzione.

    #include <iostream>  
    using namespace std;  
    void func1()  
    {  
        cout<<"func1 is called";  
    }  
    void func2(void (*funcptr)())  
    {  
        funcptr();  
    }  
    int main()  
    {  
    func2(func1);  
    return 0;  
    }  




