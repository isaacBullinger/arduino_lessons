int buzzPin=9;
int potPin=A0;
int potVal;
float toneVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  toneVal=(9940./1023.)*potVal+60;
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(toneVal);
  Serial.println(toneVal);
}
