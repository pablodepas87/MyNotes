# C++ Vector

Un vettore è una classe contenitore di sequenza che implementa array dinamico, significa che la dimensione cambia automaticamente quando si aggiungono elementi. Un vettore memorizza gli elementi in posizioni di memoria contigue e alloca la memoria in base alle esigenze in fase di esecuzione.

dobbiamo utilizzare #include <vector> 

## Difference between vector and array

-Un array segue un approccio statico, significa che la sua dimensione non può essere modificata durante la fase di esecuzione mentre vector implementa array dinamico significa che si ridimensiona automaticamente quando aggiunge elementi.
-Vector ha anche caratteristiche di sicurezza, che salvano i programmi dal crash, a differenza di Array. Possiamo dare spazio di riserva al vettore, ma non agli array. Un array non è una classe, ma un **vettore è una classe**. Nei vettori gli elementi possono essere eliminati non negli array.
- L'array è la struttura dati di livello inferiore con relative proprietà specifiche.
- Vectors have functions & constructors; they are not index-based. They are the opposite of Arrays, which are index-based data structures.
- I vettori hanno funzioni e costruttori non sono basati su indici. Sono l'opposto degli array, che sono strutture di dati basate su indici. Qui, l'indirizzo più basso viene fornito al primo elemento e l'indirizzo più alto viene fornito all'ultimo elemento.
- I vettori sono utilizzati per l'inserimento e la cancellazione di un oggetto, mentre Arrays utilizzato per l'accesso frequente di oggetti.
- Gli array sono strutture di dati che risparmiano memoria, mentre Vector utilizza molta più memoria in cambio per gestire lo storage e crescere dinamicamente.
- Vector impiega più tempo per accedere agli elementi, ma questo non è il caso degli array.

Syntax
    Consider a vector 'v1'. Syntax would be:

    vector<object_type> v1;  


## Initialize Vector in C++

Un vettore può memorizzare più valori di dati come gli array, ma può memorizzare solo riferimenti a oggetti e non tipi di dati primitivi. Memorizzare il riferimento di un oggetto significa che puntano agli oggetti che contengono i dati, invece di memorizzarli.

A differenza di un array, **i vettori non devono essere inizializzati con dimensione**. Hanno la flessibilità di regolare in base al numero di riferimenti agli oggetti, il che è possibile perché il loro stoccaggio viene gestito automaticamente dal contenitore.

Il contenitore manterrà una copia interna di alloc, che viene utilizzata per allocare lo spazio di archiviazione per tutta la vita. I vettori possono essere localizzati e attraversati utilizzando iteratori, quindi sono collocati in una memoria contigua

Esistono quattro modi per inizializzare un vettore in C++:

- Inserendo i valori uno per uno 
- Utilizzando un costruttore di overload della classe vettoriale 
- Con l'aiuto di array 
- Utilizzando un altro vettore inizializzato

### By entering the values one-by-one

Tutti gli elementi di un vettore possono essere inseriti uno per uno usando il metodo della classe vettoriale 'push_back.'

    Algorithm

    Begin  
    Declare v of vector type.  
    Then we call push_back() function. This is done to insert values into vector v.  
    Then we print "Vector elements: \n".  
    " for (int a: v)  
        print all the elements of variable a.

      
    int main()   
    {  
        ....

        vector<int> vec;    
        vec.push_back(1);   
        vec.push_back(2);   
        vec.push_back(3);  
        
        for (int i = 0; i < vec.size(); i++)  
        {  
            cout << vec[i] << " ";   
        }  

        ....


        return 0;   
    }      


### Using an overloaded constructor     

Quando un vettore ha più elementi con gli stessi valori, allora usiamo questo metodo. Utilizzando un costruttore di overload della classe vettoriale - Questo metodo viene utilizzato principalmente quando un vettore viene riempito con più elementi con lo stesso valore.

    Algorithm

    Begin  
    First, we initialize a variable say 's'.  
    Then we have to create a vector say 'v' with size's'.  
    Then we initialize vector v1.  
    Then initialize v2 by v1.  
    Then we print the elements.  
    End


    int elements = 12;
    vector<int> mio_vettore(elements,8);   
    

### By the help of arrays -

Passiamo una matrice al costruttore della classe vector. L'array contiene gli elementi che riempiranno il vettore.

    Algorithm -

    Begin  
    First, we create a vector say v.  
    Then, we initialize the vector.  
    In the end, print the elements.  
    End.

    vector<int> vectr{9,8,7,6,5,4,3,2,1,0};   
    for (int i = 0; i < vectr.size(); i++)  
    {  
        cout << vectr[i] << " \n";   
    }  

### Using another initialized vector -

Qui, dobbiamo passare gli iteratori begin() e end() di un vettore inizializzato a un costruttore di classi vettoriali. Quindi inizializziamo un nuovo vettore e lo riempiamo con il vecchio vettore.

    Algorithm -

    Begin  
    First, we have to create a vector v1.  
    Then, we have to initialize vector v1 by an array.  
    Then we initialize vector v2 by v1.  
    We have to print the elements.  
    End.  

    vector<int> vec_1{1,2,3,4,5,6,7,8};  
    vector<int> vec_2(vec_1.begin(), vec_1.end());  
    for (int i = 0; i < vec_2.size(); i++)  
    {  
        cout << vec_2[i] << " \n";   
    }  

## Vector Class methods

|Function |	Description|
|---------|--------|
|at() |	It provides a reference to an element.|
|back() |	It gives a reference to the last element.|
|front() |	It gives a reference to the first element.|
|swap()	| It exchanges the elements between two vectors.|
|push_back() |	It adds a new element at the end.|
|pop_back()	| It removes a last element from the vector.|
|empty() |	It determines whether the vector is empty or not.|
|insert() |	It inserts new element at the specified position.|
|erase() |	It deletes the specified element.|
|resize() |	It modifies the size of the vector.|
|clear() |	It removes all the elements from the vector.|
|size()	|It determines a number of elements in the vector.|
|capacity() |	It determines the current capacity of the vector.|
|assign() |	It assigns new values to the vector.|
|operator=() |	It assigns new values to the vector container.|
|operator[]() |	It access a specified element.|
|end() |	It refers to the past-lats-element in the vector.|
|emplace() |	It inserts a new element just before the position pos.|
|emplace_back() |	It inserts a new element at the end.|
|rend() |	It points the element preceding the first element of the vector.|
|rbegin() |	It points the last element of the vector.|
|begin() |	It points the first element of the vector.|
|max_size()|	It determines the maximum size that vector can hold.|
|cend() |	It refers to the past-last-element in the vector.|
|cbegin() |	It refers to the first element of the vector.|
|crbegin() |	It refers to the last character of the vector.|
|crend() |	It refers to the element preceding the first element of the vector.|
|data() |	It writes the data of the vector into an array.|
|shrink_to_fit() |	It reduces the capacity and makes it equal to the size of the vector.|