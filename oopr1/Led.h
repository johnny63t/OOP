#ifndef LED_H
#define LED_H

#pragma once

#define OUTPUT 1
class RaspberryPiPin;
class Led
{
  public:
    Led(RaspberryPiPin*);
    ~Led();
    void zetAan();
    void zetUit();

  private:
     RaspberryPiPin* pin;
     int status=0;
      

};
#endif