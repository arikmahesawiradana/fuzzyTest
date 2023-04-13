#include <Arduino.h>

const int analogPin = 4;
float myInput;
float myOutput;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  myInput = analogRead(analogPin);
  myOutput = myInput/1024*175; //range 0 - 175 psi
  Serial.print("Besar tekanan: ");
  Serial.println(myOutput);
}