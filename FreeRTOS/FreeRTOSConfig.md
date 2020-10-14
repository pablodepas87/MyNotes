# FreeRTOSConfig.h

FreeRTOS è personalizzato utilizzando un file di configurazione chiamato FreeRTOSConfig.h. Ogni applicazione FreeRTOS deve avere un file di intestazione FreeRTOSConfig.h nel percorso di inclusione del pre-processore. FreeRTOSConfig.h adatta il kernel RTOS all'applicazione in costruzione. È quindi specifico dell'applicazione, non dell'RTOS, e dovrebbe trovarsi  in una directory dell'applicazione, non in una delle directory del  codice sorgente del kernel RTOS.

Ogni applicazione demo inclusa nel download del codice sorgente RTOS ha il proprio file FreeRTOSConfig.h. Alcune delle demo sono piuttosto vecchie e non contengono tutte le opzioni di configurazione disponibili. Le opzioni di configurazione omesse vengono impostate su un valore predefinito all'interno di un file sorgente RTOS.

Ecco una tipica definizione di FreeRTOSConfig.h, seguita da una spiegazione di ogni parametro:

```c
#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/ * Questo è un buon posto per includere i file di intestazione richiesti in
la tua applicazione. * /
#include "something.h"

#define configUSE_PREEMPTION                     1
#define configUSE_PORT_OPTIMISED_TASK_SELECTION  0
#define configUSE_TICKLESS_IDLE                  0
#define configCPU_CLOCK_HZ                       60000000
#define configSYSTICK_CLOCK_HZ                   1000000
#define configTICK_RATE_HZ                       250
#define configMAX_PRIORITIES                     5
#define configMINIMAL_STACK_SIZE                 128
#define configMAX_TASK_NAME_LEN                  16
#define configUSE_16_BIT_TICKS                   0
#define configIDLE_SHOULD_YIELD                  1
#define configUSE_TASK_NOTIFICATIONS             1
#define configTASK_NOTIFICATION_ARRAY_ENTRIES    3
#define configUSE_MUTEXES                        0
#define configUSE_RECURSIVE_MUTEXES              0
#define configUSE_COUNTING_SEMAPHORES            0
#define configUSE_ALTERNATIVE_API                0 / * Deprecato! * / 
#define configQUEUE_REGISTRY_SIZE                10
#define configUSE_QUEUE_SETS                     0
#define configUSE_TIME_SLICING                   0
#define configUSE_NEWLIB_REENTRANT               0
#define configENABLE_BACKWARD_COMPATIBILITY      0
#define configNUM_THREAD_LOCAL_STORAGE_POINTERS 5
#define configSTACK_DEPTH_TYPE                   uint16_t
#define configMESSAGE_BUFFER_LENGTH_TYPE         size_t

/ * Definizioni relative all'allocazione della memoria. * / 
#define configSUPPORT_STATIC_ALLOCATION          1
#define configSUPPORT_DYNAMIC_ALLOCATION         1
#define configTOTAL_HEAP_SIZE                    10240
#define configAPPLICATION_ALLOCATED_HEAP         1

/ * Definizioni relative alla funzione Hook. * / 
#define configUSE_IDLE_HOOK                      0
#define configUSE_TICK_HOOK                      0
#define configCHECK_FOR_STACK_OVERFLOW           0
#define configUSE_MALLOC_FAILED_HOOK             0
#define configUSE_DAEMON_TASK_STARTUP_HOOK       0

/ * Statistiche di esecuzione e attività che raccolgono definizioni correlate. * / 
#define configGENERATE_RUN_TIME_STATS            0
#define configUSE_TRACE_FACILITY                 0
#define configUSE_STATS_FORMATTING_FUNCTIONS     0

/ * Definizioni correlate alla co-routine. * / 
#define configUSE_CO_ROUTINES                    0
#define configMAX_CO_ROUTINE_PRIORITIES          1

/ * Definizioni relative al timer software. * / 
#define configUSE_TIMERS                         1
#define configTIMER_TASK_PRIORITY                3
#define configTIMER_QUEUE_LENGTH                 10
#define configTIMER_TASK_STACK_DEPTH             configMINIMAL_STACK_SIZE

/ * Interrompere la configurazione del comportamento di annidamento. * / 
#define configKERNEL_INTERRUPT_PRIORITY          [dipendente dal processore] 
#define configMAX_SYSCALL_INTERRUPT_PRIORITY     [dipendente dal processore e dall'applicazione] 
#define configMAX_API_CALL_INTERRUPT_PRIORITY    [dipendente dal processore e dall'applicazione]

/ * Definisce per intercettare gli errori durante lo sviluppo. * / 
#define configASSERT ((x)) if ((x) == 0)vAssertCalled(__FILE__, __LINE__)

/ * Definizioni specifiche di FreeRTOS MPU. * / 
#define configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS 0
#define configTOTAL_MPU_REGIONS                                 8 / * Valore predefinito. * / 
#define configTEX_S_C_B_FLASH                                   0x07UL / * Valore predefinito. * / 
#define configTEX_S_C_B_SRAM                                    0x07UL / * Valore predefinito. * / 
#define configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY             1

/ * Funzioni opzionali: la maggior parte dei linker rimuoverà comunque le funzioni inutilizzate. * / 
#define INCLUDE_vTaskPrioritySet                 1
#define INCLUDE_uxTaskPriorityGet                1
#define INCLUDE_vTaskDelete                      1
#define INCLUDE_vTaskSuspend                     1
#define INCLUDE_xResumeFromISR                   1
#define INCLUDE_vTaskDelayUntil                  1
#define INCLUDE_vTaskDelay                       1
#define INCLUDE_xTaskGetSchedulerState           1
#define INCLUDE_xTaskGetCurrentTaskHandle        1
#define INCLUDE_uxTaskGetStackHighWaterMark      0
#define INCLUDE_xTaskGetIdleTaskHandle           0
#define INCLUDE_eTaskGetState                    0
#define INCLUDE_xEventGroupSetBitFromISR         1
#define INCLUDE_xTimerPendFunctionCall           0
#define INCLUDE_xTaskAbortDelay                  0
#define INCLUDE_xTaskGetHandle                   0
#define INCLUDE_xTaskResumeFromISR               1

/ * Un file di intestazione che definisce la macro di traccia può essere incluso qui. * /

#endif / * FREERTOS_CONFIG_H * /

```

