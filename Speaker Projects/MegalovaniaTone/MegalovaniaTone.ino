/*
   Roy Ben Avraham
   Last modification: 12/6/2020
   Project: Birthday melody using Uno board and a Speaker
    NOTE_D4,  NOTE_D4,  NOTE_D5,  NOTE_A4,  NOTE_GS4,  NOTE_G4,  NOTE_F4,  NOTE_D4,  NOTE_F4,  NOTE_G4
*/
/*
Leds legend:
RED 9;
Yellow 10;
Green 11; 
*/

#include "pitches.h"

//The notes in the melody
int melody[] = {
   NOTE_D4,
   NOTE_D4,
   NOTE_D5,
   NOTE_A4,
   NOTE_GS4,
   NOTE_G4,
   NOTE_F4,
   NOTE_D4,
   NOTE_F4,
   NOTE_G4
};

//note durations: 4 = quarter note, 8 = eight note, etc.
int noteDurations[] = {
  8,
  8,
  4,
  3,
  4,
  4,
  3,
  8,
  8,
  8
};

void setup() {
  pinMode (9, OUTPUT);
  
  for (int thisNote = 0 ; thisNote < 10 ; thisNote++) { 
    
    //digitalWrite (random(9, 12), LOW);
    
    int noteDuration = 1130/noteDurations[thisNote];
    tone (9, melody[thisNote], noteDuration);
    
    int pause = noteDuration * 1.275;
    delay (pause);


    
  }

  delay(3000);
    digitalWrite(9, LOW);
    
}

void loop() {
  //I chose not to repeat, it's optional

}
