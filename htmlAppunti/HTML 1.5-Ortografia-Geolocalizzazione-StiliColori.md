# HTML | Controllo ortografico

La funzione **Controllo ortografico** può essere applicata ai moduli HTML utilizzando l' attributo *spellcheck* . L' attributo *spellcheck* è un attributo enumerato che definisce se l'elemento HTML verrà verificato per errori o meno. Può essere utilizzato con i campi "input" e "textarea" in HTML. 

**Sintassi:**
  sintassi per l'attributo *spellcheck*  in un campo di **input** in HTML:

```
<input type = "text" spellcheck = "value">
```

Sintassi per il controllo ortografico in un campo **textarea** in html:

```
<textarea type = "text" spellcheck = "value"> </textarea>
```

L'attributo controllo ortografico ha due valori validi, che sono:

- **Vero:** definisce che l'elemento HTML deve essere verificato per errori.
- **Falso:** definisce che l'elemento HTML non deve essere verificato per errori.

```html
<form> 
        <p> 
            <input type="text" spellcheck="true"> 
        </p> 
        <p> 
            <textarea spellcheck="true"></textarea> 
        </p> 
        <button type="reset">Reset</button> 
 </form> 
```

## Stili e colori

I colori sono usati per rendere la pagina più attraente. Ecco i diversi stili che possono essere utilizzati per creare nuovi colori combinando colori diversi.

**Stile esadecimale:** in questo stile, definiamo il colore in numero esadecimale a 6 cifre (da 0 a F). È indicato da '#'. Le prime due cifre indicano il colore rosso, i successivi due di colore verde e gli ultimi due di colore blu.

```css
h1 {
 color: # 00FF00;
}
```

**Stile RGB [rosso verde blu]:** in questo dobbiamo fornire 3 numeri che indicano la quantità di colori  rosso, verde e blu rispettivamente richiesti nel colore misto. L'intervallo di ciascun colore è compreso tra 0 e 255

```css
h1 {
  color: rgb (0, 255, 0);
}
```

rgba (0, 0, 0) è di colore nero e rgb (255, 255, 255) è di colore bianco.

**Stile RGBA [rosso verde blu alfa]:** questo stile ci consente di rendere il colore trasparente secondo la nostra volontà. Alpha indica il grado di trasparenza. L'intervallo di verde, blu e rosso è compreso tra 0 e 255 e quello dell'alfa è compreso tra 0 e 1.

```css
h1 {
  color: rgba (11, 99, 150, 1);
 }
```

**Colori HSL:** qui 'H' sta per **Hue** , 'S' per **Saturation** e 'L' per lightness. I valori di colore HSL sono specificati come: 
**Sintassi** :

```
hsl (hue, saturation, ligthness)
```

- **Hue(tonalità)** è il colore dell'immagine stessa. La sua gamma va da 0 a 360. 0 è per il rosso, 120 è per il verde e 240 è per il blu.
- **Saturation(saturazione)** è l'intensità / purezza della tonalità. 0% è per una sfumatura di grigio e 100% è il colore pieno. 
   Quando il colore è completamente saturo, il colore viene considerato nella versione più pura / vera.
- **ligthness(luminosità)** è la luminosità dello spazio colore. 0% è per il nero, 100% è per il bianco.

```
<style type="text/css"> 
        h1{ 
            color:#0FFFF0; 
            background-color: hsl(200, 50%, 20%); 
            color: hsl(200, 20%, 90%); 
        } 
        h4{ 
            color:rgb(0, 255, 0); 
            background-color: hsl(150, 20%, 40%); 
            color: hsl(360, 30%, 90%); 
        } 
        li{ 
            color:rgba(11, 99, 150, 1); 
            background-color: hsl(250, 45%, 60%); 
            color: hsl(175, 35%, 87%); 
        } 
    </style> 
```

In totale abbiamo 4096 combinazioni di colori diversi in quanto abbiamo la gamma di rosso, verde e blu da 00 a FF ciascuno, quindi abbiamo 16 * 16 * 16 diverse combinazioni di colori. Quindi con tonalità, saturazione e luminosità possiamo ottenere un numero ancora più creativo e un gran numero di colori.

## Geolocalizzazione

