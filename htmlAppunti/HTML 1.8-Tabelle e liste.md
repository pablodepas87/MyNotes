# Tabelle e liste

Una tabella HTML è definita con il tag "table". Ogni riga della tabella è definita con il tag "tr". Un'intestazione di tabella è definita con il tag "th". Per impostazione predefinita, le intestazioni della tabella sono in grassetto e centrate. Una tabella dati / cella è definita con il tag "td".

```html
 <table style="width:100%"> 
        <tr> 
            <th>Firstname</th> 
            <th>Lastname</th> 
            <th>Age</th> 
        </tr> 
        <tr> 
            <td>Priya</td> 
            <td>Sharma</td> 
            <td>24</td> 
        </tr> 
        <tr> 
            <td>Arun</td> 
            <td>Singh</td> 
            <td>32</td> 
        </tr> 
        <tr> 
            <td>Sam</td> 
            <td>Watson</td> 
            <td>41</td> 
        </tr> 
    </table> 
```

**Aggiunta di un bordo a una tabella HTML:** un bordo viene impostato utilizzando la proprietà del bordo CSS. Se non si specifica un bordo per la tabella, verrà visualizzato senza bordi.

```
table , th , td {
	border: 1px solid black;	
}
```

il css può essere aggiunto o nel foglio di stile oppure nel tag <style> all’interno del tag <head>

**Aggiunta di bordi compressi in una tabella HTML:** affinché i bordi si comprimano in un bordo, aggiungere la proprietà CSS border-collapse.

```css
table , th , td {
	border: 1px solid black;
    border-collaps:collapse;
}
```

**Aggiunta del riempimento di celle in una tabella HTML: il** riempimento di celle specifica lo spazio tra il contenuto della cella e i suoi bordi. Se non si specifica un riempimento, le celle della  tabella verranno visualizzate senza riempimento.

```css
th , td {
	padding:15px;
}
```

**Aggiunta di intestazioni di allineamento a sinistra in una tabella HTML:** per impostazione predefinita, le intestazioni della tabella sono in grassetto e centrate. Per allineare a sinistra le intestazioni della tabella, dobbiamo usare la proprietà CSS text-align.

```css
th {
	text-align:left;
}
```

**Aggiunta della spaziatura dei bordi in una tabella HTML:** la spaziatura dei bordi specifica lo spazio tra le celle. Per impostare la spaziatura dei bordi per una tabella, dobbiamo usare la proprietà CSS border-spacing.

```css
table {
	border-spacing: 5px;
}
```

**Aggiunta di celle che si** estendono su più **colonne nelle tabelle HTML:** per estendere una cella su più colonne, è necessario utilizzare l'attributo colspan. 

```html
<table style="width:100%"> 
        <tr> 
            <th>Name</th> 
            <th colspan="2">Telephone</th> 
        </tr> 
        ....
 </table>       
```

**Aggiunta di celle che si** estendono su più **righe nelle tabelle HTML:** Per fare in modo che una cella si estenda su più di una riga, dobbiamo usare l'attributo rowspan: 

   

```
<table style="width:100%"> 
        <tr> 
            <th>Name:</th> 
            <td>Vikas Rawat</td> 
        </tr> 
        <tr> 
            <th rowspan="2">Telephone:</th> 
            <td>9125577854</td> 
        </tr> 
        ....
</table>
```

**Aggiunta di una didascalia in una tabella HTML:** per aggiungere una didascalia a una tabella, è necessario utilizzare il tag "didascalia". 

```html
<table style="width:100%"> 
<caption>Details</caption>
```

**Aggiunta di un colore di sfondo a una tabella in HTML:** un colore può essere aggiunto come sfondo nella tabella HTML utilizzando l'opzione "colore di sfondo". 

```css
table {
	background-color: #ff00ff;
}

// se abbiamo invece uno specifico id 
table#t01{
    background-color: #ffff66;
}
```

**Creare tabelle nidificate in HTML:** annidare le tabelle significa semplicemente creare una tabella all'interno di un'altra tabella. Le tabelle di nidificazione possono portare a layout di tabelle complesse, che sono visivamente interessanti e hanno il potenziale di introdurre  errori

```html
<table border=5 bordercolor=black> 
        <tr> 
            <td> 
                Fisrt Column of Outer Table 
            </td> 
              
            <td> 
                <table border=5 bordercolor=grey> 
                    <tr> 
                        <td> 
                            First row of Inner Table 
                        </td> 
                    </tr> 
                    <tr> 
                        <td> 
                            Second row of Inner Table 
                        </td> 
                    </tr> 
                </table> 
            </td> 
        </tr> 
    </table> 
```



