# HTML5  TAG VARI PART 2

### PROGRESS

È usato per rappresentare l'avanzamento di un'attività. Viene anche definito quanto lavoro viene fatto e quanto resta da scaricare.

**Sintassi:**

```
<attributi progress ...> </progress>
```

**Attributi:** il tag <progress> è composto da due attributi elencati di seguito:

- **max:** rappresenta il lavoro totale da svolgere per completare un'attività.
- **valore:** rappresenta la quantità di lavoro già completata.

**Nota:** questo tag viene utilizzato insieme a JavaScript per visualizzare l'avanzamento di un'attività. 

```html
   <h1 style="color:green;">GeeksForGeeks</h1> 
        Downloading progress for a song: 
        <progress value="57" max="100"> 
        </progress> 
```

Il tag <rp> in HTML viene utilizzato per fornire parentesi attorno a un testo principale rubino che definisce le informazioni. 

### mark

Il tag <mark> in HTML viene utilizzato per definire il testo contrassegnato. È usato per evidenziare la parte del testo in un paragrafo

 **Sintassi:**

```
<mark> Contenuti ... </mark>
```

```html
 <p> 
            <mark>GeeksforGeeks:</mark>  
            It is a  
            <mark>computer science</mark> 
            portal for geeks 
 </p> 
```

### meter

Viene utilizzato per definire la misurazione della scala in un intervallo ben definito con un valore di attrito. È anche noto come indicatore.

**Sintassi:**

```
<attributi metro ...> </meter>
```

### nav

Il tag <nav> viene utilizzato per dichiarare la sezione di navigazione nei documenti HTML. I siti Web in genere hanno sezioni dedicate ai collegamenti di navigazione, che consentono all'utente di navigare nel sito. Questi collegamenti possono essere inseriti all'interno di un tag nav. 

**Sintassi:**

```
<Nav>
Link ...
</ Nav>
```

```
 <nav> 
         <a href = "#">Home</a> | 
         <a href = "#">Interview</a> | 
         <a href = "#">Languages</a> | 
         <a href = "#">Data Structure</a> | 
         <a href = "#">Algorithm</a>  
</nav> 
```

### fieldset

Il tag <fieldset> in HTML5 viene utilizzato per creare un gruppo di  elementi correlati nel modulo e crea la casella sopra gli elementi. 

**Sintassi:**

```
<fieldset> Contenuto ... </fieldset>
```

**Attributo:**

- **disabled:** specifica che il gruppo di elementi del modulo correlati deve essere disabilitato.
- **form:** specifica che una o più forme appartengono al fieldset.
- **name:** specifica il nome per il fieldset.

```html
<fieldset> 
                <legend>Fieldset:</legend> 
                Title: <input type="text"><br> 
                Link: <input type="text"><br> 
                User ID: <input type="text"> 
</fieldset>    
```

### operatori aritmetici

Gli operatori matematici sono utilizzati per la rappresentazione di operatori matematici e tecnici. In HTML5 vengono utilizzati alcuni codici speciali. 

