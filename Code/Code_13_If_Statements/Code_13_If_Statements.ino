int myPin=A3;
int readVal;
float V2;
int dt=250;
int redPin=9;
String mess1="Potentiometer voltage is ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myPin,INPUT);
pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myPin);
V2=(5./1023.)*readVal;
Serial.print(mess1);
Serial.println(V2);
if (V2>2 && V2<3) {
  digitalWrite(redPin,HIGH);
}
if(V2<2 || V2>3) {
  digitalWrite(redPin,LOW);
}

delay(dt);
}
