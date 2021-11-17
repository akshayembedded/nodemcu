void setup() {
  int i;
for(i=12;i<16;i++)
pinMode(i,OUTPUT);   //5



}

void loop() {
  int i;
for(i=12;i<16;i++)

 digitalWrite(i,HIGH);
delay(1000);

for(i=12;i<16;i++)
digitalWrite(i,LOW);
delay(1000);

}
