# HTML- charset comment  link images Code tag

## CHARSETS

Il browser Web visualizza correttamente alfabeti, numeri e alcuni altri simboli. Tutto ciò è possibile grazie al set di caratteri richiesto utilizzato dal browser Web. Il set di caratteri o la codifica dei caratteri ha standard di codifica  dei caratteri diversi che assegnano alcuni numeri a questi set di  caratteri che possono essere utilizzati in Internet.

**ASCII:** American Standard Code for Information Interchange (ANSII) ha creato questa codifica dei caratteri. Questa codifica dei caratteri viene utilizzata nella programmazione C / C ++. Ha 128 caratteri alfanumerici costituiti da alfabeti (AZ) e (az) e alcuni simboli speciali come + - * / () @ ecc.

**ANSI (Windows-1252):** American National Standards Institute (ANSI) ha creato la codifica dei caratteri supportata 256 caratteri. Viene utilizzato come set di caratteri predefinito in Microsoft Windows.

**ISO-8859-1:** viene utilizzato come set di caratteri predefinito di HTML4 e supporta anche 256 caratteri. L'International Standards Organization (ISO) definisce i set di caratteri standard per diversi alfabeti / lingue. Contiene numeri, lettere inglesi maiuscole e minuscole e alcuni caratteri speciali.

**UTF-8: gli** standard UTF-8 e UTF-16 sono stati sviluppati dal consorzio Unicode,  poiché i set di caratteri ISO-8859 sono limitati e non compatibili in un ambiente multilingue. Consiste in tutti i simboli di carattere e punteggiatura.

**Attributo: il** browser Web deve conoscere lo standard di codifica dei caratteri  utilizzato nella pagina html e lo facciamo come indicato di seguito.

**HTML4**

<meta http-equiv="Content-Type" content="text/html;charset=ISO-8859-1">

HTML5

<meta charset="UTF-8">

