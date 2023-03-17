#  Distribuzione incorporata di riferimento (Poky)

**"Poky"**, che si pronuncia Pock -ee, è il nome della distribuzione di riferimento di Yocto Project o Reference OS Kit.

 Poky contiene l' **OpenEmbedded Build System** ( BitBake e OpenEmbedded-Core (OE-Core) ) e un set di metadati per iniziare a costruire la tua distribuzione.

 In altre parole, Poky è una specifica di base delle funzionalità necessarie per un tipico sistema embedded, nonché i componenti del progetto Yocto che consentono di creare una distribuzione in un'immagine binaria utilizzabile.

 Poky è un repository combinato di BitBake, OpenEmbedded-Core (che si trova in *meta*), *meta-poky*, *meta-yocto-bsp* e la documentazione fornita. È possibile visualizzare questi elementi che compongono il repository Poky nei repository di origine[](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://git.yoctoproject.org/poky/tree/).

 La figura seguente illustra ciò che generalmente comprende Poky:

 ![](https://docs-yoctoproject-org.translate.goog/current/_images/poky-reference-distribution.png?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp)

 - **BitBake** è un esecutore e pianificatore di attività che è il cuore del sistema di compilazione OpenEmbedded.
- **meta-poky**, ovvero metadati specifici di Poky.
- **meta-yocto-bsp** , che sono i Board Support Package (BSP) specifici del Progetto Yocto.
- Metadati OpenEmbedded-Core (OE-Core), che includono configurazioni condivise, definizioni di variabili globali, classi condivise, packaging e ricette. Le classi definiscono l'incapsulamento e l'ereditarietà della logica di compilazione. Le ricette sono le unità logiche del software e delle immagini da costruire.
- Documentazione, che contiene i file sorgente di Yocto Project utilizzati per creare il set di manuali utente.

Sebbene Poky sia una specifica di distribuzione "completa" e venga testata e sottoposta a QA, non è possibile utilizzarla come prodotto "pronto all'uso" nella sua forma attuale

**Per utilizzare gli strumenti del progetto Yocto, puoi utilizzare Git per clonare (scaricare) il repository Poky, quindi utilizzare la tua copia locale della distribuzione di riferimento per eseguire il bootstrap della tua distribuzione.**

**Poky non contiene file binari.** È un esempio funzionante di come creare la propria distribuzione Linux personalizzata dal sorgente.

**Poky ha un ciclo di rilascio regolare e ben consolidato di sei mesi** con la propria versione. I rilasci principali si verificano nello stesso momento in cui si verificano i rilasci principali (rilasci minori) per il progetto Yocto, che sono in genere in primavera e in autunno. Per ulteriori informazioni sulla pianificazione e la cadenza dei rilasci del progetto Yocto, consultare il capitolo ["Rilasci del progetto Yocto e processo di rilascio stabile"](https://docs-yoctoproject-org.translate.goog/current/ref-manual/release-process.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) nel manuale di riferimento del progetto Yocto.

Si è detto molto che Poky è una "configurazione predefinita". Una configurazione predefinita fornisce un footprint dell'immagine iniziale. **È possibile utilizzare Poky out of the box per creare un'immagine che va da un'immagine minima accessibile dalla shell fino a un'immagine conforme a Linux Standard Base che utilizza un'interfaccia utente di riferimento basata su GNOME Mobile and Embedded (GMAE) chiamata Sato**.

Una delle proprietà più potenti di Poky è che ogni aspetto di una build è controllato dai metadati. **È possibile utilizzare i metadati per aumentare questi tipi di immagine di base aggiungendo livelli di metadati che estendono la funzionalità.** Questi livelli possono fornire, ad esempio, uno stack software aggiuntivo per un tipo di immagine, aggiungere un pacchetto di supporto scheda (BSP) per hardware aggiuntivo o persino creare un nuovo tipo di immagine.

**I metadati sono raggruppati in modo approssimativo in file di configurazione o ricette di pacchetti.** 

Una ricetta è una raccolta di metadati non eseguibili utilizzati da BitBake per impostare variabili o definire attività aggiuntive in fase di compilazione.Contiene campi come la descrizione della ricetta, la versione della ricetta, la licenza del pacchetto e il repository di origine a monte.

Una ricetta potrebbe anche indicare che il processo di compilazione utilizza autotools, make, distutils o qualsiasi altro processo di compilazione, nel qual caso la funzionalità di base può essere definita dalle classi che eredita dalle definizioni di classe del livello OE-Core in ./meta/classes. All'interno di una ricetta è inoltre possibile definire attività aggiuntive nonché prerequisiti dell'attività. La sintassi della ricetta tramite BitBake supporta anche gli operatori :prepend e :append come metodo per estendere la funzionalità delle attività. Questi operatori inseriscono il codice all'inizio o alla fine di un'attività.

