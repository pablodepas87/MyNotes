# C++ For Loop

Il ciclo C++ for viene utilizzato per iterare più volte una parte del programma. Se il numero di iterazioni è fisso, si consiglia di utilizzare cicli for di tempo o di tipo while.

Il ciclo C++ for è uguale a C/C#. Possiamo inizializzare la variabile, controllare la condizione e il valore di incremento / decremento.

Sintassi

    for(initialization; condition; incr/decr){    
    //code to be executed    
    } 

!()[https://static.javatpoint.com/cpp/images/cpp-for-loop1.png]    

## C++ Nested For Loop

In C ++, possiamo usare per il ciclo all'interno di un altro ciclo for, è noto come nidificato per il ciclo. Il ciclo interno viene eseguito completamente quando il ciclo esterno viene eseguito una volta. Quindi, se il loop esterno e il loop interno vengono eseguiti 4 volte, il loop interno verrà eseguito 4 volte per ogni loop esterno, ovvero un totale di 16 volte.

## C++ Infinite For Loop

Se usiamo il doppio punto e virgola nel ciclo for, verrà eseguito infinite volte. Vediamo un semplice esempio di infinito per loop in C ++.

    int main() {

        for(;;){
            // abbimo creato un loop infinito tipico della progrmmazione nei microcrontrollori

            cout<<"Infinitive For Loop";    
            
        }
    }
