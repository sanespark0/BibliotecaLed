#include <Arduino.h>
#include "LED.h"

LED ledAzul(39);
void setup()
{
ledVermelho.ligar(false);
ledVermelho.desligar(true);
}
void loop()
{
ledVermelho.update();
}