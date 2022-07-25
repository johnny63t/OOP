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
}
void Led::zetUit() {
    platform->pinWaarde(aansluitNr,0);
}
bool Led::sluitAan(int nr ) {
        if(platform && platform->koppelAansluiting(nr))  {
            aansluitNr=nr;
             return true;
             
        }
        return false;
 }
