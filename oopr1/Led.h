#ifndef LED_H
#define LED_H

#pragma once

#define OUTPUT 1
class RaspberryPiPin;
class Led
{
  public:
    Led(RaspberryPi*);
    ~Led();
    void zetAan();
    void zetUit();

  private:
     RaspberryPi* platform;
     int status=0;
      

};
#endif