## HTML DOM Attribute Object:

## DOM getNamedItem ()

Il metodo DOM **getNamedItem ()** in HTML viene utilizzato per restituire il nodo dell'attributo dall'oggetto NamedNodeMap.

**Sintassi:**

```
namednodemap.getNamedItem (nodename)
```

**Valore parametro:** questo metodo contiene un singolo nome *nodo* che è obbligatorio. Il nome nodo viene ritirato dall'oggetto NamedNodeMap.    

```html
  ....
   <script> 
            /* main function */ 
            function MyGeeks() { 
                var ele = document.getElementsByTagName("button")[0]; 
                var item = ele.attributes.getNamedItem("onclick").value;  
                document.getElementById("geeks").innerHTML = item; 
            } 
   </script>
   ....
   
    <body style = "text-align:center"> 
        <p> 
            Click on the button to know the 
            value of onclick attribute 
        </p> 
        <button onclick = "MyGeeks()"> 
            Click Here! 
        </button> 
        <p id="geeks"></p> 
   </body> 
```

# DOM isId Property

La **proprietà isId** contiene un valore booleano che restituisce un vero se l'elemento ha un tipo di attributo di ID, altrimenti restituisce un valore falso o  indefinito. Questa proprietà è utilizzata per la sola lettura.  

**Sintassi:**

```
attribute.isId 
```

**Valore di ritorno:** restituisce un valore booleano, vale a dire vero se il tipo di attributo è ID, altrimenti restituisce un falso.

```
<p id="sudo"></p> 
<script> 
            function geeks() { 
                var x = document.getElementById("sudo"); 
                x.innerHTML = x.attributes[0].isId; 
            } 
</script> 
```

non è supportato dai browser

## Metodo DOM item ()

l metodo item () viene utilizzato per restituire il nodo all'indice specificato. I nodi sono ordinati come appaiono nel codice sorgente. L'indice dell'elenco dei nodi inizia con 0.

**Sintassi:**

```
nodelist.item (indice)
```

o

```
nodelist [indice] 
```

**Parametri:** questo metodo accetta l' *indice di un* singolo parametro che viene utilizzato per contenere l'indice del nodo che deve essere restituito. È richiesto il parametro e l'indice inizia con 0.

**Valore restituito:** questo metodo restituisce il nodo all'indice specificato.

```html
 <div id="geeks"> 
            <h1 style="color:green;">GeeksforGeeks</h1> 
            <p>A computer science portal</p> 
            <p>DOM item() Method</p> 
 </div>
 ....
 <script> 
        function changeElement() { 
            var gfg = document.getElementById("geeks"); 
  
            gfg.getElementsByTagName("P")[1].innerHTML =  
                             "Welcome to GeeksforGeeks!"; 
        } 
 </script> 
```

## Proprietà lunghezza DOM

La **proprietà lunghezza DOM** in HTML viene utilizzata per ottenere il numero di elementi in un oggetto NodeList. Una NodeList è una raccolta di nodi figlio. Ad esempio, la NodeList di body conterrà tutti i nodi figlio nel body, ad esempio paragrafo, commenti, titoli, script ecc.

**Sintassi:**

```
nodelist.value
```

```
function geeksFunction() {  
                  
                var node_list = document.body.childNodes; 
                var elements = ""; 
                var i; 
                for (i = 0; i < node_list.length; i++) { 
                    elements = elements + node_list[i].nodeName 
                    + "    "; 
                } 
                  
                elements = elements + "<br> Length: "  
                + document.body.childNodes.length; 
                document.getElementById("demo").innerHTML = elements; 
            } 
```

## DOM removeNamedItem ()

Il metodo **removeNamedItem ()** in HTML viene utilizzato per rimuovere il nodo con il nome specificato in un oggetto namednode.

**Sintassi:**

```
namednode.removeNamedItem (nodename)
```

**Parametro:** Il **removeNamedItem ()** conatain solo parametro **nomenodo** che è descritto qui di seguito.

- **nodename:** questo metodo accetta un singolo parametro *nodename* che è obbligatorio. Si riferisce al nome del nodo nel nome nodo che deve essere rimosso.

```html
<script> 
            function myFunction() { 
                var button =  
                    document.getElementsByTagName("INPUT")[0]; 
                button.attributes.removeNamedItem("type"); 
            } 
 </script>
 .....
 <input type="button" value="Change It!"> 
          
 <!-- removeNamedItem() method used here -->
 <button onclick="myFunction()"> Click Here!  </button> 
```

## DOM setNamedItem ()

Il metodo **setNamedItem ()** viene utilizzato per aggiungere un nodo particolare a un nodo di attributo usando il suo nome. Questi nodi di attributo vengono chiamati collettivamente come namedNapMap. È possibile accedervi tramite un nome. Se un documento è già presente nel documento, lo sostituirà e restituirà il valore aggiornato. Il metodo **setNamedItem ()** richiede un nodo come parametro.

**Sintassi:**

```
namedNodeMap.setNamedItem (nodo)
```

**Valore parametro:** questo metodo contiene un singolo *nodo* parametro che è obbligatorio. Questo parametro è il valore del nodo che deve essere aggiunto o sostituito nella raccolta namedNapMap.

```html
<script> 
            function setNameItem() { 
                  
                // It is used to fetch the text 
                // present in class geeks1 
                var one =  
                    document.getElementsByClassName("geeks1")[0];  
                  
                // New class (geek) is created 
                var geek = document.createAttribute("class");  
                  
                // Passing value of gfg class into geek class 
                geek.value = "gfg";                                  
                  
                // Updating the CSS property of geeks1 
                // class to gfg class 
                one.attributes.setNamedItem(geek);                      
            } 
  </script> 
```

## Proprietà specificata dal DOM

La **proprietà specificata DOM** viene utilizzata per restituire il valore booleano. Restituisce vero se l'elemento ha un attributo specificato, altrimenti restituisce  un valore falso se l'elemento non ha un attributo specifico.

**Sintassi:**

```
attribute.specified
```

**Valore restituito:** restituisce il valore booleano che rappresenta l'attributo specifico è collegato a un elemento o meno.

```html
<script> 
                function Geeks() { 
                    var x =  
                        document.getElementsByTagName("P")[0]; 
                    var w =  
                        x.getAttributeNode("ID").specified; 
                    document.getElementById("sudo").innerHTML = 
                        w; 
                } 
            </script> 
```

## DOM value Property

La **proprietà del valore DOM** in HTML viene utilizzata per impostare o restituire il valore di qualsiasi attributo.

**Sintassi:**

- Restituisce il valore dell'attributo.

  ```
  attribute.value
  ```

- Viene utilizzato per impostare un valore per la proprietà.

  ```
  attribute.value = value
  ```

```html
   <script> 
            function myFunction() { 
                var x = document.getElementsByTagName("IMG")[0]; 
                x.getAttributeNode("src").value =  
"https://media.geeksforgeeks.org/wp-content/uploads/icon1.png"; 
            } 
   </script> 
```

