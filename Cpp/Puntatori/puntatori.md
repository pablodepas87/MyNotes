# C++ Pointers

Il puntatore nel linguaggio C ++ è una variabile, è anche noto come localizzatore o indicatore che punta a un indirizzo di un valore.

![](https://static.javatpoint.com/cpp/images/cpp-pointers1.png)

## Advantage of pointer

- I Puntatori riducono il codice e migliora le prestazioni, viene utilizzato per recuperare stringhe, alberi ecc. E utilizzato con array, strutture e funzioni.
- Possiamo restituire più valori dalla funzione usando il puntatore.
- Ti consente di accedere a qualsiasi posizione di memoria nella memoria del computer. 

## Usage of pointer

Esistono molti usi di puntatori nel linguaggio C ++.

1. Allocazione dinamica della memoria Nel linguaggio c, possiamo allocare dinamicamente la memoria usando le funzioni malloc() e calloc() dove viene utilizzato il puntatore. 
2. Matrici, funzioni e strutture I puntatori in linguaggio C sono ampiamente utilizzati in array, funzioni e strutture. Riduce il codice e migliora le prestazioni.

## Symbols used in pointer

|Symbol |	Name | Description |
|---|---|---|
|& (ampersand sign)	| Address operator |	Determine the address of a variable.|
|∗ (asterisk sign)	|Indirection operator |	Access the value of an address.|

## Declaring a pointer

I puntatori in C++ possono essere dichiarati usando ∗ (asterisk symbol).

    int ∗   a; //pointer to int    
    char ∗  c; //pointer to char  

se al puntatore nn è stato assegnato nessun indirizzo di variabile nn posso assegnargli un valore   

# C++ Array of Pointers

Matrice e puntatori sono strettamente correlati tra loro. In C++, il nome di una matrice è considerato un puntatore, cioè il nome di un array contiene l'indirizzo di un elemento. C++ considera il nome della matrice come l'indirizzo del primo elemento. Ad esempio, se creiamo un array, cioè segni che contengono i 20 valori di tipo intero, allora i segni conterranno l'indirizzo del primo elemento, cioè marks. Pertanto, possiamo dire che il nome dell'array (marchi) è un puntatore che contiene l'indirizzo del primo elemento di un array.

### Array of Pointers

Una matrice di puntatori è una matrice costituita da variabili di tipo puntatore, il che significa che la variabile è un puntatore indirizzato a qualche altro elemento.

    int *ptr[5];         // array of 5 integer pointer.   

Nella dichiarazione precedente, dichiariamo una matrice di puntatore denominata ptr e alloca 5 puntatori interi in memoria.

L'elemento di una matrice di un puntatore può anche essere inizializzato assegnando l'indirizzo di un altro elemento. Osserviamo questo caso attraverso un esempio.

    int a; // variable declaration.  
    ptr[2] = &a;

Nel codice precedente, stiamo assegnando l'indirizzo della variabile 'A' al terzo elemento di un array 'ptr'.      

Possiamo anche recuperare il valore di 'a' dereferenziando il puntatore.

*ptr[2];  

## Array of Pointer to Strings

Un array di puntatori a stringhe è un array di puntatori di caratteri che contiene l'indirizzo del primo carattere di una stringa o possiamo dire l'indirizzo di base di una stringa.

Di seguito sono riportate le differenze tra un array di puntatori alla stringa e un array bidimensionale di caratteri:

- Un array di puntatori a stringhe è più efficiente dell'array bidimensionale di caratteri in caso di consumo di memoria perché un array di puntatori a stringhe consuma meno memoria dell'array bidimensionale di caratteri per memorizzare le stringhe.
- In un array di puntatori, la manipolazione delle stringhe è relativamente più semplice rispetto al caso dell'array 2d. Possiamo anche cambiare facilmente la posizione delle corde usando i puntatori.

Vediamo come dichiarare l'array di puntatori a stringa.

Innanzitutto, dichiariamo l'array del puntatore alla stringa:

    char *names[5] = {"john",  
                  "Peter",  
                  "Marco",  
                  "Devin",  
                  "Ronan"};  

Nel caso precedente, abbiamo eseguito l'inizializzazione al momento della dichiarazione, quindi non è necessario menzionare la dimensione dell'array di un puntatore. Il codice precedente può essere riscritto come:

    char *names[ ] = {"john",  
                    "Peter",  
                    "Marco",  
                    "Devin",  
                    "Ronan"}; 


# C++ Void Pointer

Un puntatore void è un puntatore generico che può contenere l'indirizzo di qualsiasi tipo di dati, ma non è associato ad alcun tipo di dati.

Syntax of void pointer

    void *ptr;

In C++, non possiamo assegnare l'indirizzo di una variabile alla variabile di un diverso tipo di dati. Considera il seguente esempio:    

    int *ptr;  // integer pointer declaration  
    float a=10.2; // floating variable initialization  
    ptr= &a;  // This statement throws an error.  

C++ ha superato il problema di cui sopra utilizzando il puntatore void C++ poiché un puntatore void può contenere l'indirizzo di qualsiasi tipo di dati.

### Difference between void pointer in C and C++

In C, possiamo assegnare il puntatore void a qualsiasi altro tipo di puntatore senza alcun typecasting, mentre in C++, dobbiamo effettuare il typecast quando assegniamo il tipo di puntatore void a qualsiasi altro tipo di puntatore.

In C,
 
    int main()  
    {  
        void *ptr; // void pointer declaration  
        int *ptr1;  // integer pointer declaration  
        int a =90;  // integer variable initialization  
        ptr=&a; // storing the address of 'a' in ptr  
        ptr1=ptr; // assigning void pointer to integer pointer type.  
        printf("The value of *ptr1 : %d",*ptr1);  
        return 0;  
    }  

In c++

    int main()  
    {  
        void *ptr; // void pointer declaration  
        int *ptr1; // integer pointer declaration  
        int data=10; // integer variable initialization  
        ptr=&data;  // storing the address of data variable in void pointer variable  
        ptr1=(int *)ptr; // assigning void pointer to integer pointer  
        std::cout << "The value of *ptr1 is : " <<*ptr1<< std::endl;  
        return 0;  
    }  