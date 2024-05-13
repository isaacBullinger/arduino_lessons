int j;
int delayTime=500;
int var1=1;
int var2=10;
int inc=1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (j=var1;j<=var2;j=j+inc){
  Serial.println(j);
  delay(delayTime);
}
Serial.println();
}
