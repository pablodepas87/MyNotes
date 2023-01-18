# C++ List

List è un contenitore contiguo mentre vector è un contenitore non contiguo, cioè list memorizza gli elementi su una memoria contigua e vector memorizza su una memoria non contigua.

L'inserimento e la cancellazione nel mezzo del vettore è molto costoso in quanto richiede molto tempo per spostare tutti gli elementi. Linklist supera questo problema ed è implementato utilizzando il contenitore di liste.

List è un conteiner bidirezionale e fornisce un modo efficiente per le operazioni di inserimento ed eliminazione.

L'attraversamento è lento nell'elenco poiché gli elementi della lista sono accessibili in sequenza mentre il vettore supporta un accesso casuale.

## Template for list

    #include<iostream>  
    #include<list>  
    using namespace std;  
    int main()  
    {  
    list<int> l;  
    }  


Crea un elenco vuoto di valori di tipo intero.

### List can also be initalised with the parameters.

    #include<iostream>  
    #include<list>  
    using namespace std;  
    int main()  
    {  
        list<int> l{1,2,3,4};  
    }  

### List can be initialised in two ways.

    list<int>  new_list{1,2,3,4};  
    or  
    list<int> new_list = {1,2,3,4};  

## C++ List Functions

|Method | Description|
|---- |-----|
|insert() |	It inserts the new element before the position pointed by the iterator. |
|push_back() |	It adds a new element at the end of the vector. |
|push_front() |	It adds a new element to the front. |
|pop_back() |	It deletes the last element. |
|pop_front() |	It deletes the first element. |
|empty()|	It checks whether the list is empty or not.|
|size()|	It finds the number of elements present in the list.|
|max_size()|	It finds the maximum size of the list. |
|front() |	It returns the first element of the list. |
|back()	| It returns the last element of the list. |
|swap()	| It swaps two list when the type of both the list are same. |
|reverse() | It reverses the elements of the list. |
|sort()	| It sorts the elements of the list in an increasing order. |
|merge() |	It merges the two sorted list. |
|splice() |	It inserts a new list into the invoking list. |
|unique() |	It removes all the duplicate elements from the list. |
|resize() |	It changes the size of the list container. |
|assign() |	It assigns a new element to the list container. |
|emplace() |	It inserts a new element at a specified position. |
|emplace_back() |	It inserts a new element at the end of the vector. |
|emplace_front() |	It inserts a new element at the beginning of the list. |