#include <wiringPi.h>

#define TIMELEDON 1000
#define TIMELEDOFF 500
int main (void)
{
  wiringPiSetup () ;
  pinMode (0, OUTPUT) ;
  for (;;)
  {
    digitalWrite (0, HIGH) ; 
    delay (TIMELEDON) ;
    digitalWrite (0,  LOW) ; 
    delay (TIMELEDOFF);
  }
  return 0 ;
}
