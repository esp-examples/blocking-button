#include <Arduino.h>

#define BUTTON_PIN 14 // D5

#define PRESSED LOW

unsigned int cnt = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.print("\n");
}

void loop()
{
  int sensorVal = digitalRead(BUTTON_PIN);
  if (sensorVal == PRESSED)
  {
    // if the button is pressed increase cnt
    cnt++;
    Serial.printf("Counter: %d\n", cnt);
    while (sensorVal == PRESSED)
    {
      // continusly check if the button is still pressed
      // this loop only ends when the button is released
      int sensorVal = digitalRead(BUTTON_PIN);
    }
  }
}