## ELENCHI

HTML offre tre modi per specificare elenchi di informazioni. Tutti gli elenchi devono contenere uno o più 
 elementi di elenco .

I tipi di elenchi che possono essere utilizzati in HTML sono:

- **ul:** un elenco non ordinato. Questo elencherà gli elementi usando punti elenco semplici.
- **ol:** un elenco ordinato. Questo utilizzerà diversi schemi di numeri per elencare i tuoi articoli.
- **dl:** un elenco di definizioni. Questo organizza i tuoi articoli nello stesso modo in cui sono disposti in un dizionario.

### UL

Un elenco non ordinato inizia con il tag "ul". Ogni voce di elenco inizia con il tag "li". Le voci di elenco sono  contrassegnate con punti elenco, ovvero piccoli cerchi neri per  impostazione predefinita.

```HTML
<ul> 
  <li>Bread</li> 
  <li>Eggs</li> 
  <li>Milk</li> 
  <li>Coffee</li> 
</ul>   
```

**L'elenco HTML non ordinato ha vari marcatori di elementi di elenco: -**

**Disco:** imposta il marker della voce di elenco su un punto elenco, ovvero predefinito. <``ul` `style``=``"list-style-type:disc"``> 

**Cerchio:** imposta l'indicatore dell'elemento dell'elenco su un cerchio <``ul` `style``=``"list-style-type:circle"``> 

**Quadrato:** imposta l'indicatore dell'elemento dell'elenco su un quadrato.  <``ul` `style``=``"list-style-type:square"``>

### OL

Un elenco ordinato inizia con il tag "ol". Ogni voce dell'elenco inizia con il tag "li". <u>**Le voci dell'elenco sono contrassegnate con numeri**</u> per impostazione predefinita. 

```
<ol> 
  <li>Bread</li> 
  <li>Eggs</li> 
  <li>Milk</li> 
  <li>Coffee</li> 
</ol>
```

**Tipo = "1":** le voci dell'elenco saranno numerate con numeri, ovvero predefiniti. `< ol type="1">` 

**Tipo = "A":** le voci dell'elenco saranno numerate con lettere maiuscole. <``ol` `type``=``"A"``>

**Tipo = "a":** le voci dell'elenco saranno numerate con lettere minuscole. <``ol` `type``=``"a"``>

**Tipo = "I":** le voci dell'elenco saranno numerate con numeri romani maiuscoli. `< ol type="I">` 

**Tipo = "i":** le voci dell'elenco saranno numerate con numeri romani minuscoli. `< ol type="i">` 

### DL

Un elenco di descrizioni è un elenco di termini, con una descrizione di ciascun termine. 
 Il tag <dl> definisce l'elenco delle descrizioni, il tag  <dt> definisce il nome del termine e il tag <dd> descrive  ogni termine

```HTML
<dl> 
  <dt>Coffee</dt> 
  <dd>- 500 gms</dd> 
  <dt>Milk</dt> 
  <dd>- 1 ltr Tetra Pack</dd> 
</dl> 
```

Un elenco nidificato è un elenco che ha un elenco all'interno di un elenco.

```html
<ul> 
  <li>Coffee</li> 
  <li>Tea 
    <ul> 
    <li>Black tea</li> 
    <li>Green tea</li> 
    </ul> 
  </li> 
  <li>Milk</li> 
</ul> 
```

Il tag <tfoot> in HTML viene utilizzato per fornire un gruppo di piè di pagina di contenuto. Questo tag viene utilizzato nella tabella HTML con intestazione e corpo, noti come "thead" e "tbody". Il tag <tfoot> è un tag figlio della tabella e un tag padre di <tr> e <td>.

**Sintassi:**

```
<tfoot> // Contenuto del piè di pagina della tabella ... </tfoot>
```

```html
<table > 
            <thead> 
                <tr> 
                    <th>Name</th> 
                    <th>User Id</th> 
                </tr> 
            </thead> 
            <tbody> 
                <tr> 
                    <td>Ram</td> 
                    <td>@ram_b</td> 
                </tr> 
                <tr> 
                    <td>Shashank</td> 
                    <td>@shashankla</td> 
                </tr> 
                <tr> 
                    <td>Rahman</td> 
                    <td>@rahamD</td> 
                </tr> 
            </tbody> 
              
            <!-- tfoot tag starts from here -->
            <tfoot> 
                <tr> 
                    <td>Total user</td> 
                    <td>4</td> 
                </tr> 
            </tfoot> 
            <!-- tfoot tag ends here -->
 </table> 
```

