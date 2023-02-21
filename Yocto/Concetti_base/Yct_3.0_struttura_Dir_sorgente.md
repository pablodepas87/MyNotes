# Source Directory Structure

La directory di origine è composta da numerosi file, directory e sottodirectory; comprenderne l'ubicazione e il contenuto è la chiave per utilizzare efficacemente il Progetto Yocto.

**N.B.:** Il sistema di compilazione OpenEmbedded non supporta nomi di file o directory che contengono spazi. Assicurati che la directory di origine che utilizzi non contenga questi tipi di nomi.

## Componenti principali di primo livello
Questa sezione descrive i componenti di primo livello della directory di origine

#### bitbake

Questa directory include una copia di BitBake per facilità d'uso. La copia di solito corrisponde all'attuale versione stabile di BitBake dal progetto BitBake. BitBake, un interprete di metadati , legge i metadati del progetto Yocto ed esegue le attività definite da tali dati. 
Gli errori sono solitamente causati da errori nei tuoi metadati e non da BitBake stesso.

Quando si esegue il comando bitbake, viene avviato l'eseguibile principale di BitBake (che risiede nella directory bitbake/bin/). 
L'approvvigionamento dello script di configurazione dell'ambiente (ovvero oe-init-build-env ) inserisce le directory scripts/ e bitbake/bin/(in quest'ordine) nella variabile d'ambiente PATH della shell.

#### build

Questa directory contiene i file di configurazione dell'utente e l'output generato dal sistema di compilazione OpenEmbedded nella sua configurazione standard in cui l'albero dei sorgenti è combinato con l'output. 
La directory di compilazione viene creata inizialmente quando si esegue *source* lo script di configurazione dell'ambiente di compilazione OpenEmbedded (ad es. oe-init-build-env ).

È anche possibile posizionare i file di output e di configurazione in una directory separata dalla directory di origine fornendo un nome di directory quando si esegue *source* lo script di installazione.

#### documentation

Questa directory contiene la fonte per la documentazione del progetto Yocto, nonché modelli e strumenti che consentono di generare versioni PDF e HTML dei manuali. Ogni manuale è contenuto in una propria sottocartella; ad esempio, 
i file per questo manuale di riferimento risiedono nella ref-manual/directory.

#### meta

Questa directory contiene i metadati OpenEmbedded-Core minimi e sottostanti. La directory contiene ricette, classi comuni e configurazione della macchina per target strettamente emulati ( qemux86, qemuarm, e così via.)

#### meta-poky

Progettata sopra il contenuto meta/ , questa directory aggiunge i metadati appena sufficienti per definire la distribuzione di riferimento Poky.

#### meta-yocto-bsp/

Questa directory contiene i pacchetti hardware di riferimento per schede di supporto (BSP) del progetto Yocto. Per ulteriori informazioni sui BSP, consultare la [Yocto Project Board Support Package Developer's Guide](https://docs-yoctoproject-org.translate.goog/bsp-guide/index.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) .

#### meta-selftest/

Questa directory aggiunge ricette aggiuntive e accoda file utilizzati dagli autotest OpenEmbedded per verificare il comportamento del sistema di compilazione. 
Non è necessario aggiungere questo livello al file bblayers.conf a meno che non si desideri eseguire gli autotest.

#### meta-skeleton/

Questa directory contiene ricette modello per BSP e lo sviluppo del kernel.

#### scripts/

Questa directory contiene vari script di integrazione che implementano funzionalità extra nell'ambiente del progetto Yocto (ad es. script QEMU). Lo script oe-init-build-env antepone questa directory alla variabile d'ambiente PATH della shell.

La directory scripts contiene script utili che aiutano a contribuire al progetto Yocto, come create-pull-requeste send-pull-request.

#### oe-init-build-env

Questo script configura l'ambiente di compilazione OpenEmbedded. L'esecuzione di questo script con il comando source in una shell apporta modifiche e imposta PATH e altre variabili principali di BitBake in base alla directory di lavoro corrente. 
È necessario eseguire uno script di configurazione dell'ambiente prima di eseguire i comandi BitBake. 
Lo script utilizza altri script all'interno della directory scripts per eseguire la maggior parte del lavoro.

Quando esegui questo script, il tuo ambiente Yocto Project viene configurato, viene creata una directory di build , la tua directory di lavoro diventa la directory di build e ti vengono presentati alcuni semplici suggerimenti su cosa fare dopo, incluso un elenco di alcuni possibili obiettivi costruire. 

Ecco un esempio:

    $ source oe-init-build-env

    ### Shell environment set up for builds. ###

    You can now run 'bitbake <target>'

    Common targets are:
        core-image-minimal
        core-image-sato
        meta-toolchain
        meta-ide-support

    You can also run generated QEMU images with a command like 'runqemu qemux86-64'

L'output predefinito dello script *oe-init-build-env* proviene dal file conf-notes.txt , che si trova nella directory meta-poky all'interno della directory sorgente. 
Se progetti una distribuzione personalizzata, puoi includere la tua versione di questo file di configurazione per menzionare gli obiettivi definiti dalla tua distribuzione. 
Vedere la sezione [" Creazione di una directory di configurazione del modello personalizzato "](https://docs-yoctoproject-org.translate.goog/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#creating-a-custom-template-configuration-directory) nel Manuale delle attività di sviluppo del progetto Yocto per ulteriori informazioni.

Per impostazione predefinita, l'esecuzione di questo script senza un argomento Build Directory crea la directory build/ nella directory di lavoro corrente. 
Se fornisci un argomento Build Directory quando esegui source lo script, dirigi il sistema di build OpenEmbedded a creare una Build Directory di tua scelta. 
Ad esempio, il comando seguente crea una directory di build denominata mybuilds/esterna alla directory di origine :

    $ source oe-init-build-env ~/mybuilds

Il sistema di compilazione OpenEmbedded utilizza i file di configurazione del modello, che si trovano per impostazione predefinita nella directory meta-poky/conf/templates/default nella directory di origine. 
Vedere la sezione ["Creazione di una directory di configurazione del modello personalizzato"](https://docs-yoctoproject-org.translate.goog/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#creating-a-custom-template-configuration-directory) nel Manuale delle attività di sviluppo del progetto Yocto per ulteriori informazioni.

#### LICENSE, README, and README.hardware

Questi file sono file standard di primo livello.

## La directory di compilazione —build/

Il sistema di compilazione OpenEmbedded crea la directory di compilazione quando si esegue lo script di configurazione dell'ambiente di compilazione *oe-init-build-env*. 
Se non si assegna un nome specifico alla directory di build quando si esegue lo script di installazione, il nome predefinito è **build/**.

Per la successiva analisi ed elaborazione, il nome della directory Build è disponibile tramite la variabile **TOPDIR** .

#### build/buildhistory/

Il sistema di compilazione OpenEmbedded crea questa directory quando si abilita la cronologia di compilazione tramite il file di classe *buildhistory*. 
La directory organizza le informazioni sulla build in image, packages e sottodirectory SDK.
Per informazioni sulla funzionalità della cronologia di compilazione, vedere la sezione [" Mantenimento della qualità dell'output di compilazione "](https://docs-yoctoproject-org.translate.goog/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#maintaining-build-output-quality) nel Manuale delle attività di sviluppo del progetto Yocto

#### build/cache/

Questa directory contiene diversi file interni utilizzati dal sistema di compilazione OpenEmbedded.

Contiene inoltre sanity_info un file di testo che tiene traccia di importanti informazioni sulla build come i valori di TMPDIR , SSTATE_DIR , nonché il nome e la versione della distribuzione host.

#### build/conf/local.conf

Questo file di configurazione contiene tutte le configurazioni utente locali per il tuo ambiente di compilazione. Il file local.conf contiene la documentazione sulle varie opzioni di configurazione

Qualsiasi variabile impostata qui sovrascrive qualsiasi variabile impostata altrove all'interno dell'ambiente a meno che tale variabile non sia hardcoded all'interno di un file (ad esempio utilizzando '=' invece di '?='). Alcune variabili sono hardcoded per vari motivi, ma tali variabili sono relativamente rare.

Come minimo, dovresti normalmente modificare questo file per selezionare il MACHINE ( di default MACHINE ?= qemu86  di destinazione , i tipi di pacchetto che desideri utilizzare ( PACKAGE_CLASSES ) e la posizione da cui desideri accedere ai file scaricati ( DL_DIR --> download dir).

Se *local.conf* non è presente quando avvii la compilazione, il sistema di compilazione OpenEmbedded lo crea da *local.conf.sample* quando esegui source lo script di configurazione dell'ambiente di compilazione di livello superiore *oe-init-build-env* .

Il file di origine local.conf.sample utilizzato dipende dalla variabile di script TEMPLATECONF meta-poky/conf/templates/default , che per impostazione predefinita 
è quando si crea dall'ambiente di sviluppo Yocto Project altrimenti *meta/conf/templates/default* quando si crea dall'ambiente OpenEmbedded-Core. 
Poiché la variabile di script punta all'origine del local.conf.samplefile, ciò implica che è possibile configurare l'ambiente di compilazione da qualsiasi livello impostando la variabile nello script di configurazione dell'ambiente di compilazione di livello superiore come segue:

    TEMPLATECONF=your_layer/conf/templates/your_template_name

Una volta che il processo di compilazione ottiene il file di esempio, lo utilizza *sed* per sostituire i valori ${OEROOT} finali per tutti i ##OEROOT##.

*Nota:* Puoi vedere come viene usata la variabile TEMPLATECONF osservando lo *scripts/oe-setup-builddir* script nella Source Directory . 
Puoi trovare la versione Yocto Project del file local.conf.sample nella cartella *meta-poky/conf/templates/default*.


#### build/conf/bblayers.conf

Questo file di configurazione definisce i layer , che sono alberi di directory, attraversati (o percorsi) da BitBake. Il file *bblayers.conf* utilizza la variabile BBLAYERS per elencare i layer che BitBake cerca di trovare.

Se **bblayers.conf** non è presente quando si avvia la compilazione, il sistema di compilazione OpenEmbedded lo crea da bblayers.conf.sample quando si esegue con il comndo **source oe-init-build-env** lo script di configurazione dell'ambiente di compilazione. 

Come per il file local.conf, bblayers.conf.sample utilizzato dipende dalla variabile di script TEMPLATECONF *meta-poky/conf/templates/default* , che per impostazione predefinita è quando si crea dall'ambiente di sviluppo Yocto Project invece 
*meta/conf/templates/default* quando si crea dall'ambiente OpenEmbedded-Core. 
Poiché la variabile di script punta all'origine del file bblayers.conf.sample, ciò implica che puoi basare la tua compilazione da qualsiasi livello impostando la variabile nello script di configurazione dell'ambiente di compilazione di livello superiore come segue:

    TEMPLATECONF=your_layer/conf/templates/your_template_name

Una volta che il processo di compilazione ottiene il file di esempio, lo utilizza sedper sostituire i valori ${OEROOT} finali per tutti ##OEROOT##i valori.



**Nota:** Puoi vedere come la variabile TEMPLATECONF è definita dallo scripts/oe-setup-builddirscript nella Source Directory . Puoi trovare la versione Yocto Project del file bblayers.conf.sample nella cartella meta-poky/conf/templates/default

#### build/downloads/

Questa directory contiene i tarball di origine upstream scaricati. È possibile riutilizzare la directory per più build o spostare la directory in un'altra posizione. Puoi controllare la posizione di questa directory tramite la variabile DL_DIR .

#### build/sstate-cache/

Questa directory contiene la cache di stato condivisa. È possibile riutilizzare la directory per più build o spostare la directory in un'altra posizione. Puoi controllare la posizione di questa directory tramite la variabile SSTATE_DIR .

#### build/tmp/

Il sistema di compilazione OpenEmbedded crea e utilizza questa directory per tutto l'output del sistema di compilazione. La variabile TMPDIR punta a questa directory.

**BitBake crea questa directory se non esiste.** Come ultima risorsa, per ripulire una build e avviarla da zero (a parte i download), puoi rimuovere tutto nella directory tmp o eliminare completamente la directory. Se lo fai, dovresti anche rimuovere completamente la directory build/sstate-cache.

#### build/tmp/buildstats/

Questa directory memorizza le statistiche di compilazione

#### build/tmp/cache/

Quando BitBake analizza i metadati (ricette e file di configurazione), memorizza nella cache ( build/tmp/cache ) i risultati per accelerare le build future. 
I risultati vengono archiviati in base alla macchina.Durante le build successive, BitBake controlla ogni ricetta (insieme, ad esempio, a tutti i file inclusi o aggiunti ad essa) per vedere se sono stati modificati. 
Le modifiche possono essere rilevate, ad esempio, attraverso le modifiche dell'ora di modifica del file (mtime) e l'hashing del contenuto del file. Se non vengono rilevate modifiche al file, viene riutilizzato il risultato analizzato memorizzato nella cache. Se il file è stato modificato, viene analizzato.

#### build/tmp/deploy

Questa directory contiene qualsiasi output "risultato finale" dal processo di compilazione di OpenEmbedded. 
La variabile DEPLOY_DIR punta a questa directory. Per maggiori dettagli sui contenuti della deploy directory, vedere le sezioni ["Immagini"](https://docs-yoctoproject-org.translate.goog/overview-manual/concepts.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#images) e ["SDK per lo sviluppo di applicazioni"](https://docs-yoctoproject-org.translate.goog/overview-manual/concepts.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#application-development-sdk) nello Yocto Project Overview and Concepts Manual.

#### build/tmp/deploy/deb/

Questa directory riceve tutti i pacchetti .deb prodotti dal processo di compilazione. I pacchetti sono ordinati in feed per diversi tipi di architettura.

#### build/tmp/deploy/rpm/

Questa directory riceve tutti i pacchetti .rpm prodotti dal processo di compilazione. I pacchetti sono ordinati in feed per diversi tipi di architettura.

#### build/tmp/deploy/ipk/

Questa directory riceve i pacchetti .ipk prodotti dal processo di compilazione.

#### build/tmp/deploy/licenses/

Questa directory riceve le informazioni sulla licenza del pacchetto. Ad esempio, la directory contiene le sottodirectory per bash, busyboxe glibc(tra le altre) che a loro volta contengono i file COPYING di licenza appropriati con altre informazioni sulla licenza. 
Per informazioni sulla licenza, vedere la sezione ["Mantenimento della conformità della licenza open source durante il ciclo di vita del prodotto"](https://docs-yoctoproject-org.translate.goog/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#maintaining-open-source-license-compliance-during-your-product-s-lifecycle) nel Manuale delle attività di sviluppo del progetto Yocto.

#### build/tmp/deploy/images/

Questa directory è popolata con gli oggetti di output di base della build (considerali come gli "artefatti generati" del processo di build), inclusi elementi come l'immagine del boot loader, il kernel, il filesystem di root e altro. **Se desideri eseguire il flashing dell'immagine risultante da una build su un dispositivo, cerca qui i componenti necessari.**

Prestare attenzione quando si eliminano i file in questa directory. Puoi tranquillamente eliminare le vecchie immagini da questa directory (ad esempio core-image-*). Tuttavia, il kernel ( *zImage*, *uImage*, ecc.), il bootloader e altri file supplementari potrebbero essere distribuiti qui prima di creare un'immagine. Poiché questi file non sono prodotti direttamente dall'immagine, se li elimini non verranno ricreati automaticamente quando costruisci nuovamente l'immagine.

Se elimini accidentalmente i file qui, dovrai forzarne la ricreazione. Per fare ciò, dovrai conoscere il target che li ha prodotti. Ad esempio, questi comandi ricostruiscono e ricreano i file del kernel:

    $ bitbake -c clean virtual/kernel
    $ bitbake virtual/kernel

#### build/tmp/deploy/sdk/


Il sistema di compilazione OpenEmbedded crea questa directory per contenere gli script di installazione della toolchain che, una volta eseguiti, installano il sysroot che corrisponde all'hardware di destinazione. 
Puoi trovare ulteriori informazioni su questi programmi di installazione nella sezione [" Creazione di un programma di installazione SDK "](https://docs-yoctoproject-org.translate.goog/sdk-manual/appendix-obtain.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#building-an-sdk-installer) nel manuale Yocto Project Application Development e Extensible Software Development Kit (eSDK).

#### build/tmp/sstate-control/

Il sistema di compilazione OpenEmbedded utilizza questa directory per i file manifest dello stato condiviso. Il codice di stato condiviso utilizza questi file per registrare i file installati da ciascuna attività sstate in modo che i file possano essere rimossi durante la pulizia della ricetta o quando sta per essere installata una versione più recente. 
Il sistema di compilazione utilizza anche i manifest per rilevare e produrre un avviso quando i file di un'attività sovrascrivono quelli di un'altra.

#### build/tmp/sysroots-components/

Questa directory è la posizione del contenuto di sysroot che l'attività do_prepare_recipe_sysroot collega o copia nella sysroot specifica della ricetta per ogni ricetta elencata in DEPENDS . Il popolamento di questa directory è gestito attraverso lo stato condiviso, mentre il percorso è specificato dalla variabile COMPONENTS_DIR . 
A parte alcune circostanze insolite, la gestione della directory sysroots-components dovrebbe essere automatica e le ricette non dovrebbero fare riferimento direttamente a build/tmp/sysroots-components.

#### build/tmp/sysroots/

Le versioni precedenti del sistema di compilazione OpenEmbedded erano utilizzate per creare una sysroot condivisa globale per macchina insieme a una sysroot nativa. 
Dalla versione 2.3 del progetto Yocto, ci sono sysroot nelle directory WORKDIR specifiche per le ricette . Pertanto, la build/tmp/sysroots/directory è inutilizzata.

Nota

La directory build/tmp/sysroots/ può ancora essere popolata utilizzando il comando e può essere utilizzata per la compatibilità in alcuni casi. 
Tuttavia, in generale non è consigliabile popolare questa directory. È necessario utilizzare sysroot specifici per le singole ricette. bitbake build-sysroots


#### build/tmp/stamps/

Questa directory contiene informazioni che BitBake utilizza per scopi di contabilità per tenere traccia delle attività eseguite e quando sono state eseguite. 
La directory è suddivisa per architettura, nome del pacchetto e versione. Di seguito è riportato un esempio:

    stamps/all-poky-linux/distcc-config/1.0-r0.do_build-2fdd....2do

Sebbene i file nella directory siano privi di dati, BitBake utilizza i nomi dei file e i timestamp per scopi di tracciamento.

Per informazioni su come BitBake utilizza i file timbro per determinare se un'attività deve essere rieseguita, vedere la sezione [" File timbro e riesecuzione delle attività "](https://docs-yoctoproject-org.translate.goog/overview-manual/concepts.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#stamp-files-and-the-rerunning-of-tasks) nel manuale Yocto Project Overview and Concepts.

#### build/tmp/log

Questa directory contiene i log generali che non vengono inseriti in altro modo utilizzando WORKDIR del pacchetto . Esempi di log sono l'output delle attività do_check_pkgo do_distro_check. L'esecuzione di una build non significa necessariamente che questa directory sia stata creata.

#### build/tmp/work/

Questa directory contiene sotto directory di lavoro specifiche dell'architettura per i pacchetti creati da BitBake. Tutte le attività vengono eseguite dalla directory di lavoro appropriata. Ad esempio, il sorgente di un particolare pacchetto viene decompresso, corretto, configurato e compilato all'interno della propria directory di lavoro. All'interno della directory di lavoro, l'organizzazione si basa sul gruppo di pacchetti e sulla versione per cui viene compilato il sorgente come definito da WORKDIR .

Vale la pena considerare la struttura di una tipica directory di lavoro. Ad esempio, si consideri linux-yocto-kernel-3.0 la macchina qemux86 costruita nell'ambito del Progetto Yocto. Per questo pacchetto, viene creata una directory di lavoro di tmp/work/qemux86-poky-linux/linux-yocto/3.0+git1+<.....>, denominata WORKDIR . All'interno di questa directory, il sorgente viene decompresso linux-qemux86-standard-builde quindi corretto da Quilt

All'interno della directory, vengono create le directory standard di Quilt linux-qemux86-standard-build  linux-3.0/patchese possono essere utilizzati i comandi standard di pc Quilt.linux-3.0/

Ci sono altre directory generate all'interno di WORKDIR . La directory più importante è WORKDIR/temp/ che contiene i file di registro per ogni attività ( log.do_*.pid) e contiene gli script eseguiti da BitBake per ogni attività ( run.do_*.pid). La directory WORKDIR/image/ è dove "make install" posiziona il suo output che viene poi suddiviso in sottopacchetti all'interno di WORKDIR/packages-split/.

#### build/tmp/work/tunearch/recipename/version/

La directory di lavoro della ricetta — ${WORKDIR}.

Come descritto in precedenza nella sezione " build/tmp/sysroots/ ", a partire dalla versione 2.3 del progetto Yocto, il sistema di compilazione OpenEmbedded compila ogni ricetta nella propria directory di lavoro (ad esempio WORKDIR ). Il percorso della directory di lavoro è costruito usando l'architettura della build data (es. TUNE_PKGARCH , MACHINE_ARCH , o “allarch”), il nome della ricetta, e la versione della ricetta (es. PE :PV -PR ).

Ecco le principali sottodirectory all'interno di ciascuna directory di lavoro della ricetta:

    ${WORKDIR}/temp: Contiene i file di registro di ogni attività eseguita per questa ricetta, i file "run" per ogni attività eseguita, che contengono il codice run, e un file, log.task_orderche elenca l'ordine in cui sono state eseguite le attività.

    ${WORKDIR}/image: contiene l'output dell'attività do_install , che corrisponde alla variabile ${D} in tale attività.

    ${WORKDIR}/pseudo: Contiene lo pseudo database e il registro per tutte le attività eseguite sotto pseudo per la ricetta.

    ${WORKDIR}/sysroot-destdir: contiene l'output dell'attività do_populate_sysroot .

    ${WORKDIR}/package: contiene l'output dell'attività do_package prima che l'output venga suddiviso in singoli pacchetti.

    ${WORKDIR}/packages-split: contiene l'output dell'attività do_package dopo che l'output è stato suddiviso in singoli pacchetti. Esistono sottodirectory per ogni singolo pacchetto creato dalla ricetta.

    ${WORKDIR}/recipe-sysroot: una directory popolata con le dipendenze di destinazione della ricetta. Questa directory ha l'aspetto del filesystem di destinazione e contiene le librerie a cui potrebbe essere necessario collegare la ricetta (ad esempio la libreria C).

    ${WORKDIR}/recipe-sysroot-native: Una directory popolata con le dipendenze native della ricetta. Questa directory contiene gli strumenti che la ricetta necessita per costruire (es. il compilatore, Autoconf, libtool, e così via).

    ${WORKDIR}/build: questa sottodirectory si applica solo alle ricette che supportano build in cui la fonte è separata dagli artefatti di build. Il sistema di compilazione OpenEmbedded usa questa directory come directory di compilazione separata (cioè ${B} ).


#### build/tmp/work-shared/

Per efficienza, il sistema di compilazione OpenEmbedded crea e utilizza questa directory per contenere ricette che condividono una directory di lavoro con altre ricette. In pratica, questo viene usato solo per gcce le sue varianti (es. gcc-cross, libgcc, gcc-runtime, e così via).



## I metadati —meta/

Come accennato in precedenza, i metadati sono il fulcro del progetto Yocto. I metadati hanno diverse suddivisioni importanti:


#### meta/classes*/

Queste directory contengono i file *.bbclass*. I file di classe vengono utilizzati per astrarre il codice comune in modo che possa essere riutilizzato da più pacchetti. Ogni pacchetto eredita il file base.bbclass . 
Esempi di altre classi importanti sono autotools*.bbclass , che in teoria consente a qualsiasi pacchetto abilitato per Autotool di funzionare con il progetto Yocto con il minimo sforzo. 
Un altro esempio è kernel.bbclass che contiene codice e funzioni comuni per lavorare con il kernel Linux. Anche funzioni come la generazione di immagini o il packaging hanno i loro file di classe specifici come image.bbclass , rootfs*.bbclass e package*.bbclass

Per informazioni di riferimento sulle classi, vedere il capitolo ["classi"](https://docs-yoctoproject-org.translate.goog/ref-manual/classes.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp).

#### meta/conf/

Questa directory contiene il set principale di file di configurazione che iniziano da bitbake.conf e da cui sono inclusi tutti gli altri file di configurazione. Guarda le istruzioni include alla fine del file bitbake.conf e noterai che even local.conf viene caricato da lì. Durante bitbake.conf l'impostazione dei valori predefiniti, è spesso possibile sovrascriverli utilizzando il file local.conf ( ), il file macchina o il file di configurazione della distribuzione.


#### meta/conf/machine/

Questa directory contiene tutti i file di configurazione della macchina. Se si imposta , il sistema di compilazione OpenEmbedded cerca un file in questa directory. La directory include contiene vari dati comuni a più macchine. Se vuoi aggiungere il supporto per una nuova macchina al progetto Yocto, guarda in questa directory. MACHINE = "qemux86"qemux86.conf

####  meta/conf/distro/

Il contenuto di questa directory controlla tutte le configurazioni specifiche della distribuzione. Per il progetto Yocto, defaultsetup.conf è il file principale. Questa directory include le versioni e le definizioni SRCDATE per le applicazioni configurate qui. Un esempio di una configurazione alternativa potrebbe essere poky-bleeding.conf. Sebbene questo file erediti principalmente la sua configurazione da Poky.

#### meta/conf/machine-sdk/

Il sistema di compilazione OpenEmbedded cerca in questa directory i file di configurazione che corrispondono al valore della variabile SDKMACHINE . Per impostazione predefinita, i file x86 a 32 e 64 bit vengono forniti con il progetto Yocto che supporta alcuni host SDK. 
Tuttavia, è possibile estendere tale supporto ad altri host SDK aggiungendo ulteriori file di configurazione in questa sottodirectory all'interno di un altro livello.

#### meta/files/

Questa directory contiene i file di licenza comuni e diversi file di testo utilizzati dal sistema di compilazione. I file di testo contengono informazioni minime sul dispositivo ed elenchi di file e directory con autorizzazioni note.

#### meta/lib/

Questa directory contiene il codice della libreria OpenEmbedded Python utilizzato durante il processo di compilazione.

#### meta/recipes-bsp/

Questa directory contiene qualsiasi collegamento a hardware specifico o informazioni di configurazione hardware come "u-boot" e "grub".

#### meta/recipes-connectivity/

Questa directory contiene librerie e applicazioni relative alla comunicazione con altri dispositivi.

#### meta/recipes-core/

Questa directory contiene ciò che è necessario per creare un'immagine Linux funzionante di base, comprese le dipendenze comunemente utilizzate.

#### meta/recipes-devtools/

Questa directory contiene gli strumenti utilizzati principalmente dal sistema di compilazione. Gli strumenti, tuttavia, possono essere utilizzati anche sui bersagli.

#### meta/recipes-extended/

Questa directory contiene applicazioni non essenziali che aggiungono funzionalità rispetto alle alternative in core. Potrebbe essere necessaria questa directory per la piena funzionalità dello strumento.

#### meta/recipes-gnome/

Questa directory contiene tutte le cose relative al framework dell'applicazione GTK+.

#### meta/recipes-graphics/

Questa directory contiene X e altre librerie di sistema graficamente correlate.

#### meta/recipes-kernel/

Questa directory contiene il kernel e le applicazioni e le librerie generiche che hanno forti dipendenze dal kernel.

#### meta/recipes-multimedia/

Questa directory contiene codec e utilità di supporto per audio, immagini e video.

#### meta/recipes-rt/

Questa directory contiene ricette di pacchetti e immagini per usare e testare il kernel PREEMPT_RT

#### meta/recipes-sato/

Questa directory contiene la demo/UI/UX di riferimento di Sato e le sue applicazioni associate e i dati di configurazione.

#### meta/recipes-support/

Questa directory contiene ricette usate da altre ricette, ma che non sono direttamente incluse nelle immagini (cioè dipendenze di altre ricette).

#### meta/site/

Questa directory contiene un elenco di risultati memorizzati nella cache per varie architetture. Poiché alcuni risultati dei test "autoconf" non possono essere determinati durante la compilazione incrociata a causa dei test che non possono essere eseguiti su un sistema live, le informazioni in questa directory vengono passate ad "autoconf" per le varie architetture.

### meta/recipes.txt

Questo file è una descrizione del contenuto di recipes-*.
