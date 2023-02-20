# Termini Utili

Di seguito è riportato un elenco di termini e definizioni che gli utenti nuovi nell'ambiente di sviluppo del progetto Yocto potrebbero trovare utili. 
Sebbene alcuni di questi termini siano universali, l'elenco li include per ogni evenienza:

##### Append Files

File che aggiungono informazioni sulla build a un file ricetta. I file di accodamento sono noti come file e .bbappend file di accodamento BitBake. Il sistema di compilazione OpenEmbedded si aspetta che ogni file append abbia un .bbfile ricetta ( ) corrispondente. Inoltre, il file append e il file ricetta corrispondente devono utilizzare lo stesso nome file root. 
I nomi dei file possono differire solo per il suffisso del tipo di file utilizzato (ad es. formfactor_0.0.bbe formfactor_0.0.bbappend).

Le informazioni nei file di append estendono o sostituiscono le informazioni nel file ricetta con nome simile

Quando assegni un nome a un file di accodamento, puoi utilizzare il %carattere jolly " " per consentire la corrispondenza dei nomi delle ricette. Ad esempio, supponi di avere un file append denominato come segue:

    busybox_1.21.%.bbappend

Quel file append corrisponderebbe a qualsiasi versione busybox_1.21.x .bbdella ricetta. Quindi, il file append corrisponderebbe a uno dei seguenti nomi di ricette:

    busybox_1.21.1.bb
    busybox_1.21.2.bb
    busybox_1.21.3.bb
    busybox_1.21.10.bb
    busybox_1.21.25.bb



Nota

L'uso del carattere "%" è limitato in quanto funziona solo direttamente davanti alla parte .bbappend del nome del file append. 
Non è possibile utilizzare il carattere jolly in qualsiasi altra posizione del nome.

##### BitBake

