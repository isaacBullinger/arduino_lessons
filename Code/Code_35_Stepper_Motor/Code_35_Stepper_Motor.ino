#include <Stepper.h>
int buttonPin=2;
int stepsPerRevolution=2048;
int motSpeed=3;
int buttonNew;
int buttonOld=1;
int dt=500;
int motDir=1;
Stepper myStepper(stepsPerRevolution, 8,10,9,11);
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
myStepper.setSpeed(motSpeed);
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew=digitalRead(buttonPin);
  Serial.println(buttonNew);
  if(buttonOld==1 && buttonNew==0){
    motDir=motDir*(-1);
  }
  myStepper.step(motDir*1);
  buttonOld=buttonNew;
}
