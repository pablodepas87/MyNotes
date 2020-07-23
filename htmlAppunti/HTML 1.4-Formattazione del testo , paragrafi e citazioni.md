# HTML Formattazione del testo , paragrafi e citazioni 

## Paragrafo

'<p > tag': definisce un paragrafo. Questo ha sia tag di apertura che di chiusura. Quindi qualsiasi cosa menzionata in <p> e </p> viene trattata come un paragrafo. La maggior parte dei browser legge una riga come paragrafo anche se non  utilizziamo il tag di chiusura, ad esempio </p>, ma ciò potrebbe  generare risultati imprevisti. Quindi, è sia una buona convenzione e ci **deve** utilizzare il tag di chiusura. 

```html
Sintassi:
<p> contenuto </p>


<!DOCTYPE html> 
<html> 
<head> 
    <title>Paragraph</title> 
</head> 
<body> 
    <p>A Computer Science portal for geeks.</p> 
    <p>It contains well written, well thought articles.</p> 
</body> 
</html> 

```

il tag <p> aggiunge automaticamente spazio prima e dopo qualsiasi  paragrafo, che è sostanzialmente i margini aggiunti dal browser. Se un utente aggiunge più spazi, il browser li riduce in un unico spazio. Se un utente aggiunge più righe, il browser le riduce a una singola riga

ex.

```html

<!DOCTYPE html> 
<html> 
<head> 
    <title>Display_Paragraph</title> 
</head> 
<body> 
    <p> 
    This paragraph has multiple 
    lines. But HTML reduces them 
    to a single line, omitting 
    the carriage return we have used. 
    </p> 
      
    <p> 
    This paragraph      has multiple 
    spaces.     But HTML reduces   them 
    all to a     single space,   omitting 
    the extra   spaces and line    we have used. 
    </p> 
</body> 
</html> 

```

### tag <br>

c'è un modo per far sapere all'HTML e quindi al browser chedeve andare a capo cioè usando il tag **<br>** . Questi tag non hanno alcun tag di chiusura. Quindi, solo un singolo tag di apertura cambierà la linea.

**Attributo <align>:**
  il tag <p> supporta specificamente l'attributo di allineamento e  ci consente di allineare i nostri paragrafi con allineamento a sinistra, a destra o al centro. 

```html
Sintassi 
<p align="value" > </p>

.....
<p align="center">Welcome Geeks</p> 
<p align="left">A Computer Science portal for geeks.</p> 
<p align="right">It contains well written, well thought articles.</p> 
...    
```

**L'elemento <pre>:**
  abbiamo visto come il tag <p> ignora spazi extra e cambio di righa al suo interno, ma c'è un modo per preservarli usando il tag **<pre>** . Contiene anche un'etichetta di apertura e di chiusura. Visualizza un testo entro un'altezza e una larghezza fisse e conserva le linee e gli spazi extra che utilizziamo.

```html
Sintassi
<pre> Contenuto </pre>

.....
    <pre> 
    This paragraph has multiple 
    lines. But it is displayed  
    as it is unlike the paragraph  
    tag. 
    </pre> 
      
    <pre> 
    This     paragraph has multiple 
    spaces. But     it is displayed  
    as it is    unlike the paragraph  
         tag. 
    </pre> 

..... 

```

## Formattazione del testo

L'HTML ci offre la possibilità di formattare il testo proprio come facciamo in MS Word o in qualsiasi software di modifica del testo. In questo articolo, esamineremo alcune di queste opzioni.

**Rendere il testo grassetto o forte** : possiamo rendere il testo in **grassetto** usando il tag **<b>** . Il tag utilizza sia il tag di apertura che quello di chiusura. Il testo che deve essere evidenziato in grassetto deve essere **compreso** tra i **tag <b>** e **</b>** . 
 Possiamo anche usare il tag **<strong>** per rendere forte il testo, con una maggiore importanza semantica. Si apre anche con <strong> e termina con il tag </strong>. 

```html
<!--Normal text-->
 <p>Hello GeeksforGeeks</p> 
<!--Text in Bold-->
 <p><b>Hello GeeksforGeeks</b></p> 
<!--Text in Strong-->    
 <p><strong>Hello GeeksforGeeks</strong></p> 
```

**Rendere \*corsivo\* o \*enfatizzato il\* testo :** il tag **<i>** viene utilizzato per *rendere corsivo* il testo. Si apre con <i> e termina con </i> tag. 
 Il tag **<em>** viene utilizzato per *enfatizzare* il testo, con una maggiore importanza semantica. Si apre con <em> e termina con  </em>

```html
  <!--Normal text-->
   <p>Hello GeeksforGeeks</p> 
  <!--Text in Italics-->
   <p><i>Hello GeeksforGeeks</i></p> 
  <!--Text in Emphasize-->    
   <p><em>Hello GeeksforGeeks</em></p> 
```

**Evidenziazione di un testo:** è anche possibile evidenziare un testo in HTML utilizzando il tag **<mark>** . Ha un tag di apertura <mark> e un tag di chiusura </mark>.

