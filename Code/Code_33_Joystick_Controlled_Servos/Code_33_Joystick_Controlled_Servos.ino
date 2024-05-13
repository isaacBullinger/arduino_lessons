#include <Servo.h>
Servo xServo;
Servo yServo;
int xPin=A0;
int yPin=A1;
int xSPin=9;
int ySPin=10;
int buzzPin=7;
int sPin=2;
int sVal;
int dt=250;
float wValmaxx=180;
float wValmaxy=180;
float wValminx=5;
float wValminy=0;
float rValmax=1023;
float rvalmin=0;
int xVal;
int yVal;
float WVx;
float WVy;
float m1;
float m2;
String mess1=", ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xPin,INPUT);
pinMode(yPin,INPUT);
pinMode(sPin,INPUT);
pinMode(xSPin,OUTPUT);
pinMode(ySPin,OUTPUT);
pinMode(buzzPin,OUTPUT);
xServo.attach(xSPin);
yServo.attach(ySPin);
digitalWrite(sPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xVal=analogRead(xPin);
m1=(wValmaxx-wValminx)/(rValmax-rvalmin);
WVx=m1*(xVal-wValminx)+wValminx;
yVal=analogRead(yPin);
m2=(wValmaxy-wValminy)/(rValmax-rvalmin);
WVy=m1*(yVal-wValminy)+wValminy;
sVal=digitalRead(sPin);
xServo.write(WVx);
yServo.write(WVy);
if (sVal==0){
  digitalWrite (buzzPin, HIGH);
}
else {
  digitalWrite (buzzPin, LOW);
}
delay(dt);
Serial.print("X value = ");
Serial.print(WVx);
Serial.print(mess1);
Serial.print("Y value = ");
Serial.print(WVy);
Serial.print(mess1);
Serial.print("Switch state is: ");
Serial.println(sVal);
}
