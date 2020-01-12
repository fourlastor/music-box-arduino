#include "MultiTone.h"

#if defined(ESP8266)
#define MAIN_VOICE_PIN 5
#define SECOND_VOICE_PIN 9
#else
#define MAIN_VOICE_PIN 14 // 5 on board
#define SECOND_VOICE_PIN 5 // 1 on board
#endif

#define BREAK 0

MultiTone mainVoice = MultiTone(MAIN_VOICE_PIN);
MultiTone secondVoice = MultiTone(SECOND_VOICE_PIN);

void setup() {
  mainVoice.begin();
  secondVoice.begin();
}

const unsigned short mainMelody[] PROGMEM = {
  BREAK, 1, 1,

  BREAK, 7, 8,
  NOTE_D5, 1, 8,

  NOTE_CS5, 1, 4,
  NOTE_CS5, 1, 8,
  NOTE_GS5, 1, 4,
  NOTE_E5, 3, 8,

  NOTE_FS5, 1, 8,
  NOTE_FS5, 1, 8,
  NOTE_FS5, 1, 8,
  NOTE_A6, 1, 4,
  NOTE_GS5, 1, 8,
  NOTE_GS5, 1, 4,

  NOTE_CS5, 1, 8,
  NOTE_CS5, 1, 8,
  NOTE_CS5, 1, 8,
  NOTE_GS5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 4,

  NOTE_FS5, 1, 8,
  NOTE_FS5, 1, 4,
  NOTE_A6, 1, 4,
  NOTE_GS5, 1, 4,
  NOTE_B5, 1, 8,

  NOTE_A5, 1, 4,
  NOTE_A5, 1, 8,
  NOTE_A5, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_E5, 1, 4,

  NOTE_E5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_FS5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_D5, 1, 8,
  NOTE_CS5, 1, 8,
  NOTE_B5, 1, 8,

  NOTE_A5, 1, 4,
  NOTE_A5, 1, 8,
  NOTE_A5, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_CS5, 1, 8,

  NOTE_GS5, 1, 4,
  NOTE_GS5, 1, 2,
  NOTE_FS5, 1, 4,

  NOTE_CS5, 6, 4,
  NOTE_GS4, 1, 4,
  NOTE_B5, 1, 4,

  NOTE_DS5, 5, 8,
  NOTE_E5, 1, 8, 
  NOTE_DS5, 1, 8, 
  NOTE_B5, 7, 8, 
  NOTE_FS4, 1, 4,

  NOTE_GS4, 2, 4,
  NOTE_GS4, 1, 8,
  NOTE_A5, 1, 8,
  NOTE_GS4, 1, 8,
  NOTE_E4, 9, 8,

  NOTE_DS5, 5, 8,
  NOTE_E5, 1, 8,
  NOTE_DS5, 1, 8,
  NOTE_B5, 7, 8,
  NOTE_FS4, 1, 4,

  NOTE_GS4, 2, 4,
  NOTE_GS4, 1, 8,
  NOTE_A5, 1, 8,
  NOTE_GS4, 1, 8,
  NOTE_E5, 7, 8,
  BREAK, 1, 8,
  NOTE_E4, 1, 8
};

