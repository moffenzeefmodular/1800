#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include "AudioSampleClap.h"
#include "AudioSampleClap2.h"
#include "AudioSampleCowbellh.h"
#include "AudioSampleCowbelll.h"
#include "AudioSampleHhc.h"
#include "AudioSampleHho.h"
#include "AudioSampleKick.h"
#include "AudioSampleSnap.h"
#include "AudioSampleSnare.h"
#include "AudioSampleTomh.h"
#include "AudioSampleToml.h"
#include "AudioSampleZap.h"

// GUItool: begin automatically generated code
AudioPlayMemory          playMem12; //xy=901.4732894897461,864.3304176330566
AudioPlayMemory          playMem8; //xy=902.9017944335938,671.4732055664062
AudioPlayMemory          playMem9; //xy=905.7589721679688,718.6160888671875
AudioPlayMemory          playMem10; //xy=905.7589645385742,770.0447082519531
AudioPlayMemory          playMem11; //xy=905.7589950561523,817.1874904632568
AudioPlayMemory          playMem5; //xy=907.1875,520.044677734375
AudioPlayMemory          playMem7; //xy=907.1875,615.7589721679688
AudioPlayMemory          playMem6; //xy=910.044677734375,568.6160888671875
AudioPlayMemory          playMem4; //xy=911.4732666015625,465.7589416503906
AudioPlayMemory          playMem3; //xy=915.7589721679688,405.7589416503906
AudioPlayMemory          playMem1;       //xy=917.1875534057617,304.33038902282715
AudioPlayMemory          playMem2; //xy=922.9017944335938,354.3303527832031
AudioMixer4              mixer2;         //xy=1117.1874542236328,617.1874771118164
AudioMixer4              mixer3;         //xy=1125.7588500976562,777.1875400543213
AudioMixer4              mixer1;         //xy=1135.7589988708496,401.4732131958008
AudioMixer4              mixer4;         //xy=1330.0447273254395,617.1875648498535
AudioAmplifier           amp1;           //xy=1457.187587738037,620.0446395874023
AudioOutputAnalog        dac1;           //xy=1591.4731979370117,627.1877021789551
AudioConnection          patchCord1(playMem12, 0, mixer3, 3);
AudioConnection          patchCord2(playMem8, 0, mixer2, 3);
AudioConnection          patchCord3(playMem9, 0, mixer3, 0);
AudioConnection          patchCord4(playMem10, 0, mixer3, 1);
AudioConnection          patchCord5(playMem11, 0, mixer3, 2);
AudioConnection          patchCord6(playMem5, 0, mixer2, 0);
AudioConnection          patchCord7(playMem7, 0, mixer2, 2);
AudioConnection          patchCord8(playMem6, 0, mixer2, 1);
AudioConnection          patchCord9(playMem4, 0, mixer1, 3);
AudioConnection          patchCord10(playMem3, 0, mixer1, 2);
AudioConnection          patchCord11(playMem1, 0, mixer1, 0);
AudioConnection          patchCord12(playMem2, 0, mixer1, 1);
AudioConnection          patchCord13(mixer2, 0, mixer4, 1);
AudioConnection          patchCord14(mixer3, 0, mixer4, 2);
AudioConnection          patchCord15(mixer1, 0, mixer4, 0);
AudioConnection          patchCord16(mixer4, amp1);
AudioConnection          patchCord17(amp1, dac1);
// GUItool: end automatically generated code

int currentState1 = 0; // Button 1
int lastState1 = 0;  // Button 1

int currentState2 = 0; // Button 2
int lastState2 = 0;  // Button 2

int currentState3 = 0; // Button 3
int lastState3 = 0;  // Button 3

int currentState4 = 0; // Button 4
int lastState4 = 0;  // Button 4

int currentState5 = 0; // Button 5
int lastState5 = 0;  // Button 5

int currentState6 = 0; // Button 6
int lastState6 = 0;  // Button 6

int currentState7 = 0; // Button 7
int lastState7 = 0;  // Button 7

int currentState8 = 0; // Button 8
int lastState8 = 0;  // Button 8

int currentState9 = 0; // Button 9
int lastState9 = 0;  // Button 9

int currentState10 = 0; // Button Star
int lastState10 = 0;  // Button Star

int currentState11 = 0; // Button 0
int lastState11 = 0;  // Button 0

int currentState12 = 0; // Button Number
int lastState12 = 0;  // Button Number

