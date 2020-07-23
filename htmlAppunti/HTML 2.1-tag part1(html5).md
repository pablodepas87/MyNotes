# HTML5 TAG ARTICLE

## ARTICLE

Il tag **<article>** è uno dei nuovi elementi di sezionamento in HTML5. Il tag HTML **<article>** viene utilizzato per rappresentare un articolo. Più specificamente, il contenuto all'interno del tag <article> è indipendente dagli altri contenuti del sito

**Le fonti potenziali per l'articolo elemento sono:**

- Un articolo di rivista / giornale
- Un post sul blog
- Un post sul forum
- Un utente ha inviato un commento

**Questo tag viene spesso utilizzato in due contesti:**

- In una pagina con un singolo contenuto, è possibile utilizzare un singolo  elemento <article> per contenere il contenuto principale e  disattivarlo dal resto della pagina.
- Su una pagina con più contenuti (una pagina dell'indice del blog, una  pagina dei risultati di ricerca, una pagina delle categorie, un feed di  notizie), è possibile utilizzare più elementi <article> per  contenere ogni singolo contenuto.

n entrambi i casi è simile all'elemento <div> e mostra lo stesso lavoro elegante. Tuttavia, l'utilizzo dell'elemento <article> anziché <div> fornisce  ulteriori informazioni semantiche a screen reader, motori di ricerca e  applicazioni di terze parti

**Impostazione CSS predefinita: la** maggior parte dei browser visualizzerà l'elemento Article con i seguenti valori.

```
{ 
  display:block; 
} 
```

```
<body> 
    <article style="width: 300px; border: 2px solid gray;  
              padding: 10px; border-radius: 10px;  
                              margin:5px;"> 
        <img src= 
"https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190710102234/download3.png"
              alt="" width="300" height="250"
              class="alignnone size-medium wp-image-560930" /> 
        <h1> GeeksforGeeks</h1> 
        <p>Sandeep Jain(FOUNDER) An IIT Roorkee alumnus and founder 
        of GeeksforGeeks. Apart from GeeksforGeeks, he has worked 
        with DE Shaw and Co. as a software developer and JIIT Noida  
        as an assistant professor.</p> 
    </article> 
</body> 
```

## Side

Il tag <side> viene utilizzato per descrivere l'oggetto principale  della pagina Web in modo più breve come un evidenziatore. In sostanza identifica il contenuto correlato al contenuto principale della pagina Web **ma non costituisce l'intento principale** della pagina principale. Il tag <side> contiene principalmente informazioni sull'autore, collegamenti, contenuti correlati e così via.

**<side> Vs <div>:** entrambi i tag hanno lo stesso comportamento con significato diverso.

- <div>: definisce o crea divisione o sezione nella pagina web.

- **<side>:**   fa lo stesso lavoro creando sezione o divisione ma contiene solo il contenuto correlato alla pagina Web principale.

Il tag <side> semplifica la progettazione della pagina e migliora la chiarezza del documento HTML. Ci consente di riconoscere facilmente il testo principale e il testo subordinato. 

Sintassi

```
<Aside>
  <H3> Contents ... </ h3>
  <P> Contents ... </ p>
</ Aside>
```

## details

viene utilizzato per il contenuto / le informazioni inizialmente nascoste ma  che potrebbero essere visualizzate se l'utente desidera vederle. Questo tag viene utilizzato per creare un widget interattivo che l'utente può aprire o chiudere.

**Sintassi:**

```
<dettagli>
    <summary> Contenuto del testo </summary>
    <div> Contenuto. . . >
</ Dettagli>
```

```
<body> 
        <details> 
            <summary>GeeksforGeeks</summary> 
            <p>A computer science portal for geeks</p> 
            <div>It is a computer science portal where you 
            can learn programming.</div> 
        </details> 
    </body> 
```

## dialog

The <dialog> tag is used to specify the dialog box or window. This tag is used to create popup dialog and models on a web page. This tag  is new in HTML5

**Sintassi:**

```
<dialog open> Contenuti ... </dialog>
```

**Attributi:** questo tag accetta l'attributo singolo *open* utilizzato per specificare che l'elemento di dialogo è attivo e l'utente può interagire con l'elemento tag.

## figcaption

 tag <figcaption> in HTML viene utilizzato per impostare una didascalia sull'elemento figure in un documento. Questo tag è nuovo in HTML5.

```
 <figure> 
        <img src= "https://media.geeksforgeeks.org/wp-content/uploads/geeks-25.png" alt="gfglogo" 		 style="width:50%"> 
        <figcaption>GeeksforGeeks Logo</figcaption> 
  </figure> 
```

## figure

Il tag <figure> in HTML viene utilizzato per aggiungere contenuti  autonomi come illustrazioni, diagrammi, foto o codici elencati in un  documento

**Sintassi:** 

```
<figure> Contenuto dell'immagine ... </figure>
```

**Attributi:** contiene principalmente due tag elencati di seguito:

- **img src:** questo tag viene utilizzato per aggiungere l'origine dell'immagine nel documento.

- **figcaption:** questo tag serve per impostare la didascalia sull'immagine.

  ```
   <body> 
          <h1>GeeksforGeeks</h1> 
          <h2><figure> Tag</h2> 
          <figure> 
              <img src= 
  "https://media.geeksforgeeks.org/wp-content/uploads/geeks-25.png"
              alt="The Pulpit Rock" width="304" height="228"> 
              <figcaption>Geeks logo</figcaption> 
          </figure> 
      </body> 
  ```

## Header

Il tag <header> in HTML viene utilizzato per definire l'intestazione per un documento o una sezione.

- Il tag di intestazione contiene informazioni relative al titolo e all'intestazione del contenuto correlato.
- L'elemento <header> di solito contiene l'intestazione della sezione (un  elemento h1-h6 o un elemento <hgroup>), ma ciò non è necessario.
- L'elemento <header> può anche essere usato per racchiudere il sommario di  una sezione, un modulo di ricerca o qualsiasi logo pertinente.
- Il tag <header> è un nuovo tag in HTML5 e richiede un tag iniziale e un tag finale. 
- Possono esserci più elementi <header> in un documento. 
- Un tag <header> non può essere inserito in un elemento <footer>, <address> o in un altro <header>.

**Sintassi:**

```
<header> ... </header>
```

```html
<header> 
            <h1>GeeksforGeeks</h1> 
            <p> 
                <a href= 
"https://www.geeksforgeeks.org/fundamentals-of-algorithms/"> 
                    Algo</a> |  
                <a href= 
"https://www.geeksforgeeks.org/data-structures/"> 
                    DS</a> |  
                <a href= 
"https://www.geeksforgeeks.org/category/program-output/"> 
                    Languages</a> | 
                <a href= 
"https://www.geeksforgeeks.org/company-interview-corner/"> 
                    Interview</a> | 
                <a href= 
"https://www.geeksforgeeks.org/student-corner/"> 
                    Students</a> | 
                <a href= 
"https://www.geeksforgeeks.org/gate-cs-notes-gq/"> 
                    Gate</a> | 
                <a href= 
"https://www.geeksforgeeks.org/articles-on-computer-science-subjects-gq/"> 
                    CS Subjects</a> | 
                <a href= 
"https://www.geeksforgeeks.org/quiz-corner-gq/"> 
                    Quizzes</a>  
            </p> 
        </header> 
```

# Footer

Il tag <footer> in HTML viene utilizzato per definire un piè di pagina del documento HTML. Questa sezione contiene le informazioni a piè di pagina

**Sintassi:**

```
<footer> ... </footer>
```

Un elemento a piè di pagina contiene in genere informazioni sulla  paternità, informazioni sul copyright, informazioni di contatto, mappa  del sito, collegamenti all'inizio, documenti correlati, ecc.

```html
 <footer> 
            <nav> 
                <p> 
                    <a href= 
"https://www.geeksforgeeks.org/about/">About Us</a>|  
                    <a href= 
"https://www.geeksforgeeks.org/privacy-policy/">Privacy Policy</a>|  
                    <a href= 
"https://www.geeksforgeeks.org/careers/">Careers</a>  
                </p> 
            </nav> 
            <p>@geeksforgeeks, Some rights reserved</p> 
 </footer> 
```

