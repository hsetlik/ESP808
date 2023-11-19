#pragma once
#include "../PinAssignments.h"
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width
#define SCREEN_HEIGHT 64 // OLED display height
#define OLED_RESET -1

#define D1_ADDR 0x3C
#define D2_ADDR 0x3D

#define CUSHION_PX 1
#define TEXT_PX 8

//represents a single line on a display
struct DisplayLine
{
    bool active=false;
    String text="";
    bool highlighted=false;
};

//wrapper for the display library
class Display
{
public:
    Display(uint8_t addr);
    const uint8_t i2cAddress;
    void update()
    {
        disp.display();
    }
    //add a message to the next unused line (if there are unused lines)
    void pushMessage(const String& txt, bool highlight=false);
    //add a message at a specific line
    void setMessage(uint8_t idx, String& txt, bool highlight=false);
private:
    Adafruit_SSD1306 disp;
    DisplayLine lines[6];
    uint8_t linesInUse;
    //helper for line writing code
    void writeLine(uint8_t idx);
};