# free vs delete in C++

impareremo a conoscere la funzione free() e l'operatore delete in C ++.

## free() function

La funzione free() viene utilizzata in C ++ per deallocare dinamicamente la memoria. È fondamentalmente una funzione di libreria utilizzata in C ++ ed è definita nel file di intestazione stdlib.h.     Questa funzione di libreria viene utilizzata quando i puntatori puntano alla memoria allocata utilizzando la funzione malloc() o il puntatore Null.

    Syntax of free() function

    Supponiamo di aver dichiarato un puntatore 'ptr', e ora, vogliamo de-allocare la sua memoria

    free(ptr);

    La sintassi di cui sopra deallocherebbe la memoria della variabile puntatore 'ptr'.

free() parameters:

ptr è un parametro all'interno della funzione free(). 
Il ptr è un puntatore che punta al blocco di memoria allocato usando la funzione malloc(), calloc() o realloc. 
Questo puntatore può anche essere nullo o un puntatore allocato usando malloc ma non puntando a nessun altro blocco di memoria.

Se il puntatore è nullo, la funzione free() non farà nulla.
Se il puntatore viene allocato utilizzando malloc, calloc o realloc, ma non punta a nessun blocco di memoria, questa funzione causerà un comportamento indefinito.

### free() Valore restituito

    La funzione free() non restituisce alcun valore. La sua funzione principale è quella di liberare la memoria.

## Delete operator:

È un operatore utilizzato nel linguaggio di programmazione C++ e viene utilizzato per deallocare dinamicamente la memoria. 
Questo operatore viene utilizzato principalmente per quei puntatori che vengono allocati utilizzando new o un puntatore NULL.

    Syntax
        
        delete pointer_name          
        ex:  delete p;

    To delete the array, we use the statement as given below:

        delete [] p;  

### Some important points related to delete operator are:  

- Viene utilizzato per eliminare l'array o gli oggetti non array che vengono allocati utilizzando la parola chiave new. 
- Per eliminare l'oggetto array o non-array, usiamo rispettivamente delete[] e delete operator.
- La parola chiave new ha allocato la memoria in un heap; quindi, possiamo dire che l'operatore delete dealloca sempre la memoria dall'heap
- Non distrugge il puntatore, ma il valore o il blocco di memoria, a cui punta il puntatore, viene distrutto.               

## Differences between delete and free():

- Delete è un operatore che dealloca dinamicamente la memoria mentre free() è una funzione che distrugge la memoria in fase di esecuzione.
- L'operatore delete viene utilizzato per eliminare il puntatore, che viene allocato utilizzando new operator o un puntatore NULL, mentre la funzione free() viene utilizzata per eliminare il puntatore allocato utilizzando malloc(), calloc() o realloc() funzione o puntatore NULL.
- Quando l'operatore delete distrugge la memoria allocata, chiama il distruttore della classe in C++, mentre la funzione free() non chiama il distruttore; libera solo la memoria dall'heap.
- L'operatore delete() è più veloce della funzione free().