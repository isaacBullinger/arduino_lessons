int buttonPin1=2;
int buttonVal1;
int buttonVal2;
int buttonPin2=4;
int dir1=50;
int dir2=48;
int speedPin=6;
int mSpeed=0;
int bVal=0;
int incr=5;
int dt=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
digitalWrite(buttonPin1,HIGH);
digitalWrite(buttonPin2,HIGH);
pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1=digitalRead(buttonPin1);
  buttonVal2=digitalRead(buttonPin2);
  Serial.print("buttonVal1 = ");
  Serial.print(buttonVal1);
  Serial.print(", ");
  Serial.print("buttonVal2 = ");
  Serial.print(buttonVal2);
  Serial.print(", ");
  Serial.print("mSpeed = ");
  Serial.println(mSpeed);
if (buttonVal1==0){
  mSpeed=mSpeed-10;
  delay(dt);
}
if (buttonVal2==0){
  mSpeed=mSpeed+10;
  delay(dt);
}
if (mSpeed>255){
  mSpeed=255;
}
if (mSpeed<-255){
  mSpeed=-255;
}
if (mSpeed==10){
  mSpeed=100;
}
if (mSpeed==-10){
  mSpeed=-100;
}
if (mSpeed==90 || mSpeed==95){
  mSpeed=0;
}
if (mSpeed==-90 || mSpeed==-95){
  mSpeed=0;
}
if (mSpeed==0){
  analogWrite(speedPin,0);
}
if (mSpeed>0){
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(speedPin,mSpeed);
}
if (mSpeed<0){
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,abs(mSpeed));
}
}
