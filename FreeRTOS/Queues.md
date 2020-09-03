# Queues 

Le code sono la forma principale di comunicazioni tra task. Possono essere utilizzati per inviare messaggi tra attività e tra interrupt e task. Nella maggior parte dei casi vengono utilizzati come buffer FIFO (First In  First Out) thread-safe con i nuovi dati inviati in fondo alla coda,  sebbene i dati possano anche essere inviati in primo piano.

![](https://www.freertos.org/wp-content/uploads/2018/07/queue_animation.gif)

## Modello utente: massima semplicità, massima flessibilità. . .

Il modello di utilizzo della coda di FreeRTOS riesce a combinare  semplicità e flessibilità, attributi che normalmente si escludono a  vicenda. I messaggi  vengono inviati tramite le code per copia, il che significa che i dati  (che possono essere un puntatore a buffer più grandi) vengono copiati  nella coda anziché nella coda che archivia sempre solo un riferimento ai dati. Questo è l'approccio migliore perché:

1. I piccoli messaggi che sono già contenuti nelle variabili C (numeri  interi, piccole strutture, ecc.) Possono essere inviati direttamente in  una coda. Non è necessario allocare un buffer per il messaggio e quindi copiare la variabile nel buffer allocato. Allo stesso modo, i messaggi possono essere letti dalle code direttamente nelle variabili C.Inoltre, l'invio a una coda in questo modo consente all'attività di  invio di sovrascrivere immediatamente la variabile o il buffer che è  stato inviato alla coda, anche quando il messaggio inviato rimane nella  coda. Poiché i dati contenuti nella variabile sono stati copiati nella  coda, la variabile stessa è disponibile per il riutilizzo. Non è  necessario che l'attività che invia il messaggio e l'attività che riceve il messaggio concordino quale attività possiede il messaggio e quale  attività è responsabile della liberazione del messaggio quando non è più necessaria. 	

2. L'utilizzo di code che passano i dati per copia non impedisce che le  code vengano utilizzate per passare i dati per riferimento. Quando la dimensione di un messaggio raggiunge un punto in cui non è pratico  copiare l'intero messaggio nella coda byte per byte, definire la coda  per contenere i puntatori e copiare invece solo un puntatore al  messaggio nella coda. Questo è esattamente il modo in cui l' implementazione di [FreeRTOS + UDP] passa ampi buffer di rete attorno allo stack IP di FreeRTOS.

3. 

   