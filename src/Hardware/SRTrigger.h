#pragma once
#include "../PinAssignments.h"
#include <Arduino.h>
#include <queue>

#define TRIG_LENGTH_MS 3

class SRTrigger
{
private:
    byte currentState;
    byte nextState;
    struct TrigEvent
    {
        byte idx; // which pin was triggered
        unsigned long time; // the value of millis when it was triggered
    };
    std::queue<TrigEvent> currentTriggers;
public:
    SRTrigger(); 
    void trigger(byte idx);
    void tick();
};