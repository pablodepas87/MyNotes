# C++ Input Iterator

- Input Iterator è un iteratore utilizzato per leggere i valori dal contenitore.
- Dereferenziare un iteratore di input ci consente di recuperare il valore dal contenitore
- Non altera il valore di un contenitore.
- È un iteratore unidirezionale.
- Può essere incrementato, ma non decrementato.
- Gli **operatori** che possono essere utilizzati per un iteratore di input sono l'operatore di incremento(++), l'operatore di decremento(--), l'operatore di dereferenziazione(*), l'operatore non uguale(!=) e l'operatore uguale(==).
- Un Iteratore di input viene prodotto da **Istream**
- Un iteratore Forward, un iteratore bidirezionale e un iteratore ad accesso casuale sono tutti iteratori di input validi.

|Property |	Valid Expressions|
|---|---|
|An input iterator is a copy-constructible, copy-assignable and destructible. |	X b(a); b= a;|
|It can be compared by using a equality or inequality operator. | a==b; a!=b; |
|It can be dereferenced. |	*a; |
|It can be incremented.	| ++a; | 

Dove 'X' è di tipo iteratore di input mentre 'a' e 'b' sono gli oggetti di un tipo iteratore.

Features of Input iterator:

- **Operatore di uguaglianza/disuguaglianza:** un iteratore di input può essere confrontato utilizzando un operatore di uguaglianza o disuguaglianza. I due iteratori sono uguali solo quando entrambi gli iteratori puntano alla stessa posizione altrimenti no. Supponiamo che 'A' e 'B' siano i due iteratori:
  
    A ==B;   // equality operator  
    A!=B;   // inequality operator

- **Dereferenziamento di un iteratore:** possiamo dereferenziare un iteratore utilizzando un operatore di dereferenziazione(*).     

    Supponiamo che 'A' sia un iteratore:  

    *A     //  Dereferencing 'A' iterator by using *.  

- **Swappable:** i due iteratori che puntano a due posizioni diverse possono essere scambiati.

    ex: 'it' and 'it1' iterators are swapped by using an object of a third iterator, i.e., temp.


