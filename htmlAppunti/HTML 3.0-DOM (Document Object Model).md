# HTML DOM (Document Object Model)

Il DOM (Document Object Model) è un’API, indipendente dalla piattaforma, che descrive la struttura di un documento HTML (e XML), con il quale i  costruttori di pagine per il Web possono accedere e manipolare tutti gli elementi della pagina stessa.

Rifacendoci alla sua sigla, **il DOM è un modello che descrive come i diversi oggetti di una pagina sono collegati tra loro**

È importante sottolineare che il DOM è indipendente dalla piattaforma,  ovvero è un’interfaccia definita dal W3C per essere lo strumento  universale per tutti i creatori di pagine Web.

Questo significa che il DOM definito dal W3C è **indipendente dal tipo di browser**, di versione e di sistema operativo.

**Il DOM non è una parte di JavaScript**. Questo è un altro mito da sfatare. Il JavaScript è solo un modo per accedere al DOM, e non è neanche l’unico,

```
<html>
  <head>
    <title>il DOM</title>
  <head>
  <body>
     <a href=”pagina.html”>Ciao</a>
  </body>
</html
```

Il DOM considera questa, come ogni altra pagina, secondo le relazioni  che legano e collegano i vari elementi del documento, evidenziandone le  parentele e le caratteristiche

**La pagina è costituita da nodi**, in sostanza ogni cosa presente nella pagina, ogni tag (come <title>), ogni testo (come “Ciao”) è un nodo.  Inoltre un nodo (come <body>) può contenere altri nodi, in questo caso si parla di **«elemento» della pagina**.

