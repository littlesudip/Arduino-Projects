void setup() {
  Serial.begin(9600);
}

void loop() {
int var = 20;
char c = 'sudip';
Serial.println(10);
delay(1000);
Serial.print("The Value of the variable is: ");
Serial.println(var);
delay(1000);
Serial.println(c);
delay(1000);
Serial.println("Hello");
delay(1000);
}
