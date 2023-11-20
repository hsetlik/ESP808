#include "Buttons.h"

bool ButtonStateData::get(uint8_t idx)
{
    if (idx < 8)
    {
        return data[0] & (1 << idx);
    }
    else if (idx < 16)
    {
        return data[1] & (1 << (idx - 8));
    }
    else
    {
        return data[2] & (1 << (idx - 16));
    }
}
Buttons::Buttons(SPIClass* s) : spi(s)
{
    //set up pins
    pinMode(SR_CE, OUTPUT);
    pinMode(SR_LOAD, OUTPUT);
    digitalWrite(SR_CE, HIGH);
    digitalWrite(SR_LOAD, HIGH);
}

void Buttons::tick()
{
    //create a 'ButtonStateData' object to hold the data from SPI
    ButtonStateData d;
    //load data via the ESP32-S3's VSPI peripheral (hopefully this is fast?)
    spi->beginTransaction(SPISettings(SPI_CLK, MSBFIRST, SPI_MODE0));
    digitalWrite(SR_LOAD, LOW);
    digitalWrite(SR_CE, LOW);
    digitalWrite(SR_LOAD, HIGH);
    spi->transferBytes(NULL, d.data, 3);
    digitalWrite(SR_CE, HIGH);
    spi->endTransaction();
    //push the lastest data into the buffer
    buffer.pushData(d);
    const uint8_t clickLength = 5;
    //for now we're just checking for clicks, holds will be dealt with later
    for(uint8_t i = 0; i < MAX_BUTTONS; i++)
    {
        if(callbacks[i].isActive) // we don't need to check on buttons that don't have any callbacks assigned
        {
           if(buffer[1].get(i) && !buffer[0].get(i)) // start with buttons that have just gone low to see if they've been clicked
           {
            bool allHigh = true;
            uint8_t idx = 1;
            while (allHigh && idx < clickLength)
            {
                if(!buffer[1 + idx].get(i))
                    allHigh = false;
                idx++;
            }
            if(allHigh)
            {
                callbacks[i].onClick();
            }
           } 
        }
    }
}

void Buttons::setOnClick(uint8_t button, ButtonCallback func)
{
    callbacks[button].isActive = true;
    callbacks[button].onClick = func;
}

void Buttons::setOnHold(uint8_t button, ButtonCallback func)
{
    callbacks[button].isActive = true;
    callbacks[button].onHold = func;
}
