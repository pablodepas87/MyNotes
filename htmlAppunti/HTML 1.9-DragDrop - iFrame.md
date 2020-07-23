# HTML DRAG & DROP - IFRAME

## DRAG & DROP 

Drag and Drop è un concetto molto interattivo e intuitivo che semplifica lo  spostamento di un oggetto in una posizione diversa afferrandolo. Ciò consente all'utente di fare clic e tenere premuto il pulsante del mouse su un elemento, trascinarlo in un'altra posizione e rilasciare il  pulsante del mouse per rilasciare l'elemento. In HTML 5 Drag and Drop è molto più facile da codificare e qualsiasi elemento in esso è trascinabile.

**Eventi** di trascinamento della selezione **:** ci sono molti eventi di trascinamento della selezione, alcuni dei quali sono elencati di seguito:

| eventi      | Descrizione                                                  |
| ----------- | ------------------------------------------------------------ |
| ondragstart | Chiama una funzione, trascina (evento), che specifica quali dati trascinare |
| OnDragEnter | Per determinare se l'obiettivo di rilascio deve accettare o meno il rilascio. Se il drop deve essere accettato, questo evento deve essere annullato |
| ondragleave | Si verifica quando il mouse lascia un elemento prima di un target di rilascio valido mentre il trascinamento è in corso |
| OnDragOver  | Specifica dove è possibile eliminare i dati trascinati       |
| OnDrop      | Specifica dove si è verificata la caduta alla fine dell'operazione di trascinamento |
| ondragend   | Si verifica quando l'utente ha finito di trascinare un elemento |

**L'oggetto Trasferimento dati:** la proprietà di trasferimento dati viene utilizzata quando si verifica l'intero processo di trascinamento della selezione. Viene utilizzato per conservare i dati trascinati dall'origine e rilasciarli nella posizione desiderata. Queste sono le proprietà ad esso associate:

| dataTransfer.setData (formato, dati)      | Imposta i dati da trascinare                                 |
| ----------------------------------------- | ------------------------------------------------------------ |
| dataTransfer.clearData (formato)          | Chiamare questa funzione senza argomenti cancella tutti i dati. Chiamandolo con un argomento di formato si rimuovono solo quei dati specifici. |
| dataTransfer.getData (formato)            | Restituisce i dati del formato specificato. Se non ci sono tali dati, restituisce la stringa vuota. |
| dataTransfer.types                        | Questa proprietà restituisce un array di tutti i formati impostati nell'evento dragstart. |
| dataTransfer.files                        | Viene utilizzato per restituire tutti i file che devono essere eliminati. |
| dataTransfer.setDragImage (element, x, y) | Viene utilizzato per visualizzare un'immagine esistente come immagine di  trascinamento anziché l'immagine predefinita accanto al cursore. Le coordinate specificano la posizione di rilascio |
| dataTransfer.addElement (elemento)        | Aggiunge l'elemento specificato da disegnare come immagine di feedback di trascinamento |
| dataTransfer.effectAllowed (valore)       | Indica al browser che per l'utente sono consentiti solo i tipi di operazioni elencati. La proprietà può essere impostata sui seguenti valori: none, copy,  copyLink, copyMove, link, linkMove, move, all e non inizializzati. |
| dataTransfer.dropEffect (valore)          | Controlla il feedback che viene dato all'utente durante gli eventi dragenter e dragover. Quando l'utente passa sopra un elemento di destinazione, il cursore del  browser indicherà quale tipo di operazione avrà luogo (ad es. Una copia, una mossa, ecc.). L'effetto può assumere uno dei seguenti valori: none, copy, link, move. |

**Procedura per trascinamento della selezione:**

- Passaggio 1:

   rendere trascinabile un oggetto

  - Innanzitutto imposta l'attributo trascinabile su true affinché quell'elemento sia trascinabile <img draggable = “true”> 
  - Quindi, specifica cosa dovrebbe accadere quando l'elemento viene trascinato. L'attributo ondragstart chiama una funzione, trascina (evento), che specifica quali dati trascinare. Il metodo dataTransfer.setData () imposta il tipo di dati e il valore dei dati trascinati
  - Il listener di eventi ondragstart imposterà gli effetti consentiti (copia, spostamento, collegamento o una combinazione).

  ```
  funzione dragStart (ev) {
      ev.dataTransfer.setData ("text", ev.target.id);
  }
  ```

