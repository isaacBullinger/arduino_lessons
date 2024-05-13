int jPin=A1;
int jVal;
int dir1=50;
int dir2=48;
int speedPin=6;
float mSpeed;
int dt=250;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(jPin,INPUT);
pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
jVal=analogRead(jPin);
delay(dt);
Serial.print("jVal = ");
Serial.print(jVal);
Serial.print(", ");
if (jVal==517){
  mSpeed=0;
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,mSpeed);
  Serial.println("Motor is OFF.");
}
if (jVal<517){
  mSpeed=((-255./517.)*jVal)+255.;
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(speedPin,mSpeed);
  Serial.print("Motor speed = ");
  Serial.println(mSpeed);
}
if (jVal>517){
  mSpeed=((255./506.)*jVal)-(131835./506.);
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,mSpeed);
  Serial.print("Motor speed = ");
  Serial.println(-mSpeed);
}
}
