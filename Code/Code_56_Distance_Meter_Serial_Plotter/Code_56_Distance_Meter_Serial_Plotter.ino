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
delay(25);
d=(pingTT*r*5280.*12.)/(3600.*1000000.);
dist=d/2;
Serial.print(0);
Serial.print(",");
Serial.print(dist);
Serial.print(",");
Serial.println(10);
delay(dt); // Tools>Serial Plotter (Ctrl+Shift+L)
}