La geolocalizzazione in HTML5 viene utilizzata per condividere la  posizione con alcuni siti Web e consapevole della posizione esatta Viene utilizzato principalmente per attività commerciali locali, ristoranti o per mostrare la posizione sulla mappa. Utilizza JavaScript per fornire latitudine e longitudine al server back-end. La maggior parte dei browser supporta l'API di geolocalizzazione. L'API di geolocalizzazione utilizza l'oggetto navigatore globale che può essere creato come segue:

```
var loc = navigator.geolocation
```

```
var loc = navigator.geolocation; 
function getLoc() { 
    loc.getCurrentPosition(showLoc, errHand); 
} 
```

in alternativa

```
function getlocation(){ 
    navigator.geolocation.getCurrentPosition(showLoc, errHand); 
} 
```

**Visualizzazione della posizione tramite geolocalizzazione HTML:** Il codice seguente mostra la posizione corrente con l'aiuto di latitudine e longitudine tramite geolocalizzazione HTML.

```html
<body> 
        <div class = "gfg">GeeksforGeeks</div> 
        <p>Displaying location using Latitude and Longitude</p> 
        <button class = "geeks" onclick="getlocation()">Click</button> 
        <p id="demo1"></p> 
        <script> 
        var variable1 = document.getElementById("demo1"); 
        function getlocation(){ 
                navigator.geolocation.getCurrentPosition(showLoc); 
        } 
        function showLoc(pos){ 
                variable1.innerHTML = "Latitude: " + pos.coords.latitude +  
                "<br>Longitude: " + pos.coords.longitude;  
            } 
        </script> 
    </body> 
```

**Gestione degli errori e dei rifiuti:** è molto importante gestire gli errori generati nella geolocalizzazione e mostrare un messaggio richiesto quando si verifica un errore. Funzioni come *getCurrentPosition ()* fanno uso di un gestore di errori per gestire l'errore generato (funzione errHand come usato nell'esempio precedente). L'oggetto PositionError utilizzato dal gestore errori ha due proprietà che  consentono alla funzione di gestire l'errore in modo efficiente:

- Codice
- Messaggio

**Errori generati nella geolocalizzazione:**

| Errore               | Descrizione dell'errore                                      |
| -------------------- | ------------------------------------------------------------ |
| UNKNOWN_ERRROR       | Un errore sconosciuto                                        |
| PERMISSION_DENIED    | L'applicazione non dispone dell'autorizzazione per utilizzare i servizi di localizzazione |
| POSITION_UNAVAILABLE | La posizione del dispositivo è incerta                       |
| TIMEOUT              | Il tempo necessario per recuperare le informazioni sulla posizione ha superato l'intervallo massimo di timeout |

**Visualizzazione del risultato in MAP: la** visualizzazione della posizione in una mappa è un'attività molto interessante. Questi servizi utilizzati per fornire la posizione esatta nella mappa.

<script src="https://maps.google.com/maps/api/js?sensor=false">

**Proprietà posizione:** La tabella seguente determina le proprietà utilizzate in *getCurrentPosition ()* e i loro valori di ritorno.

| Properties              | Return Value                                                |
| ----------------------- | ----------------------------------------------------------- |
| coords.latitude         | Always returns latitude as a decimal number                 |
| coords.accuracy         | Always returns accuracy of position                         |
| coords.longitude        | Always returns longitude as a decimal number                |
| coords.altitude         | Returns the altitude in meters above sea level if available |
| coords.altitudeAccuracy | Returns altitude accuracy of position if available          |
| coords.heading          | Returns heading in degree clockwise from North if available |
| coords.speed            | Returns speed in mps if available                           |
| timestamp               | Returns date or time of response if available               |

**Metodi di geolocalizzazione:** La geolocalizzazione ha i seguenti metodi che lo rendono interessante e più facile da lavorare.

| Metodo                 | Descrizione                                                  |
| ---------------------- | ------------------------------------------------------------ |
| *getCurrentPosition()* | recupera la posizione corrente dell'utente                   |
| *watchPosition()*      | recupera aggiornamenti periodici della posizione corrente dell'utente |
| *clearWatch()*         | annulla una chiamata watchPosition attualmente in esecuzione |