#pragma once
#include <SPI.h>
#include "../PinAssignments.h"
#define BUFFER_SIZE 512

//wrapper around the three bytes returned by the shift registers
struct ButtonStateData
{
public:
    uint8_t data[3];
    bool get(uint8_t idx);
};
// simple circular buffer to keep track of button data
class ButtonDataBuffer
{
    public:
        void pushData(ButtonStateData d)
        {
            data[head] = d;
            head = (head + 1) % BUFFER_SIZE;
        }
        ButtonStateData& operator[](int idx)
        {
            idx = (head + idx) % BUFFER_SIZE;
            return data[idx];
        }
    private:
        ButtonStateData data[BUFFER_SIZE];
        int head;
};

class Buttons
{
public:
    Buttons(SPIClass* s);
    SPIClass* const spi;
    void tick();
private:
    ButtonDataBuffer buffer;
    uint8_t bits[3];
};