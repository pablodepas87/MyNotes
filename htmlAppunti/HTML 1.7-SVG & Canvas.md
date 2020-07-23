# HTML SVG VS CANVAS

**Che cos'è SVG?**

- SVG è l'acronimo di Scalable Vector Graphics.
- Definisce fondamentalmente la grafica vettoriale in formato XML.
- La grafica SVG NON perde qualità se viene ingrandita o ridimensionata.
- Ogni elemento e ogni attributo nei file SVG possono essere animati.

**Quali sono i vantaggi di SVG?** 
 I vantaggi dell'utilizzo di SVG su altri formati di immagine (come JPEG e GIF) sono:

- Le immagini SVG possono essere create e modificate con qualsiasi editor di testo.
- Le immagini SVG possono essere cercate, indicizzate, gestite da script e compresse.
- Le immagini SVG sono scalabili.
- Le immagini SVG possono essere stampate con alta qualità a qualsiasi risoluzione.

**Differenze tra HTML SVG e HTML Canvas**

1. SVG è un linguaggio per descrivere la grafica 2D in XML mentre Canvas disegna la grafica 2D, al volo con un JavaScript.
2. Se gli attributi di un oggetto SVG vengono modificati, il browser può  ridistribuire automaticamente la forma mentre Canvas viene renderizzato  pixel per pixel. In canvas, una volta che la grafica viene disegnata,  viene dimenticata dal browser.
3. SVG è indipendente dalla risoluzione mentre CANVAS dipende dalla risoluzione.
4. SVG supporta i gestori di eventi mentre CANVAS non ha un supporto per i gestori di eventi.

```html
Disegnare un cerchio SVG in HTML

<svg width="200" height="200"> 
  <circle cx="80" cy="80" r="50"
  stroke="black" stroke-width="2" fill="grey" /> 
</svg> 
```

Come si nota si impostano la dimensione dell’immagine svg e al suo interno si vanno a definire degli elementi

SVG has some predefined shape elements that can be used by developers:

- Rectangle <rect>
- Circle <circle>
- Ellipse <ellipse>
- Line <line>
- Polyline <polyline>
- Polygon <polygon>
- Path <path>

per un tutorial approfondito cliccare [qui]()

## Canvas

**Che cos'è HTML Canvas?** 
 L'elemento HTML "canvas" viene utilizzato per disegnare elementi grafici tramite JavaScript. L'elemento "canvas" è solo un contenitore per i  grafici. È necessario utilizzare JavaScript per disegnare effettivamente i grafici. Canvas ha diversi metodi per disegnare tracciati, caselle,  cerchi, testo, e l'aggiunta di immagini.

**Disegnare Un Cerchio**

```html
<canvas id="myCanvas" width="400" height="200 style
="border:2px solid #d3d3d3;"> 

<script> 
var c = document.getElementById("myCanvas"); 
var ctx = c.getContext("2d"); 
ctx.beginPath(); 
ctx.arc(200,100,50,0,2*Math.PI); 
ctx.stroke(); 
</script>
```

si prende l’id dell’elemento canvas e tramite uno script si disegna.

per approfondire i vari elementi cliccare [qui](https://www.w3schools.com/graphics/canvas_reference.asp)