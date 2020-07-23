# HTML LAYOUT

Il layout di pagina è la parte della progettazione grafica che si occupa  della disposizione degli elementi visivi su una pagina. Il layout di pagina viene utilizzato per migliorare l'aspetto delle pagine Web.

Stabilisce l'aspetto generale, l'importanza relativa e le relazioni tra gli  elementi grafici per ottenere un flusso regolare di informazioni e  movimenti oculari per la massima efficacia o impatto.

![](https://media.geeksforgeeks.org/wp-content/uploads/layout.png)

**Intestazione:** la parte di un front-end utilizzata nella parte superiore della pagina. Il tag <header> viene utilizzato per aggiungere la sezione dell'intestazione nelle pagine Web.

**Barra di navigazione:** la barra di navigazione è uguale all'elenco dei menu. Viene utilizzato per visualizzare le informazioni sul contenuto tramite collegamento ipertestuale.

**Index / Sidebar:** contiene informazioni aggiuntive o annunci pubblicitari e non è sempre necessario aggiungerli alla pagina.

**Sezione contenuto:** la sezione contenuto è la parte principale in cui viene visualizzato il contenuto.

**Piè di pagina:** la sezione del piè di pagina contiene le informazioni di contatto e altre query relative alle pagine Web. La sezione del piè di pagina si trova sempre nella parte inferiore delle pagine Web. Il tag <footer> viene utilizzato per impostare il piè di pagina nelle pagine Web.

```HTML
<!DOCTYPE html> 
<html> 
<head> 
    <title>Page Layout</title> 
    <style> 
        .head1 { 
            font-size:40px; 
            color:#009900; 
            font-weight:bold; 
        } 
        .head2 { 
            font-size:17px; 
            margin-left:10px; 
            margin-bottom:15px; 
        } 
        body { 
            margin: 0 auto; 
            background-position:center; 
            background-size: contain; 
        } 
      
        .menu {    
            position: sticky; 
            top: 0; 
            background-color: #009900; 
            padding:10px 0px 10px 0px; 
            color:white; 
            margin: 0 auto; 
            overflow: hidden; 
        } 
        .menu a { 
            float: left; 
            color: white; 
            text-align: center; 
            padding: 14px 16px; 
            text-decoration: none; 
            font-size: 20px; 
        } 
        .menu-log { 
            right: auto; 
            float: right; 
        } 
        footer { 
            width: 100%; 
            bottom: 0px; 
            background-color: #000; 
            color: #fff; 
            position: absolute; 
            padding-top:20px; 
            padding-bottom:50px; 
            text-align:center; 
            font-size:30px; 
            font-weight:bold; 
        } 
        .body_sec { 
            margin-left:20px; 
        } 
    </style> 
</head> 
  
<body> 
      
    <!-- Header Section -->
    <header> 
        <div class="head1">GeeksforGeeks</div> 
        <div class="head2">A computer science portal for geeks</div> 
    </header> 
      
    <!-- Menu Navigation Bar -->
    <div class="menu"> 
        <a href="#home">HOME</a> 
        <a href="#news">NEWS</a> 
        <a href="#notification">NOTIFICATIONS</a> 
        <div class="menu-log"> 
            <a href="#login">LOGIN</a> 
        </div> 
    </div> 
      
    <!-- Body section -->
    <div class = "body_sec"> 
        <section id="Content"> 
            <h3>Content section</h3> 
        </section> 
    </div> 
      
    <!-- Footer Section -->
    <footer>Footer Section</footer> 
</body> 
</html>             
```

