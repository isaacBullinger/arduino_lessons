String myColor;
String msg="What color LED? (Red/Blue/Green) ";
int redPin=9;
int bluePin=7;
int greenPin=5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(bluePin,OUTPUT);
pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){
  
}
myColor=Serial.readString();

if (myColor=="Red" || myColor=="red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,LOW);
}
if (myColor=="Blue" || myColor=="blue"){
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,HIGH);
  digitalWrite(greenPin,LOW);
}
if (myColor=="Green" || myColor=="green"){
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,HIGH);
}
}
