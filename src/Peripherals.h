#pragma once
#include "PinAssignments.h"
#include <Arduino.h>
#include <Wire.h>
#include <NeoPixelBus.h>
#include <Adafruit_SSD1306.h>
#include "Hardware/Display.h"
#include "Hardware/Encoders.h"
#include "Hardware/SRTrigger.h"
#include "Hardware/Buttons.h"

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
        //access to set our button callbacks
        void setOnCick(uint8_t button, ButtonCallback func)
        {
            buttons.setOnClick(button, func);
        }
        // for the encoder callbacks
        void setOnTurn(uint8_t idx, EncoderCallback func)
        {
            enc.encs[idx].callback = func;
        }

    private:
        SPIClass spi;
    public:
        Display sequenceDisplay;
        Display trackDisplay;
    private:
        NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> pixels;
        byte potLevels[8];
        String deviceIP;
        Encoders enc;
    public:
        SRTrigger trig;
        Buttons buttons;
};
