 Costruzione rapida del progetto Yocto

Questo breve documento ti guida attraverso il processo per una tipica creazione di immagini utilizzando il progetto Yocto. Il documento introduce anche come configurare una build per hardware specifico. Utilizzerai Yocto Project per creare un sistema operativo embedded di riferimento chiamato Poky.

### Pre-requisiti di sistema e Sistema Operativo di sviluppo

- Gli esempi in questo documento presuppongono che tu stia utilizzando un sistema Linux nativo che esegue una recente distribuzione Ubuntu Linux.

- **Se la macchina su cui desideri utilizzare Yocto Project** per creare un'immagine ( Build Host ) **non è un sistema Linux nativo**, puoi comunque eseguire questi passaggi **utilizzando CROss PlatformS (CROPS)** e impostando un contenitore Poky. Per ulteriori informazioni, vedere la sezione Configurazione per l'utilizzo delle piattaforme CROss (CROPS) nel Manuale delle attività di sviluppo del progetto Yocto

- **Puoi usare la versione 2 del sottosistema Windows per Linux (WSL 2)** per configurare un host di compilazione usando Windows 10 o versioni successive. Per ulteriori informazioni, vedere la sezione Configurazione per l'utilizzo del sottosistema Windows per Linux (WSL 2) nel Manuale delle attività di sviluppo del progetto Yocto.


## REQUISITI HOST di Build

- 50 Gbyte di spazio libero su disco

