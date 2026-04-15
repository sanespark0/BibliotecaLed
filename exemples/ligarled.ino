#include <Arduino.h>
#include "LED.h"

LED ledVermelho(40);

void setup()
{
ledVermelho.ligar(true);
ledVermelho.estadoPiscar(false);
}

void loop()
{
LED update();
}