float avg(int,int,int)
void setup() {
Serial.begin(9600);
}

void loop() {
float a = avg(8,9,10)
Serial.print(a,4)
}

float avg (int x,int y,int z)
  {
  float r = (x+y+z)/3;
  return r;
  }
