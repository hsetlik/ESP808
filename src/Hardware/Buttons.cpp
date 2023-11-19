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
    //load to the 'bits' array via the VSPI peripheral
    spi->beginTransaction(SPISettings(SPI_CLK, MSBFIRST, SPI_MODE0));
    digitalWrite(SR_LOAD, LOW);
    digitalWrite(SR_CE, LOW);
    digitalWrite(SR_LOAD, HIGH);
    spi->writeBytes(d.data, 3);
    digitalWrite(SR_CE, HIGH);
    spi->endTransaction();
    //TODO: ways to attach callbacks and check the buffer to run them as needed
}

