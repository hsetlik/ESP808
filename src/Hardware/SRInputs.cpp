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