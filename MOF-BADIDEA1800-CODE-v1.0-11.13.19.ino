#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine24; //xy=412.0312614440918,1008.031322479248
AudioSynthWaveformSine   sine22; //xy=416.03125381469727,905.0312547683716
AudioSynthWaveformSine   sine6;          //xy=419.03125381469727,409.0312547683716
AudioSynthWaveformSine   sine23; //xy=419.03127670288086,950.031247138977
AudioSynthWaveformSine   sine8;          //xy=421.03125762939453,506.03128242492676
AudioSynthWaveformSine   sine7;          //xy=422.03127670288086,454.03124713897705
AudioSynthWaveformSine   sine5;          //xy=425.0312614440918,351.03124713897705
AudioSynthWaveformSine   sine21; //xy=426.0312614440918,847.0312614440918
AudioSynthWaveformSine   sine20; //xy=428.03125,795.0312550067902
AudioSynthWaveformSine   sine4;          //xy=431.03125,299.03125500679016
AudioSynthWaveformSine   sine17; //xy=431.03125,641.03125
AudioSynthWaveformSine   sine18; //xy=431.0312614440918,693.0312480926514
AudioSynthWaveformSine   sine19; //xy=431.0312614440918,743.0312480926514
AudioSynthWaveformSine   sine1;          //xy=434.03125,145.03125
AudioSynthWaveformSine   sine2;          //xy=434.0312614440918,197.03124809265137
AudioSynthWaveformSine   sine3;          //xy=434.0312614440918,247.03124809265137
AudioMixer4              mixer6;         //xy=601.0312728881836,911.0312614440918
AudioMixer4              mixer1;         //xy=614.0312614440918,229.03124809265137
AudioMixer4              mixer5;         //xy=621.0312614440918,740.0312919616699
AudioMixer4              mixer2;         //xy=625.0312767028809,418.03124809265137
AudioSynthWaveformSine   sine14; //xy=956.0312538146973,415.0312547683716
AudioSynthWaveformSine   sine16; //xy=956.0313034057617,506.03128242492676
AudioSynthWaveformSine   sine15; //xy=959.0312767028809,460.03124713897705
AudioSynthWaveformSine   sine13; //xy=962.0312614440918,357.03124713897705
AudioSynthWaveformSine   sine12;  //xy=968.03125,305.03125500679016
AudioSynthWaveformSine   sine9; //xy=971.03125,151.03125
AudioSynthWaveformSine   sine10; //xy=971.0312614440918,203.03124809265137
AudioSynthWaveformSine   sine11; //xy=971.0312614440918,253.03124809265137
AudioMixer4              mixer4;         //xy=1151.0313034057617,438.03127670288086
AudioMixer4              mixer3;         //xy=1162.0312767028809,209.03124809265137
AudioMixer4              mixer7;         //xy=1456.0312747955322,304.03124809265137
AudioMixer4              mixer8;         //xy=1664.5312957763672,776.031322479248
AudioAmplifier           amp1;           //xy=1799.0313835144043,779.0312519073486
AudioOutputAnalog        dac1;           //xy=1928.0313835144043,778.0312776565552
AudioConnection          patchCord1(sine24, 0, mixer6, 3);
AudioConnection          patchCord2(sine22, 0, mixer6, 1);
AudioConnection          patchCord3(sine6, 0, mixer2, 1);
AudioConnection          patchCord4(sine23, 0, mixer6, 2);
AudioConnection          patchCord5(sine8, 0, mixer2, 3);
AudioConnection          patchCord6(sine7, 0, mixer2, 2);
AudioConnection          patchCord7(sine5, 0, mixer2, 0);
AudioConnection          patchCord8(sine21, 0, mixer6, 0);
AudioConnection          patchCord9(sine20, 0, mixer5, 3);
AudioConnection          patchCord10(sine4, 0, mixer1, 3);
AudioConnection          patchCord11(sine17, 0, mixer5, 0);
AudioConnection          patchCord12(sine18, 0, mixer5, 1);
AudioConnection          patchCord13(sine19, 0, mixer5, 2);
AudioConnection          patchCord14(sine1, 0, mixer1, 0);
AudioConnection          patchCord15(sine2, 0, mixer1, 1);
AudioConnection          patchCord16(sine3, 0, mixer1, 2);
AudioConnection          patchCord17(mixer6, 0, mixer8, 2);
AudioConnection          patchCord18(mixer1, 0, mixer7, 0);
AudioConnection          patchCord19(mixer5, 0, mixer8, 1);
AudioConnection          patchCord20(mixer2, 0, mixer7, 1);
AudioConnection          patchCord21(sine14, 0, mixer4, 1);
AudioConnection          patchCord22(sine16, 0, mixer4, 3);
AudioConnection          patchCord23(sine15, 0, mixer4, 2);
AudioConnection          patchCord24(sine13, 0, mixer4, 0);
AudioConnection          patchCord25(sine12, 0, mixer3, 3);
AudioConnection          patchCord26(sine9, 0, mixer3, 0);
AudioConnection          patchCord27(sine10, 0, mixer3, 1);
AudioConnection          patchCord28(sine11, 0, mixer3, 2);
AudioConnection          patchCord29(mixer4, 0, mixer7, 3);
AudioConnection          patchCord30(mixer3, 0, mixer7, 2);
AudioConnection          patchCord31(mixer7, 0, mixer8, 0);
AudioConnection          patchCord32(mixer8, amp1);
AudioConnection          patchCord33(amp1, dac1);
// GUItool: end automatically generated code


