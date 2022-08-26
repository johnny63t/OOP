#ifndef RASPBERRYPI_H
#define RASPBERRYPI_H

#pragma once
#include <wiringPi.h>
#include "RaspberryPiPin.h"

#define AANTALPINNEN 4
class RaspberryPi
{
  public:
    RaspberryPi();
    ~RaspberryPi();
    void zetPinMode(int,int );
    void pinWaarde(int, int );
    bool koppelAansluiting(int);
    
  private:
    RaspberryPiPin pinnen[AANTALPINNEN];
   
};

#endif