- Esegue una distribuzione Linux supportata (ovvero versioni recenti di Fedora, openSUSE, CentOS, Debian o Ubuntu). Per un elenco delle distribuzioni Linux che supportano il progetto Yocto, vedere la sezione [Distribuzioni Linux supportate nel manuale di riferimento del progetto Yocto](https://docs-yoctoproject-org.translate.goog/current/ref-manual/system-requirements.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#supported-linux-distributions). 

- Git 1.8.3.1 o versione successiva
- tar 1.28 o superiore
- Python 3.6.0 o successivo.
- gcc 7.5 o superiore.
- GNU versione 4.0 o successiva

## Pacchetti necessari e come installarli

È necessario installare i pacchetti host essenziali sull'host di build. Il seguente comando installa i pacchetti host basati su una distribuzione Ubuntu:

    $ sudo apt install gawk wget git diffstat unzip texinfo gcc build-essential chrpath socat cpio python3 python3-pip python3-pexpect xz-utils debianutils iputils-ping python3-git python3-jinja2 libegl1-mesa libsdl1.2-dev pylint3 xterm python3-subunit mesa-common-dev zstd liblz4-tool

Per i requisiti del pacchetto host su tutte le distribuzioni Linux supportate, vedere la sezione [Pacchetti richiesti per la creazione dell'host nel manuale di riferimento del progetto Yocto](https://docs-yoctoproject-org.translate.goog/current/ref-manual/system-requirements.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#required-packages-for-the-build-host).


## Usa Git per clonare Poky

Dopo aver completato le istruzioni di installazione per la tua macchina, devi ottenere una copia del repository Poky sul tuo host di build. Utilizzare i seguenti comandi per clonare il repository Poky.

    $ git clone git://git.yoctoproject.org/poky
    Cloning into 'poky'...
    remote: Counting
    objects: 432160, done. remote: Compressing objects: 100%
    (102056/102056), done. remote: Total 432160 (delta 323116), reused
    432037 (delta 323000) Receiving objects: 100% (432160/432160), 153.81 MiB | 8.54 MiB/s, done.
    Resolving deltas: 100% (323116/323116), done.
    Checking connectivity... done.

Quindi spostati nella directory poky e dai un'occhiata ai rami esistenti:

    $ cd poky
    $ git branch -a
    .
    .
    .
    remotes/origin/HEAD -> origin/master
    remotes/origin/dunfell
    remotes/origin/dunfell-next
    .
    .
    .
    remotes/origin/gatesgarth
    remotes/origin/gatesgarth-next
    .
    .
    .
    remotes/origin/master
    remotes/origin/master-next    


## Costruisci la tua immagine

Usa i seguenti passaggi per costruire la tua immagine. Il processo di compilazione crea un'intera distribuzione Linux, inclusa la toolchain, dall'origine.

**N.B:** Se stai lavorando dietro un firewall e il tuo host di compilazione non è configurato per i proxy, potresti riscontrare problemi con il processo di compilazione durante il recupero del codice sorgente

1.**Inizializza l'ambiente di compilazione:** dall'interno della directory *poky* , esegui lo script di configurazione dell'ambiente *oe-init-build-env* per definire l'ambiente di compilazione di Yocto Project sul tuo host di compilazione.


    cd poky
    $ source oe-init-build-env
    You had no conf/local.conf file. This configuration file has therefore been
    created for you with some default values. You may wish to edit it to, for
    example, select a different MACHINE (target hardware). See conf/local.conf
    for more information as common configuration options are commented.

    You had no conf/bblayers.conf file. This configuration file has therefore
    been created for you with some default values. To add additional metadata
    layers into your configuration please add entries to conf/bblayers.conf.

    The Yocto Project has extensive documentation about OE including a reference
    manual which can be found at:
        https://docs.yoctoproject.org

    For more information about OpenEmbedded see their website:
        https://www.openembedded.org/

    ### Shell environment set up for builds. ###

    You can now run 'bitbake <target>'

    Common targets are:
        core-image-minimal
        core-image-full-cmdline
        core-image-sato
        core-image-weston
        meta-toolchain
        meta-ide-support

    You can also run generated QEMU images with a command like 'runqemu qemux86-64'

    Other commonly useful commands are:
    - 'devtool' and 'recipetool' handle common recipe tasks
    - 'bitbake-layers' handles common layer tasks
    - 'oe-pkgdata-util' handles common target package tasks

Tra l'altro, **lo script crea la directory Build , che in questo caso si trova nella Source Directory . Dopo l'esecuzione dello script, la directory di lavoro corrente viene impostata sulla directory di creazione. Successivamente, al termine della compilazione, la directory di compilazione contiene tutti i file creati durante la compilazione.

2.**Esaminare il file di configurazione locale:** quando si imposta l'ambiente di compilazione, un file di configurazione locale denominato *local.conf* diventa disponibile in una sottodirectory *conf* della directory di compilazione. Per questo esempio, le impostazioni predefinite sono impostate su build per una destinazone *qemux86* , che è adatta per l'emulazione. Il gestore di pacchetti utilizzato è impostato sul gestore di pacchetti RPM.

Puoi velocizzare notevolmente la compilazione e proteggerti dagli errori del fetcher utilizzando i mirror della cache di stato condivisa e abilitando Hash Equivalence . In questo modo, puoi utilizzare artefatti predefiniti invece di costruirli.

Per utilizzare tali mirror, decommentare le righe seguenti nel conf/local.conffile nella directory di build :

    BB_SIGNATURE_HANDLER = "OEEquivHash"
    BB_HASHSERVE = "auto"
    BB_HASHSERVE_UPSTREAM = "hashserv.yocto.io:8687"
    SSTATE_MIRRORS ?= "file://.* https://sstate.yoctoproject.org/all/PATH;downloadfilename=PATH"

3.**Avvia la compilazione:** continua con il seguente comando per creare un'immagine del sistema operativo per la destinazione, che è core-image-satoin questo esempio:

    $ bitbake core-image-sato

Per informazioni sull'utilizzo del comando bitbake, vedere la sezione [BitBake](https://docs-yoctoproject-org.translate.goog/current/overview-manual/concepts.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#bitbake) nel Manuale dei concetti e della panoramica del progetto Yocto, oppure consultare il  [comando BitBake nel Manuale dell'utente di BitBake](https://docs-yoctoproject-org.translate.goog/bitbake/2.2/bitbake-user-manual/bitbake-user-manual-intro.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#the-bitbake-command).   

4.**Simula la tua immagine usando QEMU:* una volta creata questa particolare immagine, puoi avviare QEMU, che è un Quick EMUlator fornito con il progetto Yocto:

    runqemu qemux86-64

Se vuoi saperne di più sull'esecuzione di QEMU, consulta il capitolo [Utilizzo dell'emulatore rapido (QEMU)](https://docs-yoctoproject-org.translate.goog/current/dev-manual/qemu.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#using-the-quick-emulator-qemu) nel Manuale delle attività di sviluppo del progetto Yocto.

5.**Esci da QEMU:** esci da QEMU facendo clic sull'icona di spegnimento o digitando Ctrl-Cnella finestra di trascrizione di QEMU da cui hai evocato QEMU.


## Personalizzazione della build per hardware specifico

Finora, tutto ciò che avete fatto è stato costruire rapidamente un'immagine adatta solo all'emulazione. **Questa sezione mostra come personalizzare la build per hardware specifico aggiungendo un livello hardware nell'ambiente di sviluppo del progetto Yocto.**

In generale, i layer sono repository che contengono set correlati di istruzioni e configurazioni che dicono a Yocto Project cosa fare. L'isolamento dei metadati correlati in layer funzionalmente specifici facilita lo sviluppo modulare e semplifica il riutilizzo dei metadati del livello.

**N.B.*: Per convenzione, i **nomi dei layer iniziano con la stringa "meta-"**.

Segui questi passaggi per aggiungere un livello hardware:

1.**Trova un livello:** sono disponibili molti livelli hardware. Yocto Project [Source Repositories](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://git.yoctoproject.org) ha molti livelli hardware. Questo esempio aggiunge il livello hardware meta-altera .

2.**Clona il livello:** usa Git per creare una copia locale del livello sulla tua macchina. Puoi mettere la copia nel livello superiore della copia del repository Poky creato in precedenza:

    $ cd poky
    $ git clone https://github.com/kraj/meta-altera.git
    Cloning into 'meta-altera'...
    remote: Counting objects: 25170, done.
    remote: Compressing objects: 100% (350/350), done.
    remote: Total 25170 (delta 645), reused 719 (delta 538), pack-reused 24219
    Receiving objects: 100% (25170/25170), 41.02 MiB | 1.64 MiB/s, done.
    Resolving deltas: 100% (13385/13385), done.
    Checking connectivity... done.

**Il livello hardware è ora disponibile accanto ad altri livelli all'interno del repository di riferimento Poky** sul tuo host di build *meta-altera* e contiene tutti i metadati necessari per supportare l'hardware di Altera, che è di proprietà di Intel.    

Si consiglia ai livelli di avere un ramo per ogni versione del progetto Yocto. Assicurati di controllare il ramo del livello che supporta la versione del progetto Yocto che stai utilizzando.

3.**Modificare la configurazione in Build per una macchina specifica:** la variabile MACHINE nel file local.conf specifica la macchina per la build. Per questo esempio, impostare la variabile MACHINE su cyclone5. Vengono utilizzate queste configurazioni: https://github.com/kraj/meta-altera/blob/master/conf/machine/cyclone5.conf.

4.**Aggiungi il tuo layer al file di configurazione del layer:** prima di poter utilizzare un layer durante una costruzione, devi aggiungerlo al tuo file *bblayers.conf* , che si trova nella directory Build Directory conf subdirectory.

Utilizzare il comando  **bitbake-layers add-layer** per aggiungere il layer al file di configurazione:

    $ cd poky/build
    $ bitbake-layers add-layer ../meta-altera
    NOTE: Starting bitbake server...
    Parsing recipes: 100% |##################################################################| Time: 0:00:32
    Parsing of 918 .bb files complete (0 cached, 918 parsed). 1401 targets,
    123 skipped, 0 masked, 0 errors.

Puoi trovare ulteriori informazioni sull'aggiunta di livelli nella sezione [Aggiunta di un livello utilizzando lo script bitbake-layers](https://docs-yoctoproject-org.translate.goog/current/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#adding-a-layer-using-the-bitbake-layers-script).

Il completamento di questi passaggi ha aggiunto il layer meta-altera al tuo ambiente di sviluppo del progetto Yocto e lo ha configurato per la compilazione della macchina cyclone5.

Nota

I passaggi precedenti sono solo a scopo dimostrativo. Se dovessi tentare di creare un'immagine per la macchina cyclone5, dovresti leggere il file Altera README.

## Creazione del proprio livello generale

Forse hai un'applicazione o un insieme specifico di comportamenti che devi isolare. Puoi creare il tuo livello generale usando il comando **bitbake-layers create-layer**. Lo strumento automatizza la creazione dei layer impostando una sottodirectory con un file di configurazione *layer.conf*, una sottodirectory  recipes-example che contiene una ricetta di esempio example.bb e un file di licenza README.

I seguenti comandi eseguono lo strumento per creare un layer denominato meta-mylayer nella directory poky:

    $ cd poky
    $ bitbake-layers create-layer meta-mylayer
    NOTE: Starting bitbake server...
    Add your new layer with 'bitbake-layers add-layer meta-mylayer'

Per ulteriori informazioni sui livelli e su come crearli, vedere la sezione [Creazione di un livello generale utilizzando lo script bitbake-layers](https://docs-yoctoproject-org.translate.goog/current/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#creating-a-general-layer-using-the-bitbake-layers-script) nel Manuale delle attività di sviluppo del progetto Yocto.

## Come proseguire 

Ora che hai sperimentato l'utilizzo del progetto Yocto, potresti chiederti "E adesso?". Il progetto Yocto ha molte fonti di informazioni tra cui il sito Web, le pagine wiki e i manuali dell'utente:

- **Sito Web:** il [sito Web del progetto Yocto](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://www.yoctoproject.org) fornisce informazioni di base, le ultime build, le ultime notizie, la documentazione completa sullo sviluppo e l'accesso a una ricca comunità di sviluppo del progetto Yocto a cui è possibile attingere.

- **Seminario video:** i [video Introduzione al progetto Yocto e BitBake, parte 1](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://youtu.be/yuE7my3KOpo) e [Introduzione al progetto Yocto e BitBake, parte 2](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://youtu.be/iZ05TTyzGHk) offrono un seminario video che introduce gli aspetti più importanti dello sviluppo di una distribuzione Linux embedded personalizzata con il progetto Yocto.

- **Yocto Project Overview and Concepts Manual:** Il Yocto Project [Overview and Concepts Manual](https://docs-yoctoproject-org.translate.goog/current/overview-manual/index.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) è un ottimo punto di partenza per conoscere il progetto Yocto. Questo manuale ti introduce al progetto Yocto e al suo ambiente di sviluppo. Il manuale fornisce anche informazioni concettuali per vari aspetti del Progetto Yocto.

- **Wiki del progetto Yocto:** la [Wiki del progetto Yocto](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://wiki.yoctoproject.org/wiki) fornisce informazioni aggiuntive su dove andare dopo quando si passa al progetto Yocto, informazioni sul rilascio, pianificazione del progetto e informazioni sul QA.

- **Elenco completo di collegamenti e altra documentazione:** la sezione [Collegamenti e documentazione correlata](https://docs-yoctoproject-org.translate.goog/current/ref-manual/resources.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#links-and-related-documentation) nel manuale di riferimento del progetto Yocto fornisce un elenco completo di tutti i collegamenti correlati e altra documentazione per l'utente.