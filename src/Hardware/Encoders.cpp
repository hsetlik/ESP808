#include "Encoders.h"

Encoders::Encoders() :
encA(ENCA_L, ENCA_R, RotaryEncoder::LatchMode::FOUR3),
encB(ENCB_L, ENCB_R, RotaryEncoder::LatchMode::FOUR3),
encC(ENCC_L, ENCC_R, RotaryEncoder::LatchMode::FOUR3),
encD(ENCD_L, ENCD_R, RotaryEncoder::LatchMode::FOUR3)
{

}

void Encoders::poll()
{
    //TODO
}