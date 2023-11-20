#include "Encoders.h"

Encoder::Encoder(uint8_t p1, uint8_t p2, EncoderID i) : 
id(i),
enc(p1, p2, RotaryEncoder::LatchMode::FOUR3),
position(0)
{
    
}

void Encoder::tick()
{
    enc.tick();
    long newPos = enc.getPosition();
    if(newPos > position)
    {
        position = newPos;
        callback(true);
    }
    else if(newPos < position)
    {
        position = newPos;
        callback(false);
    }
}
//==================================================================
Encoders::Encoders() :
encs({
Encoder(ENCA_L, ENCA_R, EncoderID::EncA),
Encoder(ENCB_L, ENCB_R, EncoderID::EncB),
Encoder(ENCC_L, ENCC_R, EncoderID::EncC),
Encoder(ENCD_L, ENCD_R, EncoderID::EncD)
})
{

}

void Encoders::tick()
{
    for(uint8_t i = 0; i < 4; i++)
    {
        encs[i].tick();
    }
}