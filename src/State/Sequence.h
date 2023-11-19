#pragma once
#include "../Peripherals.h"
#include <vector>
#define SEQ_LENGTH 64
#define PAGE_LENGTH 16
static const std::vector<String> trackNames = 
{
    "Kick1",
    "Kick2",
    "Snare",
    "OpenHat",
    "ClosedHat",
    "Clap",
    "Clave",
    "Dig1",
    "Dig2",
    "Dig3"
};

struct SequenceTrack
{
    String name;
    std::array<bool, SEQ_LENGTH> steps;
    String encode(); //encodes this track as a string for saving/loading reasons
    SequenceTrack(); // default constructor
    SequenceTrack(String data); // construct from a string encoding created by `encode()`
};

struct Sequence
{
    String name;
    std::vector<SequenceTrack> tracks;
    Sequence(); //default constructor
    String encode();
    void load(const String& data);
};