#include <Tone.h>
#define SPEED 180
#define MAIN_VOICE_PIN 3
#define SECOND_VOICE_PIN 5
#define BREAK 0

Tone mainVoice;
Tone secondVoice;

void setup() {
  mainVoice.begin(MAIN_VOICE_PIN);
  secondVoice.begin(SECOND_VOICE_PIN);
  melody();
}

void melody() {
  // lower
  play(NOTE_CS4, 1, 8);
  play(NOTE_CS4, 1, 8);
  play(NOTE_E4, 1, 8);
  play(NOTE_CS4, 1, 8);
  play(NOTE_E4, 1, 8);
  play(NOTE_CS4, 1, 8);
  play(BREAK, 1, 8);
  play(NOTE_E4, 1, 8);
  play(BREAK, 1, 8);
  play(NOTE_CS4, 1, 8);
  play(BREAK, 1, 8);
  play(NOTE_D4, 5, 8);
  play(BREAK, 1, 8);
  // higher
  play(NOTE_D5, 1, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_CS5, 1, 8);
  play(NOTE_GS5, 3, 8);
  play(NOTE_E5, 3, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_A6, 1, 4);
  play(NOTE_GS5, 1, 8);
  play(NOTE_GS5, 1, 4);
  play(NOTE_CS5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_GS5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 4);
  play(NOTE_FS5, 1, 8);
  play(NOTE_FS5, 1, 4);
  play(NOTE_A6, 1, 4);
  play(NOTE_GS5, 1, 4);
  play(NOTE_B5, 1, 8);
  play(NOTE_A5, 1, 4);
  play(NOTE_A5, 1, 8);
  play(NOTE_A5, 1, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_E5, 1, 4);
  play(NOTE_E5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_D5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_B5, 1, 8);
  play(NOTE_A5, 1, 4);
  play(NOTE_A5, 1, 8);
  play(NOTE_A5, 1, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_GS5, 1, 4);
  play(NOTE_GS5, 1, 2);
  play(NOTE_FS5, 1, 4);
  // lower
  play(NOTE_CS4, 3, 8);
  play(NOTE_DS4, 3, 8);
  play(NOTE_E4, 3, 8);
  play(NOTE_FS4, 3, 8);
  play(NOTE_GS4, 1, 4);
  play(NOTE_GS4, 1, 4);
  // upper
  play(NOTE_DS5, 5, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 1, 8);
  play(NOTE_B5, 7, 8);
  play(NOTE_FS4, 1, 4);
  play(NOTE_GS4, 1, 2);
  play(NOTE_GS4, 1, 8);
  play(NOTE_A5, 1, 8);
  play(NOTE_GS4, 1, 8);
  play(NOTE_E4, 9, 8);
  play(NOTE_DS5, 5, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 1, 8);
  play(NOTE_B5, 5, 8);
  play(NOTE_FS4, 1, 4);
  play(NOTE_GS4, 1, 2);
  play(NOTE_GS4, 1, 8);
  play(NOTE_A5, 1, 8);
  play(NOTE_GS4, 1, 8);
  play(NOTE_E5, 7, 8);
  play(BREAK, 1, 8);
  play(NOTE_E4, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 1, 8);
  play(BREAK, 1, 8);
  play(NOTE_GS4, 1, 4);
  play(BREAK, 1, 8);
  play(NOTE_FS4, 1, 8);
  play(NOTE_E5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_FS5, 1, 4);
  play(NOTE_DS5, 1, 8);
  play(NOTE_DS5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_B5, 1, 8);
  play(NOTE_E4, 1, 8);
  play(NOTE_E4, 1, 8);
  play(NOTE_E5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 1, 4);
  play(NOTE_FS5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 1, 4);
  play(NOTE_CS5, 1, 4);
  play(NOTE_GS5, 3, 8);
  play(BREAK, 1, 8);
  play(NOTE_A4, 1, 8);
  play(BREAK, 1, 8);
  play(NOTE_GS4, 1, 8);
  play(BREAK, 1, 8);
  play(NOTE_GS4, 1, 8);
  play(NOTE_DS4, 1, 8);
  play(NOTE_E4, 1, 8);
  play(NOTE_DS4, 1, 8);
  play(NOTE_GS4, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 1, 8);
  play(BREAK, 5, 8);
  play(NOTE_GS4, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_FS5, 1, 4);
  play(NOTE_DS5, 1, 4);
  play(NOTE_CS5, 1, 8);
  play(NOTE_B5, 1, 4);
  play(NOTE_E4, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 1, 4);
  play(NOTE_FS5, 3, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 3, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_GS5, 5, 8);
  // lower
  play(NOTE_GS3, 1, 8);
  play(NOTE_GS3, 1, 4);
  play(NOTE_C4, 1, 4);
  // upper
  play(NOTE_C5, 3, 8);
  play(NOTE_GS5, 3, 16);
  play(NOTE_E5, 3, 16);
  play(NOTE_DS5, 5, 8);
  play(BREAK, 3, 8);
  play(NOTE_DS5, 1, 8);
  play(NOTE_DS5, 1, 8);
  play(NOTE_DS5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 3, 16);
  play(NOTE_CS5, 3, 16);
  play(NOTE_CS5, 5, 8);
  // lower
  play(NOTE_CS4, 1, 2);
  // upper
  play(NOTE_GS5, 3, 16);
  play(NOTE_E5, 3, 16);
  play(NOTE_DS5, 5, 8);
  // lower
  play(NOTE_C4, 3, 8); // reduced from 1/2 because there's a pause in upper
  // upper
  play(NOTE_DS5, 1, 8);
  play(NOTE_DS5, 1, 4);
  play(NOTE_DS5, 1, 8);
  play(NOTE_E5, 1, 4);
  play(NOTE_DS5, 1, 4);
  play(NOTE_DS5, 1, 8);
  play(NOTE_FS5, 1, 2);
  play(NOTE_E5, 1, 8);
  play(NOTE_DS5, 3, 8);
  play(NOTE_GS5, 1, 4);
  play(NOTE_GS5, 1, 8);
  play(NOTE_FS5, 1, 4);
  play(NOTE_E5, 1, 4);
  play(NOTE_DS5, 9, 8);
  // lower
  play(NOTE_C4, 3, 8);
  play(NOTE_CS4, 3, 8);
  play(NOTE_DS4, 3, 8);
  play(NOTE_GS4, 3, 8);
  play(NOTE_GS3, 3, 8); // reduced from 1/2 because there's a pause in upper
  // upper
  play(NOTE_CS5, 1, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_CS5, 1, 8);
  play(NOTE_GS5, 1, 4);
  play(NOTE_E5, 3, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_FS5, 1, 4);
  play(NOTE_A6, 1, 4);
  play(NOTE_GS5, 3, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_CS5, 1, 8);
  play(NOTE_GS5, 1, 4);
  play(NOTE_E5, 3, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_A6, 1, 4);
  play(NOTE_GS5, 1, 4);
  play(NOTE_GS4, 1, 8);
  play(NOTE_A5, 1, 4);
  play(NOTE_A5, 1, 8);
  play(NOTE_A5, 1, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_E5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_D5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_B5, 1, 8);
  play(NOTE_A5, 1, 4);
  play(NOTE_A5, 1, 8);
  play(NOTE_A5, 1, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_GS5, 3, 8);
  play(NOTE_GS5, 1, 2);
  play(BREAK, 1, 8);
  play(NOTE_DS5, 1, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_CS5, 1, 8);
  play(NOTE_GS5, 1, 4);
  play(NOTE_E5, 3, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_FS5, 1, 4);
  play(NOTE_A6, 1, 4);
  play(NOTE_GS5, 3, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_CS5, 1, 8);
  play(NOTE_GS5, 1, 4);
  play(NOTE_E5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_FS5, 1, 4);
  play(NOTE_FS5, 1, 8);
  play(NOTE_A6, 1, 4);
  play(NOTE_GS5, 1, 4);
  play(NOTE_GS4, 1, 8);
  play(NOTE_A5, 1, 4);
  play(NOTE_A5, 1, 8);
  play(NOTE_A5, 1, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_E5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_FS5, 1, 8);
  play(NOTE_E5, 1, 8);
  play(NOTE_D5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_B5, 1, 8);
  play(NOTE_A5, 1, 4);
  play(NOTE_A5, 1, 8);
  play(NOTE_A5, 1, 8);
  play(NOTE_CS5, 1, 4);
  play(NOTE_E5, 1, 8);
  play(NOTE_CS5, 1, 8);
  play(NOTE_GS5, 3, 8);
  play(NOTE_GS5, 1, 2);
  play(NOTE_FS5, 1, 4);
  play(NOTE_CS6, 1, 4); // was 1/1 but lower
  // lower
  play(NOTE_DS4, 3, 8);
  play(NOTE_E4, 3, 8);
  play(NOTE_FS4, 3, 8);
  play(NOTE_GS4, 1, 2);
  // higher
  play(NOTE_CS4, 3, 8);
  play(NOTE_DS4, 3, 8);
  play(NOTE_E4, 1, 4);
  play(NOTE_FS4, 1, 4);
  play(NOTE_GS4, 1, 4);
  play(NOTE_B4, 1, 4);
  play(NOTE_A4, 1, 8);
  play(NOTE_A4, 9, 8);


}

void play(unsigned short note, unsigned short length, unsigned short fraction) {
  float noteDuration = 950 * length / fraction;
  if (note != BREAK) {
      mainVoice.play(note, noteDuration);
      secondVoice.play(note, noteDuration);
    }
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
}

void loop() {
  // no need to repeat the melody.
}
 
