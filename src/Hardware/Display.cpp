#include "Display.h"

Display::Display(uint8_t addr) : 
i2cAddress(addr),
disp(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET),
linesInUse(0)
{
    if(!disp.begin(SSD1306_SWITCHCAPVCC, i2cAddress, false, false)) 
    {
        Serial.println("Couldn't initialize display!");
    }
    disp.clearDisplay();
    disp.setCursor(CUSHION_PX, CUSHION_PX);
    disp.setTextColor(SSD1306_WHITE);
    disp.setTextSize(1);

}

void Display::pushMessage(const String& txt, bool highlight)
{
    if(linesInUse < 6)
    {
        lines[linesInUse].active = true;
        lines[linesInUse].text = txt;
        lines[linesInUse].highlighted = highlight;

        writeLine(linesInUse);
        ++linesInUse;
    }
}


void Display::setMessage(uint8_t idx, String& txt, bool highlight)
{
    if(idx < 6)
    {
        lines[idx].active = true;
        lines[idx].text = txt;
        lines[idx].highlighted = highlight;
        writeLine(idx);
    }
}


void Display::writeLine(uint8_t idx)
{
    auto& line = lines[idx];
    if(line.highlighted)
    {
        disp.fillRect(0, 10 * idx, SCREEN_WIDTH, 10, SSD1306_WHITE);
        disp.setTextColor(SSD1306_BLACK);
    }
    else
    {
        disp.fillRect(0, 10 * idx, SCREEN_WIDTH, 10, SSD1306_BLACK);
        disp.setTextColor(SSD1306_WHITE);
    }
    disp.setCursor(CUSHION_PX, (10 * idx) + CUSHION_PX);
    disp.println(line.text);
}