L'esecutore e lo scheduler dell'attività utilizzato dal sistema di compilazione OpenEmbedded per creare le immagini. 
Per ulteriori informazioni su BitBake, consulta il [Manuale dell'utente di BitBake](https://docs-yoctoproject-org.translate.goog/bitbake/1.46/index.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp).

##### Board Support Package (BSP)

Un gruppo di driver, definizioni e altri componenti che forniscono supporto per una specifica configurazione hardware. 
Per ulteriori informazioni sui BSP, consultare la [Yocto Project Board Support Package Developer's Guide](https://docs-yoctoproject-org.translate.goog/3.1.17/bsp-guide/bsp-guide.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#yocto-project-board-support-package-developer-s-guide)

##### Build Directory

Questo termine si riferisce all'area utilizzata dal sistema di compilazione OpenEmbedded per le compilazioni. L'area viene creata quando si imposta lo script source dell'ambiente che si trova nella directory di origine (ad esempio oe-init-build-env ). La variabile TOPDIR punta alla directory di build.

Hai molta flessibilità durante la creazione della directory di build. Di seguito sono riportati alcuni esempi che mostrano come creare la directory. 
Gli esempi presuppongono che la tua directory di origine sia denominata poky:

Crea la directory di build all'interno della tua directory di origine e lascia che il nome predefinito della directory di build sia build:

    $ cd $HOME/poky
    $ source oe-init-build-env

Crea la Build Directory all'interno della tua home directory e assegnale un nome specifico test-builds:

    $ cd $HOME
    $ source poky/oe-init-build-env test-builds

Fornisci un percorso di directory e assegna un nome specifico alla directory di build.Devono esistere eventuali cartelle intermedie nel percorso. 
Il prossimo esempio crea una directory di build denominata YP-POKYVERSION nella tua home directory all'interno della directory esistente mybuilds:

    $ cd $HOME
    $ source $HOME/poky/oe-init-build-env $HOME/mybuilds/YP-POKYVERSION



Nota

Per impostazione predefinita, la directory di compilazione contiene TMPDIR , che è una directory temporanea utilizzata dal sistema di compilazione per il proprio lavoro. TMPDIR non può essere sotto NFS. Pertanto, per impostazione predefinita, la directory di creazione non può trovarsi in NFS. 
Tuttavia, se è necessario che la directory di build sia sotto NFS, è possibile configurarla impostando TMPDIR nel file local.conf l'utilizzo di un'unità locale. In questo modo si separa efficacemente TMPDIR da TOPDIR , che è la directory di build.

##### Build Host

Il sistema utilizzato per creare immagini in un ambiente Yocto Project Development. Il sistema di compilazione viene talvolta definito host di sviluppo.

##### Classi

File che forniscono l'incapsulamento e l'ereditarietà logica in modo che i modelli comunemente usati possano essere definiti una volta e quindi facilmente utilizzati in più ricette. 
Per informazioni di riferimento sulle classi del Progetto Yocto, vedere il capitolo [“ Le classi ”](https://docs-yoctoproject-org.translate.goog/3.1.17/ref-manual/ref-classes.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#classes). I file di classe terminano con l'estensione .bbclass

##### Configuration File

File che contengono definizioni globali di variabili, variabili definite dall'utente e informazioni sulla configurazione hardware. Questi file dicono al sistema di compilazione OpenEmbedded cosa costruire e cosa inserire nell'immagine per supportare una particolare piattaforma.

I file di configurazione terminano con un'estensione .conf del nome file. Il file conf/local.conf di configurazione nella directory di build contiene variabili definite dall'utente che influiscono su ogni build. Il file meta-poky/conf/distro/poky.conf definisce le variabili di configurazione "distro" di Yocto 
utilizzate solo durante la compilazione con questo criterio. I file di configurazione della macchina, che si trovano in tutta la Source Directory , definiscono le variabili per hardware specifico e vengono utilizzati solo durante la compilazione per quella destinazione (ad es.  machine/beaglebone.conf definisce le variabili per la scheda di sviluppo ARM Cortex-A8 di Texas Instruments).

##### Container Layer

Strato che contiene altri strati. Un esempio di livello contenitore è il livello meta-openembedded di OpenEmbedded . Il livello meta-openembedded contiene molti meta-*livelli.

##### Cross-Development Toolchain

In generale, una toolchain di sviluppo incrociato è una raccolta di strumenti e utilità di sviluppo software che vengono eseguiti su un'architettura e consentono di sviluppare software per un'architettura diversa o mirata. Queste toolchain contengono cross-compiler, linker e debugger specifici per l'architettura di destinazione.

Il progetto Yocto supporta due diverse toolchain di sviluppo incrociato:

- Una toolchain utilizzata solo da e all'interno di BitBake durante la creazione di un'immagine per un'architettura di destinazione.
- Una toolchain rilocabile utilizzata al di fuori di BitBake dagli sviluppatori durante lo sviluppo di applicazioni che verranno eseguite su un dispositivo mirato.

La creazione di queste toolchain è semplice e automatizzata. 
Per informazioni sui concetti di toolchain applicati al progetto Yocto, consultare la sezione ["Generazione di toolchain di sviluppo incrociato"] nel manuale Panoramica e concetti del progetto Yocto. 
È inoltre possibile trovare ulteriori informazioni sull'utilizzo della toolchain rilocabile nel manuale [Yocto Project Application Development e Extensible Software Development Kit (eSDK)](https://docs-yoctoproject-org.translate.goog/3.1.17/sdk-manual/sdk-manual.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#yocto-project-application-development-and-the-extensible-software-development-kit-esdk) .


##### Extensible Software Development Kit (eSDK)

A custom SDK for application developers. This eSDK allows developers to incorporate their library and programming changes back into the image to make their code available to other application developers.
For information on the eSDK, see the [Yocto Project Application Development and the Extensible Software Development Kit (eSDK) manual](https://docs.yoctoproject.org/3.2.3/sdk-manual/sdk-manual.html#yocto-project-application-development-and-the-extensible-software-development-kit-esdk).

##### Immagine

Un'immagine è un artefatto del processo di compilazione di BitBake data una raccolta di ricette e relativi metadati. 
Le immagini sono l'output binario eseguito su hardware specifico o QEMU e vengono utilizzate per casi d'uso specifici. 
Per un elenco dei tipi di immagine supportati forniti da Yocto Project, vedere il capitolo ["Immagini"](https://docs-yoctoproject-org.translate.goog/3.1.17/ref-manual/ref-images.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#images).

##### Layer

Una raccolta di ricette correlate. I livelli ti consentono di consolidare i metadati correlati per personalizzare la tua build. 
I livelli isolano anche le informazioni utilizzate durante la creazione per più architetture. 
I livelli sono gerarchici nella loro capacità di sovrascrivere le specifiche precedenti. Puoi includere qualsiasi numero di livelli disponibili dal progetto Yocto e personalizzare la build aggiungendo i tuoi livelli dopo di essi. Puoi cercare nell'indice dei livelli i livelli utilizzati all'interno di Yocto Project.


Per informazioni introduttive sui layer, vedere la sezione ["The Yocto Project Layer Model"] nel Yocto Project Overview and Concepts Manual. Per informazioni più dettagliate sui livelli, vedere la sezione ["Comprensione e creazione di livelli"] nel Manuale delle attività di sviluppo del progetto Yocto. Per una discussione specifica sui livelli BSP, vedere la sezione ["Livelli BSP"](https://docs-yoctoproject-org.translate.goog/3.1.17/bsp-guide/bsp.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#bsp-layers) nella Guida per sviluppatori Yocto Project Board Support Packages (BSP).

##### Metadata

Un elemento chiave del progetto Yocto sono i metadati che vengono utilizzati per costruire una distribuzione Linux e sono contenuti nei file che l' OpenEmbedded Build System analizza durante la creazione di un'immagine. In generale, i metadati includono ricette, file di configurazione e altre informazioni che fanno riferimento alle stesse istruzioni di compilazione, nonché i dati utilizzati per controllare quali elementi vengono compilati e gli effetti della compilazione. I metadati includono anche i comandi e i dati utilizzati per indicare quali versioni del software vengono utilizzate, da dove vengono ottenute e modifiche o aggiunte al software stesso (patch o file ausiliari) che vengono utilizzati per correggere bug o personalizzare il software per l'utilizzo in un situazione particolare. OpenEmbedded-Core è un insieme importante di metadati convalidati.
Nel contesto del kernel ("metadati del kernel"), il termine si riferisce ai frammenti di configurazione del kernel e alle funzionalità contenute nel repository Git yocto-kernel-cache .

##### OpenEmbedded-Core (OE-Core)

OE-Core è costituito da metadati composti da ricette fondamentali, classi e file associati che dovrebbero essere comuni tra molti diversi sistemi derivati ​​da OpenEmbedded, incluso il progetto Yocto. OE-Core è un sottoinsieme curato di un repository originale sviluppato dalla comunità OpenEmbedded che è stato ridotto in un insieme più piccolo e di base di ricette continuamente convalidate. Il risultato è un set di ricette di base strettamente controllato e di qualità garantita.

Puoi vedere i metadati nella directory meta degli Yocto Project [Source Repositories](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://git.yoctoproject.org/cgit/cgit.cgi/poky) 

##### OpenEmbedded Build System

E' Il sistema di compilazione specifico per il progetto Yocto. Il sistema di compilazione OpenEmbedded si basa su un altro progetto noto come "Poky", che utilizza BitBake come task esecutore. In tutto il set di documentazione del progetto Yocto, il sistema di compilazione OpenEmbedded viene a volte indicato semplicemente come "il sistema di compilazione". Se si fa riferimento ad altri sistemi di compilazione, come un host o un sistema di compilazione di destinazione, la documentazione indica chiaramente la differenza.

Per alcune informazioni storiche su Poky, vedere il termine [Poky]() .

##### Package

Nel contesto del Progetto Yocto, questo termine si riferisce all'output confezionato di una ricetta prodotto da BitBake (ovvero una “ricetta al forno”). Un pacchetto è generalmente costituito dai binari compilati prodotti dai sorgenti della ricetta. Si "cuoce" qualcosa facendolo passare attraverso BitBake.
Vale la pena notare che il termine "pacchetto" può, in generale, avere significati sottili. Ad esempio, i pacchetti a cui si fa riferimento nella sezione " Pacchetti richiesti per l'host di compilazione " sono file binari compilati che, una volta installati, aggiungono funzionalità alla distribuzione Linux.

Un altro punto degno di nota è che storicamente all'interno del progetto Yocto, le ricette venivano chiamate pacchetti, quindi l'esistenza di diverse variabili BitBake che apparentemente hanno nomi errati (ad esempio PR , PV e PE ) .


