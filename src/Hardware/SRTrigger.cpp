#include "SRTrigger.h"

SRTrigger::SRTrigger() : currentState(0), nextState(0)
{
    pinMode(TRIG_CLK, OUTPUT);
    pinMode(TRIG_DATA, OUTPUT);
    pinMode(TRIG_LATCH, OUTPUT);
}

void SRTrigger::trigger(byte idx)
{
    nextState = nextState & (1 << idx);
    currentTriggers.push({idx, millis()});
}

void SRTrigger::tick()
{
    unsigned long now = millis();
    while(!currentTriggers.empty() && (now - currentTriggers.front().time) >= TRIG_LENGTH_MS)
    {
        nextState = nextState & ~(1 << currentTriggers.front().idx);
        currentTriggers.pop();
    }
    if(currentState != nextState)
    {
       digitalWrite(TRIG_LATCH, LOW);
       shiftOut(TRIG_DATA, TRIG_CLK, LSBFIRST, nextState);
       digitalWrite(TRIG_LATCH, HIGH);
       currentState = nextState;
    }
}