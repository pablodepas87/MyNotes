# Cos'è il Progetto Yocto?

Il progetto Yocto è un progetto di collaborazione open source che aiuta gli sviluppatori a creare sistemi personalizzati basati su Linux e progettati per prodotti embedded indipendentemente dall'architettura hardware del prodotto.

Yocto Project fornisce un set di strumenti flessibile e un ambiente di sviluppo che consente agli sviluppatori di dispositivi embedded di tutto il mondo di collaborare attraverso tecnologie condivise, stack software, configurazioni e best practice utilizzate per creare queste immagini Linux su misura.

Migliaia di sviluppatori in tutto il mondo hanno scoperto che Yocto Project offre vantaggi nello sviluppo di sistemi e applicazioni, vantaggi di archiviazione e gestione e personalizzazioni utilizzate per velocità, ingombro e utilizzo della memoria. Il progetto è uno standard quando si tratta di fornire stack di software embedded. Il progetto consente personalizzazioni del software e interscambio di build per più piattaforme hardware, nonché stack software che possono essere mantenuti e ridimensionati.

![](https://docs-yoctoproject-org.translate.goog/_images/key-dev-elements.png?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp)

## Caratteristiche

Ecco caratteristiche e vantaggi del Progetto Yocto:

- **Ampiamente adottato in tutto il settore:** molti fornitori di semiconduttori, sistemi operativi, software e servizi adottano e supportano il progetto Yocto nei loro prodotti e servizi. 
- **Architettura indipendente:** Yocto Project supporta Intel, ARM, MIPS, AMD, PPC e altre architetture. La maggior parte degli ODM, degli OSV e dei fornitori di chip crea e fornisce BSP che supportano il loro hardware. Se disponi di silicio personalizzato, puoi creare un BSP che supporti tale architettura.

    Oltre all'ampio supporto dell'architettura, il progetto Yocto supporta completamente un'ampia gamma di dispositivi emulati dal Quick EMUlator (QEMU).

- **Trasferimento facile di immagini e codice:** l'output di Yocto Project può spostarsi facilmente tra le architetture senza passare a nuovi ambienti di sviluppo. Inoltre, se hai utilizzato Yocto Project per creare un'immagine o un'applicazione e non sei in grado di supportarla, i fornitori commerciali di Linux come Wind River, Mentor Graphics, Timesys ed ENEA potrebbero accettarla e fornire supporto continuo. Questi fornitori hanno offerte create utilizzando il progetto Yocto.

- **Flessibilità:** le aziende utilizzano il progetto Yocto in molti modi diversi. Un esempio è creare una distribuzione Linux interna come base di codice che l'azienda può utilizzare su più gruppi di prodotti. Attraverso la personalizzazione e la stratificazione, un gruppo di progetto può sfruttare la distribuzione Linux di base per creare una distribuzione che funzioni per le proprie esigenze di prodotto.

- **Ideale per dispositivi embedded vincolati e IoT:** a differenza di una distribuzione Linux completa, puoi utilizzare il progetto Yocto per creare esattamente ciò di cui hai bisogno per i dispositivi embedded. Aggiungi solo il supporto delle funzionalità o i pacchetti di cui hai assolutamente bisogno per il dispositivo. Per i dispositivi dotati di hardware di visualizzazione, puoi utilizzare i componenti di sistema disponibili come X11, Wayland, GTK+, Qt, Clutter e SDL (tra gli altri) per creare un'esperienza utente ricca. Per i dispositivi che non dispongono di un display o in cui si desidera utilizzare framework dell'interfaccia utente alternativi, è possibile scegliere di non creare questi componenti.

- **Funzionalità complete della toolchain:** le toolchain per le architetture supportate soddisfano la maggior parte dei casi d'uso. Tuttavia, se il tuo hardware supporta funzionalità che non fanno parte di una toolchain standard, puoi facilmente personalizzare tale toolchain specificando parametri di ottimizzazione specifici della piattaforma. E, se hai bisogno di utilizzare una toolchain di terze parti, i meccanismi integrati nel progetto Yocto lo consentono.

- **Regole del meccanismo sulla politica:** concentrarsi sul meccanismo piuttosto che sulla politica garantisce la libertà di impostare politiche basate sulle esigenze del progetto invece di adottare decisioni imposte da alcuni fornitori di software di sistema.

- **Utilizza un modello a livelli:** l' infrastruttura a livelli del progetto Yocto raggruppa le funzionalità correlate in pacchetti separati. Puoi aggiungere in modo incrementale queste funzionalità raggruppate al tuo progetto secondo necessità. L'utilizzo dei livelli per isolare e raggruppare le funzionalità riduce la complessità e la ridondanza del progetto, consente di estendere facilmente il sistema, effettuare personalizzazioni e mantenere le funzionalità organizzate.

- **Supporta build parziali:** puoi creare e ricostruire singoli pacchetti secondo necessità. Yocto Project ottiene questo risultato attraverso il suo schema Shared State Cache (sstate). Essere in grado di costruire ed eseguire il debug dei componenti individualmente facilita lo sviluppo del progetto.

- **Rilasci secondo un programma rigoroso:** i rilasci principali si verificano su un ciclo di sei mesi, prevedibilmente in ottobre e aprile. Le due versioni più recenti supportano le versioni minori per affrontare vulnerabilità ed esposizioni comuni. Questa prevedibilità è fondamentale per i progetti basati sul progetto Yocto e consente ai team di sviluppo di pianificare le attività.

- **Ricco ecosistema di individui e organizzazioni:** per i progetti open source, il valore della comunità è molto importante. I forum di supporto, le competenze e gli sviluppatori attivi che continuano a portare avanti il ??progetto Yocto sono prontamente disponibili.

- **Riproducibilità binaria:** Il progetto Yocto consente di essere molto specifici sulle dipendenze e raggiunge percentuali molto elevate di riproducibilità binaria (ad es. 99,8% per core-image-minimal). Quando le distribuzioni non specificano quali pacchetti vengono inseriti e in quale ordine supportare le dipendenze, altri sistemi di compilazione possono includere arbitrariamente i pacchetti.

- **Manifesto della licenza:** il progetto Yocto fornisce un manifesto della licenza per la revisione da parte di persone che devono tenere traccia dell'uso di licenze open source (ad es. team legali).

## Sfide

Ecco le sfide che potresti incontrare durante lo sviluppo utilizzando il progetto Yocto:

- **Curva di apprendimento ripida:** il progetto Yocto ha una curva di apprendimento ripida e ha molti modi diversi per svolgere compiti simili. Può essere difficile scegliere tra questi modi.

- **Capire quali modifiche devi apportare al tuo progetto richiede alcune ricerche:** oltre alla semplice fase di tutorial, capire quali modifiche devono essere apportate per il tuo particolare progetto può richiedere una notevole quantità di ricerca e indagine. Per informazioni che ti aiutino a passare dal provare il progetto Yocto al suo utilizzo per il tuo progetto, consulta i documenti " Cosa avrei voluto sapere sul progetto Yocto " e " Transizione a un ambiente personalizzato per lo sviluppo di sistemi " sul sito web del progetto Yocto .

- **Il flusso di lavoro del progetto potrebbe creare confusione:** il flusso di lavoro del progetto Yocto potrebbe creare confusione se sei abituato allo sviluppo di software desktop e server tradizionale. In un ambiente di sviluppo desktop, esistono meccanismi per eseguire facilmente il pull e l'installazione di nuovi pacchetti, che in genere sono file binari precompilati da server accessibili tramite Internet. Utilizzando il progetto Yocto, è necessario modificare la configurazione e ricostruire per aggiungere ulteriori pacchetti.

- **Lavorare in un ambiente cross-build può sembrare poco familiare:** quando si sviluppa codice da eseguire su una destinazione, la compilazione, l'esecuzione e il test eseguiti sulla destinazione effettiva possono essere più veloci rispetto all'esecuzione di una build BitBake su un host di sviluppo e quindi alla distribuzione dei binari alla destinazione per prova. Sebbene il progetto Yocto supporti gli strumenti di sviluppo sulla destinazione, sarebbe necessario il passaggio aggiuntivo per integrare le modifiche nell'ambiente di compilazione del progetto Yocto. Yocto Project supporta un approccio intermedio che implica apportare modifiche al sistema di sviluppo all'interno dell'ambiente BitBake e quindi distribuire solo i pacchetti aggiornati alla destinazione.

    Il Yocto Project OpenEmbedded Build System produce pacchetti in formati standard (cioè RPM, DEB, IPK e TAR). È possibile distribuire questi pacchetti nel sistema in esecuzione sulla destinazione utilizzando utilità sulla destinazione come rpm o ipk.

- **I tempi iniziali di compilazione possono essere significativi:** i lunghi tempi di compilazione iniziale sono sfortunatamente inevitabili a causa dell'elevato numero di pacchetti inizialmente compilati da zero per un sistema Linux perfettamente funzionante. Una volta completata la build iniziale, tuttavia, il meccanismo di cache a stato condiviso (sstate) utilizzato da Yocto Project impedisce al sistema di ricostruire i pacchetti che non sono stati "toccati" dall'ultima build. Il meccanismo sstate riduce significativamente i tempi per le build successive.




