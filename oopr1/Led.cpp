#include "Led.h"
#include "RaspberryPi.h"

Led::Led(RaspberryPi*rp):platform(rp),status(0)
{

}

Led::~Led()
{

}

void Led::zetAan() {
    aansluitPin->waardePin(1);
}
void Led::zetUit() {
    aansluitPin->waardePin(1);
}

bool Led::sluitAan(int nr ) {
        if(platform )  {
            aansluitPin=platform->koppelAansluiting(nr);
            if(aansluitPin)
               return true;
             
        }
        return false;
 }