void setup() {

  // GLOBAL AUDIO //
  analogReference(EXTERNAL); // DAC Reference (5v)
  AudioMemory(200); // Buffer size
  amp1.gain(1.8); // Master volume

  // I/O //

  // INPUTS
  pinMode(0, INPUT); // Buttton 1
  pinMode(1, INPUT); // Button 2
  pinMode(2, INPUT); // Button 3
  pinMode(3, INPUT); // Button 4
  pinMode(4, INPUT); // Button 5
  pinMode(5, INPUT); // Button 6
  pinMode(6, INPUT); // Button 7
  pinMode(7, INPUT); // Button 8
  pinMode(8, INPUT); // Button 9
  pinMode(9, INPUT); // Button Star
  pinMode(10, INPUT); // Button 0
  pinMode(11, INPUT); // Button Number

  // OUTPUTS
  pinMode(12, OUTPUT); // Button 1 LED
  pinMode(13, OUTPUT); // Button 2 LED
  pinMode(14, OUTPUT); // Button 3 LED
  pinMode(15, OUTPUT); // Button 4 LED
  pinMode(16, OUTPUT); // Button 5 LED
  pinMode(17, OUTPUT); // Button 6 LED
  pinMode(18, OUTPUT); // Button 7 LED
  pinMode(19, OUTPUT); // Button 8 LED
  pinMode(20, OUTPUT); // Button 9 LED
  pinMode(21, OUTPUT); // Button Star LED
  pinMode(22, OUTPUT); // Button 0 LED
  pinMode(23, OUTPUT); // Button Number LED

  // MIXERS //

  // Unity gain mixer 1-4
  mixer1.gain(0, 0.25); // Button 1
  mixer1.gain(1, 0.25); // Button 2
  mixer1.gain(2, 0.25); // Button 3
  mixer1.gain(3, 0.25); // Button 4

  // Unity gain mixer 5-8
  mixer2.gain(0, 0.25); // Button 5
  mixer2.gain(1, 0.15); // Button 6
  mixer2.gain(2, 0.25); // Button 7
  mixer2.gain(3, 0.25); // Button 8

  // Unity gain mixer 9-Number
  mixer3.gain(0, 0.25); // Button 9
  mixer3.gain(1, 0.25); // Button Star
  mixer3.gain(2, 0.25); // Button 0
  mixer3.gain(3, 0.25); // Button Number

  // Bus mixer
  mixer4.gain(0, 0.33); // Mixer 1
  mixer4.gain(1, 0.33); // Mixer 2
  mixer4.gain(2, 0.33); // Mixer 3
  mixer4.gain(3, 0); // Nothing
}

void loop() {

  // ALL DIGITAL INPUTS ARE ACTIVE LOW //

  // Read trigger rising edge
  lastState1 = currentState1;
  currentState1 = digitalRead(0);

  lastState2 = currentState2;
  currentState2 = digitalRead(1);

  lastState3 = currentState3;
  currentState3 = digitalRead(2);

  lastState4 = currentState4;
  currentState4 = digitalRead(3);

  lastState5 = currentState5;
  currentState5 = digitalRead(4);

  lastState6 = currentState6;
  currentState6 = digitalRead(5);

  lastState7 = currentState7;
  currentState7 = digitalRead(6);

  lastState8 = currentState8;
  currentState8 = digitalRead(7);

  lastState9 = currentState9;
  currentState9 = digitalRead(8);

  lastState10 = currentState10;
  currentState10 = digitalRead(9);

  lastState11 = currentState11;
  currentState11 = digitalRead(10);

  lastState12 = currentState12;
  currentState12 = digitalRead(11);

  // Play Sounds
  if (currentState1 < lastState1) {
    playMem1.play(AudioSampleKick); // Play sound
  }

  if (currentState2 < lastState2) {
    playMem2.play(AudioSampleSnare); // Play sound
  }

  if (currentState3 < lastState3) {
    playMem3.play(AudioSampleClap); // Play sound
  }

  if (currentState4 < lastState4) {
    playMem4.play(AudioSampleClap2); // Play sound
  }

  if (currentState5 < lastState5) {
    playMem5.play(AudioSampleSnap); // Play sound
  }

  if (currentState6 < lastState6) {
    playMem6.play(AudioSampleZap); // Play sound
  }

  if (currentState7 < lastState7) {
    playMem7.play(AudioSampleHhc); // Play sound
  }

  if (currentState8 < lastState8) {
    playMem8.play(AudioSampleHho); // Play sound
  }

  if (currentState9 < lastState9) {
    playMem9.play(AudioSampleToml); // Play sound
  }

  if (currentState10 < lastState10) {
    playMem10.play(AudioSampleTomh); // Play sound
  }

  if (currentState11 < lastState11) {
    playMem11.play(AudioSampleCowbelll); // Play sound
  }

  if (currentState12 < lastState12) {
    playMem12.play(AudioSampleCowbellh); // Play sound
  }

  // Blink LEDs
  if (currentState1 == LOW) {
    digitalWrite(12, HIGH);
  }
  else {
    digitalWrite(12, LOW);
  }

  if (currentState2 == LOW) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }

  if (currentState3 == LOW) {
    digitalWrite(14, HIGH);
  }
  else {
    digitalWrite(14, LOW);
  }

  if (currentState4 == LOW) {
    digitalWrite(15, HIGH);
  }
  else {
    digitalWrite(15, LOW);
  }

  if (currentState5 == LOW) {
    digitalWrite(16, HIGH);
  }
  else {
    digitalWrite(16, LOW);
  }

  if (currentState6 == LOW) {
    digitalWrite(17, HIGH);
  }
  else {
    digitalWrite(17, LOW);
  }

  if (currentState7 == LOW) {
    digitalWrite(18, HIGH);
  }
  else {
    digitalWrite(18, LOW);
  }

  if (currentState8 == LOW) {
    digitalWrite(19, HIGH);
  }
  else {
    digitalWrite(19, LOW);
  }

  if (currentState9 == LOW) {
    digitalWrite(20, HIGH);
  }
  else {
    digitalWrite(20, LOW);
  }

  if (currentState10 == LOW) {
    digitalWrite(21, HIGH);
  }
  else {
    digitalWrite(21, LOW);
  }

  if (currentState11 == LOW) {
    digitalWrite(22, HIGH);
  }
  else {
    digitalWrite(22, LOW);
  }

  if (currentState12 == LOW) {
    digitalWrite(23, HIGH);
  }
  else {
    digitalWrite(23, LOW);
  }
}