- Passaggio 2:

   rilasciare l'oggetto

  - L'evento ondragover specifica dove è possibile eliminare i dati trascinati. Per impostazione predefinita, i dati / elementi non possono essere eliminati in altri elementi. Per consentire un rilascio, è necessario impedire la gestione predefinita dell'elemento. Questo viene fatto chiamando il metodo event.preventDefault ()
  - Infine, l'evento drop, che consente di eseguire il drop effettivo

  ```
  funzione dragDrop (ev) {
      ev.preventDefault ();
      var data = ev.dataTransfer.getData ("testo");
      ev.target.appendChild (document.getElementById (dati));
  }
  ```

```html
<!DOCTYPE HTML> 
<html> 
    <head> 
        <title>Drag and Drop box</title> 
          
        <script> 
            function allowDrop(ev) { 
                ev.preventDefault(); 
            } 
            function dragStart(ev) { 
                ev.dataTransfer.setData("text", ev.target.id); 
            } 
            function dragDrop(ev) { 
                ev.preventDefault(); 
                var data = ev.dataTransfer.getData("text"); 
                ev.target.appendChild(document.getElementById(data)); 
            } 
        </script> 
          
        <style> 
            #box { 
                margin: auto; 
                width: 50%; 
                height:200px; 
                border: 3px solid green; 
                padding: 10px; 
            } 
            #box1, #box2, #box3 { 
                float: left; 
                margin: 5px; 
                padding: 10px; 
            } 
            #box1 { 
                width: 50px; 
                height: 50px; 
                background-color: #F5B5C5; 
            } 
            #box2 { 
                width: 100px; 
                height: 100px; 
                background-color: #B5D5F5; 
            } 
            #box3 { 
                width: 150px; 
                height: 150px; 
                background-color: #BEA7CC; 
            } 
            p { 
                font-size:20px; 
                font-weight:bold; 
                text-align:center; 
            } 
            .gfg { 
                font-size:40px; 
                color:#009900; 
                font-weight:bold; 
                text-align:center; 
            } 
        </style> 
    </head> 
      
    <body> 
        <div class = "gfg">GeeksforGeeks</div> 
        <p>Drag and drop of boxes</p> 
        <div id = "box"> 
            <div id="box1" draggable="true"ondragstart="dragStart(event)"></div> 
            <div id="box2" draggable="true"ondragstart="dragStart(event)"></div> 
            <div id="box3" ondrop="dragDrop(event)" ondragover="allowDrop(event)"></div> 
        </div> 
    </body> 
</html>   
```

## IFRAME

L'iframe in HTML sta per **Inline Frame** . Il tag "iframe" definisce un'area rettangolare all'interno del documento  in cui il browser può visualizzare un documento separato, inclusi barre  di scorrimento e bordi. Una cornice incorporata viene utilizzata per incorporare un altro documento all'interno del documento HTML corrente. 

L' attributo ' **src** ' viene utilizzato per specificare l'URL del documento che occupa l'iframe.

**Sintassi:** 

```
<iframe src = "URL"> </iframe>
```

**Impostazione di altezza e larghezza in Iframe: gli**
  attributi di altezza e larghezza vengono utilizzati per specificare la dimensione dell'iframe. I valori degli attributi sono specificati in pixel per impostazione  predefinita, ma possono anche essere specificati in percentuale come  "80%".

```HTML
<body> 
    <p>Content goes here</p> 
    <iframe src="https://ide.geeksforgeeks.org/tryit.php" height="300" width="400"></iframe> 
</body> 
```

**Rimozione del bordo in Iframe:**
per impostazione predefinita, iframe ha un bordo attorno. Per rimuovere il bordo, dobbiamo usare l'attributo style e usare la proprietà border CSS.

```
 <iframe src="https://ide.geeksforgeeks.org/tryit.php" 
            height="300" width="400" style="border:none;"> 
 </iframe> 
```

se vogliamo modificare il bordo invece:

```html
 <iframe src="https://ide.geeksforgeeks.org/tryit.php"
     height="300" width="400" style="border:4px solid orange;"> 
 </iframe> 
```

**Target per un collegamento mediante Iframe:**
un iframe può essere utilizzato come frame di destinazione per un collegamento. 

L'attributo target del collegamento deve fare riferimento all'attributo name dell'iframe.

```html
<p>Click the link text</p> 
    <iframe height="300" width="350" src= 
"https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190717121605/Screenshot-from-2019-07-17-12-12-55.png"
            name="iframe_a">
    </iframe> 
    <p><a href= 
"https://ide.geeksforgeeks.org/tryit.php" target="iframe_a">GeeksforGeeks IDE</a></p> 
```

