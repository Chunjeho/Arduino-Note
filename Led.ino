void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

int i = 0;

void loop() {
  // put your main code here, to run repeatedly:
  for(i = 0;i < 5;i++){
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
  } // red led; 5 times
  
  for(i = 0;i < 10;i++){
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  } // yellow led; 10 times
  
  for(i = 0;i < 15;i++){
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
  } // green led; 15 times
}
