#include "MultiTone.h"

#if defined(ESP8266)
#include <Arduino.h>
#else
#include <Tone.h>
#endif

MultiTone::MultiTone(uint8_t pin)
{
    _pin = pin;
#if defined(ESP8266)
#else
    _tone = Tone();
#endif
}

void MultiTone::begin()
{
#if defined(ESP8266)
#else
    _tone.begin(_pin);
#endif
}

void MultiTone::play(uint16_t frequency, uint32_t duration)
{
#if defined(ESP8266)
    tone(_pin, frequency, duration);
#else
    _tone.play(frequency, duration);
#endif
}

void MultiTone::stop()
{
#if defined(ESP8266)
    noTone(_pin);
#else
    _tone.stop();
#endif
}
