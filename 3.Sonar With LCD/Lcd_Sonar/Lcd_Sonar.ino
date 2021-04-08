#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int value;
const int trigPin = 10;
const int echoPin  = 9;


void setup() {
lcd.begin(16, 2);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}

void loop() {
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) * 0.034;
lcd.print("DISTANCE: ");
lcd.print(distance);
delay(50);
lcd.clear();
 
 }