```html
 <!--Text in Normal-->
    <p>Hello GeeksforGeeks</p> 
 <!--Text in Highlight-->    
   <p><mark>Hello GeeksforGeeks</mark></p> 
```

**Creazione di un pedice o apice del testo:** l' elemento **<sup>** viene utilizzato per sovrascrivere un testo e l'elemento <sub> viene utilizzato per sottoscrivere un testo. Entrambi hanno un tag di apertura e di chiusura

```html
<!--Text in Normal-->
  <p>Hello GeeksforGeeks</p> 
<!--Text in Superscript-->    
  <p>Hello <sup>GeeksforGeeks</sup></p> 
<!--Text in Subcript-->    
 <p>Hello <sub>GeeksforGeeks</sub></p> 
```

**Ridurre il testo:** l' elemento **<small>** viene utilizzato per ridurre il testo. Il testo che deve essere visualizzato più piccolo deve essere scritto all'interno dei tag <small> e </small>.

```html
<!--Text in Normal-->
    <p>Hello GeeksforGeeks</p> 
<!--Text in small-->    
    <p><small>Hello GeeksforGeeks</small></p> 
```

**Barrare il testo:** l' elemento **<del>** è usato per barrare il testo che segna la parte come cancellata. Ha anche un'etichetta di apertura e chiusura. 

```html
<!--Text in Normal-->
    <p>Hello GeeksforGeeks</p> 
<!--Text in Delete-->    
    <p><del>Hello GeeksforGeeks</del></p> 
```

**Aggiunta di un testo sottolineato:** l' elemento **<ins>** viene utilizzato per sottolineare un testo che contrassegna la parte come inserita o aggiunta. Ha anche un'etichetta di apertura e chiusura.  

```html
 <!--Text in Normal-->
    <p>Hello GeeksforGeeks</p> 
 <!--Text in Insert-->    
    <p><ins>Hello GeeksforGeeks</ins></p> 
```

## Citazioni

Gli elementi di citazione in HTML vengono utilizzati per inserire testi tra virgolette in una pagina Web, ovvero una porzione di testo diversa dai  normali testi nella pagina Web.

**Elemento <q>: l'elemento**
  <q> viene utilizzato per impostare una serie di testo tra virgolette. Ha sia tag di apertura che di chiusura. 

**Elemento <blockquote>: l'elemento**

  <blockquote> viene utilizzato anche per le quotazioni in modo diverso. Invece di mettere il testo tra virgolette, cambia l'allineamento per renderlo unico dagli altri. Ha sia tag di apertura che di chiusura.

**Elemento <indirizzo>:**
  utilizzando l' **elemento** <indirizzo>, possiamo definire un indirizzo in una pagina web e  il testo inserito all'interno del tag indirizzo verrà enfatizzato. Ha sia tag di apertura che di chiusura. 

```html
 <p>The quick brown fox jumps over the lazy dog<br></p> 
 <!--Inside quotes-->
 <p><q>The quick brown fox jumps over the lazy dog</q></p>
 
 ...
 
 <p>The quick brown fox jumps over the lazy dog<br></p> 
 <!--Inside blockquotes-->
 <p><blockquote>The quick brown fox jumps  over the lazy dog</blockquote></p> 
 
 ...
 
 <address> 
    <p>Address:<br> 
    710-B, Advant Navis Business Park,<br> 
    Sector-142, Noida Uttar Pradesh – 201305</p> 
 </address> 
```

**Elemento <abbr>: l'elemento**
  <abbr> viene utilizzato per definire un testo come acronimo o abbreviazioni. L'attributo title può essere usato per mostrare la versione completa  dell'abbreviazione / acronimo quando passi il mouse sopra l'elemento  <abbr>. Ha sia tag di apertura che di chiusura. Questo è utile per browser e motori di ricerca. 

```html
 <h3>GeeksforGeeks</h3> 
    <!--Here the marked text is the acronym-->
  <p>Welcome to <abbr title="GeeksforGeeks">GfG</abbr></p> 
```

**Elemento <bdo>: l'elemento**

  <bdo> viene utilizzato per definire una sostituzione  bidirezionale, il che significa che il testo scritto da destra a  sinistra o da sinistra a destra. Ha sia tag di apertura che di chiusura. Viene utilizzato per sovrascrivere la direzione del testo corrente e richiede un attributo "rtl" per visualizzare il testo da destra a sinistra.



```
<!--Normal text-->    
    <p>The quick brown fox jumps over the lazy dog<br></p> 
<!--Inside <bdo> tag-->
    <p><bdo dir="rtl">The quick brown fox jumps  
```

**Elemento <cite>:**
  questo elemento viene utilizzato per definire il titolo di un'opera e enfatizza un testo.

```html
 <h3>GeeksforGeeks</h3> 
    <!--The title is kept in cite tag-->
    <p>The <cite>GeeksforGeeks</cite> is the best site to<br> 
    to search for articles and practice problems.</p> 
```

