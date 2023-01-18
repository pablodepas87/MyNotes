# C++ STL Set

I set fanno parte di C++ STL (Standard Template Library). I **set sono i contenitori associativi** che memorizzano la chiave ordinata, in cui **ogni chiave è univoca** e **può essere inserita o eliminata ma non può essere modificata**.

## Syntax

    template < class T,                             // set::key_type/value_type  
           class Compare = less<T>,        // set::key_compare/value_compare  
           class Alloc = allocator<T>         // set::allocator_type  
           > class set;  

## Parameter

- T: Tipo di elemento memorizzato nel set di contenitori

- Compare: Classe di confronto che accetta due argomenti dello stesso tipo bool e restituisce un valore. Questo argomento è facoltativo e il predicato binario meno è il valore predefinito.

- Alloc: Tipo dell'oggetto allocatore utilizzato per definire il modello di allocazione dello storage.   


## Member Functions

### Constructor/Destructor
|Functions |	Description|
|----|----|
|(constructor)	| Construct set|
|(destructor)	| Set destructor|
|operator=	|Copy elements of the set to another set.|

### Iterators

**Functions/Description** 

- **Begin:**	Returns an iterator pointing to the first element in the set.
- **cbegin:**	Returns a const iterator pointing to the first element in the set.
- **End:**	Returns an iterator pointing to the past-end.
- **Cend:**	Returns a constant iterator pointing to the past-end.
- **rbegin:**	Returns a reverse iterator pointing to the end.
- **Rend:**	Returns a reverse iterator pointing to the beginning.
- **crbegin:**	Returns a constant reverse iterator pointing to the end.
- **Crend:**	Returns a constant reverse iterator pointing to the beginning.

### Capacity
**Functions/Description**

- **empty:** Returns true if set is empty.
- **Size:**	Returns the number of elements in the set.
- **max_size:**	Returns the maximum size of the set.

### Modifiers

**Functions/Description**

- **insert:** Insert element in the set.
- **Erase:** Erase elements from the set.
- **Swap:**	Exchange the content of the set.
- **Clear:** Delete all the elements of the set.
- **emplace:** Construct and insert the new elements into the set.
- **emplace_hint:**	Construct and insert new elements into the set by hint.

### Observers

**Functions/Description**

- **key_comp:**	Return a copy of key comparison object.
- **value_comp:**	Return a copy of value comparison object.

### Operations

**Functions/Description**

- **Find:**	Search for an element with given key.
- **count:** Gets the number of elements matching with given key.
- **lower_bound:** Returns an iterator to lower bound.
- **upper_bound:** Returns an iterator to upper bound.
- **equal_range:** Returns the range of elements matches with given key.


#### key_comp()

La funzione set key_comp() di C++ viene utilizzata per restituire una copia dell'oggetto di confronto utilizzato dal contenitore set per confrontare le chiavi.
L'oggetto di confronto può essere utilizzato per confrontare i valori chiave di due elementi in un contenitore. Questo oggetto di confronto viene fornito durante la costruzione dell'oggetto e può essere un puntatore a una funzione o a un oggetto funzione. In entrambi i casi, sono necessari due argomenti dello stesso tipo, restituendo true se il primo argomento è precedente al secondo argomento secondo l'ordine debole più ristretto, altrimenti restituisce false.

Sintassi

    Key_compare key_comp() const;  
    operator bool ( const  Key &  _Left , const Key &  _Right );  


#### value_comp()

La funzione set value_comp() di C++ restituisce un oggetto di confronto. Questa funzione viene utilizzata per confrontare due elementi per verificare se la chiave del primo va prima del secondo. Accetta due argomenti dello stesso tipo e restituisce true se il primo argomento precede il secondo argomento secondo l'ordine debole più ristretto, altrimenti false.

### lower_bound -limite inferiore

La funzione set lower_bound() di C++ viene utilizzata per restituire un iteratore che punta alla chiave nel contenitore set che equivale a val passato nel parametro.

Se val non è presente nel contenitore set, restituisce un iteratore che punta all'elemento immediatamente successivo che è appena maggiore di val.

Syntax
    iterator lower_bound (const value_type& val);                        //until C++ 11  
    
    iterator lower_bound (const value_type& val);                        //since C++ 11  
    const_iterator lower_bound (const value_type& val) const;      //since C++ 11    


Quando cerchiamo di trovare il limite inferiore di un valore che supera il contenitore o possiamo dire ciò che non è presente nel contenitore impostato allora torna l'elemento finale    