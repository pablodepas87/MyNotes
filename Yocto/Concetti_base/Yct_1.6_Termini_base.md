# Termini di base

Aiuta a comprendere alcuni termini fondamentali di base quando si studia il Progetto Yocto. Questa sezione fornisce le definizioni di alcuni termini utili per iniziare. Un elenco completo [qui](Yct_2.0_termini_utili.md). 

**File di configurazione:** file che contengono definizioni globali di variabili, variabili definite dall'utente e informazioni sulla configurazione hardware. Questi file dicono all'OpenEmbedded Build System cosa costruire e cosa inserire nell'immagine per supportare una particolare piattaforma.

**Extensible Software Development Kit (eSDK):** un SDK personalizzato per gli sviluppatori di applicazioni. Questo eSDK consente agli sviluppatori di incorporare le loro modifiche alla libreria e alla programmazione nell'immagine per rendere il loro codice disponibile ad altri sviluppatori di applicazioni. Per informazioni sull'eSDK, vedere il manuale [Yocto Project Application Development and the Extensible Software Development Kit (eSDK)](https://docs-yoctoproject-org.translate.goog/current/sdk-manual/index.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp).

**Livello: una raccolta di ricette correlate.** I livelli ti consentono di consolidare i metadati correlati per personalizzare la tua build. I livelli isolano anche le informazioni utilizzate durante la creazione per più architetture. I livelli sono gerarchici nella loro capacità di sovrascrivere le specifiche precedenti. Puoi includere qualsiasi numero di livelli disponibili dal progetto Yocto e personalizzare la build aggiungendo i tuoi livelli dopo di essi. Puoi cercare nell'indice dei livelli i livelli utilizzati all'interno di Yocto Project.

Per informazioni più dettagliate sui livelli, vedere la sezione [" Comprensione e creazione di livelli"](https://docs-yoctoproject-org.translate.goog/current/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#understanding-and-creating-layers) nel Manuale delle attività di sviluppo del progetto Yocto. Per una discussione specifica sui livelli BSP, vedere la sezione ["Livelli BSP"](https://docs-yoctoproject-org.translate.goog/current/bsp-guide/bsp.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#bsp-layers) nella Guida per sviluppatori Yocto Project Board Support Packages (BSP).

**Metadati:** un elemento chiave del progetto Yocto sono i metadati che vengono utilizzati per costruire una distribuzione Linux e sono contenuti nei file che il sistema di compilazione OpenEmbedded analizza durante la creazione di un'immagine. In generale, i metadati includono ricette, file di configurazione e altre informazioni che fanno riferimento alle stesse istruzioni di compilazione, nonché i dati utilizzati per controllare quali elementi vengono compilati e gli effetti della compilazione. I metadati includono anche i comandi e i dati utilizzati per indicare quali versioni del software vengono utilizzate, da dove vengono ottenute e modifiche o aggiunte al software stesso (patch o file ausiliari) che vengono utilizzati per correggere bug o personalizzare il software per l'utilizzo in un situazione particolare. OpenEmbedded-Core è un insieme importante di metadati convalidati.

**Sistema di compilazione OpenEmbedded:** i termini "BitBake" e "sistema di compilazione" vengono talvolta utilizzati per il sistema di compilazione OpenEmbedded.

*BitBake* è un programmatore di attività e un motore di esecuzione che analizza istruzioni (ovvero ricette) e dati di configurazione. Dopo una fase di analisi, BitBake crea un albero delle dipendenze per ordinare la compilazione, pianifica la compilazione del codice incluso e infine esegue la costruzione dell'immagine Linux personalizzata specificata (distribuzione). BitBake è simile allo makestrumento.

Durante un processo di compilazione, il sistema di compilazione tiene traccia delle dipendenze ed esegue una compilazione nativa o incrociata di ciascun pacchetto. Come primo passo in una configurazione cross-build, il framework tenta di creare una toolchain cross-compilatore (es. Extensible SDK) adatta alla piattaforma di destinazione

**OpenEmbedded-Core (OE-Core):** OE-Core è costituito da metadati composti da ricette di base, classi e file associati che dovrebbero essere comuni tra molti diversi sistemi derivati ​​da OpenEmbedded, incluso il progetto Yocto. OE-Core è un sottoinsieme curato di un repository originale sviluppato dalla comunità OpenEmbedded che è stato ridotto in un insieme più piccolo e di base di ricette continuamente convalidate. Il risultato è un set di ricette di base strettamente controllato e di qualità garantita.

Puoi vedere i metadati nella directory meta degli Yocto Project Source Repositories .

**Pacchetti:** nel contesto del progetto Yocto, questo termine si riferisce all'output confezionato di una ricetta prodotto da BitBake. Un pacchetto è generalmente costituito dai binari compilati prodotti dai sorgenti della ricetta. Si "cuoce" qualcosa facendolo passare attraverso BitBake.

Un punto degno di nota è che storicamente all'interno del progetto Yocto, le ricette venivano chiamate pacchetti, quindi l'esistenza di diverse variabili BitBake apparentemente denominate in modo errato (ad esempio PR , PV e PE ) .

**Poky:** Poky è una distribuzione embedded di riferimento e una configurazione di test di riferimento. Poky fornisce quanto segue:

- Una distribuzione funzionale di livello base utilizzata per illustrare come personalizzare una distribuzione.

- Un mezzo con cui testare i componenti del Progetto Yocto (cioè Poky viene utilizzato per convalidare il Progetto Yocto).

- Un veicolo attraverso il quale è possibile scaricare Yocto Project.

*Poky non è una distribuzione a livello di prodotto. Piuttosto, è un buon punto di partenza per la personalizzazione.*

Poky è un livello di integrazione in cima a OE-Core.

**Ricetta:** la forma più comune di metadati. Una ricetta contiene un elenco di impostazioni e attività (cioè istruzioni) per la creazione di pacchetti che vengono poi utilizzati per creare l'immagine binaria. Una ricetta descrive dove si ottiene il codice sorgente e quali patch applicare. Le ricette descrivono le dipendenze per le librerie o per altre ricette, nonché le opzioni di configurazione e compilazione. Le ricette correlate sono consolidate in uno strato.