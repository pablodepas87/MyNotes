# Componenti e strumenti

Il progetto Yocto utilizza una raccolta di componenti e strumenti utilizzati dal progetto stesso, dagli sviluppatori del progetto e da coloro che utilizzano il progetto Yocto. Questi componenti e strumenti sono progetti e metadati open source separati dalla distribuzione di riferimento ( Poky ) e dal sistema di compilazione OpenEmbedded . La maggior parte dei componenti e degli strumenti viene scaricata separatamente.

## Strumenti di sviluppo

Ecco gli strumenti che ti aiutano a sviluppare immagini e applicazioni utilizzando il progetto Yocto:

- **CROPS:** CROPS è un framework di sviluppo multipiattaforma open source che sfrutta Docker Containers . CROPS fornisce un ambiente facilmente gestibile ed estensibile che consente di creare file binari per una varietà di architetture su host Windows, Linux e Mac OS X.

- **devtool:** questo strumento da riga di comando è disponibile come parte dell'extensible SDK (eSDK) e ne è la pietra angolare. Puoi utilizzare devtool per aiutare a creare, testare e impacchettare il software all'interno dell'eSDK. È possibile utilizzare lo strumento per integrare facoltativamente ciò che si crea in un'immagine creata dal sistema di compilazione OpenEmbedded.

    Il comando devtool utilizza una serie di sottocomandi che consentono di aggiungere, modificare e aggiornare le ricette. 
    
    Come con il sistema di compilazione OpenEmbedded, le "ricette" rappresentano i pacchetti software all'interno di devtool. Quando usi , viene creata automaticamente una ricetta. Quando si utilizza , viene utilizzata la ricetta esistente specificata per determinare dove ottenere il codice sorgente e come correggerlo. 
    
    In entrambi i casi, viene impostato un ambiente in modo tale che quando costruisci la ricetta venga utilizzato un albero dei sorgenti che è sotto il tuo controllo per consentirti di apportare modifiche alla sorgente come desideri. 
    
    Per impostazione predefinita, sia le nuove ricette che i file sorgenti vanno in una directory "workspace" sotto l'eSDK. Il comando aggiorna una ricetta esistente in modo che tu possa crearla per un insieme aggiornato di file di origine.devtool adddevtool modifydevtool upgrade

    Puoi leggere informazioni sul flusso di lavoro di devtool nel manuale Yocto Project Application Development and Extensible Software Development Kit (eSDK) nella sezione [" Utilizzo di devtool nel tuo flusso di lavoro SDK "](https://docs.yoctoproject.org/sdk-manual/extensible.html#using-devtool-in-your-sdk-workflow).

- **Extensible Software Development Kit (eSDK):** l'eSDK fornisce una toolchain di sviluppo incrociato e librerie adattate ai contenuti di un'immagine specifica. L'eSDK semplifica l'aggiunta di nuove applicazioni e librerie a un'immagine, la modifica dell'origine di un componente esistente, il test delle modifiche sull'hardware di destinazione e l'integrazione nel resto del sistema di compilazione OpenEmbedded. L'eSDK ti offre un'esperienza di toolchain integrata con il potente set di comandi devtool su misura per l'ambiente del progetto Yocto.

    Per informazioni sull'eSDK, vedere il manuale Yocto Project [Application Development e Extensible Software Development Kit (eSDK)](https://docs.yoctoproject.org/sdk-manual/index.html) .

- **Toaster:** Toaster è un'interfaccia web per il sistema di compilazione Yocto Project OpenEmbedded. Toaster consente di configurare, eseguire e visualizzare informazioni sulle build. Per informazioni sul tostapane, vedere il [manuale dell'utente di toaster](https://docs.yoctoproject.org/toaster-manual/index.html) .


## Strumenti di produzione

Ecco i componenti associati a OpenEmbedded Build System :


- **Auto Upgrade Helper:** questa utility, se utilizzata in combinazione con OpenEmbedded Build System (BitBake e OE-Core), genera automaticamente aggiornamenti per ricette basate su nuove versioni delle ricette pubblicate a monte. Vedere Utilizzo di [Auto Upgrade Helper (AUH)](https://docs-yoctoproject-org.translate.goog/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#using-the-auto-upgrade-helper-auh) per configurarlo.

- **Sistema di segnalazione delle ricette:** il sistema di segnalazione delle ricette tiene traccia delle versioni delle ricette disponibili per Yocto Project. Lo scopo principale del sistema è aiutarti a gestire le ricette che mantieni e offrire una panoramica dinamica del progetto. Il Recipe Reporting System si basa sull'OpenEmbedded Layer Index , che è un sito Web che indicizza i livelli OpenEmbedded-Core.

- **Patchwork:** Patchwork è un fork di un progetto originariamente avviato da OzLabs . Il progetto è un sistema di monitoraggio basato sul Web progettato per semplificare il processo di inserimento dei contributi in un progetto. Il progetto Yocto utilizza Patchwork come strumento organizzativo per gestire le patch, che si contano a migliaia per ogni rilascio.

- **AutoBuilder:** AutoBuilder è un progetto che automatizza i test di compilazione e il controllo qualità (QA). Utilizzando l'AutoBuilder pubblico, chiunque può determinare lo stato dell'attuale ramo di sviluppo di Poky.

    Uno degli obiettivi del progetto Yocto è quello di guidare il settore open source con un progetto che automatizza le procedure di test e QA. In tal modo, il progetto incoraggia una comunità di sviluppo che pubblica QA e piani di test, dimostra pubblicamente QA e piani di test e incoraggia lo sviluppo di strumenti che automatizzano e testano e procedure di QA a beneficio della comunità di sviluppo.

- **Pseudo:** Pseudo è l'implementazione Yocto Project di fakeroot , che viene utilizzata per eseguire comandi in un ambiente che apparentemente ha privilegi di root.

    Durante una compilazione, può essere necessario eseguire operazioni che richiedono privilegi di amministratore di sistema. Pseudo è uno strumento che puoi utilizzare direttamente o tramite la variabile d'ambiente LD_PRELOAD. Entrambi i metodi consentono a queste operazioni di riuscire anche senza i privilegi di amministratore di sistema.

    Grazie a Pseudo, il progetto Yocto non ha mai bisogno dei privilegi di root per creare immagini per il tuo sistema di destinazione.


## Componenti del sistema di compilazione integrato aperto

Ecco i componenti associati a OpenEmbedded Build System :

- **BitBake:** BitBake è un componente fondamentale del progetto Yocto e viene utilizzato dal sistema di compilazione OpenEmbedded per creare immagini. Sebbene BitBake sia la chiave del sistema di compilazione, BitBake viene mantenuto separatamente dal progetto Yocto.

    BitBake è un motore di esecuzione di attività generico che consente di eseguire attività shell e Python in modo efficiente e in parallelo mentre si lavora all'interno di complessi vincoli di dipendenza tra attività. In breve, BitBake è un motore di compilazione che funziona attraverso ricette scritte in un formato specifico per eseguire serie di attività.

    [qui](https://docs-yoctoproject-org.translate.goog/bitbake/2.2/index.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) il Manuale dell'utente di BitBake .

- **OpenEmbedded-Core:** OpenEmbedded-Core (OE-Core) è un livello comune di metadati (ovvero ricette, classi e file associati) utilizzato dai sistemi derivati ​​da OpenEmbedded, che include il progetto Yocto. Il progetto Yocto e il progetto OpenEmbedded mantengono entrambi OpenEmbedded-Core. Puoi trovare i metadati OE-Core negli Yocto Project Source Repositories .

Storicamente, il progetto Yocto ha integrato i metadati OE-Core in tutto il sistema di riferimento del repository di origine del progetto Yocto (Poky). Dopo Yocto Project versione 1.0, Yocto Project e OpenEmbedded hanno concordato di lavorare insieme e condividere un set comune di metadati (OE-Core), che conteneva gran parte delle funzionalità.

La condivisione di un set principale di metadati si traduce in Poky come livello di integrazione sopra OE-Core.Il progetto Yocto combina vari componenti come BitBake, OE-Core e documentazione per il suo sistema di compilazione.

## Distribuzione dei riferimento (Poky)

Poky è la distribuzione di riferimento di Yocto Project. Contiene l' OpenEmbedded Build System (BitBake e OE-Core) e una serie di metadati per iniziare a creare la propria distribuzione. 

Per utilizzare gli strumenti e i componenti del progetto Yocto, puoi scaricarlo con un git clone e usarlo per avviare la tua distribuzione.

    Nota

    Poky non contiene file binari. È un esempio funzionante di come creare la propria distribuzione Linux personalizzata dal sorgente.

Puoi leggere di più su Poky nella sezione [" Distribuzione incorporata di riferimento (Poky) "](https://docs-yoctoproject-org.translate.goog/overview-manual/yp-intro.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#reference-embedded-distribution-poky).

## Packages for Finished Targets

Ecco i componenti associati ai pacchetti per obiettivi finiti:

- **Matchbox:** Matchbox è un ambiente di base Open Source per il sistema X Window in esecuzione su piattaforme embedded non desktop come palmari, set-top box, chioschi e qualsiasi altra cosa per cui lo spazio sullo schermo, i meccanismi di input o le risorse di sistema sono limitati .

    Matchbox è costituito da una serie di applicazioni intercambiabili e opzionali che è possibile adattare a una specifica piattaforma non desktop per migliorare l'usabilità in ambienti limitati.

    Puoi trovare la fonte Matchbox negli Yocto Project Source Repositories .

- **Opkg:** Open PacKaGe management (opkg) è un sistema di gestione dei pacchetti leggero basato sul sistema di gestione dei pacchetti itsy (ipkg). Opkg è scritto in C e assomiglia a Advanced Package Tool (APT) e Debian Package (dpkg) in funzione.

    Opkg è destinato all'uso su dispositivi Linux embedded e viene utilizzato in questa veste nei progetti OpenEmbedded e OpenWrt , nonché nel progetto Yocto.
    
## Componenti archiviati

**Build Appliance** è un'immagine di macchina virtuale che consente di creare e avviare un'immagine Linux incorporata personalizzata con Yocto Project utilizzando un sistema di sviluppo non Linux.

Storicamente, Build Appliance era il secondo dei tre metodi con cui era possibile utilizzare Yocto Project su un sistema non nativo di Linux.

**Hob:** Hob, che ora è deprecato e non è più disponibile poiché la versione 2.1 del progetto Yocto ha fornito un'interfaccia rudimentale basata su GUI per il progetto Yocto.

**Build Appliance:** Post Hob, Build Appliance è diventato disponibile. Non è mai stato consigliato utilizzare Build Appliance come ambiente di sviluppo della produzione quotidiana con il progetto Yocto. 
        Build Appliance è stato utile come modo per provare lo sviluppo nell'ambiente Yocto Project.

**CROPS:** L'ultima e migliore soluzione disponibile ora per lo sviluppo utilizzando Yocto Project su un sistema non nativo di Linux è con CROPS .
