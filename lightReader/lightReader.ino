#define BUZZER_PIN  3
#define LDR_PIN     A0
 
void setup()
{
  pinMode(BUZZER_PIN, OUTPUT);
}
 
void loop()
{
  int val, frequency;
 
  // reading light level
  val = analogRead(LDR_PIN);
 
  // hertz frequency
  frequency = map(val, 0, 1023, 3500, 4500);
 
  // sound
  tone(BUZZER_PIN, frequency, 20);
}
