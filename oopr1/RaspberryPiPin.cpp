#include "RaspberryPiPin.h"

RaspberryPiPin::RaspberryPiPin(int r,int p):richting(r),pinNr(p),status(0)
{
   
   pinMode(pinNr,richting);

}

RaspberryPiPin::~RaspberryPiPin()
{

}

void RaspberryPiPin::pinWaarde(int x) {
       digitalWrite (pinNr,x);
}

int RaspberryPiPin::leesPinWaarde() const {
       return digitalRead(pinNr);
}
