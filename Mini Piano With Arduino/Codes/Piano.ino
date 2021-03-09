//declearing input and output pins as global variable. 
int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int button5 = 6;
int button6 = 7;
int button7 = 8;
int button8 = 9;
int speaker = 13;

void setup()
{
  //declaring button pin as input
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(button5,INPUT);
  pinMode(button6,INPUT);
  pinMode(button7,INPUT);
  pinMode(button8,INPUT);
  //declaring speaker pin as output
  pinMode(speaker,OUTPUT);
  
}

void loop()
{
  // reading value from buttons
  int b1 = digitalRead(button1);
  int b2 = digitalRead(button2);
  int b3 = digitalRead(button3);
  int b4 = digitalRead(button4);
  int b5 = digitalRead(button5);
  int b6 = digitalRead(button6);
  int b7 = digitalRead(button7);
  int b8 = digitalRead(button8);

  //condition for each buttons.
  //tone(pin, frequency, duration)
  
  if( b1 == 1 ){
     tone(speaker,300,150);
  }
    if( b2 == 1 ){
     tone(speaker,400,150);
  }
    if( b3 == 1 ){
     tone(speaker,500,150);
  }
    if( b4 == 1 ){
     tone(speaker,600,150);
  }
    if( b5 == 1 ){
     tone(speaker,700,150);
  }
    if( b6 == 1 ){
     tone(speaker,800,150);
  }
    if( b7 == 1 ){
     tone(speaker,900,150);
  }
    if( b8 == 1 ){
     tone(speaker,1000,150);
  }
  //short dealy for tones
  delay(10);
  
}
