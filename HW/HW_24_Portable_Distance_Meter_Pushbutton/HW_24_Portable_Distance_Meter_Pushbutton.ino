#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int trigPin=4;
int echoPin=5;
int buttonPin=6;
int buttonVal;
String mess1="Push button for";
String mess2="distance.";
float pingTT;
float r=767.269;
float d;
float dist;
int dt=500;
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
lcd.begin(16,2);
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(buttonVal);
lcd.setCursor(0,0);
lcd.print(mess1);
lcd.setCursor(0,1);
lcd.print(mess2);
buttonVal=digitalRead(buttonPin);
while (buttonVal==1){
  buttonVal=digitalRead(buttonPin);
}
lcd.clear();
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTT=pulseIn(echoPin,HIGH);
d=(pingTT*r*5280.*12.)/(3600.*1000000.);
dist=d/2;
lcd.setCursor(0,0);
lcd.print("Distance: ");
lcd.setCursor(0,1);
lcd.print(dist);
lcd.print(" in.");
delay(5000);
lcd.clear();
}