# Parametri "config"

configUSE_PREEMPTION 

Impostare su 1 per utilizzare lo scheduler RTOS preventivo o 0 per utilizzare lo scheduler RTOS cooperativo.

configUSE_PORT_OPTIMISED_TASK_SELECTION 

Alcune porte FreeRTOS hanno due metodi per selezionare l'attività  successiva da eseguire: un metodo generico e un metodo specifico per  quella porta.

 Il metodo generico:

* Viene utilizzato quando configUSE_PORT_OPTIMISED_TASK_SELECTION è  impostato su 0 o quando non è implementato un metodo specifico della  porta.
* Può essere utilizzato con tutte le porte FreeRTOS.
* È completamente scritto in C, rendendolo meno efficiente di un metodo specifico per la porta. 
* Non impone un limite al numero massimo di priorità disponibili. 

Un metodo specifico per la porta: 

* Non è disponibile per tutte le porte. 
* Viene utilizzato quando configUSE_PORT_OPTIMISED_TASK_SELECTION è impostato su 1.
* Si basa su una o più istruzioni di assemblaggio specifiche  dell'architettura (tipicamente un Count Leading Zeros [CLZ] o  un'istruzione equivalente), quindi può essere utilizzato solo con  l'architettura per la quale è stato specificamente scritto.
* È più efficiente del metodo generico. 
* In genere impone un limite di 32 al numero massimo di priorità disponibili. 

configUSE_TICKLESS_IDLE 

Imposta configUSE_TICKLESS_IDLE su 1 per utilizzare la [modalità tickless a bassa potenza](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/low-power-tickless-rtos.html&usg=ALkJrhhrxSPkp9X3xUMRuJfskCroIQS4XA) , o 0 per mantenere sempre in esecuzione l'interrupt tick. Le implementazioni tickless a bassa potenza non sono fornite per tutte le porte FreeRTOS. 

configUSE_IDLE_HOOK

