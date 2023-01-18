# malloc() vs new in C++

Sia malloc() che new in C++ vengono utilizzati per lo stesso scopo. Vengono utilizzati per allocare memoria in fase di esecuzione. Tuttavia, malloc() e new hanno una sintassi diversa. La differenza principale tra malloc() e new è che il new è un operatore mentre malloc() è una funzione di libreria standard predefinita in un file di intestazione stdlib.

## What is new?

 è un operatore di allocazione della memoria, che viene utilizzato per allocare la memoria in fase di esecuzione. La memoria inizializzata da **new** viene allocata nell' heap. Restituisce l'indirizzo iniziale della memoria, che viene assegnato alla variabile. La funzionalità di **new** in C++ è simile alla funzione malloc(), utilizzata nel linguaggio di programmazione C. C ++ è compatibile anche con la funzione malloc(), ma **new** viene utilizzato principalmente a causa dei suoi vantaggi.

    Syntax of new operator

    type variable = new type(parameter_list);  

**type:** Definisce il tipo di dati della variabile per la quale la memoria viene allocata dal nuovo operatore.

**variable:** È il nome della variabile che punta alla memoria.

**parameter_list:** È l'elenco di valori inizializzati su una variabile.

New non utilizza l'operatore sizeof() per allocare la memoria. Inoltre, non utilizza il ridimensionamento poiché new alloca memoria sufficiente per un oggetto. Si tratta di un costrutto che chiama il costruttore al momento della dichiarazione per inizializzare un oggetto.

Come sappiamo **new** alloca la memoria in un heap; Se la memoria non è disponibile in un heap e **new** tenta di allocare la memoria, viene generata l'eccezione. Se il nostro codice non è in grado di gestire l'eccezione, il programma verrà terminato in modo anomalo.

## What is malloc()?

Un malloc() è una funzione che alloca memoria in fase di runtime. Questa funzione restituisce il puntatore void, il che significa che può essere assegnato a qualsiasi tipo di puntatore. Questo puntatore void può essere ulteriormente typecast per ottenere il puntatore che punta alla memoria di un tipo specificato.

La sintassi della funzione malloc() è riportata di seguito:

    type variable_name = (type *)malloc(sizeof(type));   

**type:** È il tipo di dati della variabile per la quale deve essere allocata la memoria.

**variable_name:** It defines the name of the variable that points to the memory.

**(type*):** Definisce il nome della variabile che punta alla memoria.

**sizeof():** L'operatore sizeof() viene utilizzato nella funzione malloc() per ottenere la dimensione della memoria richiesta per l'allocazione.

Se la memoria sufficiente non è disponibile, la memoria può essere ridimensionata utilizzando la funzione realloc(). Poiché sappiamo che tutti i requisiti di memoria dinamica sono soddisfatti utilizzando la memoria heap, la funzione malloc() alloca anche la memoria in un heap e restituisce il puntatore ad esso. La memoria heap è molto limitata, quindi quando il nostro codice inizia l'esecuzione, contrassegna la memoria in uso e quando il nostro codice completa il suo compito, libera la memoria usando la funzione free(). Se la memoria sufficiente non è disponibile e il codice tenta di accedere alla memoria, la funzione malloc() restituisce il puntatore NULL. La memoria allocata dalla funzione malloc() può essere deallocata utilizzando la funzione free().


Se non usiamo la funzione free() nel posto corretto, allora può portare alla causa del puntatore penzolante

## Differences between the malloc() and new

- **new** operatore costruisce un oggetto, cioè chiama il costruttore per inizializzare un oggetto mentre la funzione malloc() non chiama il costruttore. Il **new** richiama il costruttore e l'operatore **delete** richiama il distruttore per distruggere l'oggetto. Questa è la più grande differenza tra il malloc() e **new**
- new è un operatore, mentre malloc() è una funzione predefinita nel file di intestazione stdlib.
- L'operatore new può essere sovraccaricato mentre la funzione malloc() non può essere sovraccaricata.
- Se la memoria sufficiente non è disponibile in un heap, il nuovo operatore genererà un'eccezione mentre la funzione malloc() restituirà un puntatore NULL.
- con new dobbiamo specificare il numero di oggetti da allocare mentre nella funzione malloc(), dobbiamo specificare il numero di byte da allocare.
- con **new** dobbiamo usare l'operatore delete per deallocare la memoria. Ma nel caso della funzione malloc(), dobbiamo usare la funzione free() per deallocare la memoria.

- D'altra parte, la memoria allocata utilizzando la funzione malloc() può essere deallocata utilizzando la funzione free().
- Una volta allocata la memoria utilizzando il nuovo operatore, non è possibile ridimensionarla. D'altra parte, la memoria viene allocata usando la funzione malloc(); Quindi, può essere riallocato utilizzando la funzione realloc().
- Il tempo di esecuzione di new è inferiore alla funzione malloc() poiché new è un costrutto e malloc è una funzione.
- Il nuovo operatore non restituisce la variabile puntatore separata; Restituisce l'indirizzo dell'oggetto appena creato. D'altra parte, la funzione malloc() restituisce il puntatore void che può essere ulteriormente typecast in un tipo specificato