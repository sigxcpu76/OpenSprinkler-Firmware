#ifndef __CUSTOM_DEFINES

#define __CUSTOM_DEFINES 1

#include <Arduino.h>

static const byte RELAY8_PIN_0  = 16;
static const byte RELAY8_PIN_1  = 14;
static const byte RELAY8_PIN_2  = 12;
static const byte RELAY8_PIN_3  = 13;
static const byte RELAY8_PIN_4  = 15;
static const byte RELAY8_PIN_5  = 0;
static const byte RELAY8_PIN_6  = 4;
static const byte RELAY8_PIN_7  = 5;

static const byte RELAY8_PINS_ALL[] = {
    RELAY8_PIN_0,
    RELAY8_PIN_1,
    RELAY8_PIN_2,
    RELAY8_PIN_3,
    RELAY8_PIN_4,
    RELAY8_PIN_5,
    RELAY8_PIN_6,
    RELAY8_PIN_7,
};

static const byte RELAY8_PINS_ALL_SIZE = sizeof(RELAY8_PINS_ALL)/sizeof(byte);

static const byte RELAY8_PINS_STATIONS[] = {
    RELAY8_PIN_0,
    RELAY8_PIN_1,
    RELAY8_PIN_2,
    RELAY8_PIN_3,
    RELAY8_PIN_4,
    RELAY8_PIN_5,
    RELAY8_PIN_6,
    RELAY8_PIN_7,
};

static const byte RELAY8_PINS_STATIONS_SIZE = sizeof(RELAY8_PINS_STATIONS)/sizeof(byte);


#endif
