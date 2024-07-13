#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <avr/pgmspace.h>

#define NUM_DIGITAL_PINS            20
#define NUM_ANALOG_INPUTS           6
#define analogInputToDigitalPin(p)  ((p < 6) ? (p) + 14 : -1)

#define digitalPinHasPWM(p)         ((p) == 3 || (p) == 5 || (p) == 6 || (p) == 9 || (p) == 10 || (p) == 11)

static const uint8_t SS   = 10;
static const uint8_t MOSI = 11;
static const uint8_t MISO = 12;
static const uint8_t SCK  = 13;

static const uint8_t SDA = 18;
static const uint8_t SCL = 19;
static const uint8_t LED_BUILTIN = 13;

static const uint8_t A0 = 14;
static const uint8_t A1 = 15;
static const uint8_t A2 = 16;
static const uint8_t A3 = 17;
static const uint8_t A4 = 18;
static const uint8_t A5 = 19;

#define digitalPinToPCICR(p)    ( ((p) >= 0 && (p) <= 19) ? (&PCICR) : ((uint8_t *)0) )
#define digitalPinToPCICRbit(p) ( ((p) <= 7) ? 2 : (((p) <= 13) ? 0 : 1) )
#define digitalPinToPCMSK(p)    ( ((p) <= 7) ? (&PCMSK2) : (((p) <= 13) ? (&PCMSK0) : (((p) <= 19) ? (&PCMSK1) : ((uint8_t *)0))) )
#define digitalPinToPCMSKbit(p) ( ((p) <= 7) ? (p) : (((p) <= 13) ? ((p) - 8) : ((p) - 14)) )

#endif
