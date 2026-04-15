#include <Arduino.h>
#include "LED.h"
const uint8_t pinBotao = 4;
LED ledAzul(2);
bool estadoAnteriorBotao = HIGH;
uint8_t modo = 0;
void setup()
{
pinMode(pinBotao, INPUT_PULLUP);
ledAzul.ligar();
}
void loop()
{
bool estadoAtualBotao = digitalRead(pinBotao);
if (estadoAnteriorBotao == HIGH && estadoAtualBotao == LOW)
{
    modo++;
    if (modo > 2) modo = 0;
}

estadoAnteriorBotao = estadoAtualBotao;

switch (modo)
{
case 0:
    ledAzul.desligar();
    break;

case 1:
    ledAzul.ligar();
    break;

case 2:
    ledAzul.piscar(2.0f);
    break;
}

ledAzul.update();
}