![](https://static.html.it/app/uploads/documenti/guide/img/dom/01a.gif)

## Differenza tra element e node

Un **elemento** (element) è contraddistinto da un tag,  qualunque esso sia. è facile quindi capire che può contenere altri  elementi, si pensi al tag `<table>`, che può contenere le righe e le celle della tabella stessa, e a loro volta questi possono contenere altri elementi.

Il **nodo** (node) ha un significato semantico più  ampio: oltre ad includere nella sua definizione tutti gli elementi, un  nodo può essere anche un testo, o un attributo, che a differenza di tutti gli altri nodi non possono avere attributi e non possono contenere  altri nodi.

A questo punto possiamo addentrarci nei dettagli del DOM  percorrendo i metodi, le proprietà, e le caratteristiche dei mattoni  costituenti del DOM stesso: **document** (l’elemento principale), **element** e **node**.

### document

Come abbiamo accennato “document” è molto importante, perché **è l’elemento che contiene tutti gli altri elementi del DOM**.

Di conseguenza, **anche “document” corrisponde ad un tag**, quello che contiene tutti gli altri e che identifica una pagina per il Web: il tag <html>

**i principali metodi di document**, che si possono dividere tra:

- metodi che si occupano di recuperare elementi nella pagina
- metodi che sono coinvolti nella creazione di nuovi elementi

## Recuperare gli elementi

A supporto di questa necessità il DOM fornisce 2 metodi:

- **getElementById()**

  Questo metodo (come si può intuire dal nome) permette di recuperare l’elemento caratterizzato univocamente **dal valore del proprio attributo ID**. In particolare restituisce un riferimento all’elemento in questione. La sintassi è:

  document.getElementById(ID_elemento)

  - **ID_elemento** è, per l’appunto, il valore (univoco) dell’attributo ID dell’elemento che si vuole recuperare.

- **getElementsByTagName()**

  Questo metodo permette di recuperare l’insieme degli elementi caratterizzati dallo stesso tag. In particolare **ritorna un array di tutti gli elementi del tag considerato**, nell’ordine in cui compaiono nel codice della pagina. La sintassi è:

  document.getElementsByTagName(nome_TAG)

  - **nome_TAG** è il nome del Tag di cui si vuole recuperare la lista.

quest’ultimo metodo ritorna un array.  L’array può essere scandito con la consueta sintassi, ovvero usando le  parentesi quadre: array[indice]. Il W3C utilizza un **metodo per scorrere le liste** dei nodi per così dire “più esplicito”: array.item(indice)

## Creare nodi ed elementi

Passiamo ora ai metodi di document che si occupano di creare nuovi elementi della pagina:

- **createElement()**

  Il metodo permette di creare un nuovo elemento di qualunque tipo.  Ritorna un riferimento al nuovo elemento creato. La sintassi è:

  nuovo_elemento = document.createElement(nome_TAG)

  - **nuovo_elemento** è la variabile che conterrà il riferimento al nuovo elemento creato
  - **nome_TAG** è il nome del Tag di cui si vuole creare un nuovo elemento

- **createTextNode()**

  Il metodo permette di creare un nuovo nodo di testo. Come accennato, i testi sono nodi particolari, che non possono contenere altri nodi, né  possono avere attributi, corrispondono quindi all’ultimo anello della  catena del DOM. In particolare, questo metodo, restituisce un  riferimento al nuovo nodo di testo creato. La sintassi è:

  nuovo_testo = document.createTextNode(testo_da_inserire)

  - **nuovo_testo** è la variabile che conterrà il riferimento al nuovo nodo di testo
  - **testo_da_inserire** è la stringa di testo da inserire nel nuovo nodo

Proviamo ad utilizzare questi metodi. Supponiamo di voler **inserire un nuovo nodo di testo**, il codice da utilizzare sarà:

`testo = document.createElement(“Questo testo lo aggiungo dinamicamente”)`

## Element

Per element si intende qualunque elemento della pagina caratterizzato da un tag

**I metodi per “element”**, consentono per lo più di  gestire e manipolare le caratteristiche di ogni singolo elemento, come  recuperare, impostare e rimuovere gli attributi dell’elemento stesso.

**I metodi per “element”**, consentono per lo più di  gestire e manipolare le caratteristiche di ogni singolo elemento, come  recuperare, impostare e rimuovere gli attributi dell’elemento stesso.

- **getElementsByTagName**

   È lo stesso metodo visto per “document”, ed ha la stessa  sintassi e la stessa semantica. In questo caso naturalmente ritorna la  lista degli elementi contenuti all’interno di un certo elemento.

- **setAttribute**

  Questo metodo permette di creare un nuovo attributo all’elemento  specificato. Qualora l’attributo sia già presente, il metodo sovrappone  il nuovo valore all’attributo in questione. La sintassi è:

  element.setAttribute(nome_attributo, valore_attributo)

  - **nome_attributo** (stringa) è il nome dell’attributo che deve essere inserito o modificato
  - **valore_attributo** (stringa) è il valore cui impostare l’attributo specificato

- **getAttribute**

  Con questo metodo, si recupera il valore di un attributo dell’elemento. La sintassi è:

  element.getAttribute(nome_attributo)

  - **nome_attributo** (stringa) è il nome dell’attributo di cui si vuole recuperare il valore

- **removeAttribute**

  Con questo metodo, si rimuove l’attributo passato come parametro.  Qualora l’attributo abbia un valore di default, sarà questo il nuovo  valore assunto dall’attributo. La sintassi è:

  element.removeAttribute(nome_attributo)

  - **nome_attributo** (stringa) è il nome dell’attributo che si vuole eliminare

Utile può essere anche **una proprietà degli elementi**, che evidenzia il binomio elemento-tag:

- tagName

  Restituisce il nome del tag dell’elemento associato. La sua sintassi è, come per tutte le proprietà:

  element.tagName

## Nodi

Sono solo i vari elementi, che  possono a loro volta avere elementi figli o attributi, ma anche  particolari componenti di una pagina, come il testo o i commenti.

In questa sezione mostrerò i metodi e le proprietà proprie di ogni  “node”, con i quali è possibile scorrere la struttura della pagina per  recuperare e manipolare ogni nodo.

**childNodes**

Questa collezione **contiene tutta la lista dei nodi figli**. Un nodo figlio (child) è un nodo contenuto in quello considerato ed è quindi nel livello gerarchico immediatamente inferiore.

La sua sintassi è: `node.childNodes`

Come ogni array, possiede a sua volta la proprietà “length”, ed è possibile **accedere ai singoli nodi “figli”**, utilizzando la consueta sintassi dei vettori. Ad esempio, per recuperare il secondo figlio di un nodo si scriverà: `node.childNodes[1]`

**firstChild**

Questa proprietà restituisce il primo figlio del nodo al quale è  applicata. Corrisponde all’elemento di indice 0 della collezione dei  nodi “figli”. Se il nodo non ha sottonodi restituisce null. La sintassi è:

node.firstChild

// coincide con:
 // node.childNodes[0]

**lastChild**

Questa proprietà restituisce l’ultimo figlio del nodo al quale è  applicata. Corrisponde all’elemento con indice maggiore della collezione “childNodes”. Se il nodo non ha figlio la restituisce null. La sintassi è: `node.lastChild`

**nextSibling**

Restituisce il nodo che segue quello al quale è applicato, per così  dire, restituisce il “fratello minore” del nodo in questione. Se il nodo non ha “fratelli minori”, la proprietà restituisce null. La sintassi è: `node.nextSibling`

**previousSibling**

Questa proprietà restituisce il nodo precedente quello al quale è  applicato, cioè restituisce il “fratello maggiore” del nodo in  questione. Se il nodo non ha “fratelli maggiori”, la proprietà  restituisce null. La sintassi è: `node.previousSibling`

**parentNode**

Restituisce il nodo che contiene quello al quale è applicato, cioè  restituisce il “padre” del nodo in questione. Se il nodo da restituire  non esiste, è il caso del nodo “document”, la proprietà restituisce null. La sintassi è: `node.parentNode`

Un’ultima proprietà che può essere utile è:

**nodeValue**

Restituisce il valore del nodo. Il valore di ritorno dipende dal tipo di nodo in questione, in particolare, per i tag il valore ritornato è null, mentre è il testo per i nodi di testo. 

In quest’ultimo caso **la proprietà è read/write**, cioè consente non solo di recuperare il testo, ma anche di settare un nuovo valore per questo. La sintassi è:

node.nodeValue

Passiamo a questo punto a descrivere **i principali metodi applicabili ai nodi**. Cominciamo con un metodo che consente di stabilire se un nodo ne contiene altri.

- **hasChildNodes**

  Questo metodo permette di verificare se un nodo possegga figli oppure no. Restituisce un valore booleano relativo al risultato della  verifica: se il nodo contiene altri nodi restituisce **true** altrimenti **false**. La sintassi è:

  node.hasChildNodes()

I prossimi metodi sono finalizzati ad **inserire o eliminare in maniera mirata gli elementi** dalla struttura gerarchica della pagina.

- **appendChild**

  Il metodo inserisce un nuovo nodo alla fine della lista dei figli del nodo al quale è applicato. La sintassi è:

  node.appendChild(nodo)

  - **nodo** è, per l’appunto, il nodo che si vuole appendere

- **insertBefore**

  Questo metodo consente di inserire un nuovo nodo nella lista dei  figli del nodo al quale è applicato il metodo, appena prima di un nodo  specificato. La sua sintassi è:

  node.insertBefore(nodo_inserito,nodo_esistente)

  - **nodo_inserito** è il nodo che si vuole inserire nella lista dei figli di “node”
  - **nodo_esistente** è il nodo della lista dei figli di  “node” prima del quale si vuole inserire il nuovo nodo. Continuando  nella metafora delle parentele, viene inserito un nuovo figlio di “node” che è il fratello maggiore del “nodo_esistente” specificato.

- **replaceChild**

  Questo metodo consente di inserire un nuovo nodo al posto di un altro nella struttura della pagina. La sua sintassi è:

  node.replaceChild(nuovo_nodo,vecchio_nodo)

  - **nuovo_nodo** è il nuovo nodo che si vuole inserire al posto del vecchio
  - **vecchio_nodo** è il nodo che si vuole rimpiazzare con il nuovo

- **removeChild**

  Il metodo elimina e restituisce il nodo specificato dalla lista dei figli del nodo al quale è applicato. La sua sintassi è:

  node.removeChild(nodo_da_rimuovere)

  - **nodo_da_rimuovere** è il nuovo nodo che viene rimosso e restituito dal metodo

Spesso può essere utile poter **duplicare un nodo**, con tutti i suoi attributi, e tutti i suoi figli senza dover ripercorrere  tutti i passi che sono serviti per la sua creazione. A questo scopo si  utilizza il seguente metodo:

- **cloneNode**

  Il metodo permette di duplicare un nodo già esistente, offrendo la  possibilità di scegliere se duplicare il singolo nodo, o anche tutti i  suoi figli. Dopodiché il metodo ritorna il nodo clone. La sua sintassi  è:

  node.cloneNode(figli)

  - **figli** (true|false) è un valore booleano che  determina se clonare tutti i figli insieme al nodo al quale è applicato  il metodo (true), oppure se clonare il solo nodo (false)