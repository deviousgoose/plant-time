#include <Arduino.h>

#define YLW_LED (2)
#define GRN_LED (1)
#define BUZZ_PIN (4)
#define MOISTURE_PIN (3)

int readMoisture() { return analogRead(MOISTURE_PIN); }

void setLedState(bool isYellowOn, bool isGreenOn) {
  digitalWrite(YLW_LED, isYellowOn);
  digitalWrite(GRN_LED, isGreenOn);
}

void buzzBeep() {
  digitalWrite(BUZZ_PIN, HIGH);
  delay(10);
  digitalWrite(BUZZ_PIN, LOW);
}

// MAIN PROGRAM

void setup() {
  Serial.begin(115200);

  pinMode(YLW_LED, OUTPUT);
  pinMode(GRN_LED, OUTPUT);
  pinMode(BUZZ_PIN, OUTPUT);

  buzzBeep();
}

void loop() {
  // Turn LED ON
  // Wait
  // Turn LED OFF
  // Wait

  setLedState(true, false);
  Serial.println(readMoisture());
  delay(1000);

  setLedState(false, true);
  delay(1000);
}