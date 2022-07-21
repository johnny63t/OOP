#include <wiringPi.h>
#include "RaspberryPiPin.h"
#include "Led.h"

#define TIMELEDON 1000
#define TIMELEDOFF 500
int main (void)
{
  RaspberryPiPin pld(OUTPUT,17);
  Led ld(&pld);
 
  for (;;)
  {
    ld.zetAan();
    delay (TIMELEDON) ;
   ld.zetUit();
    delay (TIMELEDOFF);
  }
  return 0 ;
}
