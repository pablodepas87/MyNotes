# L'ambiente di sviluppo del progetto Yocto

Il capitolo fornisce i concetti dell'ambiente di sviluppo del progetto Yocto che ti aiutano a capire come il lavoro viene svolto in un ambiente open source, che è molto diverso rispetto al lavoro svolto in un ambiente chiuso e proprietario.

Questo capitolo affronta la filosofia open source, i repository di sorgenti, i flussi di lavoro, Git e le licenze.


## Filosofia dell'Open Source

La filosofia open source è caratterizzata dallo sviluppo del software diretto dalla produzione tra pari e dalla collaborazione attraverso una comunità attiva di sviluppatori. Confrontalo con i modelli di sviluppo centralizzato più standard utilizzati dalle società di software commerciali in cui un insieme finito di sviluppatori produce un prodotto per la vendita utilizzando un insieme definito di procedure che alla fine si traducono in un prodotto finale la cui architettura e materiale sorgente sono chiusi al pubblico

I progetti open source hanno concettualmente diverse agende, approcci e produzioni simultanee. Questi aspetti del processo di sviluppo possono provenire da chiunque nel pubblico (comunità) abbia un interesse nel progetto software. L'ambiente open source contiene nuovi problemi di copyright, licenza, dominio e consumatori che differiscono dall'ambiente di sviluppo più tradizionale. In un ambiente open source, il prodotto finale, il materiale sorgente e la documentazione sono tutti disponibili al pubblico gratuitamente.

Un esempio di riferimento di un progetto open source è il kernel Linux, inizialmente concepito e creato dallo studente di informatica finlandese Linus Torvalds nel 1991. Al contrario, un buon esempio di progetto non open source è la famiglia di sistemi operativi Windows sviluppata da Microsoft Corporazione.


## L'host di sviluppo

*Un host di sviluppo o Build Host è la chiave per utilizzare il progetto Yocto.* Poiché **l'obiettivo del progetto Yocto è sviluppare immagini o applicazioni che girano su hardware integrato, lo sviluppo di tali immagini e applicazioni avviene generalmente su un sistema non destinato a eseguire il software: l'host di sviluppo**.

Devi configurare un host di sviluppo per poterlo utilizzare con il progetto Yocto.

La maggior parte ritiene che sia meglio avere una macchina Linux nativa come host di sviluppo

Se disponi di un sistema basato su Mac o Windows, puoi configurarlo come host di sviluppo utilizzando CROPS , che sfrutta Docker Containers . Dopo aver eseguito i passaggi per configurare una macchina CROPS, hai effettivamente accesso a un ambiente shell simile a quello che vedi quando usi un host di sviluppo basato su Linux.

Se il tuo host di sviluppo sarà un sistema che esegue una distribuzione Linux, devi comunque prendere provvedimenti per preparare il sistema per l'uso con il progetto Yocto. Devi essere sicuro che la distribuzione Linux sul sistema sia quella che supporta il progetto Yocto. È inoltre necessario assicurarsi che sia installato il set corretto di pacchetti host che consentano lo sviluppo utilizzando il progetto Yocto

