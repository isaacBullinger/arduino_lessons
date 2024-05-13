#include <IRremote.h>
int IRpin=9;
IRrecv IR(IRpin);
decode_results cmd;
String myCom;
int redPin=6;
int greenPin=5;
int bluePin=11;
int rBright=255;
int gBright=255;
int bBright=255;
float dFact=1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
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
if (cmd.value==0xFFE21D){
  myCom="func/stop";
  Serial.println(myCom);
}
if (cmd.value==0xFFE01F){
  myCom="down";
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
if (cmd.value==0xFF30CF){
  myCom="1";
  Serial.println("red");
}
if (cmd.value==0xFF18E7){
  myCom="2";
  Serial.println("green");
}
if (cmd.value==0xFF7A85){
  myCom="3";
  Serial.println("blue");
}
if (cmd.value==0xFF10EF){
  myCom="4";
  Serial.println("cyan");
}
if (cmd.value==0xFF38C7){
  myCom="5";
  Serial.println("magenta");
}
if (cmd.value==0xFF5AA5){
  myCom="6";
  Serial.println("yellow");
}
if (myCom=="pwr"){
  rBright=255;
  gBright=255;
  bBright=255;
  dFact=1;
}
if (myCom=="func/stop"){
  rBright=0;
  gBright=0;
  bBright=0;
  dFact=0;
}
if (myCom=="0"){
  rBright=255;
  gBright=255;
  bBright=255;
}
if (myCom=="1"){
  rBright=255;
  gBright=0;
  bBright=0;
}
if (myCom=="2"){
  rBright=0;
  gBright=255;
  bBright=0;
}
if (myCom=="3"){
  rBright=0;
  gBright=0;
  bBright=255;
}
if (myCom=="4"){
  rBright=0;
  gBright=255;
  bBright=255;
}
if (myCom=="5"){
  rBright=255;
  gBright=0;
  bBright=100;
}
if (myCom=="6"){
  rBright=255;
  gBright=100;
  bBright=0;
}
if (myCom=="down"){
  dFact=dFact*.75;
}
if (myCom=="up"){
  dFact=dFact*1.3;
  if (dFact>1){
    dFact=1;
  }
}
  analogWrite(redPin,rBright*dFact);
  analogWrite(greenPin,gBright*dFact);
  analogWrite(bluePin,bBright*dFact);
}