Per l’elenco completo cliccare [qui](https://www.geeksforgeeks.org/html-comments/?ref=lbp)

## COMMENTI

Il tag di commento (<! - Comment ->) viene utilizzato per inserire commenti nel codice HTML. È una buona pratica di codifica in modo che programmatore e lettore possano ottenere aiuto per comprendere il codice. È utile comprendere il codice complesso. Il tag di commento è utile durante il debug dei codici.

- È un semplice pezzo di codice che viene cancellato (ignorato) dai browser Web, cioè non visualizzato dal browser.
- Aiuta il programmatore e il lettore a comprendere il pezzo di codice utilizzato appositamente per il codice sorgente complesso.

**Sintassi:**

```
<! - Commenti qui ->
```

**Tipi di commenti HTML:** ci sono tre tipi di commenti in HTML che sono:

- Commento a riga singola
- Commento su più righe utilizzando il tag (<! - ->).
- Usando il tag <comment>

```
 <!-- Paragraph element -->
 <p>GeeksforGeeks</p> 
 
   <!-- The multi-line comment is useful 
        to comment multiple line 
          
        Paragraph element  -->
```

**Utilizzo del tag <comment>:** esistono pochi browser che supportano il tag <comment>, Internet Explorer è uno di questi.

```html
<p> 
   This is <comment>not</comment> 
   Internet Explorer. 
</p> 
```

## Immagini

**Aggiunta di immagini su una pagina Web:**
il tag "img" viene utilizzato per aggiungere immagini su una pagina Web. Il tag "img" è un tag vuoto, il che significa che può contenere solo un elenco di attributi e non ha tag di chiusura.

**Sintassi:**

```
<img src = "url" alt = "some_text">
```

**Attributo:**

- **src:**
  src sta per sorgente. Ogni immagine ha un attributo src che dice al browser dove trovare l'immagine che si desidera visualizzare. L'URL dell'immagine fornita punta alla posizione in cui è memorizzata l'immagine.
- **alt:** se non è possibile visualizzare l'immagine, l'attributo alt funge da descrizione alternativa per l'immagine. Il valore dell'attributo alt è un testo definito dall'utente.

```
    <img src= 
"https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190710102234/download3.png" 
         alt="GeeksforGeeks logo"> 
```

**Impostazione della larghezza e dell'altezza dell'immagine: gli** attributi larghezza e altezza vengono utilizzati per specificare l'altezza e la larghezza di un'immagine. I valori degli attributi sono specificati in pixel per impostazione predefinita. 

```html
 <img src= 
"https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190710102234/download3.png" 
         alt="GeeksforGeeks logo" width="300" height="300"> 
```

**Aggiunta di** immagini animate **:** è anche possibile aggiungere immagini animate in formato .gif utilizzando il tag "img".

```html
<img src = "smiley.gif" alt = "smiley" style = "width:200px; height:200px;"> 
```

**Aggiunta di titoli all'immagine:** insieme alle immagini, è anche possibile aggiungere titoli alle  immagini per fornire ulteriori informazioni relative all'immagine  inserita. Per inserire un titolo, viene utilizzato l'attributo title. 

```HTML
   <img src= 
"https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190710102234/download3.png" 
     alt="GeeksforGeeks logo" width="200" height="200" title="Logo of GeeksforGeeks"> 
  
```

**Impostazione di un bordo su Immagine:** per impostazione predefinita, ogni immagine ha un bordo attorno. Utilizzando l'attributo border, è possibile modificare lo spessore del bordo. Uno spessore di "0" significa che non ci sarà bordo attorno all'immagine.

```html
 <img src= 
"https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190710102234/download3.png" 
     alt="GeeksforGeeks logo" width="200" height="200" border="5"> 
```

**Allineamento di un'immagine:** per impostazione predefinita, un'immagine è allineata sul lato sinistro della pagina, ma può essere allineata al centro o a destra usando  l'attributo align.

```html
<img src= 
"https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190710102234/download3.png" 
     alt="GeeksforGeeks logo" align="right"> 
```

**Aggiunta di un'immagine come collegamento:** un'immagine può funzionare come collegamento con un URL incorporato al suo interno. Si può fare usando il tag "img" all'interno di un tag "a".

```HTML
 <a href="https://ide.geeksforgeeks.org/tryit.php"> 
        <img src= 
"https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190710102234/download3.png" 
             alt="GeeksforGeeks logo"> 
```

**Utilizzo dell'immagine come sfondo:** un'immagine può essere utilizzata come sfondo per una pagina Web.

```html
<body style="background-image:url 
('https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190710102234/download3.png')"> 
```

## Link

È una connessione da una risorsa Web a un'altra. I collegamenti sono specificati in HTML usando il tag "a". 

```
Sintassi 
<a href="url">text link </a>

```

```
href: l'attributo href viene utilizzato per specificare
l'indirizzo di destinazione del collegamento utilizzato.
Link testuale: link testuale
è la parte visibile del collegamento.
```

Un collegamento **interno** è un tipo di collegamento ipertestuale la cui  destinazione è una risorsa, ad esempio un'immagine o un  documento, sullo stesso sito Web o dominio. 

Diversi tipi di collegamenti vengono visualizzati in diversi formati come:

1. Un collegamento non visualizzato appare sottolineato e di colore blu per impostazione predefinita.
2. Un collegamento visitato appare sottolineato e di colore viola per impostazione predefinita.
3. Un collegamento attivo appare sottolineato e di colore rosso per impostazione predefinita.

L'aspetto dei collegamenti può essere modificato utilizzando CSS:

```css
a:link { 
    color: red; 
    background-color: transparent; 
} 
a:visited { 
    color: green; 
    background-color: transparent; 
} 
a:hover { 
    color: blue; 
    background-color: transparent; 
} 
a:active { 
    color: yellow; 
    background-color: transparent; 
} 
```

**L'attributo target nei collegamenti**

L'attributo target viene utilizzato per specificare la posizione in cui viene aperto il documento collegato.

```html
<p>If you set the target attribute to "_blank",  
the link will open in a new browser window or tab.</p> 
<a href="https://www.geeksforgeeks.org" target="_blank">GeeksforGeeks</a>  
  
<p>If you set the target attribute to "_self",  
the link will open in the same window or tab.</p> 
<a href="https://www.geeksforgeeks.org" target="_self">GeeksforGeeks</a>  
  
<p>If you set the target attribute to "_top",  
the link will open in the full body of the window.</p> 
<a href="https://www.geeksforgeeks.org" target="_top">GeeksforGeeks</a>  
  
<p>If you set the target attribute to "_parent",  
the link will open in the parent frame.</p> 
<a href="https://www.geeksforgeeks.org" target="_parent">GeeksforGeeks</a>  
  
```

Un segnalibro è un collegamento che può essere utilizzato per passare a una parte specifica di una pagina Web.

**I passaggi per creare un segnalibro sono:** 
 **1. Utilizzando l'attributo id, creare un segnalibro.**

​	`<h2 id="titleH2"> title h2 </h2>`

**2. Aggiungere la parte specificata della pagina Web al segnalibro.**

`<a href="#titleH2"> JUMP TO h2 </a>`

## CODE TAG

Il tag <code> viene utilizzato per visualizzare il codice del computer sul sito Web. Sono disponibili numerosi elementi per contrassegnare il codice del computer tramite HTML.

<code> : <code> tag in HTML viene utilizzato per definire il pezzo di codice informatico. Durante la creazione di pagine Web a volte è necessario visualizzare il codice di programmazione del computer. 

Il tag di codice è un tipo specifico di testo che rappresenta l'output del computer. L'HTML offre molti metodi per la formattazione del testo ma il tag  <code> viene visualizzato con dimensioni, carattere e spaziatura  fissi.

**Sintassi:**

```
<code> Contenuto del codice del computer ... </code>
```

ESEMPIO:

```html
<pre>  
<code>  
#include<stdio.h>  
int main() {  
    printf("Hello Geeks");  
}  
</code>  
</pre> 
```

**Alcuni punti sul tag <code>:**

- Viene utilizzato principalmente per visualizzare lo snippet di codice nel browser Web.
- Questo tag modella il suo elemento in modo che corrisponda al formato di testo predefinito del computer.
- Per impostazione predefinita, i browser Web utilizzano una famiglia di  caratteri mono spazio per visualizzare il contenuto dell'elemento tag  <code>.

<kdb>: è un tag di frase e utilizzato per definire l'input da tastiera. Il testo tra il tag <kbd> rappresenta un testo simile che deve essere digitato sulla tastiera.

**Sintassi:**

```
<kbd> Contenuti ... </kbd>
```

**Alcuni punti sul tag <kbd>:**

-  Il testo racchiuso dal tag <kbd> viene in genere visualizzato nel carattere mono-spazio predefinito del browser.
- È possibile ottenere un effetto più ricco con i CSS
- Non ci sono attributi specifici di tag.

 Il tag <pre> in HTML viene utilizzato per definire il blocco di  testo preformattato che conserva gli spazi di testo, interruzioni di  riga, schede e altri caratteri di formattazione, che sono ignorati dai  browser web. Il testo nell'elemento <pre> viene visualizzato con un carattere a larghezza fissa, ma può essere modificato tramite CSS. Il tag <pre> richiede un tag di inizio e fine.

```html
<pre>  
            GeeksforGeeks  
            A Computer   Science Portal  For Geeks  
 </pre>  
```

<samp>: è un tag di frase e utilizzato per definire il testo di output  da un programma per computer. L'elemento HTML di esempio viene utilizzato per racchiudere il testo incorporato  che rappresenta l'output di esempio (o citato) da un programma per  computer.

**Sintassi:**

```
<samp> Contenuto ... </samp>
```

<var> è un tag di frase e utilizzato per specificare la variabile in un'equazione matematica o in un programma per computer. Il contenuto di questo tag viene visualizzato in formato corsivo nella maggior parte dei browser.

```html
<div class = "geeks"><var> Tag</div>  
<var>GeeksforGeeks Variable</var>  
```

