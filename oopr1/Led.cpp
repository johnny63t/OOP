#include "Led.h"
#include "RaspberryPi.h"

Led::Led(RaspberryPi*rp):platform(rp),status(0)
{

}

Led::~Led()
{

}

void Led::zetAan() {
    platform->pinWaarde(1);
}
void Led::zetUit() {
    platform->pinWaarde(0);
}