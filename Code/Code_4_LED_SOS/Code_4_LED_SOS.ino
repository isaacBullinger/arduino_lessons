int Pin=5;
int dit=50;
int dah=150;
int interval=100;
int LongInt=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(Pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Pin,HIGH);
delay(dit);
digitalWrite(Pin,LOW);
delay(interval);

digitalWrite(Pin,HIGH);
delay(dit);
digitalWrite(Pin,LOW);
delay(interval);

digitalWrite(Pin,HIGH);
delay(dit);
digitalWrite(Pin,LOW);
delay(interval);



digitalWrite(Pin,HIGH);
delay(dah);
digitalWrite(Pin,LOW);
delay(interval);

digitalWrite(Pin,HIGH);
delay(dah);
digitalWrite(Pin,LOW);
delay(interval);

digitalWrite(Pin,HIGH);
delay(dah);
digitalWrite(Pin,LOW);
delay(interval);



digitalWrite(Pin,HIGH);
delay(dit);
digitalWrite(Pin,LOW);
delay(interval);

digitalWrite(Pin,HIGH);
delay(dit);
digitalWrite(Pin,LOW);
delay(interval);

digitalWrite(Pin,HIGH);
delay(dit);
digitalWrite(Pin,LOW);
delay(LongInt);
}
