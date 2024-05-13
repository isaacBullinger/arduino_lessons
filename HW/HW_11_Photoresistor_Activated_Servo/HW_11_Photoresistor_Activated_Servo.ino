#include <Servo.h>
float lightVal;
int lightPin=A0;
int servoPin=A4;
float servoPos=5;
int LEDPin=11;
float lightMin=0;
float lightMax=1023;
float servoMin=5;
float servoMax=180;
float m;
int dt=1000;
int dt1=250;
String mess1="lightVal = ";
String mess2="servoPos = ";
Servo myServo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
pinMode(LEDPin,OUTPUT);
pinMode(lightPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  m=((servoMax-servoMin)/(lightMin-lightMax));
  lightVal=analogRead(lightPin);
  servoPos=((m*(lightVal-1023.))+5.);
  myServo.write(servoPos);
  Serial.print(mess1);
  Serial.print(lightVal);
  Serial.print(", ");
  Serial.print(mess2);
  Serial.println(servoPos);
  delay(dt1);
  
  if (servoPos>servoMax){
    myServo.write(servoMax);
    analogWrite(LEDPin,51);
    delay(dt);
    analogWrite(LEDPin,0);
  }
  
  if (servoPos<servoMin){
    myServo.write(servoMin);
    analogWrite(LEDPin,51);
    delay(dt);
    analogWrite(LEDPin,0);
  }
}
