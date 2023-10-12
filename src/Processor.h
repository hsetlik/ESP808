#pragma once
#include "Peripherals.h"
#include "State/Sequence.h"


class Processor
{
public:
    Processor();
private:
    Peripherals periph;
    Sequence sequence;
};