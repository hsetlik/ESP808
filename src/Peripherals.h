#pragma once
#include "PinAssignments.h"
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <array>
#include <NeoPixelBus.h>
#include <Adafruit_SSD1306.h>
#include "Hardware/Display.h"
#include "Hardware/Encoders.h"
#include "Hardware/SRTrigger.h"

#if CONFIG_IDF_TARGET_ESP32S2 || CONFIG_IDF_TARGET_ESP32S3
#define VSPI FSPI
#endif

class Peripherals
{
    public:
        Peripherals();
        ~Peripherals();
        void setPotLevel(size_t index, byte level)
        {
            potLevels[index] = level;
        }
        void updatePots();
        
        //setters for the three segments of LEDS
        void setKeypadPixel(size_t idx, HsbColor color);
        void setInstPixel(size_t idx, HsbColor color);
        void setPagePixel(size_t idx, HsbColor color);

        void updatePixels();
        // set the ESP32's current IP for uploading OTA
        void setAddress(const char* addr);
        void updateDisplays();
        void pollInputs();

        void updateTriggers()
        {
            trig.tick();
        }

    private:

        Display sequenceDisplay;
        Display trackDisplay;

        NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> pixels;
        SPIClass spi;
        std::array<byte, 8> potLevels;
        String deviceIP;
        Encoders enc;
        SRTrigger trig;
};
