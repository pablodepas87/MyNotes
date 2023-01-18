# What is Memory Management?

La gestione della memoria è un processo di gestione della memoria del computer, assegnando lo spazio di memoria ai programmi per migliorare le prestazioni complessive del sistema.

## Why is memory management required?

Poiché sappiamo che gli array memorizzano i dati omogenei, la maggior parte delle volte la memoria viene allocata all'array al momento della dichiarazione. A volte la situazione si verifica quando la memoria esatta non viene determinata fino al runtime. Per evitare una situazione del genere, dichiariamo un array con una dimensione massima, ma parte della memoria sarà inutilizzata. Per evitare lo spreco di memoria, viene utilizzato l'operatore **new** per allocare dinamicamente la memoria in fase di esecuzione.

## Memory Management Operators

Nel linguaggio C, usiamo le funzioni **malloc()** o **calloc()** per allocare la memoria dinamicamente in fase di esecuzione, e la funzione **free()** viene utilizzata per deallocare la memoria allocata dinamicamente. C++ supporta anche queste funzioni, ma C++ definisce anche operatori unari come **new** e **delete** per eseguire le stesse attività, ovvero allocare e liberare memoria.

## New operator

Viene utilizzato per creare l'oggetto mentre un operatore **delete** viene utilizzato per eliminare l'oggetto. Quando l'oggetto viene creato utilizzando **new**, l'oggetto esisterà finché non verrà utilizzato in modo esplicito l'operatore delete per eliminare l'oggetto. Pertanto, possiamo dire che la durata dell'oggetto non è correlata alla struttura a blocchi del programma.

Syntax

    pointer_variable = new data-type  

    ex: 
    int *p; // dichiarazione operatore
    p = new int; // creo un oggetto di tipo int

    Possiamo anche combinare queste due affermazioni come segue:

    int *p = new int;

La sintassi precedente viene utilizzata per creare l'oggetto utilizzando l'operatore new. 'pointer_variable' è il nome della variabile puntatore, 'new' è l'operatore e 'data-type' definisce il tipo dei dati.

### Assegnazione di un valore all'oggetto appena creato

Due modi per assegnare valori all'oggetto appena creato:

- Possiamo assegnare il valore all'oggetto appena creato semplicemente usando l'operatore di assegnazione. 

    *p = 45;
    *fl = 32.0;

- Possiamo anche assegnare i valori utilizzando il nuovo operatore che può essere fatto come segue:

    pointer_variable = new data-type(value);  

    int *p = new int(45);

### How to create a single dimensional array

Poiché sappiamo che il nuovo operatore viene utilizzato per creare spazio di memoria per qualsiasi tipo di dati o anche tipo di dati definito dall'utente come un array, strutture, unioni, ecc., Quindi la sintassi per la creazione di un array unidimensionale è riportata di seguito:

    pointer-variable = new data-type[size];  

    int *a = new int[20];

## Delete operator

Quando la memoria non è più necessaria, deve essere deallocata in modo che la memoria possa essere utilizzata per un altro scopo. Questa operazione può essere ottenuta utilizzando l'operatore delete, come illustrato di seguito:

    delete pointer_variable;  
    ex:

    delete p; 

Nell'istruzione precedente, **delete** è l'operatore utilizzato per eliminare l'oggetto esistente e 'pointer_variable' è il nome della variabile puntatore.    

L'array allocato dinamicamente può anche essere rimosso dallo spazio di memoria utilizzando la sintassi seguente:

    delete[size] array_name;

    delete [] pointer_variable;   //dalle recenti versioni di c++

## Advantages of the new operator

- Non utilizza l'operatore sizeof() poiché calcola automaticamente la dimensione dell'oggetto dati.
- Restituisce automaticamente il puntatore del tipo di dati corretto, pertanto non è necessario utilizzare il typecasting
- Come altri operatori, anche l'operatore new e delete può essere sovraccaricato.
- Consente inoltre di inizializzare l'oggetto dati durante la creazione dello spazio di memoria per l'oggetto.