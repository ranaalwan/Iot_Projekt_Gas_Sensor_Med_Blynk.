# Iot_Projekt_Gas_Sensor_Med_Blynk.


<h1 align="center" id="top"></h1>

## Innehållsförteckning.

- [Sammanfattning](#Sammanfattning)
  - [Komponenter](#Komponenter)
- [Översikt](#översikt)
  - [Målet ](#Målet )
  - [Kopplingsschema](#kopplingsschema)
  - [Metodik](#Metodik)
- [Analys och Diskussion](#Analys-och-Diskussion)
- [Slutsatser](#Slutsatser)


## Sammanfattning
Denna projektinriktning fokuserar på att utveckla och implementera en IoT-baserad lösning för övervakning av luftkvaliteten i inomhusmiljöer.
Genom att integrera en MQ2-gassensor med ESP8266 och dra nytta av Blynk-plattformen för datalagring strävar projektet efter att erbjuda en kostnadseffektiv och användarvänlig metod för att noggrant övervaka och rapportera luftkvalitetsparametrar.


### Komponenter
-Sensor: MQ2-gassensor, Summer.
-IoT-enhet: ESP8266-mikrokontroller för datainsamling.
-Blynk: Molnbaserad kommunikation och lagring.


<p align="right">(<a href="#top">tillbaka till toppen</a>)</p>


## Översikt  
Projektet syftar till att utveckla en IoT-baserad lösning för övervakning av luftkvaliteten inomhus med hjälp av en MQ2-gassensor, ESP8266 och Blynk-plattformen. Realtidsdata samlas in och visas i Blynk-appen. Varningar skickas genom Telegram vid onormala gasnivåer.

<img src="Bilder/diagram.drawio.png" width="800" height="600"/>



<p align="right">(<a href="#top">tillbaka till toppen</a>)</p>

### Målet 

Målen med detta projekt strävar efter att uppnå flera aspekter inom området luftkvalitetsövervakning och dess påverkan på människors hälsa och välbefinnande:
-Skapa medvetenhet: Genom att utveckla och implementera en IoT-lösning för luftkvalitetsövervakning syftar projektet till att öka medvetenheten om vikten av ren luft i inomhusmiljöer.
-Förbättra hälsa: Genom att erbjuda realtidsdata om luftkvaliteten och varningar vid potentiellt skadliga nivåer strävar projektet efter att direkt påverka hälsan hos de som vistas i övervakade områden.
-Forskningsbidrag: Genom att noggrant analysera och rapportera resultatet av luftkvalitetsövervakningen, avser projektet att bidra till forskningsområdet genom att tillhandahålla insikter och data som kan vara användbara för framtida studier.
-Teknisk utveckling: Projektet syftar också till att utforska och förbättra tekniska aspekter av IoT-lösningar och sensorintegration för att övervaka luftkvalitet på ett mer effektivt och kostnadseffektivt sätt.


### Kopplingsschema


<img src="Bilder/kopplings.png" width="700" height="600"/>

<img src="Bilder/koppling.jpg" width="800" height="600" />

<br>

<p align="right">(<a href="#top">tillbaka till toppen</a>)</p>

### Metodik

1. Blynk-integration
Skapa ett Blynk-konto och ett nytt projekt.
Lägg till widgetar som Gauge, Value Display eller Graph i Blynk-appen för att representera gasnivåer.
Hämta Blynks auktorisationstoken från Blynk-appen.

2. Anslutning och Programmering med ESP8266
Ändra ESP8266-koden för att inkludera Blynk-biblioteket och ansluta till Blynk-servern.
Ersätt ThingSpeak-relaterad kod med Blynk-funktioner för att skicka data.
Konfigurera ESP8266 för att läsa data från MQ2-sensorn och skicka den till Blynk-servern.



## Analys och Diskussion


Analysera Blynk-appens data för realtidsövervakning.
Kontrollera effektiviteten av visuella och ljudvarningar.
Säkerställ konsekvent dataöverföring till Blynk för kontinuerlig övervakning.



<p align="right">(<a href="#top">tillbaka till toppen</a>)</p>


## Slutsatser 

Projektet bör effektivt övergå till Blynk, vilket ger realtidsövervakning av luftkvaliteten och snabba varningar via Blynk-appen. Vidare forskning kan fokusera på att korrelera gasnivåer med specifika påverkande faktorer och överväga ytterligare parametrar för en omfattande bedömning av inomhusluftkvaliteten.




///README har skapats av Rana Alwan///
<p align="right">(<a href="#top">tillbaka till toppen</a>)</p>
