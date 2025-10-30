#ifndef PuenteH_h
#define PuenteH_h
#include "Arduino.h"
#include <stdint.h>

class PuenteH {
public:
  const uint8_t dirMotorIzq = 18;
  const uint8_t motorIzqPwm = 6;

  const uint8_t dirMotorDer = 9;
  const uint8_t motorDerPwm = 8;

  const int pwmFreq = 5000;
  const int pwmRes = 10;

  void begin();
  void motorDer(int velocidad);
  void motorIzq(int velocidad);
  void motores(int velDer, int velIzqr);
  void freno(bool sentido, int velocidad);
private:
};
#endif
