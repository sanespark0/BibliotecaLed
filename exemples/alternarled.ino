#include <Arduino.h>
#include "LED.h"

LED ledAzul(40);

void setup()
{
LED ligar();
}
void loop()
{
ledAzul.alternar();
ledAzul.update();
}