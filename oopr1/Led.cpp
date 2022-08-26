#include "Led.h"
#include "RaspberryPi.h"

Led::Led(RaspberryPi*rp):platform(rp),status(0)
{

}

Led::~Led()
{

}

void Led::zetAan() {
    platform->pinWaarde(aansluitNr,1);
    status=1;
}

int Led::isLedAan()const {
    return status;
}

void Led::zetUit() {
     platform->pinWaarde(aansluitNr,0);
     status=0;
}

bool Led::sluitAan(int nr ) {
        if(platform )  {
            if(platform->koppelAansluiting(nr)) {
               aansluitNr=nr;
               platform->zetPinMode(nr,OUTPUT);
               return true;
            }
        }
        return false;
 }
