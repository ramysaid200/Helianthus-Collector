// defines pins numbers
char Incoming_value = 0;
const int relayPin = 8;
const int stepPin = 5; 
const int dirPin = 2; 
const int enPin = 8;
void setup() {
   Serial.begin(9600);
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);

  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);
  
}
void loop() {
    if (Serial.available() > 0)
  {
    Incoming_value = Serial.read();
    Serial.print(Incoming_value);
    Serial.print("\n");
    digitalWrite(dirPin,HIGH);
    if (Incoming_value == '0') {
      digitalWrite(relayPin, HIGH);
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000);
  digitalWrite(relayPin, HIGH);
 
    }
  digitalWrite(dirPin,HIGH);
if (Incoming_value == '1') {
      digitalWrite(relayPin, LOW);
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500);  
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500);
  }
}
     if (Incoming_value == '2') {
    for(int x = 0; x < 800; x++) {
    digitalWrite(stepPin,HIGH); 
    delay(43.75); 
    digitalWrite(stepPin,LOW); 
    delay(43.75);
    }
    }
         if (Incoming_value == '3') {
    for(int x = 0; x < 800; x++) {
    digitalWrite(stepPin,HIGH); 
    delay(37.5);
    digitalWrite(stepPin,LOW); 
  delay(37.5);
    }
    }
         if (Incoming_value == '4') {
    for(int x = 0; x < 800; x++) {
    digitalWrite(stepPin,HIGH); 
    delay(31.25);
    digitalWrite(stepPin,LOW); 
    delay(31.25);
    }
    }
         if (Incoming_value == '5') {
    for(int x = 0; x < 800; x++) {
    digitalWrite(stepPin,HIGH); 
    delay(32.5);
    digitalWrite(stepPin,LOW); 
    delay(32.5);
    }
    }
  
}
}
