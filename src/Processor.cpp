#include "Processor.h"

Processor::Processor(Peripherals* p) : 
peripherals(p),
tempo(DEFAULT_TEMPO),
isPlaying(false),
currentTrack(0),
currentStep(0),
lastAdvanceMillis(0)
{

}

void Processor::tickTriggers()
{
    // check if it's time to advance
    auto now = millis();
    if (now - lastAdvanceMillis >= (60000 / tempo) && isPlaying)
    {
        lastAdvanceMillis = now;
        currentStep = (currentStep + 1) % SEQ_LENGTH;
        // now check if we have any triggers to send to the hardware
        for(uint8_t i = 0; i < sequence.tracks.size(); i++)
        {
            if(sequence.tracks[i].steps[currentStep])
            {
                peripherals->trig.trigger(i);
            }
        }
        //send to the hardware
        peripherals->updateTriggers();
    }
}

//===========================================================
void Processor::updatePixels()
{
    updateSequencePixels();
    updatePagePixels();
    updateTrackPixels();

    peripherals->updatePixels();
}

void Processor::updateSequencePixels()
{
    uint8_t page = (uint8_t)floorf((float)currentStep / 16.0f);
    for(uint8_t i = 0; i < PAGE_LENGTH; i++)
    {
        uint8_t step = i + (page * PAGE_LENGTH);
        if(step == currentStep && sequence.tracks[currentTrack].steps[step])
        {
            peripherals->setKeypadPixel((size_t)i, withBrightness(trackColors[currentTrack].color, 0.9f));
        }
        else if (step == currentStep)
        {
            peripherals->setKeypadPixel((size_t)i, cursorColor);
        }
        else if(sequence.tracks[currentTrack].steps[step])
        {
            peripherals->setKeypadPixel((size_t)i, trackColors[currentTrack].color);
        }
    }

}

void Processor::updatePagePixels()
{
    uint8_t page = (uint8_t)floorf((float)currentStep / 16.0f);
    for(size_t i = 0; i < 4; i++)
    {
        if(i == page)
            peripherals->setKeypadPixel(i, cursorColor);
        else
            peripherals->setKeypadPixel(i, withBrightness(cursorColor, 0.2f));
    }
}

void Processor::updateTrackPixels()
{
    for(size_t i = 0; i < 8; i++)
    {
        if(i == currentTrack)
            peripherals->setInstPixel(i, cursorColor);
        else if (sequence.tracks[currentTrack].steps[currentStep])
        {
            peripherals->setInstPixel(i, trackColors[i].color);
        }
    }

}
//===========================================================
