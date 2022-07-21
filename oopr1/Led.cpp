#include "Led.h"
#include "RaspberryPiPin.h"

Led::Led(RaspberryPiPin*rp):pin(rp),status(0)
{

}

Led::~Led()
{

}


void Led::zetAan() {
    pin->pinWaarde(1);
}
void Led::zetUit() {
    pin->pinWaarde(0);
}