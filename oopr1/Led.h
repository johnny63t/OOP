#ifndef LED_H
#define LED_H

#pragma once

#define OUTPUT 1
class RaspberryPiPin;
class RaspberryPi;
class Led
{
  public:
    Led(RaspberryPi*);
    ~Led();
    void zetAan();
    void zetUit();
    bool sluitAan(int);

  private:
     RaspberryPi* platform;
     RaspberryPiPin* aansluitPin;
     int status=0;
     int aansluitNr=-1;
      

};
#endif