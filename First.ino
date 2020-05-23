void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(13, HIGH); // take pin 13 HIGH; turn the led on
  delay(1000); // 1000ms = 1sec; below 11ms I can't recognize that led is blinking
  digitalWrite(13, LOW); // turn the led off
  delay(1000);
}
