//SKETCH FOR LED_FLASHER

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(500);       \\the LED will remain switched on, for 500 milliseconds\\
  digitalWrite(13, LOW);
  delay(500);        \\the LED will remain switched off, for 500 milliseconds\\
}