Per i passaggi necessari per configurare un host di sviluppo che esegue Linux, vedere la sezione [" Impostazione di un host Linux nativo "](https://docs-yoctoproject-org.translate.goog/current/dev-manual/start.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#setting-up-a-native-linux-host) nel Manuale delle attività di sviluppo del progetto Yocto.

Una volta che il tuo host di sviluppo è configurato per utilizzare il progetto Yocto, ci sono diversi modi per lavorare nell'ambiente del progetto Yocto:

- **Righe di comando, BitBake e shell:** lo sviluppo tradizionale nel progetto Yocto prevede l'utilizzo di *OpenEmbedded Build System* , che utilizza BitBake, in un ambiente a riga di comando da una shell sull'host di sviluppo. Puoi eseguire questa operazione da un host che è una macchina Linux nativa o da un host che è stato configurato con CROPS. In entrambi i casi, crei, modifichi e costruisci immagini e applicazioni all'interno di un ambiente basato su shell utilizzando componenti e strumenti disponibili attraverso la tua distribuzione Linux e Yocto Project.

- **Sviluppo BSP (Board Support Package):** lo sviluppo di BSP implica l'utilizzo del progetto Yocto per creare e testare livelli che consentano un facile sviluppo di immagini e applicazioni destinate a hardware specifico. Per sviluppare BSP, è necessario eseguire alcuni passaggi aggiuntivi rispetto a quanto descritto nella configurazione di un host di sviluppo.
 La [guida per gli sviluppatori del pacchetto di supporto del progetto Yocto Project Board](https://docs-yoctoproject-org.translate.goog/current/bsp-guide/index.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) fornisce informazioni sullo sviluppo relative a BSP. Per informazioni specifiche sulla preparazione dell'host di sviluppo, vedere la sezione " [Preparazione dell'host di compilazione per lavorare con i livelli BSP "](https://docs-yoctoproject-org.translate.goog/current/bsp-guide/bsp.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#preparing-your-build-host-to-work-with-bsp-layers) nella Guida per sviluppatori Yocto Project Board Support Package (BSP).


- **sviluppo del kernel:** se svilupperai kernel utilizzando il progetto Yocto, probabilmente utilizzerai devtool. Un flusso di lavoro che utilizza devtool rende lo sviluppo del kernel più rapido riducendo i tempi del ciclo di iterazione.

Il [Yocto Project Linux Kernel Development Manual](https://docs-yoctoproject-org.translate.goog/current/kernel-dev/index.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) fornisce informazioni sullo sviluppo relative al kernel. Per informazioni specifiche sulla preparazione dell'host di sviluppo, vedere la sezione " [Preparazione dell'host di compilazione per lavorare sul kernel "](https://docs-yoctoproject-org.translate.goog/current/kernel-dev/common.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#preparing-the-build-host-to-work-on-the-kernel) nel Manuale di sviluppo del kernel Linux di Yocto Project.

- **Utilizzo di Toaster:** l'altro metodo di sviluppo del progetto Yocto che prevede un'interfaccia che mette efficacemente il progetto Yocto in secondo piano è Toaster. 
  Toaster fornisce un'interfaccia al sistema di compilazione OpenEmbedded. L'interfaccia ti consente di configurare ed eseguire le tue build. Le informazioni sulle build vengono raccolte e archiviate in un database. Puoi utilizzare Toaster per configurare e avviare build su più server di build remoti. Per i passaggi che mostrano come configurare l'host di sviluppo per l'utilizzo di Toaster e su come utilizzare Toaster in generale, vedere il [Manuale dell'utente di Toaster](https://docs-yoctoproject-org.translate.goog/current/toaster-manual/index.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) .

## Repository dei sorgenti del progetto Yocto

Il team del progetto Yocto mantiene repository di sorgenti completi per tutti i file del progetto Yocto su https://git.yoctoproject.org/ .
Avere un repository Git locale della Source Directory , che di solito è chiamato "poky", ti consente di apportare modifiche, contribuire alla cronologia e, in definitiva, migliorare gli strumenti del progetto Yocto, i pacchetti di supporto della scheda e così via.

Per qualsiasi versione supportata di Yocto Project, puoi anche andare sul sito Web di Yocto Project e selezionare la voce "DOWNLOADS" dal menu "SOFTWARE" e ottenere un tarball del reposotory poky rilasciato , qualsiasi tarball BSP supportato o gli strumenti di Yocto Project. La decompressione di questi tarball fornisce un'istantanea dei file rilasciati.



- Il **metodo consigliato** per configurare la Yocto Project Source Directory e i file per i BSP supportati (ad esempio, meta-intel) è utilizzare Git per creare una copia locale dei repository upstream.

- Assicurati di **lavorare sempre nei rami corrispondenti sia per il repository BSP selezionato che per il repository poky della directory di origine (ovvero )**. Ad esempio, se hai estratto il ramo "langdale" di poky e intendi utilizzare meta-intel, assicurati di estrarre il ramo "langdale" di meta-intel.

In sintesi, ecco dove puoi ottenere i file di progetto necessari per lo sviluppo:

- [reposotory di origine](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://git.yoctoproject.org)quest'area contiene plug-in IDE, Matchbox, Poky, supporto Poky, strumenti, kernel Yocto Linux e livelli di metadati Yocto. Puoi creare copie locali dei repository Git per ognuna di queste aree.

- [Indice di releases:](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://downloads.yoctoproject.org/releases) questo è un indice di rilasci come Poky, Pseudo, programmi di installazione per toolchain di sviluppo incrociato, supporto vario e tutte le versioni rilasciate di Yocto Project sotto forma di immagini o tarball. Il download e l'estrazione di questi file non produce una copia locale del repository Git ma piuttosto un'istantanea di una particolare versione o immagine.

- **Pagina "DOWNLOADS"** per il [sito Web del progetto Yocto](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://www.yoctoproject.org) :
Il sito Web di Yocto Project include una pagina "DOWNLOADS" accessibile tramite il menu "SOFTWARE" che consente di scaricare qualsiasi versione, strumento e Board Support Package (BSP) di Yocto Project in formato tarball. I tarball sono simili a quelli che si trovano nell'area Index of /releases:.

## Flussi di lavoro Git e progetto Yocto

Lo sviluppo utilizzando il progetto Yocto probabilmente richiede l'uso di Git . Git è un sistema di controllo della versione distribuito gratuito e open source utilizzato come parte di molti ambienti di progettazione collaborativi.

I file del progetto Yocto vengono mantenuti utilizzando Git in "rami" le cui cronologie Git tengono traccia di ogni modifica e le cui strutture forniscono rami per tutte le funzionalità divergenti. Sebbene non sia necessario utilizzare Git, molti progetti open source lo fanno.

Per il progetto Yocto, un individuo chiave chiamato "maintainer" è responsabile dell'integrità del ramo di sviluppo di un determinato repository Git. Il ramo di sviluppo è il repository "upstream" da cui si verificano le build finali o più recenti di un progetto. Il manutentore è responsabile dell'accettazione delle modifiche da altri sviluppatori e dell'organizzazione della struttura del ramo sottostante per riflettere le strategie di rilascio e così via.

Il repository poky ha anche un repository di contributo a monte denominato *poky-contrib*.

Esiste un metodo in qualche modo formale mediante il quale gli sviluppatori confermano le modifiche e le inseriscono nell'area "contrib" e successivamente richiedono che il manutentore le includa in un ramo upstream. Questo processo è chiamato "invio di una patch" o "invio di una modifica"


![](https://docs-yoctoproject-org.translate.goog/current/_images/git-workflow.svg?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp)

Sebbene ogni ambiente di sviluppo sia unico, esistono alcune best practice o metodi che aiutano lo sviluppo a funzionare senza problemi:

Apporta piccole modifiche: è meglio mantenere piccole le modifiche di cui si esegue il commit rispetto a raggruppare molte modifiche disparate in un unico commit. Questa pratica non solo mantiene le cose gestibili, ma consente anche al manutentore di includere o rifiutare più facilmente le modifiche.

- **Apporta modifiche complete:** è inoltre buona norma lasciare il repository in uno stato che consenta di continuare a creare correttamente il progetto. In altre parole, non eseguire il commit di metà di una funzionalità, quindi aggiungere l'altra metà come commit separato e successivo. Ogni commit dovrebbe portarti da uno stato del progetto costruibile a un altro stato costruibile.

- **Usa rami liberamente:** è molto facile creare, utilizzare ed eliminare rami locali nel tuo repository Git funzionante sull'host di sviluppo. Puoi nominare questi rami come preferisci. È utile assegnare loro nomi associati alla particolare funzione o modifica su cui si sta lavorando. Una volta che hai finito con una caratteristica o una modifica e l'hai unita al tuo ramo di sviluppo locale, scarta semplicemente il ramo temporaneo.

- **Unisci modifiche:** il comando consente di prendere le modifiche da un ramo e piegarle in un altro ramo. Questo processo è particolarmente utile quando più di un singolo sviluppatore potrebbe lavorare su parti diverse della stessa funzionalità. L'unione delle modifiche identifica inoltre automaticamente eventuali collisioni o "conflitti" che potrebbero verificarsi a seguito dell'alterazione delle stesse righe di codice da parte di due sviluppatori diversi.git merge

- **Gestisci rami:** poiché i rami sono facili da usare, dovresti utilizzare un sistema in cui i rami indicano diversi livelli di preparazione del codice. Ad esempio, puoi avere un ramo "lavoro" in cui sviluppare, un ramo "test" in cui il codice o la modifica viene testato, un ramo "fase" in cui le modifiche sono pronte per essere confermate e così via. Man mano che il tuo progetto si sviluppa, puoi unire il codice tra i rami per riflettere stati di sviluppo sempre più stabili.

- **Usa Push and Pull:** il flusso di lavoro push-pull si basa sul concetto di sviluppatori che "spingono" i commit locali a un repository remoto, che di solito è un repository di contributi.Il flusso di lavoro ti consente di trasferire facilmente le modifiche inviate da altri sviluppatori dal repository a monte nella tua area di lavoro, assicurandoti di disporre del software più recente su cui sviluppare. Il progetto Yocto ha due script denominati *create-pull-requeste send-pull-request* forniti con la versione per facilitare questo flusso di lavoro. 

- **Flusso di lavoro delle patch:** questo flusso di lavoro ti consente di notificare al manutentore tramite un'e-mail che hai una modifica (o una patch) che vorresti prendere in considerazione per il ramo di sviluppo del repository Git.

## Git

Il progetto Yocto fa ampio uso di Git, che è un sistema di controllo della versione distribuito gratuito e open source. Git supporta lo sviluppo distribuito, lo sviluppo non lineare e può gestire progetti di grandi dimensioni. È meglio che tu abbia una conoscenza di base di come Git tiene traccia dei progetti e di come lavorare con Git se intendi utilizzare Yocto Project per lo sviluppo. Questa sezione fornisce una rapida panoramica di come funziona Git e fornisce un riepilogo di alcuni comandi Git essenziali.

#### Repository, tag e rami

I repository Git utilizzano tecniche di branching che tengono traccia delle modifiche al contenuto (non ai file) all'interno di un progetto (ad esempio una nuova funzionalità o una documentazione aggiornata). La creazione di una struttura ad albero basata sulla divergenza del progetto consente di ottenere eccellenti informazioni storiche sulla vita di un progetto. Questa metodologia consente inoltre un ambiente dal quale è possibile eseguire molte sperimentazioni locali sui progetti mentre si sviluppano modifiche o nuove funzionalità.

Un repository Git rappresenta tutti gli sforzi di sviluppo per un determinato progetto.

Puoi creare una copia locale di qualsiasi repository "clonandolo" con il comando. Quando cloni un repository Git, ti ritroverai con una copia identica del repository sul tuo sistema di sviluppo. Una volta che hai una copia locale di un repository, puoi prendere provvedimenti per sviluppare localmente.

È importante capire che Git tiene traccia della modifica del contenuto e non dei file. Git utilizza "rami" per organizzare diversi sforzi di sviluppo.

Quando crei una copia locale di un repository Git, la copia ha lo stesso insieme di diramazioni dell'originale. Ciò significa che puoi utilizzare Git per creare un'area di lavoro locale (chiamata anche ramo) che tiene traccia di un ramo di sviluppo specifico dal repository Git di origine upstream. 

    $ cd ~
    $ git clone git://git.yoctoproject.org/poky -b langdale

Nell'esempio precedente, dopo essersi spostati nella home directory, il comando crea una copia locale del repository Git upstream ed effettua il check-out di un ramo locale denominato "langdale", che tiene traccia del ramo upstream "origin/langdale". Le modifiche apportate mentre ci si trova in questo ramo influiranno in ultima analisi sul ramo "langdale" a monte del 

#### Comandi di base

Git ha un ampio set di comandi che ti consente di gestire le modifiche ed eseguire la collaborazione per tutta la durata di un progetto. Convenientemente, però, puoi gestire con un piccolo set di operazioni e flussi di lavoro di base una volta compresa la filosofia di base alla base di Git. Non devi essere un esperto di Git per essere funzionale.

Il seguente elenco di comandi Git descrive brevemente alcune operazioni Git di base come un modo per iniziare. 

-**git init:** Inizializza un repository Git vuoto. Non puoi usare i comandi Git a meno che tu non abbia un .gitrepository.

- **git clone:** ​​crea un clone locale di un repository Git che si trova sullo stesso piano del repository Git di un altro sviluppatore o di un repository upstream.

- **git add:** mette in scena localmente i contenuti dei file aggiornati nell'indice che Git utilizza per tenere traccia delle modifiche. Devi mettere in scena tutti i file che sono stati modificati prima di poterli salvare.

- **git commit:** crea un "commit" locale che documenta le modifiche apportate. È possibile eseguire il commit solo delle modifiche che sono state messe in scena. I commit vengono utilizzati per scopi cronologici, per determinare se un manutentore di un progetto consentirà la modifica e, in ultima analisi, per spingere la modifica dal repository Git locale al repository upstream del progetto.

- **git status:** segnala tutti i file modificati che potrebbero dover essere messi in scena e ti dà uno stato di dove ti trovi riguardo ai commit locali rispetto al repository upstream.

- **git checkout nome-ramo:** cambia il tuo ramo di lavoro locale e in questo modulo presuppone che il ramo locale esista già. Questo comando è analogo a "cd".

- **git checkout -b working-branch upstream-branch:** crea ed effettua il check-out di un ramo di lavoro sulla tua macchina locale. Il ramo locale tiene traccia del ramo a monte. Puoi usare la tua filiale locale per isolare il tuo lavoro. È una buona idea utilizzare rami locali quando si aggiungono funzionalità o modifiche specifiche. L'utilizzo di rami isolati facilita la facile rimozione delle modifiche se non funzionano.

- **git branch:** visualizza i rami locali esistenti associati al tuo repository locale. Il ramo che hai attualmente estratto è contrassegnato da un asterisco.

- **git branch -D nome-ramo:** elimina un ramo locale esistente. Devi trovarti in un ramo locale diverso da quello che stai eliminando per eliminare nome-ramo.

- **git pull --rebase:** recupera le informazioni da un repository Git a monte e le inserisce nel repository Git locale. Usa questo comando per assicurarti di essere sincronizzato con il repository da cui stai basando le modifiche (ad esempio il ramo “langdale”). L' --rebaseopzione garantisce che tutti i commit locali che hai nel tuo ramo siano conservati nella parte superiore del tuo ramo locale.

- **git push repo-name local-branch:upstream-branch:** Invia tutte le tue modifiche locali impegnate al repository Git upstream che il tuo repository locale sta monitorando (ad esempio un repository di contributi). Il manutentore del progetto attinge da questi repository per unire le modifiche (commit) nel ramo appropriato del repository upstream del progetto.

- **git merge:** combina o aggiunge modifiche da un ramo locale del tuo repository con un altro ramo. Quando crei un repository Git locale, il ramo predefinito potrebbe essere denominato "main". Un flusso di lavoro tipico consiste nel creare un ramo temporaneo basato su "principale" che utilizzeresti per il lavoro isolato. Dovresti apportare le modifiche in quel ramo isolato, metterle in scena e salvarle localmente, passare al ramo "principale" e quindi utilizzare il comando per applicare le modifiche dal tuo ramo isolato al ramo attualmente estratto (ad esempio "principale"). Dopo che l'unione è stata completata e se hai finito di lavorare in quel ramo isolato, puoi tranquillamente eliminare il ramo isolato.git merge

- **git cherry-pick commit:** scegli e applica commit specifici da un ramo a un altro ramo. Ci sono momenti in cui potresti non essere in grado di unire tutte le modifiche in un ramo con un altro, ma devi selezionarne alcune.

- **gitk:** fornisce una visualizzazione GUI dei rami e delle modifiche nel repository Git locale. Questo comando è un buon modo per vedere graficamente dove le cose sono divergenti nel tuo repository locale.

## Licenza

Poiché i progetti open source sono aperti al pubblico, dispongono di diverse strutture di licenza. L'evoluzione delle licenze sia per l'Open Source che per il Software Libero ha una storia interessante.





















