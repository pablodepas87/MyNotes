# Metodi di sviluppo

L'ambiente di sviluppo del progetto Yocto di solito prevede un host di build e un hardware di destinazione. Si utilizza Build Host per creare immagini e sviluppare applicazioni, mentre si utilizza l'hardware di destinazione per eseguire il software distribuito.

Questa sezione fornisce un'introduzione alle scelte o ai metodi di sviluppo disponibili durante la configurazione dell'host di build. A seconda delle preferenze del flusso di lavoro specifico e del tipo di sistema operativo eseguito dall'host di compilazione, sono disponibili diverse scelte.

    Nota

    Per ulteriori dettagli sull'ambiente di sviluppo del progetto Yocto, vedere il capitolo [" L'ambiente di sviluppo del progetto Yocto "](https://docs-yoctoproject-org.translate.goog/overview-manual/development-environment.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp).

**Host Linux nativo:** di gran lunga l'opzione migliore per un host di build. Un sistema che esegue Linux come sistema operativo nativo consente di sviluppare software utilizzando direttamente lo strumento BitBake . Puoi eseguire tutti gli aspetti dello sviluppo da una normale shell in una distribuzione Linux supportata.

    Per informazioni su come configurare un host di build su un sistema che esegue Linux come sistema operativo nativo, vedere la sezione " Impostazione di un host Linux nativo " nel Manuale delle attività di sviluppo del progetto Yocto.
     
     Per i prerequisiti di sistema leggere []()

    
    CROss PlatformS (CROPS): in genere, si utilizza CROPS , che sfrutta Docker Containers , per configurare un host di build che non esegue Linux (ad es. Microsoft Windows o macOS).

    Nota

    Puoi, tuttavia, utilizzare CROPS su un sistema basato su Linux.

    CROPS è un framework di sviluppo multipiattaforma open source che fornisce un ambiente facilmente gestibile ed estensibile per la creazione di file binari destinati a una varietà di architetture su host Windows, macOS o Linux. Una volta configurato l'host di compilazione utilizzando CROPS, è possibile preparare un ambiente shell per imitare quello di una shell utilizzata su un sistema che esegue Linux in modo nativo.

    Per informazioni su come configurare un Build Host con CROPS, vedere la sezione " Setting Up to Use CROss PlatformS (CROPS) " nel Yocto Project Development Tasks Manual.

    Sottosistema Windows per Linux (WSL 2): è possibile utilizzare il sottosistema Windows per Linux versione 2 per configurare un host di compilazione utilizzando Windows 10 o versioni successive oppure Windows Server 2019 o versioni successive.

    Il sottosistema Windows per Linux consente a Windows di eseguire un vero kernel Linux all'interno di una macchina virtuale (VM) leggera.

    Per informazioni su come configurare un host di compilazione con WSL 2, vedere la sezione " Configurazione per l'utilizzo del sottosistema Windows per Linux (WSL 2) " nel Manuale delle attività di sviluppo del progetto Yocto.

    Toaster: indipendentemente da cosa è in esecuzione il tuo Build Host, puoi utilizzare Toaster per sviluppare software utilizzando Yocto Project. Toaster è un'interfaccia web per l' OpenEmbedded Build System del progetto Yocto . L'interfaccia ti consente di configurare ed eseguire le tue build. Le informazioni sulle build vengono raccolte e archiviate in un database. Puoi utilizzare Toaster per configurare e avviare build su più server di build remoti.

    Per informazioni su e come utilizzare Toaster, consultare il Manuale dell'utente di Toaster .
