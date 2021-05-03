#include <Arduino.h>
#include "Display7LED.h"


void disp_pin_setup() 
{
  pinMode(a_LED,OUTPUT);
  pinMode(b_LED,OUTPUT);
  pinMode(c_LED,OUTPUT);
  pinMode(d_LED,OUTPUT);
  pinMode(e_LED,OUTPUT);
  pinMode(f_LED,OUTPUT);
  pinMode(g_LED,OUTPUT);
  pinMode(DP_LED,OUTPUT);
}

void disp_0(){
  digitalWrite(a_LED,HIGH);
  digitalWrite(b_LED,HIGH);
  digitalWrite(c_LED,HIGH);
  digitalWrite(d_LED,HIGH);
  digitalWrite(e_LED,HIGH);
  digitalWrite(f_LED,HIGH);
  digitalWrite(g_LED,LOW);
  digitalWrite(DP_LED,HIGH);
}

void disp_1(){
  digitalWrite(a_LED,LOW);
  digitalWrite(b_LED,HIGH);
  digitalWrite(c_LED,HIGH);
  digitalWrite(d_LED,LOW);
  digitalWrite(e_LED,LOW);
  digitalWrite(f_LED,LOW);
  digitalWrite(g_LED,LOW);
  digitalWrite(DP_LED,HIGH);
}

void disp_2(){
  digitalWrite(a_LED,HIGH);
  digitalWrite(b_LED,HIGH);
  digitalWrite(c_LED,LOW);
  digitalWrite(d_LED,HIGH);
  digitalWrite(e_LED,HIGH);
  digitalWrite(f_LED,LOW);
  digitalWrite(g_LED,HIGH);
  digitalWrite(DP_LED,HIGH);
}

void disp_3(){
  digitalWrite(a_LED,HIGH);
  digitalWrite(b_LED,HIGH);
  digitalWrite(c_LED,HIGH);
  digitalWrite(d_LED,HIGH);
  digitalWrite(e_LED,LOW);
  digitalWrite(f_LED,LOW);
  digitalWrite(g_LED,HIGH);
  digitalWrite(DP_LED,HIGH);
}

void disp_4(){
  digitalWrite(a_LED,LOW);
  digitalWrite(b_LED,HIGH);
  digitalWrite(c_LED,HIGH);
  digitalWrite(d_LED,LOW);
  digitalWrite(e_LED,LOW);
  digitalWrite(f_LED,HIGH);
  digitalWrite(g_LED,HIGH);
  digitalWrite(DP_LED,HIGH);
}

void disp_5(){
  digitalWrite(a_LED,HIGH);
  digitalWrite(b_LED,LOW);
  digitalWrite(c_LED,HIGH);
  digitalWrite(d_LED,HIGH);
  digitalWrite(e_LED,LOW);
  digitalWrite(f_LED,HIGH);
  digitalWrite(g_LED,HIGH);
  digitalWrite(DP_LED,HIGH);
}

void disp_6(){
  digitalWrite(a_LED,HIGH);
  digitalWrite(b_LED,LOW);
  digitalWrite(c_LED,HIGH);
  digitalWrite(d_LED,HIGH);
  digitalWrite(e_LED,HIGH);
  digitalWrite(f_LED,HIGH);
  digitalWrite(g_LED,HIGH);
  digitalWrite(DP_LED,HIGH);
}

void disp_7(){
  digitalWrite(a_LED,HIGH);
  digitalWrite(b_LED,HIGH);
  digitalWrite(c_LED,HIGH);
  digitalWrite(d_LED,LOW);
  digitalWrite(e_LED,LOW);
  digitalWrite(f_LED,LOW);
  digitalWrite(g_LED,LOW);
  digitalWrite(DP_LED,HIGH);
}

void disp_8(){
  digitalWrite(a_LED,HIGH);
  digitalWrite(b_LED,HIGH);
  digitalWrite(c_LED,HIGH);
  digitalWrite(d_LED,HIGH);
  digitalWrite(e_LED,HIGH);
  digitalWrite(f_LED,HIGH);
  digitalWrite(g_LED,HIGH);
  digitalWrite(DP_LED,HIGH);
}

void disp_9(){
  digitalWrite(a_LED,HIGH);
  digitalWrite(b_LED,HIGH);
  digitalWrite(c_LED,HIGH);
  digitalWrite(d_LED,LOW);
  digitalWrite(e_LED,LOW);
  digitalWrite(f_LED,HIGH);
  digitalWrite(g_LED,HIGH);
  digitalWrite(DP_LED,HIGH);
}

void disp_OFF(){
  digitalWrite(a_LED,LOW);
  digitalWrite(b_LED,LOW);
  digitalWrite(c_LED,LOW);
  digitalWrite(d_LED,LOW);
  digitalWrite(e_LED,LOW);
  digitalWrite(f_LED,LOW);
  digitalWrite(g_LED,LOW);
  digitalWrite(DP_LED,LOW);
}
