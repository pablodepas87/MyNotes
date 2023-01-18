# C++ References

Finora abbiamo letto che il C++ supporta due tipi di variabili:

- Una variabile ordinaria è una variabile che contiene il valore di un certo tipo. Ad esempio, creiamo una variabile di tipo int, il che significa che la variabile può contenere il valore di tipo integer.
- Un puntatore è una variabile che memorizza l'indirizzo di un'altra variabile. Può essere dereferenziato per recuperare il valore a cui punta questo puntatore.

C'è un'altra variabile che C++ supporta, cioè i riferimenti. È una variabile che si comporta come un alias per un'altra variabile.

## How to create a reference?

Il riferimento può essere creato semplicemente utilizzando un operatore e commerciale (&). Quando creiamo una variabile, occupa una posizione di memoria. Possiamo creare un riferimento della variabile; pertanto, possiamo accedere alla variabile originale utilizzando il nome della variabile o il riferimento. Per esempio:

    int myvar = 10;   // create the variable

    int &myreferences = myvar; // we have created the reference variable (alias)

### C++ provides two types of references:

- Riferimenti a valori non const
- Riferimenti come alias

#### References to non-const values

Può essere dichiarato usando l'operatore & con la variabile del tipo di riferimento

    int a=10;  
    int &value=a;  

#### References as aliases

Riferimenti come alias è un altro nome della variabile a cui si fa riferimento.

    int a=10;   // 'a' is a variable.  
    int &b=a;   // 'b' reference to a.  
    int &c=a;   // 'c' reference to a.  


### Properties of References

- **Inizializzazione:** Deve essere inizializzato al momento della dichiarazione.
- **Riassegnazione:** Non può essere riassegnato significa che la variabile di riferimento non può essere modificata.

    int x=11; // variable initialization  
    int z=67;  
    int &y=x; // y reference to x  
    int &y=z; // y reference to z, but throws a compile-time error.  

Nel codice precedente, la variabile di riferimento 'y' si riferisce alla variabile 'x', quindi 'z' è assegnata a 'y'. Ma questa riassegnazione non è possibile con la variabile di riferimento, quindi genera un errore in fase di compilazione.

### Function Parameters

I riferimenti possono anche essere passati come parametro di funzione. Non crea una copia dell'argomento e si comporta come un alias per un parametro. Migliora le prestazioni in quanto non crea una copia dell'argomento.

    int main()  
    {  
    int a=9; // variable initialization  
    int b=10; // variable initialization  
    swap(a, b); // function calling  
     ....  
    }  

    void swap(int &p, int &q) // function definition  
    {  
        int temp; // variable declaration  
        temp=p;  
        p=q;  
        q=temp;  
    }  

### References as shortcuts

Con l'aiuto dei riferimenti, possiamo facilmente accedere ai dati nidificati.
  
    struct profile  
    {  
    int id;  
    };  
    struct employee  
    {  
    profile p;  
    };  
    int main()  
    {  
    employee e;  
    int &ref=e.p.id;  
    ref=34;  
    std::cout << e.p.id << std::endl;  
    }  