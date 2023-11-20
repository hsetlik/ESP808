#pragma once
#include "Peripherals.h"
#include "State/Sequence.h"
#include "State/Colors.h"
#define DEFAULT_TEMPO 120
#define SEQ_LENGTH 64
#define PAGE_LENGTH 16
class Processor
{
public:
    Processor(Peripherals* p);
    // this updates the currentStep and sends any appropriate triggers
    void tickTriggers();
    //update LEDs here
    void updatePixels();
private:
    //helpers to organize things in ths .cpp a bit
    void updateSequencePixels();
    void updatePagePixels();
    void updateTrackPixels();
    Peripherals* const peripherals;


    // these keep track of the actual state of the drum machine
    uint32_t tempo;
    bool isPlaying;
    Sequence sequence;
    uint8_t currentTrack;
    uint8_t currentStep;
    unsigned long lastAdvanceMillis;
};