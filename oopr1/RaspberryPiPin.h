#ifndef RaspbERRYPIPIN_H
#define RaspbERRYPIPIN_H

#include <wiringPi.h>
#pragma once

class RaspberryPiPin
{
public:
    RaspberryPiPin(int r, int p);
    ~RaspberryPiPin();
    void pinWaarde(int);
    int leesPinWaarde() const;
    

private:

   int richting=INPUT;
   int pinNr;
   int status;


};

#endif