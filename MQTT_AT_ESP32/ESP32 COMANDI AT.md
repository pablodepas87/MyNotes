# ESP32 COMANDI AT

link di riferimento : https://docs.espressif.com/projects/esp-at/en/latest/AT_Command_Set/index.html

N.B. : The length of the entire AT command should be less than 256 Bytes.

**AT  ----> resp: ok**   // capisco che la scheda risponde

##### CONFIGURAZIONE WI-FI

**AT+CWMODE? ----> resp +CWMODE: valore OK** // chiedo la modalità in cui è impostato il wifi 2 indica soft access point + station mode

**AT+CWMODE=<mode>[,<auto_connect>] ----> resp: ok** // imposto la modalità dell' esp32

AT+CWJAP?  ----> resp elenco dell'access point a cui si è collegato lo schedino

**AT+CWJAP=[<ssid>],[<pwd>][,][,<pci_en>][,][,<listen_interval>][,][,<jap_timeout>][,]  ----> resp OK** // comando per connettersi ad una rete wifi 

* ex : AT+CWJAP="abc","0123456789" posso anche avere una risposta di errore che sarà +CWJAP:<error code>

**AT+CWJAP ----> resp OK** si connette all'ultima rete WIFI impostata

**AT+CWRECONNCFG?  ----> resp : +CWRECONNCFG:<interval_second>,<repeat_count> OK**  // query per conoscere le impostazioni di riconnessione 

**AT+CWRECONNCFG=<interval_second>,<repeat_count>  ----> resp ok** // imposta i parametri di riconnessione

* ex: AT+CWRECONNCFG=1,100  // tenterà di riconnettersi  ogni secondo per 100 volte
* ex: AT+CWRECONNCFG=0,0      // non tenterà di riconnetersi

AT+CWLAP ----> resp:

 +CWLAP:<ecn>,<ssid>,<rssi>,<mac>,<channel>,<freq_offset>,<freqcal_val>,<pairwise_cipher>,<group_cipher>,<bgn>,<wps>
OK

restituisce l'elenco di tutti gli access point

**AT+CWAUTOCONN =<enable> ----> resp : OK**  // imposta la riconnessione se si disconnette il valore può essere 0 o 1

**AT+CWQAP ----> resp: ok** // l' esp32 si disconnette dall' AP

**AT+CWHOSTNAME? ----> resp +CWHOSTNAME = <hostname>** // chiedo all'esp32 il suo nome

**AT+CWHOSTNAME=<hostname> ---> resp :ok oppure error** // imposto il nome all'esp32  

## COMANDI AT - MQTT ESP32

AT+MQTTUSERCFG=<LinkID>,<scheme>,<"client_id">,<"username">,<"password">,<cert_key_ID>,<CA_ID>,<"path"> ---> resp: ok // mi va ad impostare la configurazione 

```
Parameters

    <LinkID>: currently only supports link ID 0.
    <scheme>:
        1: MQTT over TCP.
        2: MQTT over TLS (no certificate verify).
        3: MQTT over TLS (verify server certificate).
        4: MQTT over TLS (provide client certificate).
        5: MQTT over TLS (verify server certificate and provide client certificate).
        6: MQTT over WebSocket (based on TCP).
        7: MQTT over WebSocket Secure (based on TLS, no certificate verify).
        8: MQTT over WebSocket Secure (based on TLS, verify server certificate).
        9: MQTT over WebSocket Secure (based on TLS, provide client certificate).
        10: MQTT over WebSocket Secure (based on TLS, verify server certificate and provide client certificate).
    <client_id>: MQTT client ID. Maximum length: 256 Bytes.
    <username>: the user name to login to the MQTT broker. Maximum length: 64 Bytes.
    <password>: the password to login to the MQTT broker. Maximum length: 64 Bytes.
    <cert_key_ID>: certificate ID. Currently, ESP-AT only supports one certificate for ID 0.
    <CA_ID>: CA ID. Currently, ESP-AT only supports one CA for ID 0.
    <path>: the path of the resource. Maximum length: 32 Bytes
```

**AT+MQTTCLIENTID=<LinkID>,<"client_id"> ---> resp: ok**  // imposta il client id è possibile farlo anche con il comando su 

**AT+MQTTCONNCFG=<LinkID>,<keepalive>,<disable_clean_session>,<"lwt_topic">,<"lwt_msg">,<lwt_qos>,<lwt_retain> ----> resp OK**  // imposta la connessione dell'mqtt

**AT+MQTTCONN? ----> resp : +MQTTCONN:<LinkID>,<state>,<scheme><"host">,<port>,<"path">,<reconnect>**
OK   // mostra informazioni sulla connessione mqtt corrente

**AT+MQTTCONN=<LinkID>,<"host">,<port>,<reconnect>** // imposta la connessione dell'mqtt

**AT+MQTTCLEAN=<LinkID> ---> resp :  ok** // serve x chiudere la connessione mqtt

**AT+MQTTPUB=<LinkID>,<"topic">,<"data">,<qos>,<retain> ----> resp ok** // mi serve per pubblicare un mes sul topic la lunghezza dell'intero comando AT è di 256 bytes

**AT+MQTTPUBRAW=<LinkID>,<"topic">,<length>,<qos>,<retain> ---> resp ok >**  // utile quando devo inviare un messaggio piu grande di 256 bytes  se la transizione è avvenuta con successo avrò **+MQTTPUB:OK** altrimenti **+MQTTPUB:FAIL**

**AT+MQTTSUB?**  ---> resp : elenco dei topic a cui si è sottoscritti // serve appunto per sapere a quali topic si ci è sottoscritti

**AT+MQTTSUB=<LinkID>,<"topic">,<qos>** ----> resp ok  oppure NO UNSUBSCRIBE  se sn già iscritto al topic ALREADY SUBSCRIBE // mi sottoscrivo ad un topic 

quando ricevo un messaggio sul topic avrò :

**+MQTTSUBRECV:<LinkID>,<"topic">,<data_length>,data**

**AT+MQTTUNSUB=<LinkID>,<"topic">  ---> resp : ok oppure NO UNSUBSCRIBE**  // serve per eliminare la sottoscrizione dal topic