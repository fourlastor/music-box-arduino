#include <Tone.h>
#define SPEED 180
#define MAIN_VOICE_PIN 3
#define SECOND_VOICE_PIN 5
#define BREAK 0

const unsigned short mainMelody[] PROGMEM = {
  BREAK, 15, 8,
  // higher
  NOTE_D5, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_CS5, 1, 8,
  NOTE_GS5, 3, 8,
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
  // lower
  NOTE_CS4, 3, 8,
  NOTE_DS4, 3, 8,
  NOTE_E4, 3, 8,
  NOTE_FS4, 3, 8,
  NOTE_GS4, 1, 4,
  NOTE_GS4, 1, 4,
  // upper
  NOTE_DS5, 5, 8,
  NOTE_E5, 1, 8,
  NOTE_DS5, 1, 8,
  NOTE_B5, 7, 8,
  NOTE_FS4, 1, 4,
  NOTE_GS4, 1, 2,
  NOTE_GS4, 1, 8,
  NOTE_A5, 1, 8,
  NOTE_GS4, 1, 8,
  NOTE_E4, 9, 8,
  NOTE_DS5, 5, 8,
  NOTE_E5, 1, 8,
  NOTE_DS5, 1, 8,
  NOTE_B5, 5, 8,
  NOTE_FS4, 1, 4,
  NOTE_GS4, 1, 2,
  NOTE_GS4, 1, 8,
  NOTE_A5, 1, 8,
  NOTE_GS4, 1, 8,
  NOTE_E5, 7, 8,
  BREAK, 1, 8,
  NOTE_E4, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_DS5, 1, 8,
  BREAK, 1, 8,
  NOTE_GS4, 1, 4,
  BREAK, 1, 8,
  NOTE_FS4, 1, 8,
  NOTE_E5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_FS5, 1, 4,
  NOTE_DS5, 1, 8,
  NOTE_DS5, 1, 8,
  NOTE_CS5, 1, 8,
  NOTE_B5, 1, 8,
  NOTE_E4, 1, 8,
  NOTE_E4, 1, 8,
  NOTE_E5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_DS5, 1, 4,
  NOTE_FS5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_DS5, 1, 4,
  NOTE_CS5, 1, 4,
  NOTE_GS5, 3, 8,
  BREAK, 1, 8,
  NOTE_A4, 1, 8,
  BREAK, 1, 8,
  NOTE_GS4, 1, 8,
  BREAK, 1, 8,
  NOTE_GS4, 1, 8,
  NOTE_DS4, 1, 8,
  NOTE_E4, 1, 8,
  NOTE_DS4, 1, 8,
  NOTE_GS4, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_DS5, 1, 8,
  BREAK, 5, 8,
  NOTE_GS4, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_FS5, 1, 4,
  NOTE_DS5, 1, 4,
  NOTE_CS5, 1, 8,
  NOTE_B5, 1, 4,
  NOTE_E4, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_E5, 1, 8,
  NOTE_DS5, 1, 4,
  NOTE_FS5, 3, 8,
  NOTE_E5, 1, 8,
  NOTE_DS5, 3, 8,
  NOTE_CS5, 1, 4,
  NOTE_GS5, 5, 8,
  // lower
  NOTE_GS3, 1, 8,
  NOTE_GS3, 1, 4,
  NOTE_C4, 1, 4,
  // upper
  NOTE_C5, 3, 8,
  NOTE_GS5, 3, 16,
  NOTE_E5, 3, 16,
  NOTE_DS5, 5, 8,
  BREAK, 3, 8,
  NOTE_DS5, 1, 8,
  NOTE_DS5, 1, 8,
  NOTE_DS5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_DS5, 3, 16,
  NOTE_CS5, 3, 16,
  NOTE_CS5, 5, 8,
  // lower
  NOTE_CS4, 1, 2,
  // upper
  NOTE_GS5, 3, 16,
  NOTE_E5, 3, 16,
  NOTE_DS5, 5, 8,
  // lower
  NOTE_C4, 3, 8,  // reduced from 1/2 because there's a pause in upp,
  // upper
  NOTE_DS5, 1, 8,
  NOTE_DS5, 1, 4,
  NOTE_DS5, 1, 8,
  NOTE_E5, 1, 4,
  NOTE_DS5, 1, 4,
  NOTE_DS5, 1, 8,
  NOTE_FS5, 1, 2,
  NOTE_E5, 1, 8,
  NOTE_DS5, 3, 8,
  NOTE_GS5, 1, 4,
  NOTE_GS5, 1, 8,
  NOTE_FS5, 1, 4,
  NOTE_E5, 1, 4,
  NOTE_DS5, 9, 8,
  // lower
  NOTE_C4, 3, 8,
  NOTE_CS4, 3, 8,
  NOTE_DS4, 3, 8,
  NOTE_GS4, 3, 8,
  NOTE_GS3, 3, 8, // reduced from 1/2 because there's a pause in upper
  // upper
  NOTE_CS5, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_CS5, 1, 8,
  NOTE_GS5, 1, 4,
  NOTE_E5, 3, 8,
  NOTE_FS5, 1, 8,
  NOTE_FS5, 1, 4,
  NOTE_A6, 1, 4,
  NOTE_GS5, 3, 8,
  NOTE_CS5, 1, 4,
  NOTE_CS5, 1, 8,
  NOTE_GS5, 1, 4,
  NOTE_E5, 3, 8,
  NOTE_FS5, 1, 8,
  NOTE_FS5, 1, 8,
  NOTE_FS5, 1, 8,
  NOTE_A6, 1, 4,
  NOTE_GS5, 1, 4,
  NOTE_GS4, 1, 8,
  NOTE_A5, 1, 4,
  NOTE_A5, 1, 8,
  NOTE_A5, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_CS5, 1, 8,
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
  NOTE_GS5, 3, 8,
  NOTE_GS5, 1, 2,
  BREAK, 1, 8,
  NOTE_DS5, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_CS5, 1, 8,
  NOTE_GS5, 1, 4,
  NOTE_E5, 3, 8,
  NOTE_FS5, 1, 8,
  NOTE_FS5, 1, 4,
  NOTE_A6, 1, 4,
  NOTE_GS5, 3, 8,
  NOTE_CS5, 1, 4,
  NOTE_CS5, 1, 8,
  NOTE_GS5, 1, 4,
  NOTE_E5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_FS5, 1, 4,
  NOTE_FS5, 1, 8,
  NOTE_A6, 1, 4,
  NOTE_GS5, 1, 4,
  NOTE_GS4, 1, 8,
  NOTE_A5, 1, 4,
  NOTE_A5, 1, 8,
  NOTE_A5, 1, 8,
  NOTE_CS5, 1, 4,
  NOTE_E5, 1, 8,
  NOTE_CS5, 1, 8,
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
  NOTE_GS5, 3, 8,
  NOTE_GS5, 1, 2,
  NOTE_FS5, 1, 4,
  NOTE_CS6, 1, 4, // was 1/1 but lower
  // lower
  NOTE_DS4, 3, 8,
  NOTE_E4, 3, 8,
  NOTE_FS4, 3, 8,
  NOTE_GS4, 1, 2,
  // higher
  NOTE_CS4, 3, 8,
  NOTE_DS4, 3, 8,
  NOTE_E4, 1, 4,
  NOTE_FS4, 1, 4,
  NOTE_GS4, 1, 4,
  NOTE_B4, 1, 4,
  NOTE_A4, 1, 8,
  NOTE_A4, 9, 8,
};

