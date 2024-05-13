int buttonPin1=2;
int buttonVal1;
int buttonVal2;
int buttonPin2=4;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
digitalWrite(buttonPin1,HIGH);
digitalWrite(buttonPin2,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1=digitalRead(buttonPin1);
  buttonVal2=digitalRead(buttonPin2);
  Serial.print("buttonVal1 = ");
  Serial.print(buttonVal1);
  Serial.print(", ");
  Serial.print("buttonVal2 = ");
  Serial.println(buttonVal2);
  delay(250);
}
