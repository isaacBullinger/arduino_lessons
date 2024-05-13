int Pin=3;
int off=0;
int dim=1;
int med=127;
int hi=255;
int D=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(Pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(Pin,off);
delay(D);

analogWrite(Pin,dim);
delay(D);

analogWrite(Pin,med);
delay(D);

analogWrite(Pin,hi);
delay(D);
}