Impostare a 1 se si desidera utilizzare un [hook inattivo](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/RTOS-idle-task.html&usg=ALkJrhhetMBmhk5bf0DO_-EwPHReQBc6SQ) o 0 per omettere un hook inattivo. 
configUSE_MALLOC_FAILED_HOOK

 Il kernel utilizza una chiamata a pvPortMalloc () per allocare la  memoria dall'heap ogni volta che viene creata un'attività, una coda o un semaforo. Il download ufficiale di FreeRTOS include quattro schemi di allocazione della memoria di esempio per questo scopo. Gli schemi sono implementati rispettivamente nei file sorgente heap_1.c, heap_2.c, heap_3.c, heap_4.c e heap_5.c. 

configUSE_MALLOC_FAILED_HOOK 

è rilevante solo quando viene utilizzato uno di questi tre schemi di esempio. La funzione hook di malloc () è una funzione hook (o callback) che, se  definita e configurata, verrà chiamata se pvPortMalloc () restituisce  NULL. Verrà restituito NULL solo se la memoria heap FreeRTOS è insufficiente affinché l'allocazione richiesta riesca.

configUSE_MALLOC_FAILED_HOOK 

se è impostato su 1, l'applicazione deve definire una funzione hook malloc () non riuscita. Se  è impostato a 0, la funzione hook non  riuscita di malloc () non verrà chiamata, anche se ne è stata definita  una. Le funzioni hook non riuscite di Malloc () devono avere il nome e il prototipo mostrato di seguito.

 `void vApplicationMallocFailedHook (void); ` 

 configUSE_DAEMON_TASK_STARTUP_HOOK 

Se configUSE_TIMERS e configUSE_DAEMON_TASK_STARTUP_HOOK sono entrambi  impostati su 1, l'applicazione deve definire una funzione hook che abbia il nome esatto e il prototipo come mostrato di seguito. La funzione hook verrà chiamata esattamente una volta quando l'attività daemon RTOS (nota anche come [attività di servizio timer](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/RTOS-software-timer-service-daemon-task.html&usg=ALkJrhiIRARuvEaihBEN4NPi6OymuYuCOw) ) viene eseguita per la prima volta. Qualsiasi codice di inizializzazione dell'applicazione che richiede l'esecuzione  dell'RTOS può essere inserito nella funzione hook. 

`void void vApplicationDaemonTaskStartupHook (void); ` 

 configUSE_TICK_HOOK 

