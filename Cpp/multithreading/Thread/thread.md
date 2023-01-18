## C++ Thread Concurrency

Un thread o thread di esecuzione, in informatica, è una suddivisione di un processo in due o più filoni (istanze) o sottoprocessi che vengono eseguiti concorrentemente da un sistema di elaborazione monoprocessore (monothreading) o multiprocessore (multithreading) o multicore.

Introdotti da C++ 11

un thread è contenuto all'interno di un processo e diversi thread contenuti nello stesso processo condividono alcune risorse, lo spazio d'indirizzamento del processo, mentre processi differenti non condividono le loro risorse.

![](https://it.wikipedia.org/wiki/Thread_(informatica)#/media/File:Multithreaded_process.svg)

Nelle architetture a processore singolo, quando la CPU esegue alternativamente istruzioni di thread differenti, si parla di multithreading a divisione di tempo: la commutazione fra i thread avviene di solito tanto frequentemente da dare all'utente l'impressione che tutti i task siano eseguiti contemporaneamente. Nelle architetture multi-processore i thread vengono invece realmente eseguiti contemporaneamente, cioè in parallelo, ciascuno su un distinto core.

Gli stati di un thread sono **ready, running e blocked**.

## operazioni di base associate ai cambiamenti di stato di un thread.

- **Creazione:** quando un processo viene creato, si crea anche un thread. Successivamente un thread può creare un altro thread a cui deve fornire il puntatore delle istruzioni e gli argomenti: vengono creati un contesto per i registri e gli stack, e il nuovo thread è messo nella coda dei ready.
- **Blocco:** quando un thread deve aspettare un particolare evento entra in stato blocked (salvando i registri utente, il program counter e lo stack pointer)
- **Sblocco:** quando si verifica l'evento per cui il processo era stato posto in stato blocked, il thread passa allo stato ready.
- **Terminazione:** quando un thread completa il suo compito, il suo contesto per i registri e i suoi stack vengono deallocati.


La **sincronizzazione di un thread con un altro** è normalmente necessaria per permettere a questi di comunicare tra di loro e di restituire i risultati di una funzione al processo principale; essa viene normalmente **realizzata tramite mutex.**

