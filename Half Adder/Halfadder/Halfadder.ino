int A,B;
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(10,INPUT);
pinMode(9,INPUT);
}
 void loop() {
 A = digitalRead(9);
 B = digitalRead (10);
 int S,C;
 S= A^B;
 C= A&B;
 digitalWrite(13,S);
 digitalWrite(12,C);
}
