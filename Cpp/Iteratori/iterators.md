# C++ Iterators

Gli iteratori sono proprio come i puntatori utilizzati per accedere agli elementi di un contenitore.  

## Punti importanti:

- gli iteratori vengono utilizzati per pasare da un elemento ad un altro. Questo processo è noto come **Iterating through the container** 
- il vantaggio principale di un iteratore è quello di fornire un'interfaccia comune per tutti i tipi di contenitori.
- gli iteratori rendono l'algoritmo indipendente dal tipo di contenitore utilizzato.
- gli iteratori forniscono un approccio generico per spostarsi tra gli elementi di un contenitore.

### Syntax

    <ContainerType> :: iterator;  
    <ContainerType> :: const_iterator;  

N.B: è necessario l'include della libraria iterator 

    #include <iterator>

## Operations Performed on the Iterators:

* **Operator(\*):** L'operatore '\*' restituisce l'elemento della posizione corrente puntata dall'iteratore. 
* **Operator(++):** L'operatore '++' incrementa l'iteratore di uno. Pertanto, un iteratore punta all'elemento successivo del contenitore.
* **Operator (==) e Operator (!=)** : Entrambi questi operatori determinano se i due iteratori puntano alla stessa posizione o meno.
* **Operator (=) :** l'operatore '=' assegna l'iteratore.

## Difference b/w Iterators & Pointers

Gli iteratori possono essere puntatori intelligenti che consentono di iterare su strutture di dati complesse. Un contenitore fornisce il tipo di iteratore. Pertanto, possiamo dire che gli iteratori hanno l'interfaccia comune con diversi tipi di contenitore.

Le classi contenitore forniscono due funzioni membro di base che consentono di iterare o spostarsi tra gli elementi di un contenitore:

- **begin():** la funzione begin() restituisce un iteratore che punta al primo elemento del contenitore.

- **end():** la funzione end() restituisce un iteratore che punta all'elemento past-the-last del contenitore..

    ![begin-end-images](https://static.javatpoint.com/cpp/images/cpp-iterators.png)
 

#### code Example

    #include <iostream>
    #include<iterator>  
    #include<vector>  
    using namespace std;  
    int main()  
    {  
    std::vector<int> v{1,2,3,4,5};  
    vector<int>::iterator itr;  
    for(itr=v.begin();itr!=v.end();itr++)  
    {  
        std::cout << *itr <<" ";  
    }  
        return 0;  
    }  


## Iterator Categories

Un iteratore può essere catalogato nelle seguenti categorie:

- Input Iterator
- Output Iterator
- Forward Iterator
- Bidirectional Iterator
- Random Access Iterator

![categorie-iteratori](https://static.javatpoint.com/cpp/images/cpp-iterators2.png)

#### Input Iterator
un iteratore di input è un iteratore utilizzato per accedere agli elementi dal contenitore, *ma non modifica il valore di un contenitore*.

###### Operators used for an input iterator are:
- Increment operator(++)
- Equal operator(==)
- Not equal operator(!=)
- Dereference operator(*)

#### Output Operator
Un iteratore di output è un iteratore utilizzato per modificare il valore di un contenitore, *ma non legge il valore da un contenitore*. Pertanto, possiamo dire che un iteratore di output è un iteratore di **sola scrittura**.

###### Operators used for an output iterator are:
- Increment operator(++)
- Assignment operator(=)

#### Forward Operator
Un iteratore di inoltro è un iteratore utilizzato per **leggere e scrivere in un contenitore**. È un iteratore multi-pass.

###### Operators used for a Forward iterator are:

- Increment operator(++)
- Assignment operator(=)
- Equal operator(=)
- Not equal operator(!=)

#### Bidirectional Operator
Un iteratore bidirezionale è un iteratore che supporta tutte le funzionalità di un iteratore in avanti e aggiunge un'altra funzionalità, cioè **l'operatore di decremento (--)**. Possiamo tornare indietro decrementando un iteratore.

###### Operators used for a Bidirectional iterator are:
- Increment operator(++)
- Assignment operator(=)
- Equal operator(=)
- Not equal operator(!=)
- Decrement operator(--)

#### Random Access Operator
Un iteratore ad accesso casuale è un iteratore che fornisce l'accesso casuale di un elemento in una posizione arbitraria. Ha tutte le caratteristiche di un iteratore bidirezionale e aggiunge un'altra funzionalità, cioè l'aggiunta del puntatore e la sottrazione del puntatore per fornire accesso casuale a un elemento.

###### Difference b/w Random Access Iterator and Other Iterators
La differenza più importante tra l'iteratore ad accesso casuale e altri iteratori è che **l'iteratore ad accesso casuale richiede il passaggio '1' per accedere a un elemento, mentre altri iteratori richiedono 'n' passaggi**.

![](https://static.javatpoint.com/cpp/images/cpp-iterators3.png)


## Providers Of Iterators

| Iterator categories |	Provider |
|----|---|
|Input iterator |	istream |
|Output iterator |	ostream |
|Forward iterator||	
|Bidirectional iterator |	List, set, multiset, map, multimap |
|Random access iterator	| Vector, deque, array|

## Iterators and their Characteristics

|Iterator|	Access method|	Direction of movement |	I/O capability |
| :---: | :---: | :---: | :---: |
|Input	|Linear	|Forward only |	Read-only |
|Output	|Linear	|Forward only |Write-only |
|Forward	|Linear	| Forward only |	Read/Write |
|Bidirectional |	Linear	|Forward & backward	| Read/Write |
|Random |	Random |	Forward & backward |	Read/Write |

## Disadvantages of iterator

- Se vogliamo passare da una struttura di dati a un'altra allo stesso tempo, gli iteratori non funzioneranno.
- Se vogliamo aggiornare la struttura che viene iterata, un iteratore non ci permetterà di farlo a causa del modo in cui memorizza la posizione.
- Se vogliamo tornare indietro durante l'elaborazione di un elenco, l'iteratore non funzionerà in questo caso.
  
## Advantages of iterator

- **Facilità di programmazione:** è conveniente utilizzare gli iteratori piuttosto che utilizzare un operatore pedice[] per accedere agli elementi di un contenitore. Se usiamo l'operatore pedice[] per accedere agli elementi, dobbiamo tenere traccia del numero di elementi aggiunti in fase di esecuzione, ma questo non accadrebbe nel caso di un iteratore.
- **Riusabilità del codice:** un codice può essere riutilizzato se utilizziamo iteratori. Nell'esempio precedente, se sostituiamo vector con l'elenco, e quindi l'operatore pedice [] non funzionerebbe per accedere agli elementi poiché l'elenco non supporta l'accesso casuale. Tuttavia, utilizziamo gli iteratori per accedere agli elementi, quindi possiamo anche accedere agli elementi dell'elenco.
- **Elaborazione dinamica:** gli iteratori C++ offrono la possibilità di aggiungere o eliminare i dati in modo dinamico.

        #include <iostream>  
        #include<vector>  
        #include<iterator>  
        using namespace std;  
        int main()  
        {  
            vector<int> v{1,2,3,4,5};  // vector declaration  
            vector<int>::iterator itr;  
            v.insert(v.begin()+1,10);        
            for(itr=v.begin();itr!=v.end();itr++)  
            {  
                cout<<*itr<<" ";  
            }  
            return 0;  
        }  

