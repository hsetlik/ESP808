#ifndef PIN_ASSIGN
#define PIN_ASSIGN
#pragma once
#include <Arduino.h>
// The pin numbers on the ESP32-S3 dev board

// shared SPI pins (for the digital pots and card reader)
#define SCK_PIN 1
#define MOSI_PIN 2
#define MISO_PIN 18

//chip select for each device
#define POT_CS 11
#define READER_CS 12

//I2C pins for the 2 displays
#define SDA_PIN 13
#define SCL_PIN 14

// to control the tri-sate shift registers over SPI
#define SR_LOAD 6
#define SR_CE 7

// encoder pins
#define ENCA_L 15
#define ENCA_R 16

#define ENCB_L 39
#define ENCB_R 40

#define ENCC_L 41
#define ENCC_R 42

#define ENCD_L 47
#define ENCD_R 48

// pins for the trigger signal output 74HC595 shift register
#define TRIG_DATA 8
#define TRIG_LATCH 9
#define TRIG_CLK 10

// I2S DAC pins
#define I2S_DATA 21
#define I2S_CLK 35
#define I2S_LRC 36
#define I2S_BCK 5

// neo pixels
#define PIXEL_DATA 17

// midi
#define MIDI_IN 37
#define MIDI_OUT 38

#endif // !PIN_ASSIGN