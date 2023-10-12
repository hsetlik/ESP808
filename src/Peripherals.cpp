#include "Peripherals.h"

Peripherals::Peripherals() :
d1(U8G2_R0, SCL_PIN, SDA_PIN),
d2(U8G2_R0, SCL_PIN, SDA_PIN),
pixels(28, PIXEL_DATA)
{
    spi.begin(SCK_PIN, MISO_PIN, MOSI_PIN, POT_CS);
    for(auto& val : potLevels)
    {
        val = 255;
    }
    updatePots();

    pixels.Begin();
    pixels.Show();

    // set up pin modes for the output trigger shift register
    pinMode(TRIG_CLK, OUTPUT);
    pinMode(TRIG_DATA, OUTPUT);
    pinMode(TRIG_LATCH, OUTPUT);

    digitalWrite(TRIG_LATCH, HIGH);
}

Peripherals::~Peripherals()
{

}
void Peripherals::updatePots()
{
    // these are the command bytes we use to write to each pot
    const byte write1Command = 0x12;
    const byte write2Command = 0x11;
    //pull the chip select low
    digitalWrite(POT_CS, LOW);
    byte command = write1Command;
    for(size_t i = 0; i < 8; i++)
    {
        spi.transfer(command);
        spi.transfer(potLevels[i]);
        command = (command == 0x12) ? write2Command : write1Command;
    }
    // put the chip select back
    digitalWrite(POT_CS, HIGH);
}


void Peripherals::setKeypadPixel(size_t idx, HsbColor color)
{
    pixels.SetPixelColor(idx, color);
}
void Peripherals::setInstPixel(size_t idx, HsbColor color)
{
    pixels.SetPixelColor(idx + 16, color);
}
void Peripherals::setPagePixel(size_t idx, HsbColor color)
{
    pixels.SetPixelColor(idx + 20, color);
}

void Peripherals::updatePixels()
{
    pixels.Show();
}