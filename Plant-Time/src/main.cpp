#include <Arduino.h>

#define YLW_LED 2
#define GRN_LED 1
#define BUZZ_PIN 4

void setup()
{
  pinMode(YLW_LED, OUTPUT);

  pinMode(GRN_LED, OUTPUT);

  pinMode(BUZZ_PIN, OUTPUT);

  digitalWrite(BUZZ_PIN, HIGH);

  delay(10);

  digitalWrite(BUZZ_PIN, LOW);
}

void loop()
{
  // Turn LED ON
  // Wait
  // Turn LED OFF
  // Wait

  digitalWrite(YLW_LED, HIGH);

  digitalWrite(GRN_LED, LOW);

  delay(1000);

  digitalWrite(YLW_LED, LOW);

  digitalWrite(GRN_LED, HIGH);

  delay(1000);
}