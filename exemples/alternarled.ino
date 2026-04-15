#include <Arduino.h>
#include "LED.h"
LED ledAzul(2);

void setup()
{
LED ligar();
}
void loop()
{
ledAzul.alternar();
ledAzul.update();
}