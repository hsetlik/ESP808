#pragma once
#include <SPI.h>
#include "../PinAssignments.h"
#include <functional>
#define BUFFER_SIZE 512
#define MAX_BUTTONS 24

//wrapper around the three bytes returned by the shift registers
struct ButtonStateData
{
public:
    uint8_t data[3];
    bool get(uint8_t idx);
};

// simple one-ended circular buffer to keep track of button data
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

using ButtonCallback = std::function<void()>;
// data structure for the callbacks associated with a particular button
struct CallbackData
{
    bool isActive=false;
    ButtonCallback onClick;
    ButtonCallback onHold;
};

class Buttons
{
public:
    Buttons(SPIClass* s);
    SPIClass* const spi;
    void tick();
    // for setting the callbacks from other code
    void setOnClick(uint8_t button, ButtonCallback func);
    void setOnHold(uint8_t button, ButtonCallback func);

private:
    ButtonDataBuffer buffer;
    CallbackData callbacks[MAX_BUTTONS];
};