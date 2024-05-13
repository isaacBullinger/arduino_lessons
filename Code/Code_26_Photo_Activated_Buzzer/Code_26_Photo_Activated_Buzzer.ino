int lightVal;
int lightPin=A0;
int buzzPin=6;
float dt;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(lightPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPin);
  dt=(9./340.)*lightVal-(2./17.);
  digitalWrite(buzzPin,HIGH);
  delay(dt);
  digitalWrite(buzzPin,LOW);
  delay(dt);
  Serial.println(dt);
}