Impostare a 1 se si desidera utilizzare un [tick hook](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00016.html&usg=ALkJrhiveh7_-O7MqCiewHRPljZ4o-RGfQ#TickHook) o 0 per omettere un tick hook.


 configCPU_CLOCK_HZ 

Immettere la frequenza in Hz alla quale verrà eseguito il clock *interno* che guida la periferica utilizzata per generare l'interrupt tick:  normalmente si tratta dello stesso clock che guida il clock della CPU  interna. Questo valore è necessario per configurare correttamente le periferiche del timer. 

configSYSTICK_CLOCK_HZ 

Parametro opzionale solo per le porte ARM Cortex-M. Per impostazione predefinita, le porte ARM Cortex-M generano l'interruzione tick RTOS dal timer Cortex-M SysTick. La maggior parte degli MCU Cortex-M esegue il timer SysTick alla stessa  frequenza dell'MCU stesso, in questo caso configSYSTICK_CLOCK_HZ non è  necessario e dovrebbe essere lasciato indefinito. Se il timer SysTick ha una frequenza diversa rispetto al core dell'MCU,  impostare configCPU_CLOCK_HZ sulla frequenza di clock dell'MCU, come al  solito, e configSYSTICK_CLOCK_HZ sulla frequenza di clock SysTick. 

 configTICK_RATE_HZ 

La frequenza dell'interruzione del tick dell'RTOS. L'interrupt tick viene utilizzato per misurare il tempo. Pertanto, una frequenza di tick più alta significa che il tempo può essere misurato con una risoluzione maggiore. Tuttavia, un'elevata frequenza di tick significa anche che il kernel RTOS  utilizzerà più tempo della CPU, quindi sarà meno efficiente. Le applicazioni demo RTOS utilizzano tutte una frequenza di ticchettio di 1000 Hz. Viene utilizzato per testare il kernel RTOS ed è superiore a quello normalmente richiesto. Più di un'attività può condividere la stessa priorità. Lo scheduler RTOS condividerà il tempo del processore tra attività con la  stessa priorità passando da un'attività all'altra durante ogni tick  RTOS. Una frequenza di tick rate elevata avrà quindi anche l'effetto di ridurre la "porzione di tempo" assegnata a ciascuna attività. 

 configMAX_PRIORITIES 

Il numero di [priorità](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/RTOS-task-priority.html&usg=ALkJrhi1eariKTq5EfphsQXP3PpnQygJwg)  disponibili per le attività dell'applicazione. Qualsiasi numero di attività può condividere la stessa priorità. Le co-routine hanno priorità separatamente - vedi configMAX_CO_ROUTINE_PRIORITIES. Ogni priorità disponibile consuma un po 'di RAM all'interno del kernel  RTOS, quindi questo valore non dovrebbe essere impostato su un valore  superiore a quello effettivamente richiesto dall'applicazione. Il valore massimo consentito sarà limitato se [configUSE_PORT_OPTIMISED_TASK_SELECTION](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00110.html&usg=ALkJrhjAuC8WRjUN-GAC9Je-0tMvJrX5MA#configUSE_PORT_OPTIMISED_TASK_SELECTION) è impostato su 1. 

 configMINIMAL_STACK_SIZE 

La dimensione dello stack utilizzato dall'attività inattiva. Generalmente questo non dovrebbe essere ridotto dal valore impostato nel file  FreeRTOSConfig.h fornito con l'applicazione demo per la porta che stai  utilizzando. Come il parametro della dimensione dello stack per le [funzioni xTaskCreate ()](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00125.html&usg=ALkJrhiySOEV-PSwjCr174QEAAxTilSESQ) e [xTaskCreateStatic ()](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/xTaskCreateStatic.html&usg=ALkJrhinoqQZPTmvTMKNIpPeT8A2unI8zg) , la dimensione dello stack è specificata in parole, non in byte. Se ogni elemento posizionato sullo stack è a 32 bit, una dimensione dello  stack di 100 significa 400 byte (ogni elemento dello stack a 32 bit  consuma 4 byte).


 configMAX_TASK_NAME_LEN 

La lunghezza massima consentita del nome descrittivo assegnato a un'attività quando l'attività viene creata. La lunghezza è specificata nel numero di caratteri *incluso* il byte di terminazione NULL. 

 configUSE_TRACE_FACILITY Impostare a 1 se si desidera includere ulteriori membri della struttura e funzioni per assistere con la visualizzazione e la traccia  dell'esecuzione. 

configUSE_STATS_FORMATTING_FUNCTIONS 

Impostare configUSE_TRACE_FACILITY e configUSE_STATS_FORMATTING_FUNCTIONS su 1 per includere le [funzioni vTaskList ()](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00021.html&usg=ALkJrhixM1O-mTnGiQtPW2_BQYZ609v2Cw#vTaskList) e [vTaskGetRunTimeStats ()](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00021.html&usg=ALkJrhixM1O-mTnGiQtPW2_BQYZ609v2Cw#vTaskGetRunTimeStats)  nella build. L'impostazione su 0 ometterà vTaskList () e vTaskGetRunTimeStates () dalla build. 

 configUSE_16_BIT_TICKS 

Il tempo è misurato in "tick", che è il numero di volte in cui  l'interrupt tick è stato eseguito da quando è stato avviato il kernel  RTOS. Il conteggio dei tick è contenuto in una variabile di tipo TickType_t. La definizione di configUSE_16_BIT_TICKS come 1 fa sì che TickType_t  venga definito (typedef'ed) come un tipo a 16 bit senza segno. La definizione di configUSE_16_BIT_TICKS come 0 fa sì che TickType_t venga definito (typedef'ed) come un tipo a 32 bit senza segno. L'uso di un tipo a 16 bit migliorerà notevolmente le prestazioni su  architetture a 8 e 16 bit, ma limita il periodo di tempo massimo  specificabile a 65535 "tick". Pertanto, supponendo una frequenza tick di 250 Hz, il tempo massimo che  un'attività può ritardare o bloccare quando viene utilizzato un  contatore a 16 bit è di 262 secondi, rispetto a 17179869 secondi quando  si utilizza un contatore a 32 bit.

configIDLE_SHOULD_YIELD 

Questo parametro controlla il comportamento delle attività con priorità inattiva. 

Ha effetto solo se: 

* Viene utilizzato lo scheduler preventivo. 

* L'applicazione crea attività che vengono eseguite con la priorità di inattività.  

  

  Se configUSE_TIME_SLICING è impostato su 1 (o non definito), le attività che condividono la stessa priorità avranno un intervallo di tempo. Se nessuna delle attività viene anticipata, si potrebbe presumere che a  ciascuna attività con una data priorità verrà assegnata una quantità  uguale di tempo di elaborazione - e se la priorità è superiore alla  priorità inattiva, questo è effettivamente il caso.

   Quando le attività condividono la priorità di inattività, il comportamento può essere leggermente diverso. Se configIDLE_SHOULD_YIELD è impostato su 1, l'attività inattiva verrà  restituita immediatamente se qualsiasi altra attività con priorità  inattiva è pronta per essere eseguita. Ciò garantisce che la quantità di tempo minima venga spesa nell'attività  inattiva quando le attività dell'applicazione sono disponibili per la  pianificazione. Questo  comportamento può tuttavia avere effetti indesiderati (a seconda delle  esigenze dell'applicazione) come illustrato di seguito: 	![img](https://www.freertos.org/fr-content-src/uploads/2018/07/idleyield.gif) 

  

  L'impostazione di configIDLE_SHOULD_YIELD su 0 impedisce all'attività  inattiva di cedere il tempo di elaborazione fino alla fine del suo  intervallo di tempo. Ciò  garantisce che a tutte le attività con priorità inattiva venga assegnata la stessa quantità di tempo di elaborazione (se nessuna delle attività  viene anticipata), ma al costo di una percentuale maggiore del tempo di  elaborazione totale allocata all'attività inattiva. 

  

configUSE_TASK_NOTIFICATIONS

L'impostazione di configUSE_TASK_NOTIFICATIONS su 1 (o lasciare configUSE_TASK_NOTIFICATIONS indefinito) includerà la funzionalità di [notifica diretta alle attività](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/RTOS-task-notifications.html&usg=ALkJrhjcTNJTq5l1ksHX0qESKw5GkNqFpg) e la relativa API associata nella build. L'impostazione di configUSE_TASK_NOTIFICATIONS su 0 escluderà la  funzionalità di notifica diretta all'attività e la relativa API  associata dalla build.

 Ogni attività consuma 8 byte aggiuntivi di RAM quando le notifiche dirette alle attività sono incluse nella build.

configTASK_NOTIFICATION_ARRAY_ENTRIES 

Ogni attività RTOS ha una serie di task notification . configTASK_NOTIFICATION_ARRAY_ENTRIES imposta il numero di indici nell'array.  Prima di FreeRTOS V10.4.0 le attività avevano un solo valore di  notifica, non un array di valori, quindi per la compatibilità con le  versioni precedenti configTASK_NOTIFICATION_ARRAY_ENTRIES è impostato su 1 se non è definito. 

configUSE_MUTEXES 

Impostare su 1 per includere la funzionalità mutex nella compilazione o 0 per omettere la funzionalità mutex dalla compilazione. I lettori dovrebbero familiarizzare con le differenze tra mutex e semafori binari in relazione alla funzionalità FreeRTOS.

configUSE_RECURSIVE_MUTEXES 

Impostare su 1 per includere la funzionalità mutex ricorsiva nella  compilazione o 0 per omettere la funzionalità mutex ricorsiva dalla  compilazione.

configUSE_COUNTING_SEMAPHORES 

Impostare su 1 per includere la funzionalità di conteggio del semaforo  nella compilazione o 0 per omettere il conteggio della funzionalità del  semaforo dalla compilazione. 

configUSE_ALTERNATIVE_API

 Impostare a 1 per includere le funzioni di coda "alternative" nella  compilazione o 0 per omettere le funzioni di coda "alternative" dalla  compilazione. L'API alternativa è descritta nel file di intestazione queue.h. **L'API alternativa è deprecata e non deve essere utilizzata nei nuovi progetti** .

configQUEUE_REGISTRY_SIZE 

Il registro delle code ha due scopi, entrambi associati al debug compatibile con il kernel RTOS:

* Consente di associare un nome testuale a una coda per una facile identificazione della coda all'interno di una GUI di debug. 

* Contiene le informazioni richieste da un debugger per individuare ogni coda e semaforo registrati.

  Il registro delle code non ha scopo a meno che non si utilizzi un debugger compatibile con il kernel RTOS. 

  configQUEUE_REGISTRY_SIZE definisce il numero massimo di code e semafori che possono essere registrati. È necessario registrare solo le code e i semafori che si desidera  visualizzare utilizzando un debugger compatibile con il kernel RTOS. Consultare la documentazione di riferimento API per [vQueueAddToRegistry ()](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/vQueueAddToRegistry.html&usg=ALkJrhifKAmostMP__bEUEIMaGmYk7amwA)  e [vQueueUnregisterQueue ()](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/vQueueUnregisterQueue.html&usg=ALkJrhhvyT-Lxk0PtKQwenEuauZz4BllYg) per ulteriori informazioni.

configUSE_TIME_SLICING

Per impostazione predefinita FreeRTOS utilizza una  pianificazione preventiva con priorità con suddivisione del tempo. Ciò significa che lo scheduler RTOS eseguirà sempre il task con la priorità più alta che si trova nello stato Ready e passerà tra task di uguale  priorità ad ogni interrupt tick RTOS. Se configUSE_TIME_SLICING è impostato su 0, lo scheduler RTOS continuerà a eseguire il task con la massima priorità che si trova nello stato  Ready, ma non passerà tra task di uguale priorità solo perché si è  verificato un interrupt di tick.

configUSE_NEWLIB_REENTRANT

se configUSE_NEWLIB_REENTRANT è impostato su 1 , verrà allocata una struttura reent per ciascuna attività creata. 

configENABLE_BACKWARD_COMPATIBILITY

Il file di intestazione FreeRTOS.h include una serie di macro #define che  mappano i nomi dei tipi di dati utilizzati nelle versioni di FreeRTOS  precedenti alla versione 8.0.0 ai nomi utilizzati nella versione 8.0.0  di FreeRTOS. Le macro  consentono al codice dell'applicazione di aggiornare la versione di  FreeRTOS su cui sono compilate da una versione precedente alla 8.0.0 a  una versione successiva alla 8.0.0 senza modifiche. L'impostazione di configENABLE_BACKWARD_COMPATIBILITY su 0 in FreeRTOSConfig.h esclude le macro dalla compilazione, consentendo in tal modo la convalida che  non vengano utilizzati nomi precedenti alla versione 8.0.0.

configNUM_THREAD_LOCAL_STORAGE_POINTERS

Imposta il numero di indici [nell'array di archiviazione locale](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/thread-local-storage-pointers.html&usg=ALkJrhhUmqTWA4Se2h9OJSu7dfRyoBqsDA) del [thread di](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/thread-local-storage-pointers.html&usg=ALkJrhhUmqTWA4Se2h9OJSu7dfRyoBqsDA) ciascuna attività 

configSTACK_DEPTH_TYPE

Imposta il tipo utilizzato per specificare la profondità dello stack nelle chiamate a [xTaskCreate ()](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00125.html&usg=ALkJrhiySOEV-PSwjCr174QEAAxTilSESQ) e in vari altri punti vengono utilizzate le dimensioni dello stack (ad esempio, quando si restituisce lo [stack high water mark](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/uxTaskGetStackHighWaterMark.html&usg=ALkJrhhRrYvLhx3y9CsqXO309wP0TD3P1Q) ). Le versioni precedenti di FreeRTOS specificavano le dimensioni dello  stack utilizzando variabili di tipo UBaseType_t, ma si è scoperto che  era troppo restrittivo sui microcontrollori a 8 bit. configSTACK_DEPTH_TYPE rimuove tale restrizione consentendo agli sviluppatori di applicazioni  di specificare il tipo da utilizzare.

configMESSAGE_BUFFER_LENGTH_TYPE

[I buffer dei messaggi di FreeRTOS](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/RTOS-message-buffer-example.html&usg=ALkJrhhT97S0RrJEvTSD7nBMrX8QObcHKw) utilizzano variabili di tipo configMESSAGE_BUFFER_LENGTH_TYPE per memorizzare la lunghezza di ogni messaggio. Se configMESSAGE_BUFFER_LENGTH_TYPE non è definito, il valore predefinito sarà size_t. Se i messaggi memorizzati in un buffer dei messaggi non saranno mai più  grandi di 255 byte, la definizione di configMESSAGE_BUFFER_LENGTH_TYPE  su uint8_t salverà 3 byte per messaggio su un microcontrollore a 32 bit. Allo stesso modo, se i  messaggi memorizzati in un buffer dei messaggi non saranno mai più  grandi di 65535 byte, la definizione di configMESSAGE_BUFFER_LENGTH_TYPE su uint16_t salverà 2 byte per messaggio su un microcontrollore a 32  bit.

configSUPPORT_STATIC_ALLOCATION

Se configSUPPORT_STATIC_ALLOCATION è impostato su 1, gli oggetti RTOS  possono essere creati utilizzando la RAM fornita dal writer  dell'applicazione. Se è impostato su 0, gli oggetti RTOS  possono essere creati solo utilizzando la RAM allocata dall'heap  FreeRTOS. Se non viene definito, il valore predefinito sarà 0. Se è impostato su 1, il writer  dell'applicazione deve anche fornire due funzioni di callback:  vApplicationGetIdleTaskMemory () per fornire la memoria da utilizzare  dall'attività RTOS Idle e (se configUSE_TIMERS è impostato su 1)  vApplicationGetTimerTaskMemory () per fornire memoria per l'utilizzo da  l'attività RTOS Daemon / Timer Service. Di seguito vengono forniti esempi.

configSUPPORT_DYNAMIC_ALLOCATION

Se configSUPPORT_DYNAMIC_ALLOCATION è impostato su 1, è possibile creare  oggetti RTOS utilizzando la RAM allocata automaticamente dall'heap di  FreeRTOS. Se è impostato su 0, gli oggetti RTOS  possono essere creati solo utilizzando la RAM fornita dal writer  dell'applicazione. Se viene lasciato indefinito, il valore predefinito sarà 1.

configTOTAL_HEAP_SIZE 

La quantità totale di RAM disponibile nell'heap di FreeRTOS. Questo valore verrà utilizzato solo se [configSUPPORT_DYNAMIC_ALLOCATION](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00110.html&usg=ALkJrhjAuC8WRjUN-GAC9Je-0tMvJrX5MA#configSUPPORT_DYNAMIC_ALLOCATION) è impostato su 1 e l'applicazione utilizza uno degli schemi di  allocazione della memoria di esempio forniti nel download del codice  sorgente di FreeRTOS. Vedere la sezione di [configurazione](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00111.html&usg=ALkJrhg63IhZaOCgFi-AvmGGxbabiU1A4g) della [memoria](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00111.html&usg=ALkJrhg63IhZaOCgFi-AvmGGxbabiU1A4g) per ulteriori dettagli.

 configAPPLICATION_ALLOCATED_HEAP

Per impostazione predefinita, l' [heap di FreeRTOS](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/a00111.html&usg=ALkJrhg63IhZaOCgFi-AvmGGxbabiU1A4g) viene dichiarato da FreeRTOS e posizionato in memoria dal linker. L'impostazione di configAPPLICATION_ALLOCATED_HEAP su 1 consente invece di dichiarare  l'heap dal writer dell'applicazione, che consente al writer  dell'applicazione di posizionare l'heap dove preferisce nella memoria. Se viene utilizzato heap_1.c, heap_2.c o heap_4.c e  configAPPLICATION_ALLOCATED_HEAP è impostato su 1, il writer  dell'applicazione deve fornire un array uint8_t con il nome e la  dimensione esatti come mostrato di seguito.

 L'array verrà utilizzato come heap FreeRTOS. Il modo in cui l'array viene posizionato in una posizione di memoria  specifica dipende dal compilatore utilizzato - fare riferimento alla  documentazione del compilatore. `uint8_t ucHeap [configTOTAL_HEAP_SIZE]; `

onfigUSE_CO_ROUTINES 

Impostare su 1 per includere la funzionalità di routine nella  compilazione o 0 per omettere la funzionalità di routine dalla  compilazione. Per includere le co-routine è necessario includere nel progetto croutine.c. 

 configMAX_CO_ROUTINE_PRIORITIES 

Il numero di [priorità](https://translate.googleusercontent.com/translate_c?depth=1&hl=it&pto=aue&rurl=translate.google.it&sl=auto&sp=nmt4&tl=it&u=https://www.freertos.org/co-routine-priorities.html&usg=ALkJrhgEpE2WEkmnKpDVW7pC0UpCjBzC9Q)  disponibili per le co-routine dell'applicazione. Qualsiasi numero di co-routine può condividere la stessa priorità.

 configUSE_TIMERS 

Impostare su 1 per includere la funzionalità del timer del software o 0 per omettere la funzionalità del timer del software.

 configTIMER_TASK_PRIORITY 

Imposta la priorità dell'attività del servizio timer / daemon del software. 

configTIMER_QUEUE_LENGTH 

Imposta la lunghezza della coda dei comandi del timer del software.

 configTIMER_TASK_STACK_DEPTH 

Imposta la profondità dello stack assegnata all'attività del servizio timer / daemon del software. 

configASSERT

La semantica della macro configASSERT () è la stessa della macro C assert () standard. Se il parametro passato a configASSERT () è zero, viene attivata un'asserzione. configASSERT () viene chiamato in tutti i file sorgente di FreeRTOS per verificare come l'applicazione utilizza FreeRTOS. Si consiglia vivamente di sviluppare applicazioni FreeRTOS con configASSERT () definito.

Nota la definizione di configASSERT () aumenterà sia la dimensione del codice dell'applicazione che il tempo di esecuzione. Quando l'applicazione è stabile, l'overhead aggiuntivo può essere rimosso  semplicemente commentando la definizione configASSERT () in  FreeRTOSConfig.h. 

```c
/ * Definisce configASSERT () per chiamare vAssertCalled () se l'asserzione fallisce. L'asserzione non è riuscito se il valore del parametro passato a configASSERT () è uguale a zero. * / 
#define configASSERT (x) if ((x) == 0)vAssertCalled(__FILE__, __LINE__) ` 
```

Se si esegue FreeRTOS sotto il controllo di un debugger, configASSERT () può essere definito per disabilitare semplicemente gli interrupt e  rimanere in un ciclo, come mostrato di seguito. Ciò avrà l'effetto di fermare il codice sulla riga che non ha superato il  test di asserzione: sospendere il debugger ti porterà immediatamente  alla riga incriminata in modo da poter vedere perché non è riuscito.

```c
/ * Definisce configASSERT () per disabilitare gli interrupt e restare in un ciclo. * / #define configASSERT (x) if ((x) == 0) {taskDISABLE_INTERRUPTS (); per (;;); }`
```

 configTOTAL_MPU_REGIONS  

Le porte FreeRTOS MPU (Memory Protection Unit) per microcontrollori ARM Cortex-M4 supportano dispositivi con 16 regioni MPU.

configTEX_S_C_B_FLASH

 bit TEX, Shareable (S), Cacheable (C) e Bufferable (B) definiscono il  tipo di memoria e, ove necessario, le proprietà cacheable e  condivisibili di una regione MPU. `configTEX_S_C_B_FLASH`  consente ai writer di applicazioni di sovrascrivere i valori predefiniti per i bit TEX, Shareable (S), Cacheable (C) e Bufferable (B) per la  regione MPU che copre Flash. Se lasciato indefinito, il valore predefinito è 0x07UL che significa TEX = 000, S = 1, C = 1, B = 1. 

configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY

`configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY` può essere definito su 1 per impedire qualsiasi escalation di privilegi originata dall'esterno del codice kernel (diversa dalle escalation  eseguite dall'hardware stesso quando viene immesso un interrupt). Quando `configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY`  è impostato su 1 in `FreeRTOSConfig.h` , le variabili `__syscalls_flash_start__` e `__syscalls_flash_end__` devono essere esportate dallo script del linker per indicare  rispettivamente gli indirizzi di inizio e fine della memoria delle  chiamate di sistema. Si consiglia di definirlo a 1 per la massima sicurezza.

## INCLUDE Parameters

Le macro che iniziano con "INCLUDE" consentono di escludere dalla build  quei componenti del kernel in tempo reale non utilizzati  dall'applicazione. Ciò garantisce che l'RTOS non utilizzi più ROM o RAM del necessario per la tua particolare applicazione incorporata. Ogni macro assume la forma ...

`INCLUDE_FunctionName`

… Dove FunctionName indica la funzione API (o insieme di funzioni) che può essere facoltativamente esclusa. Per includere la funzione API, impostare la macro su 1, per escludere la  funzione impostare la macro su 0. Ad esempio, per includere la funzione  API vTaskDelete () utilizzare:

`#define INCLUDE_vTaskDelete 1` 

Per escludere vTaskDelete () dalla tua build usa:

 `#define INCLUDE_vTaskDelete 0`