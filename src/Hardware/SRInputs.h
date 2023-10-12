#pragma once
#include "../PinAssignments.h"
#include <array>
#include <Arduino.h>
#include <functional>
// a wrapper around a 32 bit unsigned long to store the state of the 4 shift registers
struct SRState
{
private:
    unsigned long state;
public:
    SRState() : state(0) {}
    static SRState load(byte ce, byte clk, byte data, byte load);
    bool operator[](byte idx)
    {
        return state & (1 << idx);
    }
    bool operator==(const SRState& other)
    {
        return state == other.state;
    }
    void operator=(const SRState& other)
    {
        state = other.state;
    }
};

//a little data structure for keeping track of the previous x number of readings from the registers
#define SR_BUF_SIZE 10

class SRRingBuffer
{
private:
    byte head = 0;
    byte tail = 0;
    std::array<SRState, SR_BUF_SIZE> buf;
    const byte cap = SR_BUF_SIZE;
public:
    SRRingBuffer() {}
    void push(SRState s)
    {
        buf[tail] = s;
        tail = (tail + 1) % cap;
        head = (head + 1) % cap;
    }
    SRState& operator[](byte idx)
    {
        return buf[(head + idx) % cap];
    }
};

// for regstering and managing individual buttons/encoders
typedef std::function<void()> ButtonCallback;
typedef std::function<void(bool)> EncoderCallback;

// just define maxes to avoid using a vector
#define MAX_BUTTONS 32
#define MAX_ENCODERS 16


// this should do the heavy lifting
class SRInputs
{
private:
    struct ButtonData
    {
        std::string id;
        byte bitIndex;
        ButtonCallback onClick;
    };
    struct EncoderData
    {
        std::string id;
        byte lBitIndex;
        byte rBitIndex;
        EncoderCallback onChange;
    };
public:
    SRInputs();
    /**
     * @brief 
     * this shifts in new values and runs callbacks as needed
     */
    void tick();
    void addButton(const std::string& name, byte index, ButtonCallback callback);
    void addEncoder(const std::string& name, byte lIndex, byte rIndex, EncoderCallback callback);

private:
    SRRingBuffer buf;
    //store registered encoders/buttons here
    byte numButtons;
    byte numEncoders;
    std::array<ButtonData, MAX_BUTTONS> buttons;
    std::array<EncoderData, MAX_ENCODERS> encoders; 
};