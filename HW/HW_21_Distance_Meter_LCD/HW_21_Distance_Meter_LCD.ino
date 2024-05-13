#include <DHT.h>
#include <LiquidCrystal.h>
#define Type DHT11
int sensePin=2;
DHT HT(sensePin,Type);
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int trigPin=4;
int echoPin=5;
float pingTT;
float r=767.269;
float d;
float dist;
float tempF;
int dt=500;
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
HT.begin();
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTT=pulseIn(echoPin,HIGH);
d=(pingTT*r*5280.*12.)/(3600.*1000000.);
dist=d/2;
tempF=HT.readTemperature(true);
lcd.setCursor(0,0);
lcd.print("Distance: ");
lcd.print(dist);
lcd.print("in.");
lcd.setCursor(0,1);
lcd.print("Temp F: ");
lcd.print(tempF);
delay(dt);
lcd.clear();
}
