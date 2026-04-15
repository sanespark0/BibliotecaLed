#include <Arduino.h>
#include "LED.h"

LED ledAzul(36);

void setup()
{
    LED ligar();
    LED piscar(2.0f); // frequência ou tempo.
}
void loop()
{
    ledAzul.update();
}