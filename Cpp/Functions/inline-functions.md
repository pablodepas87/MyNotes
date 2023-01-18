# Inline function in C++

Se si imposta una funzione come inline, il compilatore sostituisce la posizione della chiamata della funzione con la definizione della funzione inline in fase di compilazione.

Qualsiasi modifica apportata a una funzione inline richiederà che la funzione inline venga ricompilata di nuovo perché il compilatore dovrebbe sostituire tutto il codice con un nuovo codice; in caso contrario, eseguirà la vecchia funzionalità.

Syntax for an inline function:

    inline return_type function_name(parameters)  
    {  
        // function code?  
    }   

## difference between the normal function and the inline function.

All'interno del metodo main(), quando viene chiamata la funzione fun1(), il controllo viene trasferito alla definizione della funzione chiamata. **Gli indirizzi da cui viene chiamata la funzione e la definizione della funzione sono diversi.** Questo trasferimento di controllo **richiede molto tempo e aumenta il sovraccarico**.

Quando viene rilevata la **funzione inline, viene copiata la definizione della funzione.** In questo caso, **non vi è alcun trasferimento di controllo che consente di risparmiare molto tempo e riduce anche il sovraccarico.**

es: 

    #include <iostream>  
    using namespace std;  
    inline int add(int a, int b)  
    {  
        return(a+b);  
    }  
    
    int main()  
    {  
        cout<<"Addition of 'a' and 'b' is:"<<add(2,3);A  
        return 0;  
    
    }  

Una volta terminata la compilazione, il codice sarebbe come mostrato di seguito:

    #include<iostream>  
    using namespace std;  
    inline int add(int a, int b)  
    {  
        return(a+b);   
    }  
    int main()  
    {  
        cout<<"Addition of 'a' and 'b' is:"<< return(2+3); // è stata sostituita la chiamata con tutta la definizione della funzione(codice)  
        return 0;  
    }   

## Why do we need an inline function in C++?

L'**uso principale** della funzione **inline in C ++** è quello di **risparmiare spazio di memoria**. 

Ogni volta che viene chiamata la funzione, è necessario molto tempo per eseguire le attività, ad esempio passare alla funzione chiamante. 

Se la lunghezza della funzione è ridotta, la notevole quantità di tempo di esecuzione viene spesa in tali overhead e talvolta il tempo necessario per passare alla funzione chiamante sarà maggiore del tempo impiegato per eseguire tale funzione.

La soluzione a questo problema consiste nell'utilizzare definizioni di macro note come macro. Le macro del preprocessore sono ampiamente utilizzate in C, ma il principale svantaggio delle macro è che queste non sono funzioni normali, il che significa che il processo di controllo degli errori non verrà eseguito durante la compilazione.

C++ ha fornito una soluzione a questo problema. Nel caso della chiamata di funzione,**il tempo per chiamare funzioni così piccole è enorme** quindi per **superare** un tale **problema**, è stato introdotto un nuovo concetto noto come **funzione inline**. Quando la funzione viene incontrata all'interno del metodo main(), viene espansa con la sua definizione risparmiando così tempo.

Non possiamo fornire l'inlining alle funzioni nelle seguenti circostanze:

- Se una funzione è ricorsiva. 
- Se una funzione contiene un ciclo come for, while, ciclo do-while. 
- Se una funzione contiene variabili statiche. 
- Se una funzione contiene **switch** o l'istruzione **go to**.
  
### When do we require an inline function?

Una funzione inline può essere utilizzata negli scenari seguenti:

- quando è richiesta la performance. 
- Può essere utilizzato sulle macro. 
- Possiamo usare la funzione inline all'esterno della classe in modo da poter nascondere l'implementazione interna della funzione.

## Advantages of inline function

- Nella funzione inline, non è necessario chiamare una funzione, quindi non causa alcun sovraccarico. 
- Salva inoltre l'overhead dell'istruzione return della funzione. 
- Non richiede alcuno stack su cui possiamo fare il push o il pop delle variabili in quanto non esegue alcuna chiamata di funzione. 
- Una funzione inline è principalmente **vantaggiosa per i sistemi embedded** in quanto produce meno codice rispetto a una funzione normale.

## Disadvantages of inline function

- Le variabili create all'interno della funzione inline consumeranno registri aggiuntivi. Se le variabili aumentano, aumenta anche l'uso dei registri, il che può aumentare il sovraccarico sull'utilizzo delle risorse delle variabili del registro. Significa che quando la chiamata di funzione viene sostituita con un corpo di funzione inline, aumenta anche il numero di variabili, portando ad un aumento del numero di registri. Ciò causa un sovraccarico sull'utilizzo delle risorse.
- Se usiamo molte funzioni inline, anche il file eseguibile binario diventa grande.
- L'uso di così tante funzioni inline può ridurre il tasso di hit della cache delle istruzioni, riducendo la velocità di recupero delle istruzioni dalla memoria cache a quella della memoria primaria.
- aumenta anche il sovraccarico in fase di compilazione perché ogni volta che le modifiche vengono apportate all'interno della funzione inline, il codice deve essere ricompilato di nuovo per riflettere le modifiche; in caso contrario, eseguirà la vecchia funzionalità.
- A volte le funzioni inline non sono utili per molti sistemi embedded perché, in alcuni casi, la dimensione dell'embedded è considerata più importante della velocità.
- Può anche causare thrashing (quando le risorse di memoria virtuale di un computer vengono utilizzate in modo eccessivo) a causa dell'aumento delle dimensioni del file eseguibile binario. Se il thrashing si verifica nella memoria, porta al degrado delle prestazioni del computer.
