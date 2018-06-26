#include"avr/io.h"
#include<util/delay.h>
void T0Delay();
void T1Delay();
void T2Delay();
void main()
{
 DDRB = 0xFF;
 while(1)
 {
  PORTB^=0x01;
 T0Delay();
 _delay_ms(1000);

PORTB^=0x01;
 T1Delay();
_delay_ms(1000);

 PORTB^=0x01;
 T2Delay();
_delay_ms(1);
 
 }
 }
 void T0Delay()//FOR 1500 MICRO SECOND
 {
  TCNT2=-65;
  TCCR2=0x04;
  while((TIFR&0x1)==0);
   TCCR2=0;
   TIFR=0x1;
   }
void T1Delay()//FOR 8 MICRO SECOND
 {
  TCNT2=-88;
  TCCR2=0x49;
  while((TIFR&0x1)==0);
   TCCR2=0;
   TIFR=0x1;
   }
void T2Delay()//FOR 1900 MICRO SECOND
 {
  TCNT2=-83;
  TCCR2=0x4C;
  while((TIFR&0x1)==0);
   TCCR2=0;
   TIFR=0x1;
   }
