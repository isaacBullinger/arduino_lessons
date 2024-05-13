int buzzPin=9;
int dt1=1;
int dt2=2;
int dt3=3;
int dt4=4;
int dt5=5;
int j;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (j=1;j<=100;j=j+1){
  digitalWrite(buzzPin,HIGH);
  delay (dt1);
  digitalWrite(buzzPin,LOW);
  delay (dt1);
}
for (j=1;j<=100;j=j+1){
  digitalWrite(buzzPin,HIGH);
  delay (dt2);
  digitalWrite(buzzPin,LOW);
  delay (dt2);
}
for (j=1;j<=100;j=j+1){
  digitalWrite(buzzPin,HIGH);
  delay (dt3);
  digitalWrite(buzzPin,LOW);
  delay (dt3);
}
for (j=1;j<=100;j=j+1){
  digitalWrite(buzzPin,HIGH);
  delay (dt4);
  digitalWrite(buzzPin,LOW);
  delay (dt4);
}
for (j=1;j<=100;j=j+1){
  digitalWrite(buzzPin,HIGH);
  delay (dt5);
  digitalWrite(buzzPin,LOW);
  delay (dt5);
}
}
