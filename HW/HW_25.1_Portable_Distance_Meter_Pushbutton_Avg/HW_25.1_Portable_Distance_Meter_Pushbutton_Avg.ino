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
int array1[]={31,62,93,124,155,186,217,248,279,310,341,372,403,434,465,496};
byte load[8]={
  B11111,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
};
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
lcd.createChar(0,load);
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
//unsigned long prevtime=0;
//const long interval=781;
//unsigned long currt=millis();
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Measuring:");
lcd.setCursor(0,1);
//if (currt-prevtime>=interval){
  //Serial.print(currt);
  //prevtime=currt;
  //lcd.setCursor(0,1);
  //lcd.print(".");
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
bucket=bucket+dist;
if (j==31 || j==62 || j==93 || j==124 || j==155 || j==186 || j==217 || j==248 || j==279 || j==310 || j==341 || j==372 || j==403 || j==434 || j==465 || j==496){
  lcd.write(byte(0));
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
