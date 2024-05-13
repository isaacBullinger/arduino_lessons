int One=5;
int Two=7;
int Three=9;
int Four=11;
int Int=3000;
int Bet=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(One,OUTPUT);
pinMode(Two,OUTPUT);
pinMode(Three,OUTPUT);
pinMode(Four,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(One,LOW);
digitalWrite(Two,LOW);
digitalWrite(Three,LOW);
digitalWrite(Four,LOW);
delay(Bet);

digitalWrite(One,LOW);
digitalWrite(Two,LOW);
digitalWrite(Three,LOW);
digitalWrite(Four,HIGH);
delay(Bet);

digitalWrite(One,LOW);
digitalWrite(Two,LOW);
digitalWrite(Three,HIGH);
digitalWrite(Four,LOW);
delay(Bet);

digitalWrite(One,LOW);
digitalWrite(Two,LOW);
digitalWrite(Three,HIGH);
digitalWrite(Four,HIGH);
delay(Bet);

digitalWrite(One,LOW);
digitalWrite(Two,HIGH);
digitalWrite(Three,LOW);
digitalWrite(Four,LOW);
delay(Bet);

digitalWrite(One,LOW);
digitalWrite(Two,HIGH);
digitalWrite(Three,LOW);
digitalWrite(Four,HIGH);
delay(Bet);

digitalWrite(One,LOW);
digitalWrite(Two,HIGH);
digitalWrite(Three,HIGH);
digitalWrite(Four,LOW);
delay(Bet);

digitalWrite(One,LOW);
digitalWrite(Two,HIGH);
digitalWrite(Three,HIGH);
digitalWrite(Four,HIGH);
delay(Bet);

digitalWrite(One,HIGH);
digitalWrite(Two,LOW);
digitalWrite(Three,LOW);
digitalWrite(Four,LOW);
delay(Bet);

digitalWrite(One,HIGH);
digitalWrite(Two,LOW);
digitalWrite(Three,LOW);
digitalWrite(Four,HIGH);
delay(Bet);

digitalWrite(One,HIGH);
digitalWrite(Two,LOW);
digitalWrite(Three,HIGH);
digitalWrite(Four,LOW);
delay(Bet);

digitalWrite(One,HIGH);
digitalWrite(Two,LOW);
digitalWrite(Three,HIGH);
digitalWrite(Four,HIGH);
delay(Bet);

digitalWrite(One,HIGH);
digitalWrite(Two,HIGH);
digitalWrite(Three,LOW);
digitalWrite(Four,LOW);
delay(Bet);

digitalWrite(One,HIGH);
digitalWrite(Two,HIGH);
digitalWrite(Three,LOW);
digitalWrite(Four,HIGH);
delay(Bet);

digitalWrite(One,HIGH);
digitalWrite(Two,HIGH);
digitalWrite(Three,HIGH);
digitalWrite(Four,LOW);
delay(Bet);


digitalWrite(One,HIGH);
digitalWrite(Two,HIGH);
digitalWrite(Three,HIGH);
digitalWrite(Four,HIGH);
delay(Int);
}
