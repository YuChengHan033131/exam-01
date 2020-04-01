#include "mbed.h"
#include "uLCD_4DGL.h"
uLCD_4DGL scr(D1, D0, D2);
PwmOut PWM1(D7);
Serial pc( USBTX, USBRX );
int main() {
    scr.cls();
    scr.text_width(2);
    scr.text_height(2);
    scr.printf("107033131");
    scr.line(20,20,50,20,WHITE);
    scr.line(20,20,20,50,WHITE);
    scr.line(20,50,50,50,WHITE);
    scr.line(50,20,50,50,WHITE);
    float temp;
    PWM1.period(0.001);
    for(float i=0;i<1;i+=0.1){
        PWM1=i;
        temp=PWM1;
        pc.printf("%f\r\n",temp);
    }
    for(float i=1;i>=0;i-=0.1){
        PWM1=i;
        temp=PWM1;
        pc.printf("%f\r\n",temp);
    }
}
