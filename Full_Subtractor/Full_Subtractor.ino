int A,B,C;
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(10,INPUT);
pinMode(9,INPUT);
pinMode(8,INPUT);
}
 void loop() {
 A = digitalRead(10);
 B = digitalRead (9);
 C = digitalRead (8);
 int DIF,BOR;
 DIF= A^B^C;
 BOR= ((B&C)|(!A)&(B|C));
 digitalWrite(13,DIF);
 digitalWrite(12,BOR);
}
