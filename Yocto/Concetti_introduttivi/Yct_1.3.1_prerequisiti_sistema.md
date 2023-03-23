# Yocto project - Pre requisiti sistema

[Official doc link page](https://docs-yoctoproject-org.translate.goog/3.1.17/ref-manual/ref-system-requirements.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp)


Se desideri utilizzare Yocto Project per creare rapidamente un'immagine senza dover comprendere i concetti, lavora sul documento [Yocto Project Quick Build](https://docs-yoctoproject-org.translate.goog/3.1.17/brief-yoctoprojectqs/brief-yoctoprojectqs.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) . 
Puoi trovare informazioni "come fare" nel [Manuale delle attività di sviluppo del progetto Yocto](https://docs-yoctoproject-org.translate.goog/3.1.17/dev-manual/dev-manual.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) . 
È possibile trovare la panoramica del progetto Yocto e le informazioni concettuali nel [Manuale della panoramica e dei concetti del progetto Yocto](https://docs-yoctoproject-org.translate.goog/3.1.17/overview-manual/overview-manual.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp) 

Attualmente Yocto project supporta diverse distribuzioni linux quali Ubuntu, Fedora, Debian, OpenSuse.

In queste note indicherò i prerequisiti necessari per buildare su Ubuntu:

### 1.2 Pacchetti richiesti per l'host di compilazione

Se il tuo sistema di compilazione ha il pacchetto installato *oss4-dev* , potresti riscontrare errori di compilazione di QEMU a causa del pacchetto che installa il proprio pacchetto personalizzato /usr/include/linux/soundcard.hsul 
Se ti imbatti in questa situazione, esiste una delle seguenti soluzioni:

    $ sudo apt-get build-dep qemu
    $ sudo apt-get remove oss4-dev

**Elementi essenziali:** pacchetti necessari per creare un'immagine su un sistema headless:

    $ sudo apt-get install gawk wget git-core diffstat unzip texinfo gcc-multilib build-essential chrpath socat cpio python3 python3-pip python3-pexpect xz-utils debianutils iputils-ping python3-git python3-jinja2 libegl1-mesa libsdl1.2-dev pylint3 xterm python3-subunit mesa-common-dev

**Documentazione:** pacchetti necessari se hai intenzione di creare i manuali di documentazione del progetto Yocto:

    $ sudo zypper install make python3-pip which
    $ sudo pip3 install sphinx sphinx_rtd_theme pyyaml

### 1.3 Versioni richieste di Git, tar, Python e gcc

Per utilizzare il sistema di compilazione, il tuo sistema di sviluppo host deve soddisfare i seguenti requisiti di versione per Git, tar e Python:

- Git 1.8.3.1 o versione successiva
- tar 1.28 o superiore
- Python 3.5.0 o successivo


Se il tuo sistema di sviluppo host non soddisfa tutti questi requisiti, puoi risolverlo installando un *buildtools* tarball 
che contenga questi strumenti. Puoi ottenere il tarball in due modi: 

- scarica un tarball precompilato
- usa BitBake per costruire il tarball.

##### N.B. Tarball cos'è?

    Un file tar.gz è uno dei tanti modi pratici per archiviare dei sorgenti.
    L'archivio dei sorgenti, comunemente chiamato tarball, molto spesso si presenta con una vera e propria struttura che contiene oltre i file sorgenti, 
    la documentazione per la compilazione e l'utilizzo del software, file binari e script che aiutano l'utente nelle procedure di installazione.

Inoltre, il tuo sistema di sviluppo host deve soddisfare i seguenti requisiti di versione per gcc:

- gcc 5.0 o superiore

Se il tuo sistema di sviluppo host non soddisfa questo requisito, puoi risolverlo installando un *buildtools-extended* tarball che contiene strumenti aggiuntivi, l'equivalente di buildtools-essential.


#### Installazione di un tarball precompilato buildtools con install-buildtools script

Lo script *install-buildtools* è il più semplice dei tre metodi con cui è possibile ottenere questi strumenti. Scarica un programma di installazione buildtools predefinito e installa automaticamente gli strumenti per te:

Esegui lo script install-buildtools. Ecco un esempio:

    $ cd poky
    $ scripts/install-buildtools --without-extended-buildtools \
        --base-url https://downloads.yoctoproject.org/releases/yocto \
        --release yocto-3.1.17 \
        --installer-version 3.1.17

 Durante l'esecuzione, verrà scaricato il tarball di buildtools, verrà verificato il checksum del download, verrà eseguito automaticamente il programma di installazione e verranno eseguiti alcuni controlli di base per assicurarsi che l'installazione sia funzionante.
 Per evitare la necessità di sudoprivilegi, lo install-buildtoolsscript per impostazione predefinita dirà al programma di installazione di installare in:

    /path/to/poky/buildtools

Se il tuo sistema di sviluppo host necessita degli strumenti aggiuntivi forniti nel buildtools-extended tarball, puoi invece eseguire lo install-buildtoolsscript con i parametri predefiniti:

    $ cd poky
    $ scripts/install-buildtools

Creare lo script di configurazione dell'ambiente degli strumenti utilizzando un comando simile al seguente:

    $ source /path/to/poky/buildtools/environment-setup-x86_64-pokysdk-linux


Naturalmente, è necessario fornire la directory di installazione e assicurarsi di utilizzare il file corretto (ad es. i586 o x86_64).

Dopo aver originato lo script di installazione, gli strumenti vengono aggiunti PATH e qualsiasi altra variabile di ambiente richiesta per eseguire gli strumenti viene inizializzata. I risultati sono versioni funzionanti di Git, tar, Python e chrpath. E nel caso del buildtools-extended tarball, versioni funzionanti aggiuntive di strumenti inclusi gcc e make gli altri strumenti inclusi in packagegroup-core-buildessential.

#### Costruire il proprio buildtools Tarball

La compilazione e l'esecuzione del proprio programma di installazione di buildtools si applica solo quando si dispone di un host di compilazione che può già eseguire BitBake. In questo caso, si utilizza quella macchina per creare il .shfile e quindi si procede per trasferirlo ed eseguirlo su una macchina che non soddisfa i requisiti minimi di Git, tar e Python (o gcc).

Ecco i passaggi da eseguire per creare ed eseguire il proprio programma di installazione di buildtools:

1.Sulla macchina che è in grado di eseguire BitBake, assicurati di aver impostato il tuo ambiente di compilazione con lo script di installazione ( oe-init-build-env ).

2.Esegui il comando BitBake per creare il tarball:

    bitbake buildtools-tarball

oppure esegui il comando BitBake per creare il tarball esteso:

    $ bitbake buildtools-extended-tarball

La variabile SDKMACHINE nel file local.conf determina se crei strumenti per un sistema a 32 o 64 bit.

3.Una volta completata la compilazione, puoi trovare il file .sh che installa gli strumenti nella tmp/deploy/sdk sottodirectory di Build Directory . Il file di installazione contiene la stringa "buildtools" (o "buildtools-extended") nel nome.

4.Trasferisci il .sh file dall'host di compilazione alla macchina che non soddisfa i requisiti Git, tar o Python (o gcc).

Sul computer che non soddisfa i requisiti, eseguire il .sh file per installare gli strumenti. Ecco un esempio per il programma di installazione tradizionale:

    $ sh ~/Downloads/x86_64-buildtools-nativesdk-standalone-3.1.17.sh

Ecco un esempio per il programma di installazione esteso:

    $ sh ~/Downloads/x86_64-buildtools-extended-nativesdk-standalone-3.1.17.sh

Durante l'esecuzione, viene visualizzato un prompt che consente di scegliere la directory di installazione. Ad esempio, potresti scegliere quanto segue: */home/your_username/buildtools*

5.Creare lo script di configurazione dell'ambiente degli strumenti utilizzando un comando simile al seguente:

    $ source /home/your_username/buildtools/environment-setup-x86_64-poky-linux

Naturalmente, è necessario fornire la directory di installazione e assicurarsi di utilizzare il file corretto (ad es. i586 o x86_64).

Dopo aver originato lo script di installazione, gli strumenti vengono aggiunti PATH e qualsiasi altra variabile di ambiente richiesta per eseguire gli strumenti viene inizializzata. 
I risultati sono versioni funzionanti di Git, tar, Python e chrpath. E nel caso del buildtools-extended tarball, versioni funzionanti aggiuntive di strumenti inclusi gcc e make gli altri strumenti inclusi in packagegroup-core-buildessential.