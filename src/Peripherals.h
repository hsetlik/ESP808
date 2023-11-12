#pragma once
#include "PinAssignments.h"
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <array>
#include <NeoPixelBus.h>
#include <Adafruit_SSD1306.h>


#define SCREEN_WIDTH 128 // OLED display width
#define SCREEN_HEIGHT 64 // OLED display height
#define OLED_RESET -1

#define D1_ADDR 0x3C
#define D2_ADDR 0x3D

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
    private:

        Adafruit_SSD1306 sequenceDisplay;
        Adafruit_SSD1306 trackDisplay;

        NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> pixels;
        SPIClass spi;
        std::array<byte, 8> potLevels;
        String deviceIP;
};
