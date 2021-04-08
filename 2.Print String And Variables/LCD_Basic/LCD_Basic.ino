#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  String text = "MY REG ID IS:";
  lcd.print(text);
  
  int reg=94;
  lcd.setCursor(1,1);
  lcd.print(reg);
}
void loop() {
  
}
