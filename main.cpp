#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL scr(D1, D0, D2);
PwmOut pwm(D0);
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
      scr.line(20,20,40,10,WHITE);
      scr.line(20,20,20,40,WHITE);
      scr.line(20,40,40,40,WHITE);
      scr.line(40,20,40,40,WHITE);
      pwm.period(0.001);
      pwm=1;

}