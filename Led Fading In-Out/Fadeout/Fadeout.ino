int ledpin = 9;

void setup() {
 pinMode(ledpin,OUTPUT);
}
void loop() {
   for( int fadevalue=2500; fadevalue >=0; fadevalue-=5){
   analogWrite(ledpin,fadevalue);
   delay(150);
  }

}
