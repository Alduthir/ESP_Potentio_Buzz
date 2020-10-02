#include <Arduino.h>

const int POT_PIN = PIN_A0;
const int BUZZ_PIN = D0;
const int ANALOG_THRESHOLD = 500;

void setup() {
  Serial.begin(115200);
  pinMode(POT_PIN, INPUT);
  pinMode(BUZZ_PIN, OUTPUT);
  pinMode(BUILTIN_LED, OUTPUT);
}

void loop() {
  int analogValue = analogRead(POT_PIN);
  Serial.print(analogValue);
  if(analogValue > ANALOG_THRESHOLD){
    digitalWrite(BUZZ_PIN, LOW);
    digitalWrite(BUILTIN_LED, HIGH);
  }
  else
  {
    digitalWrite(BUZZ_PIN,HIGH);
    digitalWrite(BUILTIN_LED, LOW);
  }
}