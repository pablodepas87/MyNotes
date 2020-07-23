# HTML | attributi

Un attributo viene utilizzato per fornire informazioni aggiuntive o aggiuntive su un singolo elemento. 

1. Tutti gli elementi HTML possono avere attributi. Gli attributi forniscono informazioni aggiuntive su un elemento.
2. Ci vogliono due parametri: **un nome e un valore.** Questi definiscono le proprietà dell'elemento e si trovano all'interno del tag di apertura dell'elemento. Il parametro name prende il nome della proprietà che vorremmo assegnare  all'elemento e il valore prende il valore delle proprietà o l'estensione dei nomi delle proprietà che possono essere allineati sull'elemento.
3. Ogni nome ha un valore che deve essere scritto tra virgolette.

`<element nome_attributo = "valore_attributo">`

**Attributo src:** se vogliamo inserire un'immagine in una pagina web, allora dobbiamo usare il tag <img> e l'attributo **src** dovremo specificare l'indirizzo dell'immagine come valore dell'attributo all'interno della virgoletta doppia.

```html

<html> 
<head> 
    <title>src Attribute</title> 
</head> 
<body> 
    <img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Geek_logi_-low_res.png"> 
</body> 
</html> 

```

**Attributo alt:** come dice il nome, questo è un tag alternativo che viene usato per  mostrare o mostrare qualcosa se l'attributo primario, cioè il tag  <img>, non mostra il valore assegnato ad esso. Questo può anche essere usato per descrivere l'immagine a uno sviluppatore che è effettivamente seduto alla fine della codifica.

```html

<html> 
<head> 
    <title>alt Attribute</title> 
</head> 
<body> 
    <!--If the image is not found or the img field  
     is left blank the alt value gets displayed-->
    <img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Geek_logi_-low_res.png" alt="The Logo"><br> 
    <img src="" alt="Since the src value is blank,the alt value is displayed"> 
</body> 
</html> 

```

**Attributo larghezza e altezza:** questo attributo viene utilizzato per regolare la larghezza e l'altezza di un'immagine. 

`<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Geek_logi_-low_res.png" width="300px" height="100px" > `

**L'attributo id:** questo attributo viene utilizzato per fornire un'identificazione univoca a un elemento. Possono sorgere situazioni in cui avremo bisogno di accedere a un elemento particolare che può avere un nome simile agli altri. In tal caso, forniamo ID diversi a vari elementi in modo che sia possibile accedervi in modo univoco. Le proprietà che estendono l'uso di id sono generalmente utilizzate nei CSS, che impareremo in seguito.

`<p id = "head">This is also unique to this paragraph `

**Attributo del titolo:** l'attributo del titolo viene utilizzato per spiegare un elemento al passaggio del mouse su di esso. Il comportamento differisce con vari elementi, ma generalmente il valore  viene visualizzato durante il caricamento o il passaggio del mouse su di esso

`<h3 title``=``"Hello GeeksforGeeks"``> Hover to see the effect</h3>``

**L'attributo href:** questo attributo viene utilizzato per specificare un collegamento a qualsiasi indirizzo. Questo attributo viene utilizzato insieme al tag **<a>** . Il collegamento inserito all'interno dell'attributo href viene collegato al testo visualizzato all'interno del tag <a>. 
 Cliccando sul testo verremo reindirizzati al link. Per impostazione predefinita, il collegamento viene aperto nello stesso tag ma utilizzando l' attributo **target** e impostando il suo valore su **"_blank"** , verremo reindirizzati a un'altra scheda o un'altra finestra in base alla configurazione del browser.

```html
<body> 
    <a href="https://www.geeksforgeeks.org/"> 
        Click to open in the same tab 
    </a><br> 
    <a href="https://www.geeksforgeeks.org/" target="_blank"> 
        Click to open in a different tab 
    </a> 
</body> 
```

**Attributo di stile:** questo attributo viene utilizzato per fornire vari effetti CSS  (Cascading Style Sheets) agli elementi HTML come aumentare la dimensione del carattere, cambiare la famiglia di caratteri, colorare ecc. Per una spiegazione dettagliata fare riferimento a HTML | Tag di stile. Il programma seguente mostra alcuni nomi e valori che seguono l'attributo style

```html
<body> 
    <h2 style="font-family:Chaparral Pro Light;">Hello GeeksforGeeks.</h2> 
    <h3 style="font-size:20px;">Hello GeeksforGeeks.</h3> 
    <h2 style="color:#8CCEF9;">Hello GeeksforGeeks.</h2> 
    <h2 style="text-align:center;">Hello GeeksforGeeks.</h2> 
</body> 
```

**L'attributo lang:** la lingua è dichiarata con l'attributo lang. Dichiarare una lingua è importante per le applicazioni di accessibilità e i motori di ricerca

```html
<!DOCTYPE html> 
<html lang="en-US"> 
<body> 
```

