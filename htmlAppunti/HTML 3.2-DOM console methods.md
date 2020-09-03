# DOM CONSOLE METHODS

## console.assert()

Il metodo **console.assert ()** in HTML viene utilizzato per scrivere un messaggio per l'utente sulla console solo se l'espressione è falsa. L'espressione e il messaggio vengono inviati come parametri al metodo console.assert ().

**Sintassi:**

```
console.assert (espressione, messaggio)
```

**Parametri:** questo metodo accetta due parametri come indicato sopra e descritto di seguito:

- **espressione:** è un'espressione booleana che indica il messaggio o l'oggetto da scrivere sulla console. È richiesto il parametro.
- **messaggio:** è una stringa o un oggetto che indica il messaggio o l'oggetto da scrivere sulla console. È richiesto il parametro.

```html
 <body> 
        <h1>GeeksforGeeks</h1>  
        <h2>DOM console.assert() Method</h2>  
        <p>To view the message in the console press the F12 
        key on your keyboard.</p> 
        <script> 
            console.assert(document.getElementById("MyElement"),  
            "There is no element with the ID 'MyElement'"); 
        </script> 
 </body>       
```

## console.clear()

Il metodo **console.clear ()** in HTML viene utilizzato per cancellare la console e scrive un  messaggio "Console cancellata" sulla console ogni volta che viene  eseguita. Questo metodo non richiede alcun parametro.

**Sintassi:**

```
console.clear ()
```

```html
...
<button ondblclick="clear_console()"> 
           Clear Console 
 </button> 
 <script> 
            console.log("GeeksforGeeks is a portal for geeks!"); 
            function clear_console() { 
                console.clear(); 
            } 
 </script>
  .....      
```

## console.count()

Il metodo **console.count ()** in HTML viene utilizzato per scrivere il numero di volte in cui viene chiamato il metodo **console.count ()** . Il metodo **console.count ()** può essere aggiunto a un'etichetta che verrà inclusa nella vista console. L'etichetta è un parametro facoltativo inviato al metodo console.count ().

**Sintassi:**

```
console.count (etichetta)
```

**Parametri:** questo metodo accetta *un'etichetta a* singolo parametro che è facoltativa e utilizzata per contare il numero di volte in cui console.count () è stata chiamata con questa etichetta.

```html
<script> 
            function count_console() { 
                for (i = 0; i < 10; i++) { 
                    console.count(); 
                } 
            } 
</script> 
```

## console.error()

Il metodo **console.error ()** in HTML viene utilizzato per visualizzare un messaggio di errore sulla console. Il metodo **console.error ()** viene utilizzato a scopo di test. Il messaggio di errore viene inviato come parametro al metodo **console.error ()** .

**Sintassi:**

```
console.error (messaggio)
```

**Parametri:** questo metodo accetta un *messaggio a* parametro singolo che è obbligatorio e utilizzato per contenere il messaggio di errore.

```html
...
<button ondblclick="error_console()"> 
           Check Errors 
        </button> 
        <script> 
            function error_console() { 
                console.error("A mistake has been encountered."); 
            } 
         </script> 
....
```

## console.group()

Il metodo **console.group ()** in HTML viene utilizzato per creare un gruppo di messaggi nella console. Indica l'inizio di un gruppo di messaggi e tutti i messaggi scritti dopo aver chiamato il metodo **console.group ()** scriveranno all'interno del gruppo di messaggi. L'etichetta viene inviata come parametro facoltativo al metodo console.group ().

**Sintassi:**

```
console.group (etichetta)
```

**Parametri:** questo metodo accetta *un'etichetta a* parametro singolo che è facoltativa e utilizzata per specificare l'etichetta per il gruppo.

```html
 <p> 
         To view the message in the console 
         press the F12 key on your keyboard. 
        </p> 
        <script> 
            console.log("GeeksforGeeks offers the following courses :"); 
            console.group(); 
            console.log("1. fork python"); 
            console.log("2. fork cpp"); 
            console.log("3. fork java"); 
            console.log("4. Interview preparation"); 
        </script> 
```

## group.collapsed()

Il metodo **console.groupCollapsed ()** in HTML viene utilizzato per creare un gruppo compresso di messaggi nella console. Indica l'inizio di un gruppo di messaggi compresso e tutti i messaggi scritti dopo aver chiamato il metodo **console.groupCollapsed ()** scriveranno all'interno del gruppo di messaggi. L'etichetta viene inviata come parametro facoltativo al metodo console.groupCollapsed ().

**Sintassi:**

```
console.groupCollapsed (etichetta)
```

**Parametri:** questo metodo accetta *un'etichetta a* singolo parametro che è facoltativa e utilizzata per specificare l'etichetta per il gruppo compresso.