void setup() {

  // GLOBAL AUDIO //
  analogReference(EXTERNAL); // DAC Reference (5v)
  AudioMemory(200); // Buffer size
  amp1.gain(0.5); // Master volume

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

  // FREQUENCY TABLES //

  // Button 1
  sine1.frequency(1209.0); // Column 1: 1209hz
  sine2.frequency(697.0); // Row 1: 697hz

  // Button 2
  sine3.frequency(1336.0); // Column 2: 1336 hz
  sine4.frequency(697.0); // Row 1: 697hz

  // Button 3
  sine5.frequency(1477.0); // Column 3: 1477 hz
  sine6.frequency(697.0); // Row 1: 697hz

  // Button 4
  sine7.frequency(1209.0); // Column 1: 1209hz
  sine8.frequency(770.0); // Row 2: 770hz

  // Button 5
  sine9.frequency(1336.0); // Column 2: 1336 hz
  sine10.frequency(770.0); // Row 2: 770hz

  // Button 6
  sine11.frequency(1477.0); // Column 3: 1477 hz
  sine12.frequency(770.0); // Row 2: 770hz

  // Button 7
  sine13.frequency(1209.0); // Column 1: 1209hz
  sine14.frequency(852.0);  // Row 3: 852hz

  // Button 8
  sine15.frequency(1336.0); // Column 2: 1336 hz
  sine16.frequency(852.0);  // Row 3: 852hz

  // Button 9
  sine17.frequency(1477.0); // Column 3: 1477 hz
  sine18.frequency(852.0);  // Row 3: 852hz

  // Button Star
  sine19.frequency(1209.0); // Column 1: 1209hz
  sine20.frequency(941.0); // Row 4: 941hz

  // Button 0
  sine21.frequency(1336.0); // Column 2: 1336 hz
  sine22.frequency(941.0); // Row 4: 941hz

  // Button Number
  sine23.frequency(1477.0); // Column 3: 1477 hz
  sine24.frequency(941.0); // Row 4: 941hz

  // MIXERS //

  // Unity gain mixer 1-4
  mixer1.gain(0, 0.25); // Button 1
  mixer1.gain(1, 0.25); // Button 1
  mixer1.gain(2, 0.25); // Button 2
  mixer1.gain(3, 0.25); // Button 2

  // Unity gain mixer 5-8
  mixer2.gain(0, 0.25); // Button 3
  mixer2.gain(1, 0.25); // Button 3
  mixer2.gain(2, 0.25); // Button 4
  mixer2.gain(3, 0.25); // Button 4

  // Unity gain mixer 9-Number
  mixer3.gain(0, 0.25); // Button 5
  mixer3.gain(1, 0.25); // Button 5
  mixer3.gain(2, 0.25); // Button 6
  mixer3.gain(3, 0.25); // Button 6

  mixer4.gain(0, 0.25); // Button 7
  mixer4.gain(1, 0.25); // Button 7
  mixer4.gain(2, 0.25); // Button 8
  mixer4.gain(3, 0.25); // Button 8

  mixer5.gain(0, 0.25); // Button 9
  mixer5.gain(1, 0.25); // Button 9
  mixer5.gain(2, 0.25); // Button Star
  mixer5.gain(3, 0.25); // Button Star

  mixer6.gain(0, 0.25); // Button 0
  mixer6.gain(1, 0.25); // Button 0
  mixer6.gain(2, 0.25); // Button Number
  mixer6.gain(3, 0.25); // Button Number

  // Bus mixer

  mixer7.gain(0, 0.25); // Mixer 1
  mixer7.gain(1, 0.25); // Mixer 2
  mixer7.gain(2, 0.25); // Mixer 3
  mixer7.gain(3, 0.25); // Mixer 4

  mixer8.gain(0, 1.0); // Mixer 7
  mixer8.gain(1, 0.25); // Mixer 5
  mixer8.gain(2, 0.25); // Mixer 6
  mixer8.gain(3, 0.0); // Nothing
}

