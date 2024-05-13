int lightPin=A0;
int lightVal;
int dt=250;
int greenPin=9;
int redPin=11;
int lightLev=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(lightPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
Serial.println(lightVal);
delay(dt);
if (lightVal<=lightLev){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
}
if (lightVal>lightLev){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
}
}
