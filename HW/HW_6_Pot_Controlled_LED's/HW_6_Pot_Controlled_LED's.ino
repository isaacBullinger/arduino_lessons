int myPin=A3;
int readVal;
float V2;
int dt=250;
int redPin=9;
int yellowPin=7;
int greenPin=5;
String mess1="Potentiometer voltage is ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myPin,INPUT);
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myPin);
V2=(5./1023.)*readVal;
Serial.print(mess1);
Serial.println(V2);
if (V2>4) {
  digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,LOW);
  digitalWrite(redPin,HIGH);
}
if(V2<4 && V2>3) {
  digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(redPin,LOW);
}
if (V2<3) {
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellowPin,LOW);
  digitalWrite(redPin,LOW);
}
delay(dt);
}
