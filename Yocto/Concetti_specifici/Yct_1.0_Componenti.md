# Componenti del Progetto Yocto

L' esecutore dell'attività BitBake insieme a vari tipi di file di configurazione formano OpenEmbedded-Core (OE-Core) .

BitBake gestisce l'analisi e l'esecuzione dei file di dati. I dati stessi sono di vario tipo:


- **Ricette:** fornisce dettagli su particolari parti di software.

- **Class Data:** estrae le informazioni comuni sulla build (ad esempio come costruire un kernel Linux).

- **Dati di configurazione:** definisce le impostazioni specifiche della macchina, le decisioni sui criteri e così via. I dati di configurazione fungono da collante per legare tutto insieme.

BitBake sa come combinare più origini dati insieme e fa riferimento a ciascuna origine dati come a un livello

## BitBake

BitBake è lo strumento al centro dell'OpenEmbedded Build System ed è responsabile dell'analisi dei metadati , della generazione di un elenco di attività da esso e quindi dell'esecuzione di tali attività.

Per visualizzare un elenco delle opzioni supportate da BitBake, utilizzare uno dei seguenti comandi:

    $ bitbake -h
    $ bitbake --help

L'utilizzo più comune di BitBake è *bitbake recipename* , dove recipename è il nome della ricetta che si desidera creare (indicata come "target"). L'obiettivo spesso corrisponde alla prima parte del nome file di una ricetta (es. “foo” per una ricetta chiamata foo_1.3.0-r0.bb ). Quindi, per elaborare il file della ricetta matchbox-desktop_1.2.3.bb, potresti digitare quanto segue:

    $ bitbake matchbox-desktop

Potrebbero esistere diverse versioni di matchbox-desktop. BitBake sceglie quello selezionato dalla configurazione della distribuzione. 

BitBake tenta anche di eseguire prima tutte le attività dipendenti. Quindi, ad esempio, prima di costruire matchbox-desktop, BitBake creerebbe un compilatore incrociato e glibc se non fosse già stato costruito.

Un'utile opzione di BitBake da considerare è l' opzione -k o --continue. Questa opzione indica a BitBake di provare a continuare a elaborare il lavoro il più a lungo possibile anche dopo aver riscontrato un errore. Quando si verifica un errore, il target che ha fallito e quelli che dipendono da esso non possono essere ricreati. Tuttavia, quando si utilizza questa opzione è ancora possibile elaborare altre dipendenze.

## Ricette

I file che hanno il suffisso .bb sono file "ricette". In generale, una ricetta contiene informazioni su un singolo software. Queste informazioni includono la posizione da cui scaricare il sorgente inalterato, eventuali patch del sorgente da applicare a quel sorgente (se necessario), quali opzioni di configurazione speciali applicare, come compilare i file sorgente e come impacchettare l'output compilato.

Il termine "pacchetto" è talvolta usato per riferirsi a ricette. Tuttavia, poiché la parola "pacchetto" viene utilizzata per l'output impacchettato dal sistema di compilazione OpenEmbedded (ovvero file .ipk o .deb), questo documento evita di utilizzare il termine "pacchetto" quando si fa riferimento alle ricette.

## Classi

I file di classe ( .bbclass) contengono informazioni utili da condividere tra file di ricette. Un esempio è la classe autotools , che contiene impostazioni comuni per qualsiasi applicazione creata con GNU Autotools.

## Configurazioni

I file di configurazione (.conf) definiscono varie variabili di configurazione che governano il processo di compilazione di OpenEmbedded. Questi file rientrano in diverse aree che definiscono le opzioni di configurazione della macchina, le opzioni di configurazione della distribuzione, le opzioni di messa a punto del compilatore, le opzioni di configurazione comuni generali e le opzioni di configurazione dell'utente in , conf/local.conf che si trova nella Directory di compilazione.