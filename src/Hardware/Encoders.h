#pragma once
#include "../PinAssignments.h"
#include <RotaryEncoder.h>
#include <functional>
using EncoderCallback = std::function<void(bool)>;

enum EncoderID
{
    EncA,
    EncB,
    EncC,
    EncD
};

class Encoder
{
public:
    Encoder(uint8_t pin1, uint8_t pin2, EncoderID i);
    const EncoderID id;
    EncoderCallback callback;
    void tick();
private:
    RotaryEncoder enc;
    long position;

};
class Encoders
{
public:
    Encoders();
    void tick();
private:
    Encoder a;
    Encoder b;
    Encoder c;
    Encoder d;
};