#include <IRremote.h>
int IRpin=9;
IRrecv IR(IRpin);
decode_results cmd;
String myCom;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
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
}
