int A,B;
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(10,INPUT);
pinMode(9,INPUT);
}
 void loop() {
 A = digitalRead(10);
 B = digitalRead (9);
 int DIF,BOR;
 DIF= A^B;
 BOR= (!A)&B;
 digitalWrite(13,DIF);
 digitalWrite(12,BOR);
}
