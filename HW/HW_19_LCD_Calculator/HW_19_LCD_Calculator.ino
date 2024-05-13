#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int dt=1000;
float num1;
float num2;
float num3;
String oper;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("First Number?");
while (Serial.available()==0){
}
  num1=Serial.parseFloat();
  lcd.setCursor(0,1);
  lcd.print(num1);
  delay(dt);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Operation?");
while (Serial.available()==0){
}
  oper=Serial.readString();
  lcd.setCursor(0,1);
  lcd.print(oper);
  delay(dt);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Second Number?");
while (Serial.available()==0){
}
  num2=Serial.parseFloat();
  lcd.setCursor(0,1);
  lcd.print(num2);
  delay(dt);
  lcd.clear();
  
if (oper=="+"){
  num3=num1+num2;
}
if (oper=="-"){
  num3=num1-num2;
}
if (oper=="*"){
  num3=num1*num2;
}
if (oper=="/"){
  num3=num1/num2;
}
  lcd.setCursor(0,0);
  lcd.print("Operation:");
  lcd.setCursor(0,1);
  lcd.print(num1);
  lcd.print(oper);
  lcd.print(num2);
  lcd.print("=");
  lcd.print(num3);
  delay(5000);
  lcd.clear();
}
