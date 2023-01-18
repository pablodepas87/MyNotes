# C++ Output Iterator

-  L'iteratore di output è un iteratore utilizzato per modificare il valore nel contenitore.
-  La dereferenziazione di un iteratore di output ci consente di modificare il valore del contenitore.
-  Non ci consente di leggere il valore dal contenitore.
-  È un iteratore unidirezionale e di sola scrittura.
-  Può essere incrementato, ma non può essere decrementato.
-  Gli operatori che possono essere utilizzati per un iteratore di output sono l'operatore incremento(++), l'operatore decrement(--) e l'operatore assegnazione(=).

**There are two main subclasses of an Output Iterator are:**
*insert iterator
*ostream iterator

![](https://static.javatpoint.com/cpp/images/cpp-output-iterator.png)

### Insert Iterator
- Un iteratore di inserimento è un iteratore utilizzato per inserire l'elemento in una posizione specificata.
- Un operatore di assegnazione sul insert_iterator inserisce il nuovo elemento nella posizione corrente.
  
Syntax

    template<class Container, class Iterator>  
    insert_iterator<container> inserter(Container &x,Iterator it); 

Parameters
- x: It is the container on which the new element is to be inserted.
- it: It is an iterator object pointing to the position which is to be modified.


### Ostream iterator

- Gli iteratori di un ostream sono gli iteratori di output utilizzati per scrivere successivamente nel flusso di output come cout.
- Un iteratore ostream viene creato utilizzando un oggetto basic_ostream
- Quando un operatore di assegnazione viene utilizzato sull'iteratore ostream, inserisce un nuovo elemento nel flusso di output.

Sintassi

    template < class  T,  class  charT= char ,  classtratti  =char_traits<charT>>  
    classe  ostream_iterator;  

Funzioni membro della classe Ostream Iterator

    Ostream_iterator<T, charT,tratti>& operator=( const  T& valore);  
    Ostream_iterator<T, charT,tratti>& operator*();  
    Ostream_iterator<T, charT,tratti>& operator++();  
    Ostream_iterator<T, charT,tratti>& operator++( int );  

Parametri

-**T :** È il tipo di elementi da inserire nel contenitore.
-**charT :** Il tipo di elementi che ostream può gestire, ad esempio char ostream.
-**tratti :** questi sono i tratti caratteriali che il flusso gestisce per gli elementi.


## Features Of Output Iterator

- **Operatore di uguaglianza/disuguaglianza :** gli iteratori di output non possono essere confrontati utilizzando l'operatore di uguaglianza o disuguaglianza. Supponiamo che X e Y siano i due iteratori:

    X==Y; // non valido  
    X!=Y; // non valido  

- **Dereferenziazione :** un iteratore di output può essere dereferenziato come lvalue.

    *X=7;  

- **Incrementabile :** un iteratore di output può essere incrementato utilizzando la funzione operator++().

    X++;  
    ++X;  
  
## Limitazioni dell'iteratore di output

- **Assegnazione ma nessun accesso :** possiamo assegnare un iteratore di output come lvalue, ma non possiamo accedervi come rvalue.
- **Non può essere decrementato :** possiamo incrementare l'iteratore di output utilizzando la funzione operator++(), ma non possiamo decrementare l'iteratore di output.

    A--;            // non valido  
    --A;            // non valido  
- **Algoritmo multi-pass :** un iteratore di output non può essere utilizzato come algoritmo multi-pass. Poiché un iteratore di output è unidirezionale e può spostarsi solo in avanti. Pertanto, non può essere utilizzato per spostarsi più volte nel contenitore
- **Operatori relazionali :** un iteratore di output non può essere confrontato utilizzando nessuno degli operatori relazionali.
  Supponiamo che 'A' e 'B' siano i due iteratori:

    LA==B;        // non valido  
    LA==B;        // non valido  

- **Operatori aritmetici :** un iteratore di output non può essere utilizzato con gli operatori aritmetici. Pertanto, possiamo dire che l'iteratore di output avanza solo in modo sequenziale.
    
    Supponiamo che 'A' sia un iteratore di output :

    A + 2;               // non valido  
    A + 5;               // non valido     