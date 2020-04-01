#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL scr(D1, D0, D2);
//PwmOut pwm(D0);
int main()
{
      //scr.background_color(WHITE);
      //scr.textbackground_color(WHITE);
      //scr.color(BLUE);
      scr.cls();
      scr.text_width(2);
      scr.text_height(2);
      scr.printf("107033131");
      //scr.color(GREEN);
      scr.line(20,20,50,20,WHITE);
      scr.line(20,20,20,50,WHITE);
      scr.line(20,50,50,50,WHITE);
      scr.line(50,20,50,50,WHITE);
      //pwm.period(0.001);
      //pwm=0.5;

}