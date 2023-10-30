#pragma once
#include "PinAssignments.h"
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <U8g2lib.h>
#include <array>
#include <NeoPixelBus.h>

using I2CDisplay = U8G2_SSD1306_128X64_NONAME_1_SW_I2C;

#define D1_ADDR 0x78
#define D2_ADDR 0x7F


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
    private:
        I2CDisplay d1;
        I2CDisplay d2;
        NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> pixels;
        SPIClass spi;
        std::array<byte, 8> potLevels;
};
