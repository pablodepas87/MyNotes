# MOSQUITTO NOTES

#### 1. start/stop mosquitto da linea di comando 

​	posizionarsi prima nella cartella di mosquitto poi :

​	`net start mosquitto`   

​	`net stop mosquitto`

#### 2. Start mosquitto in modo verbose e in modalità logging

posizionarsi sempre nella cartella di mosquitto poi:

`.\mosquitto.exe -v -p 8883 -c mosquitto.conf`

in questo caso lo faccio partire sulla porta 8883 che è quella che usa i certificati.Quelli del server sn nella cartella certs nella dir di installazione.Il path dei certificati va impostato nel file mosquitto.conf nell'apposita sezione  

impostare il file conf affinche possa funzionare con i certificati  le variabile da settare sn:

