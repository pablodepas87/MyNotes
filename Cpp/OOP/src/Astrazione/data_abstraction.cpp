/*
   Data Abstraction in C++

   L'astrazione dei dati è un processo di fornire solo i dettagli essenziali al mondo esterno e nascondere i dettagli interni, 
   cioè rappresentare solo i dettagli essenziali nel programma.

   Data Abstraction è una tecnica di programmazione che dipende dalla separazione dell'interfaccia e dai dettagli di implementazione del programma.

   Prendiamo un esempio di vita reale di AC, che può essere attivato o spento, cambiare la temperatura, cambiare la modalità e altri componenti esterni come ventola, altalena. Ma non conosciamo i dettagli interni dell'AC, cioè come funziona internamente. Quindi, possiamo dire che AC separa i dettagli di implementazione dall'interfaccia esterna 
   
   C++ fornisce un ottimo livello di astrazione. Ad esempio, la funzione pow() viene utilizzata per calcolare la potenza di un numero senza conoscere l'algoritmo seguito dalla funzione.

    Nel programma C ++ se implementiamo la classe con membri privati e pubblici, allora è un esempio di astrazione dei dati.

    L'astrazione dei dati può essere ottenuta in due modi:

        Abstraction using classes
        Abstraction in header files.

    Astrazione utilizzando classi: un'astrazione può essere ottenuta utilizzando le classi. 
        Una classe viene utilizzata per raggruppare tutti i membri di dati e le funzioni membro in una singola unità utilizzando gli specificatori di accesso.
        Una classe ha la responsabilità di determinare quale membro di dati deve essere visibile all'esterno e quale no.    

    Astrazione nei file di intestazione: un altro tipo di astrazione è il file di intestazione. Ad esempio, la funzione pow() disponibile viene utilizzata per calcolare la potenza di un numero senza sapere effettivamente quale funzione dell'algoritmo utilizza per calcolare la potenza. 
    Pertanto, possiamo dire che i file di intestazione nascondono tutti i dettagli di implementazione all'utente.

    Gli specificatori di accesso implementano l'astrazione:

    Advantages Of Abstraction:

    I dettagli di implementazione della classe sono protetti dagli errori involontari a livello di utente.
    Un programmatore non ha bisogno di scrivere il codice di basso livello.
    Data Abstraction evita la duplicazione del codice, cioè il programmatore non deve sottoporsi alle stesse attività ogni volta per eseguire l'operazione simile.
    Lo scopo principale dell'astrazione dei dati è riutilizzare il codice e il corretto partizionamento del codice tra le classi.
    L'implementazione interna può essere modificata senza influire sul codice a livello utente.
*/

#include <iostream>
#include <math.h>
using namespace std;

class Sum {
    public:
    void add(){
        cout << "Enter two numbers";
        cin >> x >> y;
        z = x+y; 
        cout << "Sum of two number is: " << z << endl;
    }

    private:
    int x,y,z;

};

int main(int *argc,char *argv[]){
    
    Sum sum;
    sum.add();
    
    int n=4;
    int power = 3;
    int result = pow(n,power);
    cout << "Cube of n is : " <<result<< endl;

    return 0;  
}
