#pragma once
#include "Peripherals.h"
#include "State/Sequence.h"
#include "State/Colors.h"
#define DEFAULT_TEMPO 120

class Processor
{
public:
    Processor(Peripherals* p);
    // all the UI events need to go here
    //update LEDs here
    void updatePixels();
    //send new values to the trigger shift register
private:
    Peripherals* const peripherals;



    uint32_t tempo;
    Sequence sequence;
};