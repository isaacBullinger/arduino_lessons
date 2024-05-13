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
int numMeas=500;
float avg;
int j;
float bucket=0;
String mess1="Push button for";
String mess2="distance.";
float pingTT;
float pingTT0;
float pingTT1;
float pingTT2;
float pingTT3;
float pingTTAvg;
float r=767.269;
float d;
float dist;
int dt=500;
String O=("o");
byte hour1[8]={
  B11111,
  B11111,
  B11111,
  B01110,
  B01010,
  B10001,
  B10001,
  B11111,
};
byte hour2[8]={
  B11111,
  B11011,
  B11111,
  B01110,
  B01110,
  B10001,
  B10001,
  B11111,
};
byte hour3[8]={
  B11111,
  B10011,
  B11111,
  B01110,
  B01110,
  B10101,
  B10001,
  B11111,
};
byte hour4[8]={
  B11111,
  B10001,
  B11111,
  B01110,
  B01110,
  B10101,
  B10101,
  B11111,
};
byte hour5[8]={
  B11111,
  B10001,
  B11011,
  B01110,
  B01110,
  B10101,
  B11101,
  B11111,
};
byte hour6[8]={
  B11111,
  B10001,
  B10011,
  B01110,
  B01110,
  B10101,
  B11111,
  B11111,
};
byte hour7[8]={
  B11111,
  B10001,
  B10001,
  B01110,
  B01110,
  B10111,
  B11111,
  B11111,
};
byte hour8[8]={
  B11111,
  B10001,
  B10001,
  B01010,
  B01110,
  B11111,
  B11111,
  B11111,
};
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
lcd.createChar(1,hour1);
lcd.createChar(2,hour2);
lcd.createChar(3,hour3);
lcd.createChar(4,hour4);
lcd.createChar(5,hour5);
lcd.createChar(6,hour6);
lcd.createChar(7,hour7);
lcd.createChar(8,hour8);
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
lcd.setCursor(0,0);
lcd.print("Measuring:");
for (j=1;j<=numMeas;j=j+1){
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTT=pulseIn(echoPin,HIGH);
delay(25);
d=(pingTT*r*5280.*12.)/(3600.*1000000.);
dist=d/2;
if (j==1){
  lcd.setCursor(11,0);
  lcd.write(byte(1));
  lcd.setCursor(0,1);
  lcd.print(O);
}
if (j==31){
  lcd.setCursor(1,1);
  lcd.print(O);
}
if (j==62){
  lcd.setCursor(11,0);
  lcd.write(byte(2));
  lcd.setCursor(2,1);
  lcd.print(O);
}
if (j==93){
  lcd.setCursor(3,1);
  lcd.print(O);
}
if (j==124){
  lcd.setCursor(11,0);
  lcd.write(byte(3));
  lcd.setCursor(4,1);
  lcd.print(O);
}
if (j==155){
  lcd.setCursor(5,1);
  lcd.print(O);
}
if (j==186){
  lcd.setCursor(11,0);
  lcd.write(byte(4));
  lcd.setCursor(6,1);
  lcd.print(O);
}
if (j==217){
  lcd.setCursor(7,1);
  lcd.print(O);
}
if (j==248){
  lcd.setCursor(11,0);
  lcd.write(byte(5));
  lcd.setCursor(8,1);
  lcd.print(O);
}
if (j==279){
  lcd.setCursor(9,1);
  lcd.print(O);
}
if (j==310){
  lcd.setCursor(11,0);
  lcd.write(byte(6));
  lcd.setCursor(10,1);
  lcd.print(O);
}
if (j==341){
  lcd.setCursor(11,1);
  lcd.print(O);
}
if (j==372){
  lcd.setCursor(11,0);
  lcd.write(byte(7));
  lcd.setCursor(12,1);
  lcd.print(O);
}
if (j==403){
  lcd.setCursor(13,1);
  lcd.print(O);
}
if (j==434){
  lcd.setCursor(11,0);
  lcd.write(byte(8));
  lcd.setCursor(14,1);
  lcd.print(O);
}
if (j==465){
  lcd.setCursor(15,1);
  lcd.print(O);
}
}
lcd.clear();
avg=bucket/numMeas;
lcd.setCursor(0,0);
lcd.print("Avg Distance: ");
lcd.setCursor(0,1);
lcd.print(dist);
lcd.print(" in.");
delay(3000);
lcd.clear();
}
