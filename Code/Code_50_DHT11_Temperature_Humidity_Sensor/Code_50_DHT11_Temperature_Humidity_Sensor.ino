#include <DHT.h>
#define Type DHT11
int sensePin=2;
DHT HT(sensePin,Type);
float humidity;
float tempC;
float tempF;
int dt=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HT.begin();
delay(dt);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempC=HT.readTemperature();
tempF=HT.readTemperature(true);

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print(", ");
Serial.print("Temperature: ");
Serial.print(tempC);
Serial.print(" degrees C");
Serial.print(", ");
Serial.print(tempF);
Serial.println(" degrees F");
delay(1000);
}
