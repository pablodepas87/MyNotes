## COMPONENTS OF STL

# CONTAINERS

I contenitori possono essere descritti come gli oggetti che contengono i dati dello stesso tipo. I contenitori vengono utilizzati per implementare diverse strutture di dati, ad esempio array, liste, alberi, ecc.

Di seguito sono riportati i contenitori che forniscono i dettagli di tutti i contenitori, nonché il file di intestazione e il tipo di iteratore ad essi associato:

|Container	| Description |	Header file	| iterator|
|-----|----|----|----|
|vector | vector è una classe che crea un array dinamico che consente inserimenti e cancellazioni sul retro. |	<vector> |	Random access|
|list |list è il contenitore di sequenze che consente gli inserimenti e le eliminazioni da qualsiasi punto|	<list>	| Bidirectional|
|deque |deque è la coda a doppia estremità che consente l'inserimento e la cancellazione da entrambe le estremità. |<deque>	|Random access|
|set |	Set è un contenitore associato per la memorizzazione di set univoci.	| <set>	| Bidirectional |
|multiset |	Multiset è un contenitore associato per la memorizzazione di insiemi non univoci. |	<set> |	Bidirectional |
|map |Map è un contenitore associato per la memorizzazione di coppie chiave-valore univoche, ovvero ogni chiave è associata a un solo valore (mappatura uno a uno). |	<map> |	Bidirectional |
|multimap |	multimap is an associate container for storing key- value pair, and each key can be associated with more than one value. |	<map> |	Bidirectional|
|stack |	It follows last in first out(LIFO).	| <stack> |	No iterator|
|queue |	It follows first in first out(FIFO). |	<queue>	|No iterator|
|Priority-queue	|First element out is always the highest priority element. | <queue> |No iterator|

### Classificazione dei contenitori :

- Sequenziali
- Associativi
- Derivati 

![](https://static.javatpoint.com/cpp/images/stl-components.png)

## ITERATOR

- Gli iteratori sono entità simili a puntatori utilizzate per accedere ai singoli elementi in un contenitore. 
- Gli iteratori vengono spostati in sequenza da un elemento a un altro. Questo processo è noto come iterating through a container.

![](https://static.javatpoint.com/cpp/images/stl-components2.png)

Iterator contiene principalmente due funzioni:

- **begin():** La funzione membro begin() restituisce un iteratore al primo elemento del vettore.
- **end():** La funzione membro end() restituisce un iteratore all'elemento past-the-last di un contenitore

![](https://static.javatpoint.com/cpp/images/stl-components3.png)


## Iterator Categories

Gli teratori sono principalmente suddivisi in cinque categorie:

![](https://static.javatpoint.com/cpp/images/stl-components4.png)

### Input Iterator
- Un iteratore di input è un iteratore che consente al programma di leggere i valori dal contenitore. 
- La dereferenziazione dell'iteratore di input ci consente di leggere un valore dal contenitore, ma non altera il valore. 
- Un iteratore di input è un iteratore unidirezionale. 
- Un iteratore di input può essere incrementato, ma non può essere decrementato.

### Output Iterator

- Un iteratore di output è simile all'iteratore di input, tranne per il fatto che consente al programma di modificare un valore del - contenitore, ma non consente di leggerlo. 
- È un iteratore unidirezionale. 
- È un iteratore di sola scrittura

### Forward Iterator

- L'iteratore di inoltro utilizza l'operatore ++ per spostarsi all'interno del contenitore. 
- L'iteratore di inoltro passa attraverso ogni elemento di un contenitore e un elemento alla volta.

### Bidirectional Iterator

- Un iteratore bidirezionale è simile all'iteratore in avanti, tranne per il fatto che si sposta anche nella direzione opposta. 
- È un iteratore a due vie. 
- Può essere incrementato e decrementato.

### Random Access Iterator
- L'iteratore ad accesso casuale può essere utilizzato per accedere all'elemento casuale di un contenitore. 
- L'iteratore ad accesso casuale ha tutte le caratteristiche di un iteratore bidirezionale e ha anche un'altra funzionalità aggiuntiva, ovvero l'aggiunta del puntatore. Utilizzando l'operazione di aggiunta del puntatore, possiamo accedere all'elemento casuale di un contenitore

## Operations supported by iterators

|iterator |	Element access	|Read |	Write |	Increment operation |	Comparison|
|---|---|---|----|-----|---|
|input | ->	| v = *p|	++ | ==,!= |
|output	| |		*p = v|	++ | |	
|forward|	->	|v = *p | *p = v |	++ | ==,!= |
|Bidirectional | -> |v = *p | *p = v | ++,-- | ==,!= |
|Random access | ->,[ ]	| v = *p |	*p = v | ++,--,+,-,+=,--= |	==,!=,<,>,<=,>= |


## Algorithms

Gli algoritmi sono le funzioni utilizzate in una varietà di contenitori per l'elaborazione del suo contenuto.

Points to Remember:
- Gli algoritmi forniscono circa 60 funzioni dell'algoritmo per eseguire le operazioni complesse.
- Gli algoritmi standard ci consentono di lavorare contemporaneamente con due diversi tipi di contenitore. 
- Gli algoritmi non sono le funzioni membro di un contenitore, ma sono le funzioni modello autonome. 
- Gli algoritmi consentono di risparmiare molto tempo e fatica. 
- Se vogliamo accedere agli algoritmi STL, dobbiamo includere <algorithm> nel nostro programma.

Gli algoritmi STL possono essere classificati come:

**Nonmutating algorithms:** Gli algoritmi non mutanti sono gli algoritmi che non alterano alcun valore di un oggetto contenitore né cambiano l'ordine degli elementi in cui appaiono. Questi algoritmi possono essere utilizzati per tutti gli oggetti contenitore e utilizzano gli iteratori forward.
**Mutating algorithms:** Gli algoritmi di mutazione sono gli algoritmi che possono essere utilizzati per modificare il valore di un contenitore. Possono anche essere utilizzati per modificare l'ordine degli elementi in cui appaiono.
**Sorting algorithms:** Gli algoritmi di ordinamento sono gli algoritmi di modifica utilizzati per ordinare gli elementi in un contenitore.
**Set algorithms:** Gli algoritmi di impostazione sono noti anche come algoritmi di intervallo ordinato. Questo algoritmo viene utilizzato per eseguire alcune funzioni su un contenitore che migliora notevolmente l'efficienza di un programma.
**Relational algorithms:** Gli algoritmi relazionali sono gli algoritmi utilizzati per lavorare sui dati numerici. Sono principalmente progettati per eseguire le operazioni matematiche a tutti gli elementi in un contenitore.

![](https://static.javatpoint.com/cpp/images/stl-components5.png)



