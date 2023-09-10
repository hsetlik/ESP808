#pragma once
#include "PinAssignments.h"
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <U8g2lib.h>
#include <array>
#include <NeoPixelBus.h>

using I2CDisplay = U8G2_SSD1306_128X64_NONAME_1_SW_I2C;

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
    private:
        I2CDisplay d1;
        I2CDisplay d2;
        NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> pixels;
        SPIClass spi;
        std::array<byte, 8> potLevels;
};
