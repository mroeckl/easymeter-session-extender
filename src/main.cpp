#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D1, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(D1, HIGH);
  Serial.println("LED is on");
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(D1, LOW);
  Serial.println("LED is off");
  delay(10 * 1000);
}