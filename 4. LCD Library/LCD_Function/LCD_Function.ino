#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);     //LiquidCrystal(


void setup() {
lcd.begin(16, 2);              // begin()  
lcd.print("Hello World");
delay(500);
lcd.home();                     //home()
lcd.print("UNIVERSITY OF"); //print()
delay(500);
lcd.clear();                   //clear()  
lcd.setCursor(0,1);           //setCursor()
lcd.print("ASIS PACIFIC");
delay(500);

lcd.clear();
lcd.setCursor(0,0);
lcd.write('U');                //write()
lcd.cursor();                  //cursor()
lcd.blink();                   //blink()
delay(1000);

lcd.write('A');
lcd.noBlink();                 //noBlink()
delay(1000);

lcd.noCursor();               //noCursor()

lcd.write('P');
lcd.blink();                 //noBlink()
delay(1000);

lcd.noDisplay();             //nodisplay()
delay(1000);

lcd.display();                //display()
delay(1500);


lcd.setCursor(0,0);
String text1 = "UAP CSE DEPT";
lcd.print(text1);
delay(100);

for(int i=0;i< text1.length();i++){
  lcd.scrollDisplayLeft();    //scrollDisplayLeft()
  delay(200);
}

lcd.clear();
delay(500);
String text2 ="UAP DHAKA BANGLADESH";

lcd.print(text2);
//delay(100);
for(int i=text2.length();i>0;i--){
  lcd.scrollDisplayRight();  //scrollDisplayRight()
  delay(200);
}

lcd.clear();
delay(500);
lcd.write('U');
delay(500);
lcd.autoscroll();            //autoscroll()
lcd.write('A');
delay(500);
lcd.autoscroll();
lcd.write('P');
delay(500);

lcd.noAutoscroll();          //noAutoscroll()
lcd.write('C');
delay(500);
lcd.noAutoscroll();          //noAutoscroll()
lcd.write('S');
delay(500);
lcd.noAutoscroll();          //noAutoscroll()
lcd.write('E');
delay(500);


byte smile[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};
lcd.clear();
lcd.createChar(0,smile);     //createChar()
lcd.begin(16,2);  
lcd.write(byte(0));
delay(3000);
lcd.clear();
lcd.cursor();
}


int finalChar = 'a';
void loop() {
 if (finalChar == 'm') {
    lcd.rightToLeft();      //rightToLeft()
  }
  if (finalChar == 's') {
    lcd.leftToRight();      //leftToRight()
  }
  if (finalChar > 'z') {
    lcd.home();
    finalChar = 'a';
  }
  lcd.write(finalChar);     
  delay(1000);
  finalChar++;
}