const unsigned short secondMelody[] PROGMEM = {
  NOTE_CS5, 1, 8,
  NOTE_CS5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_CS5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_CS5, 1, 8,
  BREAK, 1, 8,
  NOTE_E5, 1, 8,

  BREAK, 1, 8,
  NOTE_CS5, 1, 8,
  BREAK, 1, 8,
  NOTE_D5, 5, 8,

  NOTE_CS4, 1, 4,
  NOTE_GS4, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_E5, 3, 8,

  NOTE_B4, 1, 4,
  NOTE_FS4, 1, 8,
  NOTE_B5, 1, 4,
  NOTE_DS4, 3, 8,

  NOTE_CS4, 1, 4,
  NOTE_GS4, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_E5, 3, 8,

  NOTE_B4, 1, 4,
  NOTE_FS4, 1, 8,
  NOTE_B5, 1, 4,
  NOTE_DS5, 3, 8,

  NOTE_A4, 1, 4,
  NOTE_E4, 1, 8,
  NOTE_A5, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_E5, 1, 4,

  NOTE_GS3, 1, 4,
  NOTE_DS4, 1, 8,
  NOTE_GS4, 1, 8,
  NOTE_B5, 1, 4,
  NOTE_DS5, 1, 4,

  NOTE_FS3, 1, 4,
  NOTE_FS4, 1, 4,
  NOTE_CS4, 1, 4,
  NOTE_CS5, 1, 4,

  NOTE_GS4, 1, 4,
  NOTE_GS4, 2, 4,
  NOTE_FS4, 1, 4,

  NOTE_CS4, 3, 8,
  NOTE_DS4, 3, 8,
  NOTE_E4, 3, 8,
  NOTE_FS4, 3, 8,
  NOTE_GS4, 1, 4,
  NOTE_GS4, 1, 4,

  NOTE_A3, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A4, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A3, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A4, 1, 8,
  NOTE_E3, 1, 8,

  NOTE_A3, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A4, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A3, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A4, 1, 8,
  NOTE_E3, 1, 8,

  NOTE_CS2, 1, 8,
  NOTE_GS2, 1, 8,
  NOTE_CS3, 1, 8,
  NOTE_GS2, 1, 8,
  NOTE_CS2, 1, 8,
  NOTE_GS2, 1, 8,
  NOTE_CS3, 1, 8,
  NOTE_GS2, 1, 8,

  NOTE_CS2, 1, 8,
  NOTE_GS2, 1, 8,
  NOTE_CS3, 1, 8,
  NOTE_GS2, 1, 8,
  NOTE_CS2, 1, 8,
  NOTE_GS2, 1, 8,
  NOTE_CS3, 1, 8,
  NOTE_GS2, 1, 8,

  NOTE_A3, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A4, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A3, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A4, 1, 8,
  NOTE_E3, 1, 8,

  NOTE_A3, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A4, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A3, 1, 8,
  NOTE_E3, 1, 8,
  NOTE_A4, 1, 8,
  NOTE_E3, 1, 8,

  NOTE_CS2, 1, 8,
  NOTE_GS2, 1, 8,
  NOTE_CS3, 1, 8,
  NOTE_GS2, 1, 8,
  NOTE_CS2, 1, 8,
  NOTE_GS2, 1, 8,
  BREAK, 1, 8,
  NOTE_CS3, 9, 8,
};

unsigned int mainVoiceIndex = 0;
unsigned long mainVoiceSchedule = 0;
const int mainMelodyLength = sizeof(mainMelody)/sizeof(mainMelody[0]);

unsigned int secondVoiceIndex = 0;
unsigned long secondVoiceSchedule = 0;
const int secondMelodyLength = sizeof(secondMelody)/sizeof(secondMelody[0]);

void loop()
{
  unsigned long now = millis();
  playMelody(
    now, mainVoice, mainVoiceSchedule, mainVoiceIndex, mainMelody, mainMelodyLength
  );
  playMelody(
    now, secondVoice, secondVoiceSchedule, secondVoiceIndex, secondMelody, secondMelodyLength
  );
}

void playMelody(
  unsigned long now,
  MultiTone &voice,
  unsigned long &schedule,
  unsigned int &currentIndex,
  const unsigned short melody[],
  unsigned int melodyLenght
)
{
  if (currentIndex >= melodyLenght) {
    return;
  }

  if (now >= schedule)
  {
    unsigned short note = pgm_read_word(&melody[currentIndex]);
    unsigned short length = pgm_read_word(&melody[currentIndex+1]);
    unsigned short fraction = pgm_read_word(&melody[currentIndex+2]);
    schedule = now + playNote(voice, note, length, fraction);
    currentIndex = (currentIndex + 3);
  }
}

float playNote(MultiTone &voice, unsigned short note, unsigned short length, unsigned short fraction)
{
  float noteDuration = 950 * length / fraction;
  if (note != BREAK)
  {
    voice.play(note, noteDuration);
  }

  return noteDuration * 1.5;
}
