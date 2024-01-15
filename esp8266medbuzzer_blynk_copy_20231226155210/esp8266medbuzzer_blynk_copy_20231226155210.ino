// Chage These Credentials with your Blynk Template credentials 
#define BLYNK_TEMPLATE_ID "TMPL4otdFxM2f"
#define BLYNK_TEMPLATE_NAME "MQ2 Detector"
#define BLYNK_AUTH_TOKEN "ugp8KTw-bRp5gXTF_WE3LIwz00kz0tHX"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Tele2_658e99"; // Change your Wifi/ Hotspot Name
char pass[] = "fzm5edmj"; // Change your Wifi/ Hotspot Password

BlynkTimer timer;
#define D5 14
#define D6 12
#define D7 13

#define MQ2 A0
#define GREEN D5
#define RED D6
#define buzzer  D7
int MQ2_Val = 0;

WidgetLED led(V1);
void sendBlynkNotification() {
}

void setup() //Setup function - only function that is run in deep sleep mode
{
  Serial.begin(9600); //Start the serial output at 115,200 baud
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  Blynk.begin(auth, ssid, pass);//Splash screen delay
  delay(2000);
  timer.setInterval(1000L, mySensor);
}

void loop() //Loop function
{
  Blynk.run();
  timer.run();
}


void mySensor()
{
  MQ2_Val = analogRead(MQ2);
  for(int x = 0 ; x < 100 ; x++)
    {
        MQ2_Val = MQ2_Val + analogRead(MQ2);
    }
    MQ2_Val = MQ2_Val/100.0;
  
  Blynk.virtualWrite(V0, MQ2_Val);
    
  if (MQ2_Val > 600)
  {
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    digitalWrite(buzzer, HIGH);
    led.on();
    Serial.print("det finns gas here..  ");
    Serial.println(MQ2_Val);
    sendBlynkNotification();
    Blynk.logEvent("error");

  }

  else
  {
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(buzzer, LOW);
    led.off();
  }  
  Serial.print("MQ2 Level: ");
  Serial.println(MQ2_Val);
  
}