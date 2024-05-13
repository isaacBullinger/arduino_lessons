int LEDState=0;
int LEDPin=9;
int buttonPin1=12;
int buttonPin2=7;
int buttonNew1;
int buttonNew2;
int buttonOld1=1;
int buttonOld2=1;
int buttonRead1;
int buttonRead2;
int incr1=51;
int incr2=102;
int incr3=153;
int incr4=204;
int incr5=255;
int dt=100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin,OUTPUT);
pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew1=digitalRead(buttonPin1);
Serial.println(buttonNew1);
delay(dt);
if(buttonOld1==0 && buttonNew1==1){
  if(LEDState==0){
    analogWrite(LEDPin,incr1);
    LEDState=incr1;
    incr1=incr1+incr1;
  }
  else{
    analogWrite(LEDPin,incr1);
    LEDState=incr1;
    incr1=incr1+incr1;
  }
}
buttonOld1=buttonNew1;
delay(dt);
}
