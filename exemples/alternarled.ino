#include <Arduino.h>
#include "LED.h"

LED ledVermelho(40);

void setup()
{
ledVermelho.ligar();
}
void loop()
{
ledVermelho.alternar();
ledVermelho.update();
}