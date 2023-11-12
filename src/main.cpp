#include <TaskScheduler.h>
#include "Peripherals.h"

#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include "WifiCreds.h"


/*
tasks needed:
- check inputs, run appropriate callbacks
- update the trigger outputs if needed
- update the LEDs
- update the displays
*/

Peripherals* p = nullptr;
void setup() 
{

  Wire.setPins(SDA_PIN, SCL_PIN);
  Wire.begin();
  // set up WiFi for OTA updates
  Serial.begin(115200);
  Serial.println("Booting");

  WiFi.mode(WIFI_STA);
  WiFi.begin(SSID, WIFI_PASSWORD);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("Connection Failed! Rebooting...");
    delay(5000);
    ESP.restart();
  }
  ArduinoOTA.setHostname("myesp32");

    ArduinoOTA
    .onStart([]() {
      String type;
      if (ArduinoOTA.getCommand() == U_FLASH)
        type = "sketch";
      else // U_SPIFFS
        type = "filesystem";

      // NOTE: if updating SPIFFS this would be the place to unmount SPIFFS using SPIFFS.end()
      Serial.println("Start updating " + type);
    })
    .onEnd([]() {
      Serial.println("\nEnd");
    })
    .onProgress([](unsigned int progress, unsigned int total) {
      Serial.printf("Progress: %u%%\r", (progress / (total / 100)));
    })
    .onError([](ota_error_t error) {
      Serial.printf("Error[%u]: ", error);
      if (error == OTA_AUTH_ERROR) Serial.println("Auth Failed");
      else if (error == OTA_BEGIN_ERROR) Serial.println("Begin Failed");
      else if (error == OTA_CONNECT_ERROR) Serial.println("Connect Failed");
      else if (error == OTA_RECEIVE_ERROR) Serial.println("Receive Failed");
      else if (error == OTA_END_ERROR) Serial.println("End Failed");
    });

  ArduinoOTA.begin();
  Serial.println("WiFi connection successful");
  Serial.println(WiFi.localIP());

  p = new Peripherals();
  Serial.println("Initialized peripherals");
  // init the hardware
  p->setAddress(WiFi.localIP().toString().c_str());

  Serial.println("Set Local IP address");

  //I2CScan();
}

void loop() 
{
  // put your main code here, to run repeatedly:
  ArduinoOTA.handle();
}
