COMANDI OPERATIVI ESP32 

AT+CWMODE?  // gli chiedo la modalità

AT+CWMODE=1 // LO IMPOSTO COME station e mi collego ad un AP

AT+CWJAP? // gli chiedo l'ap a cui è collegato

AT+CWLAP // restituisce la lista delle rete wifi

AT+CWJAP="FRITZ!Box 7530 ZN","03046460488089077952","98:9b:cb:9b:e5:40" // mi connetto alla rete di casa il mac l'ho ottenuto con AT+CWLAP

AT+CWAUTOCONN=1 // imposto la riconnessione nel caso in cui si disconnette 

at+mqttusercfg=0,1,"ESP32","","",0,0,""   //

at+mqttconn=0,"192.168.178.67",1883,1  // x casa mia ip pc hp

AT+MQTTPUB=0,"test_esp32","ciao sn esp32",0

/-----------------------------

impostare certificati

at+sysflash? // mi restituisce

"mqtt_ca",64,14,0x3b000,0x2000

mqtt_key",64,13,0x39000,0x2000

mqtt_cert",64,12,0x37000,0x2000

// se voglio scrivere io i certificati

at+sysflash=0,"mqtt_key",0,8192   // cancello la partizione della mqtt_key"

at+sysflash=2,"mqtt_key",0,8192  // controllo che sia cancellata la flash

at+sysflash=1,"mqtt_key",0,1716  // scrivo 1702 byte (grandezza del certificato in formato bin)

at+sysflash=0,"mqtt_cert",0,8192   // cancello la partizione della mqtt_cert"

at+sysflash=2,"mqtt_cert",0,8192  // controllo che sia cancellata la flash

at+sysflash=1,"mqtt_cert",0,1376 // scrivo 1376 byte (grandezza del certificato)

at+sysflash=0,"mqtt_ca",0,8192   // cancello la partizione della mqtt_cert"

at+sysflash=2,"mqtt_ca",0,8192  // controllo che sia cancellata la flash

at+sysflash=1,"mqtt_ca",0,1496 // scrivo 1496 byte (grandezza del certificato)

**// ora imposta l'mqq con la modalità certificati che vanno messi nelle zone** **mqtt_ca mqtt_key mqtt_cert della flash**

at+mqttusercfg=0,4,"ESP32","","",0,0,""

at+mqttconn=0,"192.168.178.20",8883,1

AT+MQTTPUB=0,"test_esp32","ciao sn esp32",0,0  // invio un messaggio al broker al topic "test_esp32" 

// sett x aws micro

at+mqttconn=0,"a37qfp0ijxund6-ats.iot.eu-central-1.amazonaws.com",8883,1

AT+MQTTPUB=0,"test_esp32_fabio_rapicano","ciao sn esp32",0,0

// COMANDI AT+HTTP

AT+HTTPCLIENT=2,0,,"reqbin.com","/echo/get/json",1

AT+HTTPCLIENT=2,0,,"jsonplaceholder.typicode.com","/posts/42",1

AT+HTTPGETSIZE="https://www.google.it"

AT+HTTPGETSIZE="http://192.168.0.178/MsTestReports/apo/api/reportlist?page=2"

AT+HTPPCLIENT=2,0,"https://covid19-api.org/api/status/IT","covid19-api.org","/api/status/IT",2,,["Content-Type: application/json;charset=UTF-8 Content-Length: 129 Connection: keep-alive"]

AT+HTTPGETSIZE="https://covid19-api.org/api/status/IT"

AT+HTTPCLIENT=1,0,"https://covid19-api.org/",,,1

AT+HTTPGETSIZE="https://covid19-api.org/"

at+httpclient=2,1,"https://covid19-api.org/api/status/it",,,1

at+httpclient=2,0,,"covid19-api.org","/api/status/it",0,"Connection: keep-alive","Accept: */*","Accept-Encoding: gzip, deflate, br","Accept-Language: it-IT,it;q=0.8,en-US;q=0.5,en;q=0.3",

at+httpclient=2,0,"https://covid19-api.org/api/status",,,1

AT+HTTPCLIENT=3,2,,"ec2-18-196-118-43.eu-central-1.compute.amazonaws.com:3000","/api/login",1,,"username=bellei@micro-systems.it&password=1234"

AT+HTTPGETSIZE="http://ec2-18-196-118-43.eu-central-1.compute.amazonaws.com:3000/api/login"

AT+CIPSTART="TCP","ec2-18-196-118-43.eu-central-1.compute.amazonaws.com",3000,3600

at+cipsend=208  // 208 è il totale dei bytes della richiesta sotto

> POST /api/login HTTP/1.1
> Host: ec2-18-196-118-43.eu-central-1.compute.amazonaws.com:3000
> Content-Type: application/x-www-form-urlencoded
> Content-Length: 46
>
> username=bellei@micro-systems.it&password=1234

AT+HTTPCPOST="http://ec2-18-196-118-43.eu-central-1.compute.amazonaws.com:3000/api/login",46,2

AT+HTTPCLIENT=1,0,"http://ec2-18-196-118-43.eu-central-1.compute.amazonaws.com:3000/api/login",,,1 // funziona

AT+HTTPCLIENT=3,0,"ec2-18-196-118-43.eu-central-1.compute.amazonaws.com:3000/api/login",,,1 // funziona

AT+CWJAP="NETGEAR-Guest","Guest2012","8c:3b:ad:11:6f:9e"

