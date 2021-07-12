# LVGL - Quick Overview

### Aggiungere LVGL al progetto 

I seguenti passaggi mostrano come configurare LVGL su un sistema integrato con un display e un touchpad 

* Scarica o clona la libreria da GitHub con git clone https://github.com/lvgl/lvgl.git 
* Copia la cartella lvgl nel tuo progetto      
* Copia lvgl/lv_conf_template.h come lv_conf.h al di fuori della cartella lvgl, cambia il primo #if da 0 a 1 per abilitare il contenuto del file e imposta almeno **LV_HOR_RES_MAX, LV_VER_RES_MAX e LV_COLOR_DEPTH** defines.      
* Includere ***lvgl/lvgl.h*** dove è necessario utilizzare le funzioni relative a LVGL.      
* Chiama lv_tick_inc(x) ogni x millisecondi in un timer o un'attività (x dovrebbe essere compreso tra 1 e 10). È necessario per la tempistica interna di LVGL. In alternativa, configura **LV_TICK_CUSTOM** (vedi lv_conf.h) in modo che LVGL possa recuperare direttamente l'ora corrente.      
* Chiama ***lv_init()***      
* Crea un buffer di visualizzazione per LVGL. LVGL eseguirà prima il rendering della grafica qui e il seeding dell'immagine renderizzata sul display. La dimensione del buffer può essere impostata liberamente, ma la dimensione dello schermo 1/10 è un buon punto di partenza. 

```c
static lv_disp_buf_t disp_buf;
static lv_color_t buf[LV_HOR_RES_MAX * LV_VER_RES_MAX / 10];     /*Declare a buffer for 1/10 screen size*/
lv_disp_buf_init(&disp_buf, buf, NULL, LV_HOR_RES_MAX * LV_VER_RES_MAX / 10);/*Init the display buffer*/
```

Implementa e registra una funzione in grado di copiare l'immagine renderizzata in un'area del display: 

```c
lv_disp_drv_t disp_drv;               /*Descriptor of a display driver*/
lv_disp_drv_init(&disp_drv);          /*Basic initialization*/
disp_drv.flush_cb = my_disp_flush;    /*Set your driver function*/
disp_drv.buffer = &disp_buf;          /*Assign the buffer to the display*/
lv_disp_drv_register(&disp_drv);      /*Finally register the driver*/

void my_disp_flush(lv_disp_drv_t * disp, const lv_area_t * area, lv_color_t * color_p)
{
    int32_t x, y;
    for(y = area->y1; y <= area->y2; y++) {
        for(x = area->x1; x <= area->x2; x++) {
            set_pixel(x, y, *color_p);  /* Put a pixel to the display.*/
            color_p++;
        }
    }

    lv_disp_flush_ready(disp);         /* Indicate you are ready with the flushing*/
}
```

Implementare e registrare una funzione in grado di leggere un dispositivo di input. 

```c
lv_indev_drv_t indev_drv;                  /*Descriptor of a input device driver*/
lv_indev_drv_init(&indev_drv);             /*Basic initialization*/
indev_drv.type = LV_INDEV_TYPE_POINTER;    /*Touch pad is a pointer-like device*/
indev_drv.read_cb = my_touchpad_read;      /*Set your driver function*/
lv_indev_drv_register(&indev_drv);         /*Finally register the driver*/

bool my_touchpad_read(lv_indev_t * indev, lv_indev_data_t * data)
{
    data->state = touchpad_is_pressed() ? LV_INDEV_STATE_PR : LV_INDEV_STATE_REL;
    if(data->state == LV_INDEV_STATE_PR) touchpad_get_xy(&data->point.x, &data->point.y);

    return false; /*Return `false` because we are not buffering and no more data to read*/
}
```

* Chiamare ***lv_task_handler()*** periodicamente ogni pochi millisecondi nel ciclo while(1) principale, in Timer interrupt o in un task del sistema operativo. Se necessario, ridisegnare lo schermo, gestisce i dispositivi di input, ecc. 



### Concetti base Widgets

Gli elementi grafici come pulsanti, etichette, cursori, grafici ecc. sono chiamati oggetti o widget in LVGL. I widget disponibli sono:

