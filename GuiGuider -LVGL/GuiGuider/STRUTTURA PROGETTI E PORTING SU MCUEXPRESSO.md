# STRUTTURA PROGETTI E PORTING SU MCUEXPRESSO

**GUI Guider** è uno strumento di sviluppo dell'interfaccia utente grafica intuitivo di NXP che consente il rapido sviluppo di modelli di interfacce grafiche di qualità con la libreria grafica LVGL open source. L'editor drag-and-drop di GUI Guider semplifica l'utilizzo delle numerose funzionalità di LVGL come widget, animazioni e stili per creare una GUI con una codifica  minima.

Permette anche di simulare l'intero progetto grafico oltre che a generare ed esportare il codice seguendo uno schema ben preciso che andrà poi riportato su MCUExpresso.

Quando viene generato il codice e poi esportato tramite gli appositi pulsanti , vengono create tre directory :

* custom
* generated
* source

I file in esse contenute sono :

* *custom.h* e *custom.c* (per la dir custom)

  Per la cartella generated:

  * **dir** : guider_customer_fonts , guider_fonts, images
  * *events_init.c , events_init.h*
  * *gui_guider.c , gui_guider.h*
  * *guider_lv_conf.h*
  * tutte i file di inizializzazione dei vari screen di solito iniziano con setup_nome_screen.

          *  *lv_conf.h* ( per la cartella )

Tutte e 3 le dir devono essere sovrascritte a quelle presente nel progetto di MCUExpresso il quale se si è partiti dalla base dell'esempio proprio delle lvgl conterrà proprio queste 3 dir.

**NB.** se si è eseguita qualche modifica a questi file per ad esempio per introdurre un timer o qualche oggetto o qualsiasi operazione che non è possibile eseguire con GUI_GUIDER **queste saranno sovrascritte**.

#### custom.c e custom.h

Questi file contengono eventualmente dichiarazione e definizioni di oggetti personalizzati che poi possono essere usati in tutti i vari screen . Custom.h è poi richiamato nei vari file 

#### gui_guider.c e gui_guider.h

sono i file di inizializzazione di tutto ciò che riguarda le definizioni degli oggetti utilizzati per realizzare la grafica con LVGL 

*gui_guider.h* contiene al suo interno una struttura in cui sn dichiarati tutti gli oggetti delle varie schermate cosi da essere visti da tutti i file e poterli eventualmente modificare (si può anche evitare di dichiararli tutti se nn vogliamo che vengano utilizzati da altre schermate) oltre che la dichiarazione delle routine di setup dei vari screen come da esempio:

```c
typedef struct
{
	lv_obj_t *homepage_screen_bkg_obj;
	lv_obj_t *homepage_screen_img_ms_logo;
	lv_obj_t *homepage_screen_btn_1;
	lv_obj_t *homepage_screen_btn_1_label;
	lv_obj_t *homepage_screen_btn_2;
	lv_obj_t *homepage_screen_btn_9_label;
	
}lv_ui;
extern lv_ui guider_ui;
void setup_ui(lv_ui *ui);
void setup_scr_homepage_screen(lv_ui *ui);
```

la struttura lv_ui è poi usata per dichiarare una variabile ed usata nelle varie routine di costruzione dell'interfaccia.Sono inoltre dichiarate eventuali img con *LV_IMG_DECLARE(nome_img);*.Le immagini sn convertite da GuiGuider e il file c è presente nella cartella images

gui_guider.c contiene la definizione di setup_ui dove semplicemente viene inizializzata la prima schermata:

```c
void setup_ui(lv_ui *ui){
	setup_scr_splash_screen(ui);
	lv_scr_load(ui->splash_screen);
}
```

per caricare l'oggetto che rappresenta lo screen della prima pagina si utilizza come si può notare l'api ***lv_scr_load(lv_obj_t *scrren);***

#### guider_lv_conf.h

questo file contiene una serie di define che rappresentano una serie di parametri di inizializzazione come ad esempio la risoluzione

```c
/* Maximal horizontal and vertical resolution to support by the library.*/
#define LV_HOR_RES_MAX          (480)
#define LV_VER_RES_MAX          (272)

/* Color depth:
 * - 1:  1 byte per pixel
 * - 8:  RGB233
 * - 16: RGB565
 * - 32: ARGB8888
 */
#define LV_COLOR_DEPTH     16


/* Dot Per Inch: used to initialize default sizes.
 * E.g. a button with width = LV_DPI / 2 -> half inch wide
 * (Not so important, you can adjust it to modify default sizes and spaces)*/
#define LV_DPI              100     /*[px]*/

/* 1: use custom malloc/free, 0: use the built-in `lv_mem_alloc` and `lv_mem_free` */
#define LV_MEM_CUSTOM      0
#if LV_MEM_CUSTOM == 0
/* Size of the memory used by `lv_mem_alloc` in bytes (>= 2kB)*/
#  define LV_MEM_SIZE    (128U * 1024U + LV_HOR_RES_MAX * LV_VER_RES_MAX * 4)

/* Complier prefix for a big array declaration */
#  define LV_MEM_ATTR

/* Set an address for the memory pool instead of allocating it as an array.
 * Can be in external SRAM too. */
#  define LV_MEM_ADR          0

/* Automatically defrag. on free. Defrag. means joining the adjacent free cells. */
#  define LV_MEM_AUTO_DEFRAG  1
#else       /*LV_MEM_CUSTOM*/
#  define LV_MEM_CUSTOM_INCLUDE <stdlib.h>   /*Header for the dynamic memory function*/
#  define LV_MEM_CUSTOM_ALLOC   malloc       /*Wrapper to malloc*/
#  define LV_MEM_CUSTOM_FREE    free         /*Wrapper to free*/
#endif     /*LV_MEM_CUSTOM*/

/* 1: Enable GPU interface*/
#define LV_USE_GPU              1
#define LV_USE_GPU_STM32_DMA2D  0
```

#### events_init.c e events_init.h

In questi due file sono presenti le routine di gestione degli eventi dei vari oggetti che sn definiti nelle varie pagine come può essere ad esempio la gestione dell'evento click di un bottone . Nel file .h troviamo la dichiarazione della routine di evento e nel file .c la sua definizione.

ad esempio :

```c
file .h

void events_init_retun_to_homepage(lv_ui *ui);

file .c
    
static void splash_screen_event_handler(lv_obj_t * obj, lv_event_t event)
{
	int16_t bar_cur_value;
	bar_cur_value = lv_event_get_data();
	switch (event)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
		if(bar_cur_value <100 ) {
			lv_bar_set_value(guider_ui.splash_screen_bar_1, bar_cur_value, LV_ANIM_OFF);
		} else {
			lv_obj_clean(lv_scr_act());
			//setup_scr_page1_screen(&guider_ui);
			setup_scr_homepage_screen(&guider_ui);
			lv_scr_load_anim(guider_ui.homepage_screen, LV_SCR_LOAD_ANIM_FADE_ON, 1000, 0, 0);
			//lv_scr_load(guider_ui.homepage_screen);
		}
	}
		break;
	default:
		break;
	}
}    
```

la routine di inizializzazione dell'evento va poi richiamata nella routine di setup  della pagina  in cui è presente l'oggetto a cui è legato l'evento. L'evento poi può essere notificato utilizzando l'api lv_event_send()

