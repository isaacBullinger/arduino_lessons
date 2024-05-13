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
float humidity;
float tempC;
float tempF;
int dt=500;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
HT.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempC=HT.readTemperature();
tempF=HT.readTemperature(true);
lcd.setCursor(0,0);
lcd.print("Humidity: ");
lcd.print(humidity);
lcd.print("%");
lcd.setCursor(0,1);
lcd.print("Temp F: ");
lcd.print(tempF);
delay(dt);
lcd.clear();
}