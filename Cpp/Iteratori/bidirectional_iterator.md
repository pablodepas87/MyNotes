# C++ Bidirectional iterator

- supporta tutte le funzionalità di un forwar iterator e supporta anche i **due operatori di decremento (prefisso e postfisso)**.
- sono gli iteratori utilizzati per accedere agli elementi in entrambe le direzioni, cioè verso la fine e verso l'inizio.
- Un iteratore ad accesso casuale è anche un iteratore bidirezionale valido.
- Molti contenitori implementano l'iteratore bidirezionale come list, set, multiset, map, multimap
- C++ fornisce due iteratori non const che si muovono in entrambe le direzioni: iterator e reverse iterator.
- L'iteratore bidirezionale C++ ha le stesse caratteristiche del forward iterator, con l'unica differenza che l'iteratore bidirezionale può anche essere decrementato.

## Properties Of Bidirectional Iterator

#### Suppose x and y are the two iterators:

|Property |	Expressions |
|---|---|
| è costruibile per impostazione predefinita, assegnabile per copia e distruttibile.| A x; A y(x); y=x; |
|Può essere confrontato utilizzando l'operatore di uguaglianza o disuguaglianza. |	x==y x!=y|
|Può essere dereferenziato significa che possiamo recuperare il valore utilizzando un operatore di dereferenziazione(\*).| *x|
|Un iteratore mutabile può essere dereferenziato come lvalue.|	*x = t |
|È possibile incrementare un iteratore bidirezionale.|	x++ ++x |
|È anche possibile decrementare un iteratore bidirezionale. | x-- --x |

Nella tabella precedente, 'A' è di tipo bidirezionale, x e y sono gli oggetti di un tipo iteratore e 't' è un oggetto puntato dall'iteratore.

## Features of the Bidirectional iterator

![](https://static.javatpoint.com/cpp/images/cpp-bidirectional-iterator.png)

- **Operatore di uguaglianza/disuguaglianza:** un iteratore bidirezionale può essere confrontato utilizzando un operatore di uguaglianza o disuguaglianza. I due iteratori sono uguali solo quando entrambi gli iteratori puntano alla stessa posizione.

    Suppose 'A' and 'B' are the two iterators:

    A==B;  
    A!=B;  

- **Dereferenziazione:** un iteratore bidirezionale può anche essere dereferenziato sia come lvalue che come rvalue.
    Suppose 'A' is an iterator and 't' is an integer variable

    *A = t;  
    t = *A  

- **Incrementabile:** un iteratore bidirezionale può essere incrementato utilizzando una funzione **operator++()**.  
    
    A++;  
    ++A;

- **Decrementabile:** un iteratore bidirezionale può anche essere decrementato utilizzando una funzione Operator **--()**.
  
    A--;  
    --A;  

## Limitations Of Bidirectional Iterator:

- **Operatore relazionale:** un operatore di uguaglianza o disuguaglianza può essere utilizzato con l'iteratore bidirezionale, ma gli altri iteratori non possono essere applicati all'iteratore bidirezionale.

    Suppose 'A' and 'B' are the two iterators:

    A==B;           // valid  
    A<=B;           // invalid  

- **Operatore aritmetico:** un operatore aritmetico non può essere utilizzato con l'iteratore bidirezionale in quanto accede ai dati in sequenza.
  
    A+2;              // invalid  
    A+1;              // invalid  

- **Operatore di dereferenza di offset:** un iteratore bidirezionale non supporta l'operatore di dereferenza di offset o l'operatore pedice [] per l'accesso casuale a un elemento.    