- [Base object (lv_obj)](https://docs.lvgl.io/latest/en/html/widgets/obj.html)
- [Arc (lv_arc)](https://docs.lvgl.io/latest/en/html/widgets/arc.html)
- [Bar (lv_bar)](https://docs.lvgl.io/latest/en/html/widgets/bar.html)
- [Button (lv_btn)](https://docs.lvgl.io/latest/en/html/widgets/btn.html)
- [Button matrix (lv_btnmatrix)](https://docs.lvgl.io/latest/en/html/widgets/btnmatrix.html)
- [Calendar (lv_calendar)](https://docs.lvgl.io/latest/en/html/widgets/calendar.html)
- [Canvas (lv_canvas)](https://docs.lvgl.io/latest/en/html/widgets/canvas.html)
- [Checkbox (lv_cb)](https://docs.lvgl.io/latest/en/html/widgets/checkbox.html)
- [Chart (lv_chart)](https://docs.lvgl.io/latest/en/html/widgets/chart.html)
- [Container (lv_cont)](https://docs.lvgl.io/latest/en/html/widgets/cont.html)
- [Color picker (lv_cpicker)](https://docs.lvgl.io/latest/en/html/widgets/cpicker.html)
- [Drop-down list (lv_dropdown)](https://docs.lvgl.io/latest/en/html/widgets/dropdown.html)
- [Gauge (lv_gauge)](https://docs.lvgl.io/latest/en/html/widgets/gauge.html)
- [Image (lv_img)](https://docs.lvgl.io/latest/en/html/widgets/img.html)
- [Image button (lv_imgbtn)](https://docs.lvgl.io/latest/en/html/widgets/imgbtn.html)
- [Keyboard (lv_keyboard)](https://docs.lvgl.io/latest/en/html/widgets/keyboard.html)
- [Label (lv_label)](https://docs.lvgl.io/latest/en/html/widgets/label.html)
- [LED (lv_led)](https://docs.lvgl.io/latest/en/html/widgets/led.html)
- [Line (lv_line)](https://docs.lvgl.io/latest/en/html/widgets/line.html)
- [List (lv_list)](https://docs.lvgl.io/latest/en/html/widgets/list.html)
- [Line meter (lv_lmeter)](https://docs.lvgl.io/latest/en/html/widgets/linemeter.html)
- [Message box (lv_msgbox)](https://docs.lvgl.io/latest/en/html/widgets/msgbox.html)
- [Object mask (lv_objmask)](https://docs.lvgl.io/latest/en/html/widgets/objmask.html)
- [Page (lv_page)](https://docs.lvgl.io/latest/en/html/widgets/page.html)
- [Roller (lv_roller)](https://docs.lvgl.io/latest/en/html/widgets/roller.html)
- [Slider (lv_slider)](https://docs.lvgl.io/latest/en/html/widgets/slider.html)
- [Spinbox (lv_spinbox)](https://docs.lvgl.io/latest/en/html/widgets/spinbox.html)
- [Spinner (lv_spinner)](https://docs.lvgl.io/latest/en/html/widgets/spinner.html)
- [Switch (lv_switch)](https://docs.lvgl.io/latest/en/html/widgets/switch.html)
- [Table (lv_table)](https://docs.lvgl.io/latest/en/html/widgets/table.html)
- [Tabview (lv_tabview)](https://docs.lvgl.io/latest/en/html/widgets/tabview.html)
- [Text area (lv_textarea)](https://docs.lvgl.io/latest/en/html/widgets/textarea.html)
- [Tile view (lv_tileview)](https://docs.lvgl.io/latest/en/html/widgets/tileview.html)
- [Window (lv_win)](https://docs.lvgl.io/latest/en/html/widgets/win.html)

Ogni oggetto ha un oggetto genitore in cui viene creato. Ad esempio, se viene creata un'etichetta su un pulsante, il pulsante è il genitore dell'etichetta. L'oggetto figlio si sposta con il genitore e se il genitore viene eliminato verranno eliminati anche i figli.

Gli oggetti figli possono essere visibili solo sul genitore. In altre parole, le parti dei figli fuori dal genitore vengono ritagliate. 

Uno schermo è il genitore "root". Puoi avere un numero qualsiasi di schermi. Per ottenere la schermata corrente, chiama `lv_scr_act()` e per caricare una schermata usa *`lv_scr_load(nome_screen)`*. 

Puoi creare un nuovo oggetto con `lv_<type>_create(parent, obj_to_copy)`. Restituirà una variabile **`lv_obj_t *`** che dovrebbe essere usata come riferimento all'oggetto per impostarne i parametri. Il primo parametro è il genitore desiderato, il secondo parametro può essere un oggetto da copiare (**NULL** se non utilizzato). Per esempio: 

```c
lv_obj_t * slider1 = lv_slider_create(lv_scr_act(), NULL);
```

Per impostare alcuni attributi di base è possibile utilizzare la funzione `lv_obj_set_<paramters_name>(obj_id, <value>)`. Per esempio: 

```c
lv_obj_set_x(btn1, 30);
lv_obj_set_y(btn1, 10);
lv_obj_set_size(btn1, 200, 50);
```

Gli oggetti hanno anche parametri specifici del tipo che possono essere impostati da `lv_<type>_set_<paramters_name>(obj, <value>)` ad esempio:

```c
lv_slider_set_value(slider1, 70, LV_ANIM_ON);
```

Per vedere l'API completa visita la documentazione dei widget o il relativo file di intestazione. 

### Events

Gli eventi vengono utilizzati per informare l'utente se è successo qualcosa con un oggetto. Puoi essere assegnata una callback a un oggetto che verrà chiamato se l'oggetto viene cliccato, rilasciato, trascinato, cancellato ecc. Dovrebbe apparire così: 

```c
lv_obj_set_event_cb(btn, btn_event_cb);                 /*Assign a callback to the button*/

...

void btn_event_cb(lv_obj_t * btn, lv_event_t event)
{
    if(event == LV_EVENT_CLICKED) {
        printf("Clicked\n");
    }
}
```

### Parts

I widget possono essere costruiti da una o più parti. Ad esempio un pulsante ha una sola parte chiamata LV_BTN_PART_MAIN. Tuttavia, una pagina ha LV_PAGE_PART_BG, LV_PAGE_PART_SCROLLABLE, LV_PAGE_PART_SCROLLBAR e LV_PAGE_PART_EDGE_FLASG. 

Alcune parti sono virtuali (non sono oggetti reali, solo disegnate al volo, come la barra di scorrimento di una pagina) ma altre parti sono reali (sono oggetti reali, come la parte scorrevole della pagina). Le parti entrano in gioco quando si vogliono impostare gli stili e gli stati di una data parte di un oggetto.

### States

Gli oggetti possono trovarsi in una combinazione dei seguenti stati: 

- **LV_STATE_DEFAULT** Normal, released
- **LV_STATE_CHECKED** Toggled or checked
- **LV_STATE_FOCUSED** Focused via keypad or encoder or clicked via touchpad/mouse
- **LV_STATE_EDITED** Edit by an encoder
- **LV_STATE_HOVERED** Hovered by mouse (not supported now)
- **LV_STATE_PRESSED** Pressed
- **LV_STATE_DISABLED** Disabled or inactive

Ad esempio, se si preme un oggetto, otterrà automaticamente lo stato LV_STATE_PRESSED e quando lo si rilascia, lo stato verrà rimosso. 

Per ottenere lo stato corrente usa `lv_obj_get_state(obj, part)`. Restituirà gli stati OR ed. Ad esempio, questo è uno stato valido per una casella di controllo: `LV_STATE_CHECKED | LV_STATE_PRESSED | LV_STATE_FOCUSED` 

### Styles

Gli stili possono essere assegnati alle parti di un oggetto per cambiarne l'aspetto. Uno stile può descrivere ad esempio il colore di sfondo, la larghezza del bordo, il carattere del testo e così via. 

Gli stili possono essere sovrapposti (analogamente ai CSS). Significa che puoi aggiungere più stili a una parte di un oggetto. Ad esempio style_btn può impostare un aspetto del pulsante predefinito e style_btn_red può sovrascrivere alcune proprietà per rendere il pulsante rosso 

Ogni proprietà di stile impostata è specifica di uno stato. Ad esempio, puoi impostare un colore di sfondo diverso per **LV_STATE_DEFAULT** e **LV_STATE_PRESSED**. La libreria trova la migliore corrispondenza tra lo stato della parte data e le proprietà di stile disponibili. Ad esempio, se l'oggetto è nello stato premuto e la larghezza del bordo è specificata per lo stato premuto, verrà utilizzato. Tuttavia, se non è specificato per lo stato premuto, verrà utilizzata la larghezza del bordo di **LV_STATE_DEFAULT**. Se la larghezza del bordo non è definita neanche per **LV_STATE_DEFAULT**, verrà utilizzato un valore predefinito. 

Alcune proprietà (in genere quelle relative al testo) possono essere ereditate. Significa che se una proprietà non è impostata in un oggetto verrà cercata anche nei suoi genitori. Ad esempio, puoi impostare il carattere una volta nello stile dello schermo e ogni testo lo erediterà per impostazione predefinita. È inoltre possibile aggiungere proprietà di stile locale agli oggetti. 

### Themes

I temi sono gli stili predefiniti degli oggetti. Gli stili dei temi vengono applicati automaticamente quando vengono creati gli oggetti. 

```c
#include "../../lv_examples.h"

static void btn_event_cb(lv_obj_t * btn, lv_event_t event)
{
    if(event == LV_EVENT_CLICKED) {
        static uint8_t cnt = 0;
        cnt++;

        /*Get the first child of the button which is the label and change its text*/
        lv_obj_t * label = lv_obj_get_child(btn, NULL);
        lv_label_set_text_fmt(label, "Button: %d", cnt);
    }
}

/**
 * Create a button with a label and react on Click event.
 */
void lv_ex_get_started_1(void)
{
    lv_obj_t * btn = lv_btn_create(lv_scr_act(), NULL);     /*Add a button the current screen*/
    lv_obj_set_pos(btn, 10, 10);                            /*Set its position*/
    lv_obj_set_size(btn, 120, 50);                          /*Set its size*/
    lv_obj_set_event_cb(btn, btn_event_cb);                 /*Assign a callback to the button*/

    lv_obj_t * label = lv_label_create(btn, NULL);          /*Add a label to the button*/
    lv_label_set_text(label, "Button");                     /*Set the labels text*/
}
```

