int buzzPin=9;
int buzzTime=1;
int buzzTime1=1;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(buzzPin,LOW);
delayMicroseconds(buzzTime1);
digitalWrite(buzzPin,LOW);
delayMicroseconds(buzzTime1);
}
