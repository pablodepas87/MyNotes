# LVGL (Light and Versatile Graphics Library)

LVGL (Light and Versatile Graphics Library) è una libreria grafica gratuita e open source che fornisce tutto il necessario per creare una GUI incorporata con elementi grafici facili da usare, splendidi effetti visivi e un ridotto ingombro di memoria. 



### Caratteristiche principali 

* Potenti elementi costitutivi come pulsanti, grafici, elenchi, dispositivi di scorrimento, immagini, ecc.     
* Grafica avanzata con animazioni, anti-aliasing, opacità, scorrimento fluido     
* Vari dispositivi di input come touchpad, mouse, tastiera, encoder, ecc.     
* Supporto multilingue con codifica UTF-8     
* Supporto multi-display, ovvero utilizzo simultaneo di più display TFT e monocromatici     
* Elementi grafici completamente personalizzabili con stili simili a CSS     
* Indipendente dall'hardware: utilizzabile con qualsiasi microcontrollore o display     
* Scalabile: in grado di operare con poca memoria (64 kB Flash, 16 kB RAM)     
* Sistema operativo, memoria esterna e GPU supportati ma non richiesti     
* Operazione frame buffer singolo anche con effetti grafici avanzati     
* Scritto in C per la massima compatibilità (compatibile con C++)     
* Simulatore per avviare la progettazione della GUI incorporata su un PC senza hardware incorporato     
* Associazione a MicroPython     
* Tutorial, esempi, temi per la progettazione rapida di GUI    
* La documentazione è disponibile online e PDF     
* Gratuito e open-source con licenza MIT 

### Requisiti Minimi

Fondamentalmente, ogni controller moderno (che è in grado di pilotare un display) è adatto per eseguire LVGL. I requisiti minimi sono: 

* Microcontrollore o processore a 16, 32 o 64 bit     
* Si consiglia una velocità di clock di 16 MHz    
* Flash/ROM: > 64 kB per i componenti essenziali (si consiglia > 180 kB)     
* RAM:  Utilizzo della RAM statica: ~2 kB a seconda delle caratteristiche utilizzate e dei tipi di oggetti         
* Stack: > 2kB (si consiglia > 8 kB)         
* Dati dinamici (heap): > 4 KB (si consiglia > 32 kB se si utilizzano più oggetti). Impostato da LV_MEM_SIZE in lv_conf.h.         
* Buffer di visualizzazione: > pixel "Risoluzione orizzontale" (si consiglia > 10 × "Risoluzione orizzontale")         Un frame buffer nell'MCU o nella scheda video esterna     
* C99 o compilatore più recente    
*  Conoscenze di base del C (o C++): puntatori, struct, callback. 

## Repository layout

All repositories of the LVGL project are hosted on GitHub: https://github.com/lvgl

You will find these repositories there:

- [lvgl](https://github.com/lvgl/lvgl) The library itself with many [examples](https://github.com/lvgl/lvgl/blob/master/examples/).
- [lv_demos](https://github.com/lvgl/lv_demos) Demos created with LVGL.
- [lv_drivers](https://github.com/lvgl/lv_drivers) Display and input device drivers
- [blog](https://github.com/lvgl/blog) Source of the blog's site (https://blog.lvgl.io)
- [sim](https://github.com/lvgl/sim) Source of the online simulator's site (https://sim.lvgl.io)
- [lv_sim_...](https://github.com/lvgl?q=lv_sim&type=&language=) Simulator projects for various IDEs and platforms
- [lv_port_...](https://github.com/lvgl?q=lv_port&type=&language=) LVGL ports to development boards
- [lv_binding_..](https://github.com/lvgl?q=lv_binding&type=&language=l) Bindings to other languages
- [lv_...](https://github.com/lvgl?q=lv_&type=&language=) Ports to other platforms