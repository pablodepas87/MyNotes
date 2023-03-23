## Il modello a strati del progetto Yocto

Il **"Layer Model"** del progetto Yocto è un modello di sviluppo per la creazione di Linux embedded e IoT che distingue il progetto Yocto da altri semplici sistemi di compilazione. Il modello a livelli supporta contemporaneamente la collaborazione e la personalizzazione. *I layer sono repository che contengono serie di istruzioni correlate che dicono a OpenEmbedded Build System cosa fare.* Puoi collaborare, condividere e riutilizzare i livelli.

I livelli possono contenere modifiche a istruzioni o impostazioni precedenti in qualsiasi momento. Questa potente funzionalità di override è ciò che consente di personalizzare i livelli di collaborazione o comunità forniti in precedenza per soddisfare i requisiti del prodotto.

Usi diversi livelli per separare logicamente le informazioni nella tua build. Ad esempio, potresti avere BSP, GUI, configurazione distro, middleware o livelli di applicazione. 

Mettere l'intera build in un livello limita e complica la personalizzazione e il riutilizzo futuri. 

**L'isolamento delle informazioni in livelli, d'altra parte, aiuta a semplificare le future personalizzazioni e il riutilizzo.** Potresti trovare allettante mantenere tutto in un unico livello quando lavori su un singolo progetto. Tuttavia, **più i tuoi metadati sono modulari, più è facile far fronte ai cambiamenti futuri**.

    

    Nota

    Usa i layer BSP (Board Support Package) dei fornitori di silicio quando possibile.

    Acquisisci familiarità con i livelli compatibili con il progetto Yocto o con l' indice dei livelli OpenEmbedded . Quest'ultimo contiene più livelli ma sono meno universalmente convalidati.

    I livelli supportano l'inclusione di tecnologie, componenti hardware e componenti software. La designazione Yocto Project Compatible fornisce un livello minimo di standardizzazione che contribuisce a un forte ecosistema. "YP Compatible" viene applicato a prodotti e componenti software appropriati come BSP, altri livelli compatibili con OE e relativi progetti open source, consentendo al produttore di utilizzare i badge Yocto Project e le risorse di branding.

Per illustrare come vengono utilizzati i livelli per mantenere le cose modulari, considera le personalizzazioni della macchina. Questi tipi di personalizzazioni risiedono in genere in un livello speciale, piuttosto che in un livello generale, chiamato livello BSP. 

Inoltre, le personalizzazioni della macchina dovrebbero essere isolate da ricette e metadati che supportano, ad esempio, un nuovo ambiente GUI. Questa situazione offre un paio di livelli: uno per le configurazioni della macchina e uno per l'ambiente GUI. È importante capire, tuttavia, che il livello BSP può ancora apportare aggiunte specifiche alla macchina alle ricette all'interno del livello dell'ambiente GUI senza inquinare il livello GUI stesso con quelle modifiche specifiche della macchina. 

È possibile eseguire questa operazione tramite una ricetta che è un file di tipo .bbappend di BitBake.




    Nota

    Per informazioni generali sulla struttura dei livelli BSP, consultare la [Yocto Project Board Support Package Developer's Guide](https://docs-yoctoproject-org.translate.goog/bsp-guide/index.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp).



La directory di origine contiene sia livelli generali che livelli BSP pronti all'uso. Puoi facilmente identificare i layer forniti con una versione di Yocto Project nella Source Directory in base ai loro nomi. I livelli in genere hanno nomi che iniziano con la stringa **meta-**.

**Non è un requisito che il nome di un livello inizi con il prefisso meta-**, ma è uno standard comunemente accettato nella comunità di Yocto Project.

Ad esempio, se dovessi esaminare la visualizzazione ad albero del pokyrepository, vedrai diversi livelli: meta, meta-skeleton, meta-selftest, meta-pokye meta-yocto-bsp. Ciascuno di questi repository rappresenta un livello distinto.

Per le procedure su come creare i livelli, vedere la sezione [" Comprensione e creazione dei livelli "](https://docs-yoctoproject-org.translate.goog/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#understanding-and-creating-layers) nel Manuale delle attività di sviluppo del progetto Yocto.