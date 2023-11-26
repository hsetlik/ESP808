#pragma once
#include "Sequence.h"

// some static methods and stuff to handle the LED colors
struct TrackColor
{
    String name;
    HsbColor color;
};
static const TrackColor trackColors[] = 
{
    {"Kick1", HsbColor(0.0f, 0.61f, 0.65f)},
    {"Kick2", HsbColor(0.341f, 0.78f, 0.065f)},
    {"OpenHat", HsbColor(0.583f, 0.78f, 0.065f)},
    {"ClosedHat", HsbColor(0.077f, 0.8f, 0.065f)},
    {"Clap", HsbColor(0.506f, 0.75f, 0.065f)},
    {"Clave", HsbColor(0.837f, 0.75f, 0.065f)},
    {"Dig1", HsbColor(0.656f, 0.86f, 0.065f)},
    {"Dig2", HsbColor(0.353f, 0.78f, 0.065f)},
    {"Dig3", HsbColor(0.075f, 0.87f, 0.065f)}
};

const HsbColor cursorColor(0.489f, 0.24f, 0.95f);

 static HsbColor withBrightness(const HsbColor& input, float b)
{
    HsbColor output(input);
    output.B = b;
    return output;
}