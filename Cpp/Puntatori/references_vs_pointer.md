# C++ Reference vs Pointer

Il riferimento e il puntatore C++ sembrano essere simili, ma esistono alcune differenze tra di loro. Un riferimento è una variabile che è un altro nome della variabile esistente, mentre il puntatore è una variabile che memorizza l'indirizzo di un'altra variabile.

## What is Reference?

Una variabile di riferimento può essere considerata come un puntatore costante con indirizzamento automatico. Qui, l'indirizzamento automatico significa che il compilatore applica automaticamente l'operatore di indirizzamento (*).

    int &a = i;  

## What is Pointer?

Un puntatore è una variabile che contiene l'indirizzo di un'altra variabile. Può essere dereferenziato con l'aiuto dell'operatore (*) per accedere alla posizione di memoria a cui punta il puntatore.


## Differences between Reference and Pointer

- **Definition:** Una variabile di riferimento è un altro nome per una variabile già esistente. Viene utilizzato principalmente in "pass by reference" in cui la variabile di riferimento viene passata come parametro alla funzione e la funzione a cui viene passata questa variabile lavora sulla copia originale della variabile.

    void func(int &);  
    int main()  
    {  
        int a=10;  
        std::cout <<"Value of 'a' is :" <<a<< std::endl;  
        func(a);   
        std::cout << "Now value of 'a' is :" <<a<< std::endl;  
        return 0;  
    }  
    void func(int &m)  
    {  
        m=8;  
    }  

- **Declaration:**  Possiamo dichiarare una variabile di riferimento aggiungendo un simbolo '&' prima di una variabile. Se questo simbolo viene utilizzato nell'espressione, verrà trattato come un operatore di indirizzo.
Prima di utilizzare una variabile puntatore, dovremmo dichiarare una variabile puntatore e questa variabile viene creata aggiungendo un operatore '*' prima di una variabile.

- **Reassignment:** Non possiamo riassegnare la variabile di riferimento.
- **Memory Address** Nel caso di riferimento, sia la variabile di riferimento che quella effettiva si riferiscono allo stesso indirizzo. La nuova variabile non verrà assegnata alla variabile di riferimento fino a quando la variabile effettiva non viene eliminata o esce dall'ambito.
- **NULL value**: Non possiamo assegnare il valore NULL alla variabile di riferimento, ma la variabile puntatore può essere assegnata con un valore NULL.
- **Indirection:** I puntatori possono avere puntatore a puntatore che offre più di un livello.
  
    int *p;  
    int a=8;  
    int **q;  
    p=&a;  
    q=&p; 

- **Arithmetic Operations:** Come sappiamo, le operazioni aritmetiche possono essere applicate ai puntatori denominati "Pointer Arithmetic", ma le operazioni aritmetiche non possono essere applicate ai riferimenti. Non esiste una parola, ovvero l'aritmetica di riferimento esiste in C++.

    int a[]={1,2,3,4,5}; // array initialization  
    int *ptr;  // pointer declaration  
    ptr=a; assigning base address to pointer ptr.  
    cout<<"The value of *ptr is :"<<*ptr;  
    ptr=ptr+1;  // incrementing the value of ptr by 1.

    int value=90;  // variable declaration  
    int &a=value;   // assigning value to the reference  
    &a=&a+5 // arithmetic operation is not possible with reference variable, it throws an error.    