#include "SRInputs.h"

SRState SRState::load(byte ce, byte clk, byte data, byte load)
{
    SRState s;
    s.state = 0;
    // trigger the load pin
    digitalWrite(load, LOW);
    delayMicroseconds(5);
    digitalWrite(load, HIGH);
    delayMicroseconds(5);

    digitalWrite(clk, HIGH);
    digitalWrite(ce, LOW);
    // load each of the 4 bytes
    for(byte i = 0; i < 4; i++)
    {
        byte newest = shiftIn(data, clk, LSBFIRST);
        unsigned long full = (unsigned long)newest << (i * 8);
        s.state = s.state & full;
    }
    digitalWrite(ce, HIGH);
    return s;
}

//====================================================================================

SRInputs::SRInputs() : numButtons(0), numEncoders(0)
{

}

void SRInputs::tick()
{
    auto state = SRState::load(SR_CE, SR_CLK, SR_DATA, SR_LOAD);
    buf.push(state);
    // check the buttons
    for(byte i = 0; i < numButtons; i++)
    {
        byte pin = buttons[i].bitIndex;
        if(buf[0][pin] && buf[1][pin]) //super crude debouncing, probably needs fixing
            buttons[i].onClick();
    }
}

void SRInputs::addButton(const std::string& name, byte index, ButtonCallback callback)
{
    if(numButtons < MAX_BUTTONS)
    {
        auto* button = &buttons[numButtons];
        button->bitIndex = index;
        button->id = name;
        button->onClick = callback;
        ++numButtons;
    }
}

void SRInputs::addEncoder(const std::string& name, byte lIndex, byte rIndex, EncoderCallback callback)
{
    if(numEncoders < MAX_ENCODERS)
    {
        auto* enc = &encoders[numEncoders];
        enc->id = name;
        enc->lBitIndex = lIndex;
        enc->rBitIndex = rIndex;
        enc->onChange = callback;
        ++numEncoders;
    }
}