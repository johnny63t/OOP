
//#include "RaspberryPiPin.h"
//#include "RaspberryPi.h"
#include "RaspberryPi.h"
#include "Led.h"

#define TIMELEDON 1000
#define TIMELEDOFF 500

int main (void)
{
  RaspberryPi pi;
  Led ld(&pi);
  ld.sluitAan(17);
 
  for (;;)
  {
    ld.zetAan();
    delay (TIMELEDON) ;
    ld.zetUit();
    delay (TIMELEDOFF);
  }
  return 0 ;
}
