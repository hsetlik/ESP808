#include <TaskScheduler.h>
#include "Processor.h"

#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include "WifiCreds.h"


Peripherals* p = nullptr;
Processor* proc = nullptr;

Scheduler ts;
//callbacks for the tasks
void pollInputs()
{
  p->pollInputs();
}
void updateTriggers()
{
  proc->tickTriggers();
}
void updateDisplays()
{
  p->updateDisplays();
}
void updatePixels()
{
  proc->updatePixels();
}

Task t1(3 * TASK_MILLISECOND, TASK_FOREVER, &pollInputs, &ts, true);
Task t2(10 * TASK_MILLISECOND, TASK_FOREVER, &updateTriggers, &ts, true);
Task t3(42 * TASK_MILLISECOND, TASK_FOREVER, &updateDisplays, &ts, true);
Task t4(42 * TASK_MILLISECOND, TASK_FOREVER, &updatePixels, &ts, true);


void setup() 
{
  Wire.setPins(SDA_PIN, SCL_PIN);
  Wire.begin();
  // set up WiFi for OTA updates
  Serial.begin(115200);
  Serial.println("Booting");

  p = new Peripherals();
  proc = new Processor(p);

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

  Serial.println("Initialized peripherals");
  // init the hardware
  p->setAddress(WiFi.localIP().toString().c_str());

  Serial.println("Set Local IP address");
}

void loop() 
{
  // put your main code here, to run repeatedly:
  ArduinoOTA.handle();
  ts.execute();
}
