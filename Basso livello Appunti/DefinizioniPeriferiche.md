# Definizioni Varie

## DMA

In [elettronica](https://it.wikipedia.org/wiki/Elettronica) il **DMA** (**Direct Memory Access**, "*accesso diretto alla memoria*") di una [CPU](https://it.wikipedia.org/wiki/CPU) è quel meccanismo che permette ad altri sottosistemi, quali ad esempio le [periferiche](https://it.wikipedia.org/wiki/Periferica), di accedere direttamente alla [memoria](https://it.wikipedia.org/wiki/Memoria_(informatica)) interna per scambiare [dati](https://it.wikipedia.org/wiki/Dati), in lettura e/o scrittura, senza coinvolgere l'[unità di controllo](https://it.wikipedia.org/wiki/Unità_di_controllo_(informatica)) per ogni [byte](https://it.wikipedia.org/wiki/Byte) trasferito tramite l'usuale meccanismo dell'[interrupt](https://it.wikipedia.org/wiki/Interrupt) e la successiva richiesta dell'operazione desiderata, ma generando un singolo interrupt per blocco trasferito.

Ha quindi il compito di gestire i dati passanti nel [BUS](https://it.wikipedia.org/wiki/Bus_(informatica)) permettendo a periferiche che lavorano a velocità diverse di comunicare senza assoggettare la CPU a un enorme carico di [interrupt](https://it.wikipedia.org/wiki/Interrupt) che ne interromperebbero continuamente il rispettivo [ciclo di elaborazione](https://it.wikipedia.org/wiki/Ciclo_del_processore).

Essenzialmente, in un trasferimento DMA un blocco di memoria viene copiato da una periferica a un'altra. 

Il chip DMA ha al suo interno almeno quattro registri accessibili dal software in esecuzione nella CPU:

1. Il primo contiene l'indirizzo di memoria di partenza per la lettura o la scrittura
2. Il secondo conta il numero di byte (o parole) da trasferire
3. Il terzo specifica il numero di dispositivo o lo spazio  d'indirizzamento di I/O da usare, il che determina il dispositivo di I/O desiderato
4. Il quarto determina se i dati vanno letti dal dispositivo di I/O oppure se devono essere scritti su di esso

***il DMA ha una priorità di bus sempre maggiore di quella della CPU, perché i dispositivi di I/O difficilmente tollerano ritardi)***

## UART

Lo **UART** o **Universal Asynchronous Receiver-Transmitter** (*ricevitore-trasmettitore asincrono universale*) è un dispositivo [hardware](https://it.wikipedia.org/wiki/Hardware), di uso generale o dedicato, che converte flussi di [bit](https://it.wikipedia.org/wiki/Bit_(informatica)) di dati da un [formato parallelo](https://it.wikipedia.org/wiki/Trasmissione_parallela) a un [formato seriale asincrono](https://it.wikipedia.org/wiki/Trasmissione_seriale) o viceversa. 

Gli **USART** (*Universal Synchronous-Asynchronous Receiver/Transmitter*), hanno il compito di gestire le comunicazioni delle interfacce seriali [RS-232](https://it.wikipedia.org/wiki/RS-232). Costituiscono un'evoluzione degli UART, come si evince dal nome stesso, in grado di gestire anche [trasmissioni seriali sincrone](https://it.wikipedia.org/wiki/Trasmissione_seriale). In un secondo tempo furono dotati di un buffer interno di tipo [FIFO](https://it.wikipedia.org/wiki/FIFO).

Ogni famiglia di [microprocessori](https://it.wikipedia.org/wiki/Microprocessore) ha la sua UART/USART dedicata. Nei [microcontrollori](https://it.wikipedia.org/wiki/Microcontrollore) che la posseggono questa funzione è interna agli stessi. 

## DAC

Un **convertitore digitale-analogico** (abbreviato in **DAC**, dall'inglese ***D**igital (to) **A**nalog **C**onverter*) è un componente elettronico che converte un segnale digitale in un segnale analogico. Un convertitore analogico-digitale (ADC, dall'inglese *Analog (to) Digital Converter*), è il convertitore che esegue la funzione inversa.

Un DAC è in grado di produrre sul suo terminale di uscita, un  determinato livello di tensione o di corrente, in funzione di un valore  numerico che viene presentato al suo ingresso; ad esempio, ad un valore  pari ad 1 corrisponderà una tensione di uscita di 0,1 [V](https://it.wikipedia.org/wiki/Volt), ad un valore di 2 avremo 0,2 V, e così via. La tabella di conversione  dal valore digitale a quello analogico prende il nome di LUT ([look-up table](https://it.wikipedia.org/wiki/Look-up_table)) e può avere caratteristiche proporzionali (come nel precedente  esempio), o può seguire un andamento del tutto arbitrario, a seconda del suo impiego.

## Slew rate

La **velocità di risposta**, o ***slew rate***, è una  grandezza elettrica che indica la velocità, espressa in volt per unità  di tempo, con cui è capace di reagire un dispositivo o circuito  elettronico, sollecitato sul suo ingresso, da un impulso di tensione, il cui valore, da minimo a massimo, è contenuto in un tempo brevissimo.  Esso si esprime in [volt](https://it.wikipedia.org/wiki/Volt) su [microsecondo](https://it.wikipedia.org/wiki/Microsecondo). Nel caso interessi misurare sperimentalmente lo **slew rate** di un  dispositivo, si può ricorrere ad un generatore di segnale "onda quadra" e ad un [oscilloscopio](https://it.wikipedia.org/wiki/Oscilloscopio); questi strumenti devono essere collegati rispettivamente ai morsetti di accesso e a quelli di prelievo.

Sull'oscilloscopio, che confronta l'ingresso con l'uscita, dovrebbe  apparire la transizione di livello della sollecitazione e la rampa della risposta. Se non è questo ciò che si osserva, significa che  l'eccitazione non è sufficientemente veloce per osservare lo slew rate  del circuito: in questo caso, è necessario o aumentare l'intensità o  ridurre il [rise time](https://it.wikipedia.org/wiki/Rise_time) dell'onda quadra. Una volta ottenuto un risultato soddisfacente, lo  slew rate può essere calcolata banalmente derivando la pendenza della  rampa in uscita.

## Open Collector - Open Drain

Un **open collector** (collettore aperto), è un tipo di [porta logica](https://it.wikipedia.org/wiki/Porta_logica) avente come uscita fisica il collettore del [BJT](https://it.wikipedia.org/wiki/Transistor_a_giunzione_bipolare) costituente l'ultimo stadio del suo circuito. Questo tipo di porta viene utilizzato quando si ha la necessità di  pilotare dei dispositivi che richiedono una corrente maggiore e valori  di tensione di alimentazione diversa rispetto a quella del dispositivo logico di pilotaggio.

In questo modo, il circuito finale può essere completato a piacimento  dimensionando opportunamente la resistenza di collettore (esterna al  chip) assegnando alla corrente il valore desiderato in funzione della  tensione scelta.

### Open drain

La controparte [MOSFET](https://it.wikipedia.org/wiki/MOSFET) dell'open-collector è la connessione **open-drain.** Le uscite open-drain  possono risultare utili, come l'open-collector, nelle implementazioni  tramite elettronica analogica di operazioni matematiche

Un terminale di drain aperto viene connesso a massa quando un valore di  tensione alto (livello 1) viene applicato al gate, presenta un'alta  impedenza quando viene invece applicato al gate un basso valore di  tensione (livello 0). L'alta impedenza rende l'uscita flottante  (floating), ovvero a una tensione non definita (floating), quindi questo dispositivo necessita di una resistenza di pull-up esterna connessa  all'alimentazione positiva (livello 1) per garantire il livello logico 1 all'uscita.

I dispositivi microelettronici che usano segnali a drain aperto, come i  microcontrollori, possono presentare una resistenza “interna” di leggero pull-up (weak pull-up) per connettere il terminale in questione con  l'alimentazione positiva, come la Vdd, del dispositivo.  Questa resistenza di weak pull-up, dell'ordine dei 100 kΩ e fa in modo  che il valore della tensione in uscita non sia flottante.

Resistenze esterne di pull-up, dell'ordine di 3 kΩ, sono in grado di  ridurre il tempo di salita di un segnale, come nel caso di [I²C](https://it.wikipedia.org/wiki/I²C), e di minimizzare il rumore, come sui sistemi dei reset degli ingressi.  In molti dispositivi le resistenze di pull-up interne possono essere  disabilitate qualora si usassero resistenze esterne o semplicemente non  fossero necessarie.

## I2C

**I²C** (abbreviazione di **Inter Integrated Circuit**), (pronuncia *i-quadro-ci* o *i-due-ci*), è un sistema di [comunicazione seriale](https://it.wikipedia.org/wiki/Trasmissione_seriale) bifilare utilizzato tra [circuiti integrati](https://it.wikipedia.org/wiki/Circuito_integrato).

Il classico [bus](https://it.wikipedia.org/wiki/Bus_(informatica)) I²C è composto da almeno un *master* ed uno *slave* (letteralmente "capo, padrone" e "sottoposto, schiavo").
 La situazione più frequente vede un singolo *master* e più *slave*; possono tuttavia essere usate architetture *multimaster* e *multislave* in [sistemi](https://it.wikipedia.org/wiki/Sistema_(informatica)) più complessi.

Trattandosi di un protocollo seriale i vantaggi che offre sono quelli di impegnare solo due linee (e quindi due pin dei dispositivi che lo  usano). Un suo limite è la velocità di comunicazione. Lo Standard iniziale è stato comunque aggiornato sotto questo aspetto.

Il protocollo [hardware](https://it.wikipedia.org/wiki/Hardware) dell'I2C richiede due linee seriali di comunicazione:

- SDA (***S**erial **DA**ta*) per i dati
- SCL (***S**erial **CL**ock*) per il [clock](https://it.wikipedia.org/wiki/Clock) (per la presenza di questo segnale l'I2C è un bus sincrono)

Va aggiunta una connessione di riferimento detta, talvolta  impropriamente, GND (non visualizzata in figura) e una linea di  alimentazione Vdd a cui sono connessi i resistori di *pull-up*[[5\]](https://it.wikipedia.org/wiki/I²C#cite_note-5) che può anche non essere condivisa da tutti i dispositivi (le tensioni tipiche usate sono +5 [V](https://it.wikipedia.org/wiki/Volt) o +3,3 V anche se sono ammesse tensioni più basse o più alte).

Come accennato in precedenza l'i2c è un bus con un clock (SCL) e una  linea dati (SDA) e 7 bit possibili di indirizzamento. Un bus ha due tipi di nodi:

- nodo *master* – il dispositivo che emette il segnale di clock
- nodo *slave* – il nodo che si sincronizza sul segnale di clock senza poterlo controllare

L'I2C è usato per comunicare con dispositivi in cui  semplicità e basso costo sono prioritari rispetto alla velocità di  trasmissione. Applicazioni comuni sono:

- Accesso a [Memoria flash](https://it.wikipedia.org/wiki/Memoria_flash) ed [EEPROM](https://it.wikipedia.org/wiki/EEPROM) che mantengono i dati memorizzati anche quando non sono alimentate
- Accesso a [DAC](https://it.wikipedia.org/wiki/Convertitore_digitale-analogico) a bassa velocità
- Accesso a [ADC](https://it.wikipedia.org/wiki/Convertitore_analogico-digitale) a bassa velocità
- Cambiamento del settaggio nei [monitor](https://it.wikipedia.org/wiki/Monitor_(video))
- Cambiamento del volume in [altoparlanti](https://it.wikipedia.org/wiki/Altoparlante) intelligenti
- Controllo di [display](https://it.wikipedia.org/wiki/Display) come nei [telefoni cellulari](https://it.wikipedia.org/wiki/Telefono_cellulare)
- Lettura e diagnostica di [sensori](https://it.wikipedia.org/wiki/Sensore) come, ad esempio, sensori di [temperatura](https://it.wikipedia.org/wiki/Temperatura) o [velocità](https://it.wikipedia.org/wiki/Velocità) di [ventilatori](https://it.wikipedia.org/wiki/Ventilatore)
- Lettura e regolazione di [RTC (integrati orologio)](https://it.wikipedia.org/wiki/Real_Time_Clock)
- Attivazione e spegnimento dell'alimentazione di componenti di un sistema elettronico

## SPI (Serial Peripheral Interface)

Il **Serial Peripheral Interface** o **SPI** (pronuncia: [esse pi i](https://it.wikipedia.org/wiki/Aiuto:IPA) o [spi](https://it.wikipedia.org/wiki/Aiuto:IPA)), in [informatica](https://it.wikipedia.org/wiki/Informatica), indica un sistema di [comunicazione seriale](https://it.wikipedia.org/wiki/Comunicazione_seriale) tra un [microcontrollore](https://it.wikipedia.org/wiki/Microcontrollore) e altri [circuiti integrati](https://it.wikipedia.org/wiki/Circuito_integrato) o tra più microcontrollori.

È un [bus](https://it.wikipedia.org/wiki/Bus_(informatica)) standard di comunicazione ideato dalla [Motorola](https://it.wikipedia.org/wiki/Motorola) e sviluppato, in una sua variante, anche dalla [National Semiconductor](https://it.wikipedia.org/wiki/National_Semiconductor) con il nome di bus *MicrowireTM*. La trasmissione avviene tra un dispositivo detto *master* e uno o più *slave* (letteralmente dall'inglese *padrone* e *schiavo*). Il master controlla il bus, emette il segnale di [clock](https://it.wikipedia.org/wiki/Clock), decide quando iniziare e terminare la comunicazione[[1\]](https://it.wikipedia.org/wiki/Serial_Peripheral_Interface#cite_note-1).

Per quanto riguarda la velocità di scambio dei dati (in pratica la  frequenza del clock) non vi è un limite minimo (in quanto i dispositivi  sono statici: possono mantenere se alimentati uno stato logico per un  tempo indefinito) ma vi è un limite massimo che va determinato dai [datasheet](https://it.wikipedia.org/wiki/Datasheet) dei singoli dispositivi connessi e dal loro numero in quanto ogni  dispositivo collegato al bus introduce sulle linee di comunicazione una  capacità parassita.

Il bus SPI si definisce:

- di tipo [seriale](https://it.wikipedia.org/wiki/Trasmissione_seriale);
- sincrono per la presenza di un clock che coordina la trasmissione e ricezione dei singoli [bit](https://it.wikipedia.org/wiki/Bit_(informatica)) e determina la velocità di trasmissione;
- *[full-duplex](https://it.wikipedia.org/wiki/Full-duplex)* in quanto il "colloquio" può avvenire contemporaneamente in trasmissione e ricezione.