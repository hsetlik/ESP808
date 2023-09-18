#pragma once
#include "Peripherals.h"
#include "State/Sequence.h"
#include "EncoderTool.h"


class Processor
{
public:
    Processor();
private:
    Peripherals periph;
    Sequence sequence;
    EncoderTool::EncPlex74165 encs;
};