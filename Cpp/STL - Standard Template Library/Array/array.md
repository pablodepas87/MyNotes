# C++ ARRAY
Definito nell'intestazione<array>

std::array è un contenitore che incapsula array di dimensioni fisse.

    template <
        classe T,
        std:: size_t N
    > struct array ;

Questo contenitore è un tipo aggregato con la stessa semantica di una struttura che contiene un array in stile C T [ N ]come unico membro dati non statico. A differenza di un array in stile C, non decade automaticamente in T * . Come tipo di aggregazione, può essere inizializzato con l'inizializzazione di aggregazione fornita nella maggior parte degli inizializzatori convertibili in T: std :: array < int , 3 > a = { 1 , 2 , 3 } ;.    

La struttura combina le prestazioni e l'accessibilità di un array in stile C con i vantaggi di un contenitore standard, come la conoscenza delle proprie dimensioni, il supporto dell'assegnazione, gli iteratori ad accesso casuale e così via.

std::array soddisfa i requisiti di Container e ReversibleContainer tranne per il fatto che l'array costruito per impostazione predefinita non è vuoto e che la complessità dello scambio è lineare, soddisfa i requisiti di ContiguousContainer , (dal C++ 17) e soddisfa parzialmente i requisiti di SequenceContainer .

C'è un caso speciale per un array di lunghezza zero ( N == 0). In quel caso,vettore. inizio ( ) == matrice. fine ( ), che è un valore univoco. L'effetto della chiamata front ( )O back( ) su un array di dimensione zero non è definito.

Un array può essere utilizzato anche come tuple di N elementi dello stesso tipo.

## Invalidazione dell'iteratore

Di norma, gli iteratori di un array non vengono mai invalidati per tutta la durata dell'array. Si dovrebbe notare, tuttavia, che durante swap , l'iteratore continuerà a puntare allo stesso elemento dell'array e quindi cambierà il suo valore.

### Funzioni dei membri

Funzioni membro definite in modo implicito
(costruttore)
  
(dichiarato implicitamente)
inizializza l'array seguendo le regole dell'inizializzazione aggregata (si noti che l'inizializzazione predefinita può comportare valori indeterminati per non-class T)
(funzione membro pubblica)
(distruttore)
  
(dichiarato implicitamente)
distrugge ogni elemento dell'array
(funzione membro pubblica)
operatore=
  
(dichiarato implicitamente)
sovrascrive ogni elemento dell'array con l'elemento corrispondente di un altro array
(funzione membro pubblica)

### Accesso agli elementi
at  (C++11) accedere all'elemento specificato con controllo dei limiti
(funzione membro pubblica)
operatore[] (C++11) accedere all'elemento specificato
(funzione membro pubblica) 
front (C++11) accedere al primo elemento
(funzione membro pubblico)
back (C++11) accedere all'ultimo elemento
(funzione membro pubblico)
data (C++11) accesso diretto all'array sottostante
(funzione membro pubblica)

### Iteratori
begin / cbegin (C++11) restituisce un iteratore all'inizio
(funzione membro pubblica)
end / cend (C++11) restituisce un iteratore alla fine
(funzione membro pubblica)
rbegin/crbegin (C++11) restituisce un iteratore inverso all'inizio
(funzione membro pubblica)
rend
credi
  
(C++11)
restituisce un iteratore inverso alla fine
(funzione membro pubblica)

### Capacità
empty (C++11) controlla se il contenitore è vuoto
(funzione membro pubblica)
size (C++11) restituisce il numero di elementi
(funzione membro pubblica)
max_size (C++11) restituisce il numero massimo possibile di elementi
(funzione membro pubblica)

### Operazioni

- **fill** (C++11) riempire il contenitore con il valore specificato
(funzione membro pubblica)
- **swap**  (C++11) scambia i contenuti

### Funzioni non associate
- operatore==
- operatore!=
- operatore<
- operatore<=
- operatore>
- operatore>=
- operatore<=>
 

### (modello di funzione)
- **std::get** (std::array) (C++11) accede a un elemento di un array

- **std::swap** (std::array) (C++11) specializza l' algoritmo std::swap

- **to_array** (C++20) crea un oggetto std::array da un array integrato

### Classi di aiuto
- std::tuple_size <std::array> (C++11) ottiene la dimensione di una array
- std::tuple_element <std::array> (C++11) ottiene il tipo degli elementi di array
