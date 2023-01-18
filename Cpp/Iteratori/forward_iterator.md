# C++ Forward Iterator

- **Forward Iterator** è una combinazione di iteratore bidirezionale e ad accesso casuale. Pertanto, possiamo dire che l'iteratore di inoltro può essere utilizzato per leggere e scrivere su un contenitore.
- **Forward Iterator** vengono utilizzati per leggere il contenuto dall'inizio alla fine di un contenitore.
- **Forward iterator** utilizza solo l'operatore incrementale (++) per spostarsi tra tutti gli elementi di un contenitore. Pertanto, possiamo dire che l'iteratore in avanti può solo andare avanti.
- **Forward iterator** è un iteratore multi-pass.

## Operations Performed on the Forward Iterator:

|Properties	| Valid Expressions|
|---|---|
|È costruibile di default. | A x; |
|È una copia costruibile. |	A x(y);  |
|È una copia assegnabile. |	y = x; |
|Può essere confrontato utilizzando un operatore di uguaglianza o disuguaglianza. |	a==b; a!=b; |
|Può essere incrementato.|	a++; ++a; |
|Può essere dereferenziato come un valore. |	*a; |
|Può anche essere dereferenziato come lvalue. | *a = t; |

Dove 'A' è un tipo di iteratore in avanti e x e y sono gli oggetti di un tipo di iteratore in avanti e t è un oggetto puntato dall'oggetto di tipo iteratore.

## Features of the Forward Iterator:

![](https://static.javatpoint.com/cpp/images/cpp-forward-iterator.png)

- **Operatore di uguaglianza/disuguaglianza:** un iteratore in avanti può essere confrontato utilizzando l'uguaglianza o un operatore di disuguaglianza.
  
   Suppose 'A' and 'B' are the two iterators:

    A==B;           // equality operator  
    A!=B;            // inequality operator

- **Dereferenziazione:** possiamo dereferenziare l'iteratore in avanti come rvalue oltre che come lvalue. Pertanto, possiamo accedere all'iteratore di output e possiamo anche assegnare il valore all'iteratore di output.

    Suppose 'A' is an iterator and 't' is an integer variable:

    *A = t;  
    t = *A;   

- **Incrementabile:** un iteratore in avanti può essere incrementato ma non può essere decrementato.

   Suppose 'A' is an iterator:

    A++;  
    ++A;  

## Limitations of the Forward Iterator:

- **Decrementabile:** un iteratore in avanti non può essere decrementato poiché si sposta solo nella direzione in avanti.
    
    Suppose 'A' is an iterator:
    A--;          // invalid  

- **Operatori relazionali:** è possibile utilizzare un iteratore in avanti con l'operatore di uguaglianza, ma nessun altro operatore relazionale può essere applicato all'iteratore in avanti.
  
  Suppose 'A' and 'B' are the two iterators:

    A==B;        // valid  
    A>=B;        // invalid 

- **Operatori aritmetici:** non è possibile utilizzare operatori aritmetici con l'iteratore in avanti.
    Suppose 'A' is an iterators:

    A+2;         // invalid  
    A+3;         // invalid  
    
- **Accesso casuale:** un iteratore in avanti non fornisce l'accesso casuale di un elemento. Può solo scorrere gli elementi di un contenitore.