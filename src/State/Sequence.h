#pragma once
#include "../Peripherals.h"
#include <vector>
#define SEQ_LENGTH 64
#define PAGE_LENGTH 16
static const std::vector<std::string> trackNames = 
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
    std::string name;
    std::array<bool, SEQ_LENGTH> steps;
    std::string encode(); //encodes this track as a string for saving/loading reasons
    SequenceTrack(); // default constructor
    SequenceTrack(std::string data); // construct from a string encoding created by `encode()`
};

struct Sequence
{
    std::string name;
    std::vector<SequenceTrack> tracks;
    Sequence(); //default constructor
    std::string encode();
    void load(const std::string& data);
};