#ifndef MAJAK_H
#define MAJAK_H

#define red_LED 12
#define blue_LED 13

void majak()
{
  digitalWrite(red_LED,HIGH);
  digitalWrite(blue_LED,LOW);
  delay(500);
  digitalWrite(red_LED,LOW);
  digitalWrite(blue_LED,HIGH);
  delay(500);
  digitalWrite(red_LED,LOW);
  digitalWrite(blue_LED,LOW);
}

#endif