const unsigned short secondMelody[] PROGMEM = {
  NOTE_CS4, 1, 8,
  NOTE_CS4, 1, 8,
  NOTE_E4, 1, 8,
  NOTE_CS4, 1, 8,
  NOTE_E4, 1, 8,
  NOTE_CS4, 1, 8,
  BREAK, 1, 8,
  NOTE_E4, 1, 8,
  BREAK, 1, 8,
  NOTE_CS4, 1, 8,
  BREAK, 1, 8,
  NOTE_D4, 5, 8,
};

Tone mainVoice;
Tone secondVoice;

void setup() {
  mainVoice.begin(MAIN_VOICE_PIN);
  secondVoice.begin(SECOND_VOICE_PIN);
}


unsigned int mainVoiceIndex = 0;
unsigned int mainVoiceSchedule = 0;
const int mainMelodyLength = sizeof(mainMelody)/sizeof(mainMelody[0]);

unsigned int secondVoiceIndex = 0;
unsigned int secondVoiceSchedule = 0;
const int secondMelodyLength = sizeof(secondMelody)/sizeof(secondMelody[0]);

void loop()
{
  unsigned int now = millis();
  playMelody(
    now, mainVoice, mainVoiceSchedule, mainVoiceIndex, mainMelody, mainMelodyLength
  );
  playMelody(
    now, secondVoice, secondVoiceSchedule, secondVoiceIndex, secondMelody, secondMelodyLength
  );
}

void playMelody(
  unsigned int now,
  Tone &voice,
  unsigned int &schedule,
  unsigned int &currentIndex,
  const unsigned short melody[],
  unsigned int melodyLenght
)
{
  if (now >= schedule)
  {
    unsigned short note = pgm_read_word(&melody[currentIndex]);
    unsigned short length = pgm_read_word(&melody[currentIndex+1]);
    unsigned short fraction = pgm_read_word(&melody[currentIndex+2]);
    schedule = now + playNote(voice, note, length, fraction);
    currentIndex = (currentIndex + 3) % melodyLenght;
  }
}

float playNote(Tone &voice, unsigned short note, unsigned short length, unsigned short fraction)
{
  float noteDuration = 950 * length / fraction;
  if (note != BREAK)
  {
    voice.play(note, noteDuration);
  }

  return noteDuration * 1.3;
}
