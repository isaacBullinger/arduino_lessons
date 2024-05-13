float t;
float x;
float y;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(t=0;t<=2*3.14159265;t=t+.01){;
y=sin(t);
x=cos(t);
Serial.print(-1);
Serial.print(",");
Serial.print(x);
Serial.print(",");
Serial.print(y);
Serial.print(",");
Serial.println(1);
// Tools>Serial Plotter (Ctrl+Shift+L)
}
}
