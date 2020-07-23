# HTML | Nozioni di base

**HTML è l'** acronimo di Hyper Text Markup Language. Viene utilizzato per progettare pagine Web utilizzando il linguaggio di markup. HTML è la combinazione  del linguaggio Hypertext e Markup. L'ipertesto definisce il collegamento tra le pagine Web. Il linguaggio di markup viene utilizzato per  definire il documento di testo all'interno del tag che definisce la  struttura delle pagine Web. Questo linguaggio viene utilizzato per  annotare (prendere appunti per il computer) del testo in modo che una  macchina possa comprenderlo e manipolarlo di conseguenza. La maggior  parte dei linguaggi di markup (ad es. HTML) sono leggibili dall'uomo.

**Elementi e tag:** HTML utilizza tag ed elementi predefiniti che informano il browser sulla proprietà di visualizzazione del contenuto. Se un tag non viene chiuso, il browser applica tale effetto fino alla fine della pagina 

**Struttura della pagina HTML:** la struttura di base della pagina HTML è riportata di seguito. Contiene alcuni elementi come testa, titolo, corpo, ecc. Questi elementi vengono utilizzati per creare blocchi di pagine Web.

![clicca per ingrandire](https://media.geeksforgeeks.org/wp-content/uploads/Untitled-drawing-1-6.png)

**<! DOCTYPE html>:** questo tag viene utilizzato per indicare la versione HTML. Questo attualmente dice che la versione è HTML 5.

**<html>:** si chiama elemento radice HTML e viene utilizzato per racchiudere tutto il codice.

**<head>: il** tag head contiene metadati, titolo, pagina CSS ecc. Tutti gli elementi  HTML che possono essere utilizzati all'interno dell'elemento  <head> sono:

- <Style>

- <Title>

- <Base>

- <Noscript>

- <Script>

- <Meta>

**<title>:** possiamo menzionare il titolo di una pagina Web usando il tag **<title>** . Queste sono informazioni di intestazione e quindi menzionate nei tag <head> Il tag inizia con **<title>** e termina con **</title>**

**<body>: il** tag body viene usato per racchiudere tutti i dati che una pagina web ha dai testi ai collegamenti. Tutto il contenuto visualizzato nel browser è contenuto in questo elemento.

**Caratteristiche dell'HTML:**

- È facile da imparare e facile da usare.
- È indipendente dalla piattaforma.
- Immagini, video e audio possono essere aggiunti a una pagina Web.
- L'ipertesto può essere aggiunto al testo.
- È un linguaggio di markup.

**Perché imparare l'HTML?**

- È un linguaggio di markup semplice. La sua implementazione è semplice.
- Viene utilizzato per creare un sito Web.
- Aiuta a sviluppare le basi sulla programmazione web.
- Promuovi la carriera professionale.

**vantaggi:**

- HTML viene utilizzato per creare un sito Web.
- È supportato da tutti i browser.
- Può essere integrato con altre lingue come CSS, JavaScript ecc.

**svantaggi:**

- HTML può creare solo pagine Web statiche, quindi per le pagine Web dinamiche devono essere utilizzate altre lingue.
- È necessario scrivere una grande quantità di codice per creare una semplice pagina Web.
- La funzione di sicurezza non è buona.



### **Intestazioni HTML**

Questi tag ci aiutano a fornire titoli al contenuto di una pagina web. Questi tag sono principalmente scritti all'interno del tag body. HTML ci fornisce sei tag di intestazione da **<h1>** a **<h6>** . Ogni tag mostra l'intestazione con uno stile e una dimensione del carattere diversi.

### **Paragrafo HTML**

Questi tag ci aiutano a scrivere le dichiarazioni di paragrafo in una pagina Web. Iniziano con il tag **<p>** e terminano con **</p>** . Qui il tag **<br>** viene utilizzato per interrompere la linea e funge da ritorno a capo. **<br>** è un tag vuoto. 


### **Linee orizzontali HTML**

Il tag **<hr>** viene utilizzato per suddividere la pagina in varie parti, creando  margini orizzontali con l'aiuto di una linea orizzontale che va dal lato sinistro a quello destro della pagina. Anche questo è un tag vuoto e non accetta alcuna dichiarazione aggiuntiva. 

### **Immagini HTML**

Il tag immagine viene utilizzato per inserire un'immagine nella nostra pagina web. La fonte dell'immagine da inserire viene inserita nel **tag <  img src = " \*source_of_image\* ">** . 

**Che cos'è doctype?** 
 Una dichiarazione di tipo di documento o tipo di documento è  un'istruzione che indica al browser Web il linguaggio di markup in cui è scritta la pagina corrente. Doctype non è un elemento o un tag, ma consente al browser di conoscere la  versione o lo standard di HTML o di qualsiasi altro linguaggio di markup utilizzato nel documento.

**Dichiarazione di un tipo di documento** : una dichiarazione DOCTYPE appare nella parte superiore di una pagina Web prima di tutti gli altri elementi. In base alle specifiche o agli standard HTML, ogni documento HTML richiede una dichiarazione del tipo di documento per garantire che le pagine  vengano visualizzate nel modo in cui devono essere visualizzate.

DOCTYPE per HTML5 non distingue tra maiuscole e minuscole e può essere scritto come mostrato di seguito:

Di seguito è riportato l'elenco di alcune dichiarazioni doctype comuni per la versione differenet di HTML e XHTML:

1. **HTML 5**                                                          

   `<!DOCTYPE html> `

2. **HTML 4.01** Rigido   In HTML 4.01 Definizione del tipo di documento rigoroso (DTD) sono  inclusi tutti quegli elementi e attributi che non compaiono nei  documenti del set di frame o che non sono stati deprecati.                                           

   `<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" ` `  ``"http://www.w3.org/TR/html4/strict.dtd"> `

3. **HTML 4.01** Transizionale   In HTML 4.01 La definizione del tipo di documento transitorio (DTD)  consente alcuni PUBBLICI e attributi obsoleti che sono stati deprecati.                                                       

   `<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" ` `  ``"http://www.w3.org/TR/html4/loose.dtd"> `

4. Set di   frame **HTML 4.01** Nella definizione del tipo di documento (DTD) HTML 4.01, è possibile utilizzare i frame.                                                          

   `<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Frameset//EN" ` `  ``"http://www.w3.org/TR/html4/frameset.dtd"> `

5. **XHTML 1.0** Strict  Nella definizione del tipo di documento XHTML 1.0 Strict (DTD), i tag  obsoleti non sono supportati e il codice deve essere scritto in base  alle specifiche XML.

   `<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" ` `"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"> `

6. **XHTML 1.0 Transitional**  In XHTML 1.0 Transitional type  definition (DTD), sono consentiti elementi obsoleti.

   `<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" ` `"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd"> `

7. Set di   frame **XHTML 1.0** Nella definizione del tipo di documento XHTML 1.0 Frameset (DTD), è possibile utilizzare i set di frame.      

   `<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Frameset//EN" ` `"http://www.w3.org/TR/xhtml1/DTD/xhtml1-frameset.dtd"> `

8. **XHTML 1.1**   Nella definizione del tipo di documento XHTML 1.1 (DTD), consente l'aggiunta di moduli.

   ​                                  

   `<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" ` `"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd"> `

## File path

Un percorso di file specifica la posizione di un file all'interno di una struttura di cartelle Web. È come un indirizzo di un file che aiuta il browser Web ad accedere ai file. I percorsi dei file vengono utilizzati per collegare risorse esterne come immagini, video, fogli di stile, JavaScript, visualizzazione di altre  pagine Web ecc.

I percorsi dei file sono di due tipi:

- Percorsi di file assoluti
- Percorsi di file relativi

**Percorsi file assoluti:** descrive l'indirizzo completo (URL) per accedere a un file Internet.

> <img src = "https://media.geeksforgeeks.org/wp-content/geek.png" alt = "La mia immagine">

**Percorso file relativo:** descrive il percorso del file relativo alla posizione del file della pagina Web corrente. 

 <img src="images/geeks.jpg" alt="My Image" style="width:400px"> 

 <img src="../images/geeks.jpg" alt="My Image" style="width:400px"> 

<img src="/images/picture.jpg" alt="My Image" style="width:400px"> 

## Url encoding

lista codifica caratteri speciali per url [qui](https://www.geeksforgeeks.org/html-url-encoding/?ref=lbp)

# Entities

HTML fornisce alcuni metodi per visualizzare i caratteri riservati. I caratteri riservati sono quei caratteri che sono riservati per HTML o quelli che non sono presenti nella tastiera di base. 

**Ad esempio:** "<" è già riservato in linguaggio HTML. A volte questo personaggio deve essere visualizzato sulla pagina Web che crea ambiguità nel codice. Insieme a questi sono i caratteri che normalmente non sono presenti nella tastiera di base (£, ¥, €, ©) ecc. 
 HTML fornisce un nome di entità e un numero di entità per utilizzare questi simboli. Il numero di entità è facile da imparare. Alcuni simboli utili con il nome dell'entità e i numeri dell'entità sono i seguenti.

link alla tabella con i vari caratteri e il rispettivo codice [qui](https://www.geeksforgeeks.org/html-entities/?ref=lbp)

