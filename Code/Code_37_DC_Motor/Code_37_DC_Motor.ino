int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedPin,255);
delay(25);
analogWrite(speedPin,mSpeed);
delay(5000);

}
