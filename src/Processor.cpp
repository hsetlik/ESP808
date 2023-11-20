#include "Processor.h"

Processor::Processor(Peripherals* p) : 
peripherals(p),
currentTempo(DEFAULT_TEMPO),
isPlaying(false),
currentTrack(0),
currentStep(0),
highlightedStep(0),
lastAdvanceMillis(0)
{

}

void Processor::tickTriggers()
{
    // check if it's time to advance
    auto now = millis();
    if (now - lastAdvanceMillis >= (60000 / currentTempo) && isPlaying)
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

void Processor::toggleStep(uint8_t stepInPage)
{
    uint8_t page = (uint8_t)floorf((float)currentStep / 16.0f);
    sequence.tracks[currentTrack].steps[(page * PAGE_LENGTH) + stepInPage] = !sequence.tracks[currentTrack].steps[(page * PAGE_LENGTH) + stepInPage];
}
void Processor::shiftTempo(bool up)
{
    if(up)
        currentTempo = std::min<uint32_t>({currentTempo + 1, MAX_TEMPO});
    else
        currentTempo = std::max<uint32_t>({currentTempo - 1, MIN_TEMPO});
}

void Processor::shiftTrack(bool up)
{
    if(up)
    {
        currentTrack = (currentTrack + 1) % sequence.tracks.size();
    }
    else if(currentTrack == 0)
    {
        currentTrack = (uint8_t)sequence.tracks.size() - 1;
    }
    else
        currentTrack -= 1;

}

void Processor::togglePlay()
{
    isPlaying = !isPlaying;
}

void Processor::assignDefaultCallbacks()
{

}