```html
 <script> 
            console.log("GeeksforGeeks offers the following courses :"); 
            console.group("Courses"); 
            console.log("1. fork python"); 
            console.log("2. fork cpp"); 
            console.log("3. fork java"); 
            console.log("4. Interview preparation"); 
            console.groupCollapsed(); 
            console.log("GeeksforGeeks offers tutorials on the" + 
            "following data structures :"); 
            console.log("1. Array"); 
            console.log("2. Linked List"); 
            console.log("3. Stack"); 
            console.log("4. Queue"); 
            console.groupEnd(); 
        </script> 
```

## console.groupEnd()

Il metodo **console.groupEnd ()** in HTML viene utilizzato per indicare la fine di un gruppo di messaggi  nella console che è stato creato utilizzando il metodo console.group (). Questo metodo non accetta alcun parametro.

**Sintassi:**

```
console.groupEnd ()
```

```html
<script> 
            console.log 
            ("GeeksforGeeks offers the following courses:"); 
            console.group("Courses"); 
            console.log("1. fork python"); 
            console.log("2. fork cpp"); 
            console.log("3. fork java"); 
            console.log("4. Interview preparation"); 
            console.groupEnd(); 
  </script> 
```

## console.info()

Il metodo **console.info ()** in HTML viene utilizzato per scrivere un messaggio nella console. Indica un messaggio importante su qualsiasi elemento o oggetto. Il messaggio viene inviato come parametro al **metodo console.info ()** .

**Sintassi:**

```
console.info (messaggio)
```

**Parametri:** questo metodo accetta un *messaggio a* parametro singolo che è obbligatorio e utilizzato per specificare le informazioni da scrivere sulla console.

## console.log()

Il metodo **console.log ()** in HTML viene utilizzato per scrivere un messaggio nella console. Indica un messaggio importante durante il test di qualsiasi programma. Il messaggio viene inviato come parametro al **metodo console.log ()** .

**Sintassi:**

```
console.log (messaggio)
```

**Parametri:** questo metodo accetta un *messaggio a* parametro singolo che è obbligatorio e utilizzato per specificare le informazioni da scrivere sulla console.

## console.table()

Il metodo **console.table ()** in HTML viene utilizzato per scrivere dati in forma tabulare nella vista console. I dati della tabella vengono inviati come parametro al metodo **console.table ()** che deve essere un oggetto o una matrice contenente i dati da compilare nella tabella.

**Sintassi:**

```
console.table (tabledata, tablecolumns);
```

**Parametri:** questo metodo accetta due parametri come indicato sopra e descritto di seguito:

- **tabledata:** è un parametro obbligatorio che specifica le informazioni da scrivere nella tabella.
- **tablecolumns:** è un parametro facoltativo che specifica i nomi delle colonne incluse nella tabella.

```
...
<button ondblclick="table_console()"> 
      View Table 
    </button> 
    <script> 
        function table_console() { 
            console.log 
                ("GeeksforGeeks offers the following courses :"); 
            console.table 
                ["fork python", "fork cpp", "fork java"]); 
        } 
    </script> 
  ...  
```

## console.time()

Il metodo **console.time ()** in HTML viene utilizzato per avviare un timer nella vista console. Il metodo **console.time ()** può essere utilizzato per calcolare il tempo dei programmi per vari scopi di test. L'etichetta viene inviata come parametro al **metodo console.time ()** .

**Sintassi:**

```
console.time (etichetta)
```

**Parametri:** questo metodo accetta l' *etichetta di un* singolo parametro che è facoltativa e utilizzata per specificare l'etichetta del timer.

```html
<button ondblclick="table_time()"> 
      RUN TIMER 
    </button> 
    <script> 
        function table_time() { 
            console.time(); 
            for (i = 0; i < 100; i++) { 
                // Random code 
            } 
            console.timeEnd(); 
        } 
    </script> 
```

## console.trace()

Questo metodo **console.trace ()** viene utilizzato per visualizzare la traccia che rappresenta come il codice è finito a un certo punto.

**Sintassi:**

```
console.trace (etichetta)
```

**Parametri:** questo metodo accetta l'etichetta di un singolo parametro.

```html
<button onclick="Function()">Start Trace</button> 
        <script> 
            function Function() { 
              OtherFunction(); 
            } 
            function OtherFunction() { 
              console.trace(); 
            } 
        </script> 
```

## console.warn()

Il metodo **console.warn ()** viene utilizzato per scrivere un messaggio di avviso nella console. Quindi aprire la console per visualizzare l'output (messaggio di avviso).

**Sintassi:**

```
console.warn (messaggio)
```

**Parametri:** questo metodo accetta un *messaggio a* parametro singolo che è obbligatorio. Questo parametro viene utilizzato per contenere il messaggio di avviso.

```html
<script> 
        console.warn 
            ("This is a warning message for geeksforgeeks!"); 
</script> 
....
<script> 
        var Arr = ["Algorithm", "GeeksforGeeks", "Geeks"]; 
        console.warn(Arr); 
</script> 
```

