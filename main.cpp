#include "mbed.h"
#include "uLCD_4DGL.h"
PwmOut PWM1(D6);

int main() {
    /*scr.cls();
      scr.text_width(2);
      scr.text_height(2);
      scr.printf("107033131");
      scr.line(20,20,50,20,WHITE);
      scr.line(20,20,20,50,WHITE);
      scr.line(20,50,50,50,WHITE);
      scr.line(50,20,50,50,WHITE);*/
  PWM1.period(0.001);
  for(float i=0;i<1;i+=0.1){
      PWM1=i;
  }for(float i=1;i>=0;i-=0.1){
      PWM1=i;
  }
  
}
