int j=1;
int t=750;
int x=12;
int y=11;
int z;
String myString=" + ";
String mess1="A circle with radius ";
String mess2=" has an area of ";
String mess3=".";
float pi=3.14;
float r=2;
float area;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
area=pi*r*r;
Serial.print(mess1);
Serial.print(r);
Serial.print(mess2);
Serial.print(area);
Serial.println(mess3);
delay(t);
r=r+.5;
}
