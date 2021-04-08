int A,B,C;
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
}
 void loop() {
 A = digitalRead(7);
 B = digitalRead (8);
 C = digitalRead (9);
 int SUM,CARRY;
 SUM = A^B^C;
 CARRY= (A&B)|(B&C)|(A&C);
 digitalWrite(13,SUM);
 digitalWrite(12,CARRY);
}
