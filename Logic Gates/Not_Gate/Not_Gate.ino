//Logic Gate: NOT
int var;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
}
void loop()
{
  var=digitalRead(12);
  
  if(var==HIGH)
  {
    digitalWrite(13,LOW);
  }
  else {
    digitalWrite(13,HIGH);
  }
}
