int buttonPin=2;
int buttonVal;
int dt=100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal=digitalRead(buttonPin);
  Serial.print("Your button is: ");
  Serial.println(buttonVal);
  delay(dt);
}