link all’elenco dei codici [qui](https://www.geeksforgeeks.org/html5-mathematical-operators/)

### video

Prima della nascita di HTML 5, i video potevano essere riprodotti solo in un browser utilizzando un plug-in come Flash. Ma dopo il rilascio di HTML 5, aggiungere un video a una pagina Web è facile come aggiungere un'immagine. L'elemento "video" HTML5 specifica un modo standard per incorporare un video in una pagina Web.

Esistono tre diversi formati comunemente supportati dai browser Web: mp4, Ogg e WebM

**Syntax :**

```
 <video src="" controls>&lt/video>
```

**Gli attributi che possono essere utilizzati con il tag "video" sono elencati di seguito:**

1. **Autoplay** : indica al browser di avviare immediatamente il download del video e di riprodurlo il prima possibile.
2. **Preload :** intende fornire un suggerimento al browser su ciò che l'autore pensa porterà alla migliore esperienza utente.
3. **Loop :** indica al browser di eseguire automaticamente il loop del video.
4. **height & width :** imposta la larghezza e l'altezza del video in pixel CSS.
5. **Controls :** mostra i controlli video predefiniti come riproduzione, pausa, volume ecc.
6. **Muted :** silenzia l'audio dal video.
7. **Poster :** carica un'immagine da visualizzare in anteprima prima del caricamento del video.

```html
<video width="400" height="350" controls> 
  <source src="myvid.mp4" type="video/mp4"> 
  <source src="myvid.ogg" type="video/ogg"> 
</video> 
```

**Spiegazione del codice:**

- L'attributo Controls viene utilizzato per aggiungere controlli come play, pause, volume ecc.
- L'elemento "sorgente" viene utilizzato per specificare il video che il browser 
   sceglierà di riprodurre

**Riproduzione automatica di un video tramite HTML5:**
  per avviare un video, utilizzare automaticamente l'attributo autoplay.

```
<video width="400" height="350" autoplay> 
  <source src="myvid.mp4" type="video/mp4"> 
  <source src="myvid.ogg" type="video/ogg"> 
</video> 
```

**Video HTML tramite JavaScript: è**
  possibile impostare molte proprietà ed eventi per un video come  caricare, riprodurre e mettere in pausa i video, nonché impostare la  durata e il volume.

```html
<div style="text-align:center">  
  <button onclick="Pauseplay()">Pause/Play</button>  
  <button onclick="Big()">Big</button> 
  <button onclick="Small()">Small</button> 
  <button onclick="Normal()">Normal</button> 
  <br><br> 
  <video id="myvideo" width="450"> 
    <source src="myvid.MP4" type="video/mp4"> 
    <source src="myvid.ogg" type="video/ogg"> 
  </video> 
</div>  
  
<script>  
var testvideo = document.getElementById("myvideo");  
  
function Pauseplay() {  
    if (testvideo.paused)  
        testvideo.play();  
    else  
        testvideo.pause();  
}  
  
function Big() {  
    testvideo.width = 600;  
}  
  
function Small() {  
    testvideo.width = 300;  
}  
  
function Normal() {  
    testvideo.width = 450;  
}  
</script>
```

### translate

L'attributo translate in HTML viene utilizzato per specificare se il contenuto di un elemento viene tradotto o meno.

 **Sintassi:**   

```
<element translate = "yes | no">
```

```html
<h2><strong >translate attribute</strong></h2>  
<p translate="no">Don't translate this!</p> 
<p>This can be translated to any language.</p> 
```

### button

Il tag <button> in HTML viene utilizzato per definire il pulsante cliccabile. Il tag <button> viene utilizzato per inviare il contenuto. 

**Sintassi:**

```
<button type = "button">
```

```
 ``<``button` `type` `= ``"button"` `onclick` `= 
      ``"alert('Welcome to GeeksforGeeks')"``> 
      ``Click Here 
    ``</``button``> 
```

```html
 <button type = "button" onclick =  
            "alert('Welcome to GeeksforGeeks')"> 
            Click Here 
  </button> 
```

Browser diversi utilizzano tipi predefiniti diversi per <button>.  I pulsanti possono essere disegnati usando CSS. 

HTML5 ha aggiunto alcuni nuovi attributi:

- autofocus
- form
- formaction
- formnovalidate
- formenctype
- formmethod
- formtarget

### Div

Il tag div è noto come tag Division. Il tag div viene utilizzato in HTML per creare divisioni di contenuto  nella pagina Web come (testo, immagini, intestazione, piè di pagina,  barra di navigazione, ecc.). Il tag Div ha sia il tag aperto (<div>) che quello chiuso (</div>) ed è obbligatorio chiuderlo. Div è il tag più utilizzabile nello sviluppo Web perché ci aiuta a separare i dati nella pagina Web e possiamo creare una sezione particolare per  dati o funzioni particolari nelle pagine Web.

- Il tag div è un tag a livello di blocco
- È un tag contenitore generico 
- Viene utilizzato per il gruppo di vari tag di HTML in modo da poter creare sezioni e applicare lo stile ad esse.

```html
 <body> 
   <div > div tag   </div> 
   <div > div tag   </div> 
   <div > div tag   </div> 
   <div > div tag   </div> 
   
 </body> 
```

### Form

Il tag <form> in HTML viene utilizzato per creare un modulo per l'input dell'utente. Esistono molti elementi utilizzati nel tag del modulo. Ad esempio: <input>, <textarea>, <button>,  <select>, <option>, <optgroup>, <fieldset>,  <label>.

**Sintassi:**

```html
<form> Modulo contenuto ... </form>
```

**Attributi:** ci sono molti attributi associati al tag <form>. Alcuni di questi sono elencati di seguito:

- **input:** viene utilizzato per specificare il campo di input per l'utente.
- **textarea:** viene utilizzato per specificare il campo di immissione del testo su più righe per l'utente.
- **button:** viene utilizzato per eseguire un'operazione in una forma da parte dell'utente.
- **label:** viene utilizzata per assegnare un'etichetta a qualsiasi tag come pulsante, input, ecc.

```
<form action="#"> 
            First name:  
            <input type="text" placeholder = "First Name"
            value=""> 
            <br><br> 
            Last name:  
            <input type="text" placeholder = "Last Name"
            value=""> 
            <br><br> 
            <input type="submit" value="Submit"> 
 </form> 
```

### input

In HTML, il campo di **input** può essere specificato *dove un utente può inserire i dati* . Il tag di input viene utilizzato spesso all'interno dell'elemento **<form>** per dichiarare i controlli di input che consentono agli utenti di immettere dati. Un campo di input può essere di vari tipi a seconda del tipo di attributo. È un elemento vuoto che contiene solo attributi. Per definire le etichette per l'elemento di input, è possibile utilizzare **<label>** 

**attributi:**

- **type:** l'attributo type viene utilizzato per specificare il tipo di elemento di input. Il suo valore predefinito è testo.
- **value:** l'attributo valore viene utilizzato per specificare il valore dell'elemento di input.
- **placeholder** attributo segnaposto viene utilizzato per specificare un suggerimento che descrive il valore atteso di un campo di input.
- **name:** l'attributo name viene utilizzato per specificare il nome dell'elemento di input.
- **alt:** l'attributo alt viene utilizzato per fornire un testo alternativo per l'utente, se non è possibile visualizzare l'immagine.
- **autofocus: l'** attributo autofocus specifica che un elemento dovrebbe ottenere  automaticamente lo stato attivo quando la pagina viene caricata.
- **checked:** l'attributo controllato specifica che un elemento deve essere preselezionato (controllato) quando la pagina viene caricata. L'attributo controllato può essere utilizzato con <input type = "checkbox"> e <input type = "radio">.
- **disabled:** l'attributo disabilitato specifica che l'elemento deve essere disabilitato. L'attributo disabilitato può essere impostato per impedire a un utente di  utilizzare l'elemento <input> fino a quando non viene soddisfatta  un'altra condizione.
- **form:** l'attributo form viene utilizzato per specificare una o più forme a cui appartiene l'elemento <input>.
- **max:** l'attributo max viene utilizzato per specificare il valore massimo per un elemento <input>.
- **required:** l'attributo richiesto specifica che un campo di input deve essere compilato prima di inviare il modulo.
- **readonly:** l'attributo readonly specifica che un campo di input è di sola lettura. Un campo di input di sola lettura non può essere modificato. Un modulo invierà comunque un campo di input di sola lettura, ma non invierà un campo di input disabilitato.
- **accept:** questa proprietà viene utilizzata per specificare i tipi di file accettati dal server.
- **align:** questa proprietà viene utilizzata per specificare l'allineamento di un input di immagine.
- **autocomplete:** questa proprietà viene utilizzata per specificare se un elemento  <input> deve avere il completamento automatico abilitato.
- **dirname:** questa proprietà viene utilizzata per specificare che verrà inviata la direzione del testo.
- **formaction:** questa proprietà viene utilizzata per specificare l'URL del file che  elaborerà il controllo di input quando il modulo viene inviato (per type = "submit" e type = "image")
- **formenctype:** questa proprietà viene utilizzata per specificare come codificare i  dati del modulo durante l'invio al server (per type = "submit" e type =  "image")
- **formenctype:** questa proprietà viene utilizzata per specificare come codificare i  dati del modulo durante l'invio al server (per type = "submit" e type =  "image")
- **formmethod:** questa proprietà viene utilizzata per definire il metodo HTTP per  l'invio di dati all'URL dell'azione (per type = "submit" e type =  "image")
- **formnovalidate:** questa proprietà viene utilizzata per definire che gli elementi del modulo non devono essere convalidati al momento dell'invio
- **formtarget** Questa proprietà viene utilizzata per specificare dove visualizzare la  risposta ricevuta dopo l'invio del modulo (per type = "submit" e type =  "image")
- **height:** questa proprietà viene utilizzata per specificare l'altezza di un elemento <input> (solo per type = "image")
- **list:** questa proprietà viene utilizzata per fare riferimento a un elemento  <datalist> che contiene opzioni predefinite per un elemento  <input>
- **maxlength:** questa proprietà viene utilizzata per specificare il numero massimo di caratteri consentiti in un elemento <input>
- **min:** questa proprietà viene utilizzata per specificare un valore minimo per un elemento <input>
- **multiple:** questa proprietà viene utilizzata per specificare che un utente può inserire più di un valore in un elemento <input>
- **pattern:** questa proprietà viene utilizzata per specificare un'espressione  regolare con cui viene verificato il valore di un elemento <input>
- **size:** questa proprietà viene utilizzata per specificare la larghezza, in caratteri, di un elemento <input>
- **src:** questa proprietà viene utilizzata per specificare l'URL dell'immagine  da utilizzare come pulsante di invio (solo per type = "image")
- **step:** questa proprietà viene utilizzata per specificare gli intervalli di numeri legali per un campo di input
- **width:** questa proprietà viene utilizzata per specificare la larghezza di un elemento <input> (solo per type = "image")

### output

Il tag <output> in HTML viene utilizzato per rappresentare il  risultato di un calcolo eseguito dallo script sul lato client come  JavaScript. Il tag <output> è un nuovo tag in HTML 5 e richiede un tag iniziale e finale.

**Sintassi:**

```
<output> Risultati ... </output>
```

**Attributi:** il tag di output contiene tre attributi elencati di seguito:

- **for:** questo attributo contiene un valore di attributo *element_id* che viene utilizzato per specificare la relazione tra risultato e calcoli.
- **form:** questo attributo contiene un valore di attributo *form_id* che viene utilizzato per specificare una o più forme di elementi di output.
- **name:** questo attributo contiene un *nome* valore attributo che viene utilizzato per specificare il nome dell'elemento di output.

```html
<form oninput = "sumresult.value = parseInt(A.value)  
                + parseInt(B.value) + parseInt(C.value)"> 
            <input type = "number" name = "A" value = "50" /> + 
            <input type = "range" name = "B" value = "0" /> + 
            <input type = "number" name = "C" value = "30" /> 
            <br> 
            Result: <output name = "sumresult"></output> 
</form> 
```

### optgroup

This tag is used to create a group of same category options in a  drop-down list. The <optgroup> tag is required when there is a  long list of the item exists

**Attributes**

- label
- Disabled

```html
<select> 
            <optgroup label="Programming Languages"> 
                <option value="C">C</option> 
                <option value="C++">C++</option> 
                <option value="Java">Java</optgroup> 
            <optgroup label="Scripting Language"> 
                <option value="JavaScript">JavaScript</option> 
                <option value="PHP">PHP</option> 
                <option value="Shell">Shell</option> 
            </optgroup> 
</select> 
```

### output

Il tag <option> in HTML viene utilizzato per scegliere un'opzione da un menu a discesa. Questo tag può essere utilizzato con o senza attributi e il valore necessario può essere inviato al server. 
 Il gruppo di opzioni può essere creato usando il <optgroup> Crea il gruppo di voci di menu correlate.

**Sintassi:**

```
<option> Contenuti ... </option>
```

**Attributi:** il tag <option> contiene quattro attributi elencati di seguito:

- **disabled:** questo attributo contiene il valore disabilitato che rappresenta l'opzione disabilitata.
- **label:** questo attributo contiene il valore del testo che rappresenta l'etichetta abbreviata per l'opzione.
- **selected:** questo attributo contiene il valore selezionato che rappresenta  l'elemento è selezionato per selezione quando il browser è caricato.
- **value:** questo attributo contiene il testo del valore inviato al server.

```

```

