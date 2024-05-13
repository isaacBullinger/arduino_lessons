int latchPin=11;
int clockPin=9;
int dataPin=12;
byte myByte=0x00;
int dt=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(myByte,BIN);
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,myByte);
digitalWrite(latchPin,HIGH);
myByte=myByte+1;
delay(dt);
}
