#pragma once
#include "Peripherals.h"
#include "State/Sequence.h"
#include "State/Colors.h"
#define DEFAULT_TEMPO 120
#define MIN_TEMPO 30
#define MAX_TEMPO 300
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
    uint32_t currentTempo;
    bool isPlaying;
    Sequence sequence;
    uint8_t currentTrack;
    uint8_t currentStep;
    uint8_t highlightedStep;
    unsigned long lastAdvanceMillis;
    // helper to assign the default callbacks in the constructor and to switch back to the defaults when switching out of alternate modes
    void assignDefaultCallbacks();
    // these are called from the lambdas we pass in the callback assignment functions
    void toggleStep(uint8_t stepInPage);
    void togglePlay();
    void shiftTempo(bool up);
    void shiftTrack(bool up);

    
    


};