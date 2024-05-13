#include <LiquidCrystal.h>
#include <DHT.h>
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
int buttonPin=6;
int buttonVal;
String mess1="Push button for";
String mess2="distance.";
float pingTT;
float c;
float r=767.269;
float d1;
float d2;
float dist1;
float dist2;
float tempC;
float tempF;
int dt=500;
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
lcd.begin(16,2);
HT.begin();
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(buttonVal);
tempF=HT.readTemperature(true);
tempC=HT.readTemperature();
Serial.println(tempC);
lcd.setCursor(0,0);
lcd.print(mess1);
lcd.setCursor(0,1);
lcd.print(mess2);
lcd.print("T:");
lcd.print(tempF);
buttonVal=digitalRead(buttonPin);
while (buttonVal==1){
  buttonVal=digitalRead(buttonPin);
}
lcd.clear();
tempC=HT.readTemperature();
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTT=pulseIn(echoPin,HIGH);
c=((331.3*sqrt(1.+tempC/273.15))*3.28084*12)/1000000;
d1=(pingTT*r*5280.*12.)/(3600.*1000000.);
dist1=(d1)/2;
d2=pingTT*c;
dist2=d2/2;
lcd.setCursor(0,0);
lcd.print("Distance: ");
lcd.setCursor(0,1);
lcd.print(dist1);
lcd.print(", ");
lcd.print(dist2);
delay(5000);
lcd.clear();
}
