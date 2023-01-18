# C++ Files and Streams

Nella programmazione C ++ stiamo usando la libreria standard iostream, fornisce metodi cin e cout per la lettura rispettivamente dall'input e dalla scrittura all'output.

Per leggere e scrivere da un file  usiamo la libreria standard C ++ chiamata fstream. Vediamo i tipi di dati definiti nella libreria fstream è:

|Data Type | Description|
|---|---|
|**fstream** |	Viene utilizzato per creare file, scrivere informazioni su file e leggere informazioni da file.|
|**ifstream** |	Viene utilizzato per leggere le informazioni dal files.|
|**ofstream** |	Viene utilizzato per creare file e scrivere informazioni sui file.|

## C++ getline()

Il cin è un oggetto che viene utilizzato per prendere input dall'utente ma non consente di prendere l'input in più righe. Per accettare le righe multiple, usiamo la funzione getline(). È una funzione predefinita definita in un file di intestazione utilizzato per accettare una riga o una stringa dal flusso di input fino a quando non viene rilevato il carattere di delimitazione.

Syntax of getline() function:

Esistono due modi per rappresentare una funzione:

- Il primo modo di dichiarare è passare tre parametri.

    istream& getline( istream& is, string& str, char delim );  

    dove:

    **is:** È un oggetto della classe istream che definisce da dove leggere il flusso di input.

    **str:**Si tratta di un oggetto stringa in cui è memorizzata la stringa.

    **delim:** È il carattere di delimitazione.

    **Return value:** Questa funzione restituisce l'oggetto flusso di input, che viene passato come parametro alla funzione.

- Il secondo modo di dichiarare è passare due parametri.
  
    istream& getline( istream& is, string& str );

La sintassi precedente contiene due parametri, cioè is e str. Questa sintassi è quasi simile alla sintassi precedente; L'unica differenza è che non ha alcun carattere delimitante.      

**is:** È un oggetto della classe istream che definisce da dove leggere il flusso di input.

**str:**Si tratta di un oggetto stringa in cui è memorizzata la stringa.

### Getline Character Array

Possiamo anche definire la funzione getline() per l'array di caratteri, ma la sua sintassi è diversa dalla precedente.

    istream& getline(char* , int size);  

Nella sintassi precedente, ci sono due parametri; uno è char* e l'altro è size dove:

char*: È un puntatore a caratteri che punta alla matrice.

**Size:** Agisce come un delimitatore che definisce la dimensione dell'array significa che l'input non può attraversare questa dimensione.