#include <Arduino.h>
#include <WiFi.h>

#include "config.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.println("\nConnecting");

    while(WiFi.status() != WL_CONNECTED){
        Serial.print(".");
        delay(100);
    }

    Serial.println("\nConnected to the WiFi network");
    Serial.print("Local ESP32 IP: ");
    Serial.println(WiFi.localIP());
    Serial.println(WiFi.gatewayIP());
    Serial.println(WiFi.macAddress());
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Hello");
  if (WL_CONNECTED == WiFi.status())
  {
        Serial.print(" World on ");
        Serial.println(WiFi.localIP());
  } 
  else
  {
    Serial.println(" nowhere :-(");
  }
  delay(5000);
}