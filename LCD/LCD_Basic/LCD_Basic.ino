#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int thisChar = 'a';
void setup() {
 
lcd.begin(16, 2);              // begin()
  lcd.clear();
delay(500);
lcd.write('a');
delay(500);
lcd.autoscroll();            //autoscroll()
lcd.write('b');
delay(500);
lcd.autoscroll();
lcd.write('c');
delay(500);
lcd.noAutoscroll();          //noAutoscroll()
lcd.write('d');
delay(500);
lcd.noAutoscroll();          //noAutoscroll()
lcd.write('e');
delay(500);
lcd.noAutoscroll();          //noAutoscroll()
lcd.write('f');
delay(500);

}
void loop() {
 
}
