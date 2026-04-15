#include <Arduino.h>
#include "LED.h"

const uint8_t pinBotao = 4;


LED ledVermelho(39);

bool estadoAnteriorBotao = HIGH;
uint8_t modo = 0;
void setup()
{
pinMode(pinBotao, INPUT_PULLUP);
ledVermelho.ligar();
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
    ledVermelho.desligar();
    break;

case 1:
    ledVermelho.ligar();
    break;

case 2:
    ledVermelho.piscar(2.0f);
    break;
}

ledVermelho.update();
}