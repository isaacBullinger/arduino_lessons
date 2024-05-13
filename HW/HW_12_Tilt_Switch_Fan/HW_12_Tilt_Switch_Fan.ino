int speedPin=6;
int dir1=50;
int dir2=48;
int mSpeed=90;
int tiltPin=4;
int tiltVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(tiltPin,INPUT);
  digitalWrite(tiltPin,HIGH);
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal=digitalRead(tiltPin);
Serial.println(tiltVal);
if (tiltVal==0){
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(speedPin,255);
  delay(25);
  analogWrite(speedPin,mSpeed);
}
if (tiltVal==1){
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(speedPin,0);
}
}
