#include "Sequence.h"

SequenceTrack::SequenceTrack()
{
    //any initialization business needs to be done here
}

std::string SequenceTrack::encode()
{
    std::string output = name + '-';
    char c = 0x00;
    for(size_t i = 0; i < SEQ_LENGTH; i++)
    {
        size_t bit = i % 8;
        if(steps[i])
        {
            c = c | (1 << bit);
        }
        else
        {
            c = c & ~(1 << bit);
        }
    
        if(bit == 7)
        {
            output += c;
            c = 0x00;
        }
    }
    output += c;
    return output;
}

SequenceTrack::SequenceTrack(std::string data)
{
    name = "";
    size_t index = 0;
    while(data[index] != '-')
    {
        name += data[index];
        ++index;
    }
    //now we've hit the dash, advance the index by 1 for the first sequence character
    ++index;
    for(size_t s = 0; s < SEQ_LENGTH; ++s)
    {
        size_t cIdx = (size_t)std::floor((double)s / 8.0f);
        char c = data[index + cIdx];
        char b = (char)s % 8;
        bool gate = c & (1 << b);
        steps[s] = gate;
    }
}

//=================================================================================================
Sequence::Sequence()
{
    //set up the track names by default
    for(size_t i = 0; i < trackNames.size(); i++)
    {
        SequenceTrack trk;
        trk.name = trackNames[i];
        tracks.push_back(trk);
    }
}

std::string Sequence::encode()
{
    std::string output = name + '-';
    for(auto& t : tracks)
    {
        output += t.encode() + '\n';
    }
    return output;
}

void Sequence::load(const std::string& data)
{
    size_t index = 0;
    name = "";
    tracks.clear();
    while(data[index] != '-')
    {
        name += data[index];
        ++index;
    }
    ++index;
    while(index < data.size())
    {
        auto i2 = index;
        std::string current = "";
        while (data[i2] != '\n')
        {
            current += data[i2];
            ++i2;
        }
        SequenceTrack trk(current);
        tracks.push_back(trk);
        index = i2 + 1;
    }
}