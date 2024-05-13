int tiltPin=4;
int tiltVal;
int redPin=23;
int greenPin=22;
void setup() {
  // put your setup code here, to run once:
pinMode(tiltPin,INPUT);
digitalWrite(tiltPin,HIGH);
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal=digitalRead(tiltPin);
Serial.println(tiltVal);
if (tiltVal==0){
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
}
if (tiltVal==1){
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
}
}
