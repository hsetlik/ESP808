#pragma once
#include "../PinAssignments.h"
#include <RotaryEncoder.h>

class Encoders
{
public:
    Encoders();
    void poll();
private:
    RotaryEncoder encA;
    RotaryEncoder encB;
    RotaryEncoder encC;
    RotaryEncoder encD;
};