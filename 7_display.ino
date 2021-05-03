#include "majak.h"
#include "Display7LED.h"  
int button=10;

void setup() 
{  
disp_pin_setup();
}

void loop() 
{

 while(digitalRead(button))
 {  
  disp_9();
  delay(1000);
  disp_8();
  delay(1000);
  disp_7();
  delay(1000);
  disp_6();
  delay(1000);
  disp_5();
  delay(1000);
  disp_4();
  delay(1000);
  disp_3();
  delay(1000);
  disp_2();
  delay(1000);
  disp_1();
  delay(1000);
  disp_0();
 } 

  while(digitalRead(button))
  {
    majak();
  }

  delay(500);
  disp_OFF();
}
