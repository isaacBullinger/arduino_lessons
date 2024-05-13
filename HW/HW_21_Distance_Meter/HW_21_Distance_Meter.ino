int trigPin=4;
int echoPin=5;
float pingTT;
float r=767.269;
float d;
float dist;
int dt=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTT=pulseIn(echoPin,HIGH);
d=(pingTT*r*5280.*12.)/(3600.*1000000.);
dist=d/2;
delay(25);
Serial.print("Distance: ");
Serial.print(dist);
Serial.println(" inches.");
delay(dt);
}