void loop() {

  // Read all pins
  int in1 = digitalRead(0); // Button 1
  int in2 = digitalRead(1); // Button 2
  int in3 = digitalRead(2); // Button 3
  int in4 = digitalRead(3); // Button 4
  int in5 = digitalRead(4); // Button 5
  int in6 = digitalRead(5); // Button 6
  int in7 = digitalRead(6); // Button 7
  int in8 = digitalRead(7); // Button 8
  int in9 = digitalRead(8); // Button 9
  int inStar = digitalRead(9); // Button Star
  int in0 = digitalRead(10); // Button 0
  int inNumber = digitalRead(11); // Button Number

  // ALL DIGITAL INPUTS ARE ACTIVE LOW //

  // Button 1
  if (in1 == LOW) {           // If active
    digitalWrite(12, HIGH);   // Turn on LED
    sine1.amplitude(1.0);  // Make the sound
    sine2.amplitude(1.0);  // Make the sound
  }
  else {
    digitalWrite(12, LOW);  // Turn off LED
    sine1.amplitude(0);  // Stop the sound
    sine2.amplitude(0);  // Stop the sound
  }

  // This function is repeateded for all buttons //

  // Button 2
  if (in2 == LOW) {
    digitalWrite(13, HIGH);
    sine3.amplitude(1.0);
    sine4.amplitude(1.0);
  }
  else {
    digitalWrite(13, LOW);
    sine3.amplitude(0);
    sine4.amplitude(0);
  }

  // Button 3
  if (in3 == LOW) {
    digitalWrite(14, HIGH);
    sine5.amplitude(1.0);
    sine6.amplitude(1.0);
  }
  else {
    digitalWrite(14, LOW);
    sine5.amplitude(0);
    sine6.amplitude(0);
  }

  // Button 4
  if (in4 == LOW) {
    digitalWrite(15, HIGH);
    sine7.amplitude(1.0);
    sine8.amplitude(1.0);
  }
  else {
    digitalWrite(15, LOW);
    sine7.amplitude(0);
    sine8.amplitude(0);
  }

  // Button 5
  if (in5 == LOW) {
    digitalWrite(16, HIGH);
    sine9.amplitude(1.0);
    sine10.amplitude(1.0);
  }
  else {
    digitalWrite(16, LOW);
    sine9.amplitude(0);
    sine10.amplitude(0);
  }

  // Button 6
  if (in6 == LOW) {
    digitalWrite(17, HIGH);
    sine11.amplitude(1.0);
    sine12.amplitude(1.0);
  }
  else {
    digitalWrite(17, LOW);
    sine11.amplitude(0);
    sine12.amplitude(0);
  }

  // Button 7
  if (in7 == LOW) {
    digitalWrite(18, HIGH);
    sine13.amplitude(1.0);
    sine14.amplitude(1.0);
  }
  else {
    digitalWrite(18, LOW);
    sine13.amplitude(0);
    sine14.amplitude(0);
  }

  // Button 8
  if (in8 == LOW) {
    digitalWrite(19, HIGH);
    sine15.amplitude(1.0);
    sine16.amplitude(1.0);
  }
  else {
    digitalWrite(19, LOW);
    sine15.amplitude(0);
    sine16.amplitude(0);
  }

  // Button 9
  if (in9 == LOW) {
    digitalWrite(20, HIGH);
    sine17.amplitude(1.0);
    sine18.amplitude(1.0);
  }
  else {
    digitalWrite(20, LOW);
    sine17.amplitude(0);
    sine18.amplitude(0);
  }

  // Button Star
  if (inStar == LOW) {
    digitalWrite(21, HIGH);
    sine19.amplitude(1.0);
    sine20.amplitude(1.0);
  }
  else {
    digitalWrite(21, LOW);
    sine19.amplitude(0);
    sine20.amplitude(0);
  }

  // Button 0
  if (in0 == LOW) {
    digitalWrite(22, HIGH);
    sine21.amplitude(1.0);
    sine22.amplitude(1.0);
  }
  else {
    digitalWrite(22, LOW);
    sine21.amplitude(0);
    sine22.amplitude(0);
  }

  // Button Number
  if (inNumber == LOW) {
    digitalWrite(23, HIGH);
    sine23.amplitude(1.0);
    sine24.amplitude(1.0);
  }
  else {
    digitalWrite(23, LOW);
    sine23.amplitude(0);
    sine24.amplitude(0);
  }

}
