# C++ Functions

La funzione nel linguaggio C++ è anche conosciuta come procedura o subroutine in altri linguaggi di programmazione. Per eseguire qualsiasi attività, possiamo creare una funzione. Una funzione può essere chiamata molte volte. Fornisce modularità e riusabilità del codice.

## Advantage of functions in C

Ci sono molti vantaggi delle funzioni:

- Code Reusability: Creando funzioni in C++, è possibile chiamarla più volte. Quindi non abbiamo bisogno di scrivere lo stesso codice ancora e ancora
- Code optimization: Rende il codice ottimizzato, non abbiamo bisogno di scrivere molto codice. Supponiamo che tu debba controllare 3 numeri (531, 883 e 781) se si tratta di un numero primo o meno. Senza usare la funzione, è necessario scrivere la logica dei numeri primi 3 volte. Quindi, c'è la ripetizione del codice. Ma se si utilizzano funzioni, è necessario scrivere la logica solo una volta e riutilizzarla più volte.

# Types of Functions

Ci sono due tipi di funzioni nella programmazione C:

- Funzioni di libreria: sono le funzioni dichiarate nei file di intestazione C ++ come ceil(x), cos(x), exp(x), ecc.
- Funzioni definite dall'utente: sono le funzioni create dal programmatore C++, in modo che possa usarlo molte volte. Riduce la complessità di un grande programma e ottimizza il codice.

## Declaration of a function

La sintassi della funzione di creazione nel linguaggio C ++ è riportata di seguito:

    return_type function_name(data_type parameter...)  
    {    
    //code to be executed    
    } 

## Call by value and call by reference in C++

Esistono due modi per passare valori o dati ad una  funzione nel linguaggio C: 
-chiamata per valore: Il valore originale non viene modificato all'interno della funzione
-chiamata per riferimento: il valore viene modificato all'interno della funzione.

![](https://static.javatpoint.com/cpp/images/call-by-value-and-call-by-reference-in-cpp1.png)

### Call by value in C++

In chiamata per valore, **il valore originale non viene modificato**. 

Nella chiamata per valore, il valore passato alla funzione viene memorizzato localmente dal parametro function nella posizione di memoria dello stack. 

Se si modifica il valore del parametro di funzione, viene modificato solo per la funzione corrente. 

Non cambierà il valore della variabile all'interno del metodo chiamante come ad esempio main().

### Call by reference in C++

In Chiamata per riferimento, il valore originale viene modificato perché passiamo riferimento (indirizzo).

Qui, l'indirizzo del valore viene passato nella funzione, quindi gli argomenti effettivi e formali condividono lo stesso spazio degli indirizzi. 

Quindi, il valore modificato all'interno della funzione, si riflette all'interno e all'esterno della funzione.

### Difference between call by value and call by reference in C++

| No. |	Chiama per valore |	Chiama per riferimento|
|-----|----|----|
|1	|Una copia del valore viene passata alla funzione|	Un indirizzo di valore viene passato alla funzione |
|2	|Le modifiche apportate all'interno della funzione non si riflettono su altre funzioni |	Le modifiche apportate all'interno della funzione si riflettono anche all'esterno della funzione |
|3	|Gli argomenti effettivi e formali verranno creati in diverse posizioni di memoria|	Gli argomenti effettivi e formali verranno creati nella stessa posizione di memoria |

## C++ Recursion

Quando la funzione viene chiamata all'interno della stessa funzione, è nota come ricorsione in C ++. La funzione che chiama la stessa funzione, è nota come funzione ricorsiva.

Una funzione che chiama se stessa e non esegue alcuna attività dopo la chiamata di funzione, è nota come ricorsione della coda. Nella ricorsione di coda, generalmente chiamiamo la stessa funzione con istruzione return. ( tipo numero fattoriale vedi esempio.)

    recursionfunction(){    
        recursionfunction(); //calling self function    
    }   


![](https://static.javatpoint.com/cpp/images/cpp-recursion1.png)
