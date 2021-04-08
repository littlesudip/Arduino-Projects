//Logic Gate: XOR

int value_1;
int value_2;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
  pinMode(11,INPUT); 
}
void loop()
{
  value_1=digitalRead(11);
  value_2=digitalRead(12);
  
  if (value_1==value_2)
  { 
    digitalWrite(13,HIGH);
}
  else{
     digitalWrite(13,LOW);
  }
  
}
