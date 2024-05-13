#include <IRremote.h>
int dir1=4;
int dir2=3;
int speedPin=5;
float mSpeed;
int IRpin=9;
IRrecv IR(IRpin);
decode_results cmd;
String myCom;
String pwrState;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
IR.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
while (IR.decode(&cmd)==0){
}
delay(1500);
IR.resume();
if (cmd.value==0xFFA25D){
  myCom="pwr";
  Serial.println(myCom);
}
if (cmd.value==0xFF629D){
  myCom="vol+";
  Serial.println(myCom);
}
if (cmd.value==0xFFE21D){
  myCom="func/stop";
  Serial.println(myCom);
}
if (cmd.value==0xFF22DD){
  myCom="rewind";
  Serial.println(myCom);
}
if (cmd.value==0xFF02FD){
  myCom="play/pause";
  Serial.println(myCom);
}
if (cmd.value==0xFFC23D){
  myCom="fastForward";
  Serial.println(myCom);
}
if (cmd.value==0xFFE01F){
  myCom="down";
  Serial.println(myCom);
}
if (cmd.value==0xFFA857){
  myCom="vol-";
  Serial.println(myCom);
}
if (cmd.value==0xFF906F){
  myCom="up";
  Serial.println(myCom);
}
if (cmd.value==0xFF6897){
  myCom="0";
  Serial.println(myCom);
}
if (cmd.value==0xFF9867){
  myCom="eq";
  Serial.println(myCom);
}
if (cmd.value==0xFFB04F){
  myCom="st/rept";
  Serial.println(myCom);
}
if (cmd.value==0xFF30CF){
  myCom="1";
  Serial.println(myCom);
}
if (cmd.value==0xFF18E7){
  myCom="2";
  Serial.println(myCom);
}
if (cmd.value==0xFF7A85){
  myCom="3";
  Serial.println(myCom);
}
if (cmd.value==0xFF10EF){
  myCom="4";
  Serial.println(myCom);
}
if (cmd.value==0xFF38C7){
  myCom="5";
  Serial.println(myCom);
}
if (cmd.value==0xFF5AA5){
  myCom="6";
  Serial.println(myCom);
}
if (cmd.value==0xFF42BD){
  myCom="7";
  Serial.println(myCom);
}
if (cmd.value==0xFF4AB5){
  myCom="8";
  Serial.println(myCom);
}
if (cmd.value==0xFF52AD){
  myCom="9";
  Serial.println(myCom);
}
if (myCom=="pwr"){
  mSpeed=150;
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(speedPin,mSpeed);
  Serial.println("Motor powered ON.");
}
if (myCom=="func/stop"){
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,0);
  Serial.println("Motor powered OFF.");
}
if (myCom=="fastForward"){
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(speedPin,mSpeed);
}
if (myCom=="rewind"){
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,mSpeed);
}
if (myCom=="up"){
  mSpeed=mSpeed+15;
  if (mSpeed>255){
    mSpeed=255;
  }
  analogWrite(speedPin,mSpeed);
}
if (myCom=="down"){
  mSpeed=mSpeed-15;
  if (mSpeed<255){
    mSpeed=0;
  }
  analogWrite(speedPin,mSpeed);
}
}
