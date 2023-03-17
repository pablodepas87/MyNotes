# Il flusso di lavoro del sistema di compilazione OpenEmbedded

L' OpenEmbedded Build System utilizza un "flusso di lavoro" per eseguire la generazione di immagini e SDK. La figura seguente offre una panoramica di tale flusso di lavoro:

![](https://docs-yoctoproject-org.translate.goog/current/_images/YP-flow-diagram.png?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp)

Di seguito è riportato un breve riepilogo del “flusso di lavoro”:

1. Gli sviluppatori specificano architettura, criteri, patch e dettagli di configurazione.

2. Il sistema di compilazione recupera e scarica il codice sorgente dalla posizione specificata. Il sistema di compilazione supporta metodi standard come tarball o sistemi di repository di codice sorgente come Git.
3. Una volta scaricato il codice sorgente, il sistema di compilazione estrae i sorgenti in un'area di lavoro locale in cui vengono applicate le patch e vengono eseguiti i passaggi comuni per la configurazione e la compilazione del software.
4. Il sistema di compilazione installa quindi il software in un'area di staging temporanea in cui il formato del pacchetto binario selezionato (DEB, RPM o IPK) viene utilizzato per eseguire il rollup del software
5. Diversi controlli di qualità e integrità vengono eseguiti durante l'intero processo di costruzione.
6. Dopo la creazione dei file binari, il sistema di compilazione genera un feed del pacchetto binario che viene utilizzato per creare l'immagine del file radice finale.
7. Il sistema di compilazione genera l'immagine del file system e un Extensible SDK (eSDK) personalizzato per lo sviluppo di applicazioni in parallelo.