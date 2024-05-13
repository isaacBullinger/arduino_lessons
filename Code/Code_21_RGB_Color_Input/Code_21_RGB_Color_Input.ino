int redPin=6;
int greenPin=10;
int bluePin=11;
String myColor;
String msg="What color do you want?";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){
  
}
myColor=Serial.readString();

if (myColor=="red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}
if (myColor=="green"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
}
if (myColor=="blue"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
}
if (myColor=="off"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}
if (myColor=="aqua"){
  digitalWrite(redPin,LOW);
  analogWrite(greenPin,255);
  analogWrite(bluePin,80);
}
if (myColor=="cyan"){
  analogWrite(redPin,0);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
}
if (myColor=="magenta"){
  analogWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,100);
}
if (myColor=="yellow"){
  analogWrite(redPin,255);
  analogWrite(greenPin,100);
  analogWrite(bluePin,0);
}
if (myColor=="orange"){
  analogWrite(redPin,255);
  analogWrite(greenPin,63);
  analogWrite(bluePin,0);
}
if (myColor=="fuchsia"){
  analogWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,31);
}
if (myColor=="white"){
  analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
}
}