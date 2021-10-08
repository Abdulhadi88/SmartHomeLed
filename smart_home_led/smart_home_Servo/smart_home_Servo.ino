
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk


char auth[] = "GJr5Ym65k6oLIWyAK-hIE4NEmAZC1jOm";
char ssid[] = "Realme3";
char pass[] = "12345678";

void setup()
{
  // Debug console
  Serial.begin(9600);//memulai serial monitor dengan boudrate 9600

  Blynk.begin(auth, ssid, pass);//menjalankan blynk sesuai token,wifi dan pass

 
}

void loop()
{
  Blynk.run();// memulai blynk
}
