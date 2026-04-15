#include "LED.h"
// classe funcao

LED::LED(uint8_t pin) :
pino (pin),
estado (LOW),
desligarPorTempo (false),
desligarNoMomento(0),
tempoAnteriorPiscar(0),
tempoEspera(0),
estadoPiscar(false),
repeticoes(0)
{
    pinMode(pino, OUTPUT);
}

void LED::ligar()
{ estadoPiscar = false;
    desligarPorTempo = false; //resta os valores
    estado = HIGH;
}
void LED::ligar(uint32_t tempoLigado_ms)
{
    estadoPiscar = false;//resta os valores
    estado = HIGH;
    desligarPorTempo = true;
    desligarNoMomento = millis() + tempoLigado_ms;
}
void LED::desligar()
{
   estadoPiscar = false; //resta os valores 
    estado = LOW;
    
}
void LED ::alternar()
{
    estado = !estado;
    estado = !estado;
    
}
void LED::update()
{
    if (desligarPorTempo) funcaoDesligamento();
    
    if (estadoPiscar)
    {
        funcaoPiscar();
    }
    digitalWrite(pino, estado);
}
bool LED::getEstado()
{
    return estado;
}
uint8_t LED::getPino()
{
    return pino;
}
void LED::setEstado(bool estado)
{
    this->estado = estado;
    desligarPorTempo = false;
    estadoPiscar = false;

}

void LED ::piscar()
{
    estadoPiscar = true;
    tempoEspera = 500;
    tempoAnteriorPiscar = millis();
    estado = HIGH;
    desligarPorTempo = false;
}

void LED::piscar(float frequencia)
{
    estadoPiscar = true;
    tempoEspera = (1000.0f / (2.0f * frequencia));
    tempoAnteriorPiscar = millis();
    estado = HIGH;
    desligarPorTempo = false;
}

void LED::piscar(uint8_t frequencia, uint16_t repeticoes)
{

    estadoPiscar = true;
    tempoEspera = (1000.0f / (2.0f * frequencia));
    tempoAnteriorPiscar = millis();
    estado = HIGH;
    this->repeticoes = repeticoes * 2;
}

void LED::funcaoPiscar()
{
    if (millis() - tempoAnteriorPiscar >= tempoEspera)

    {
        estado = !estado;
        tempoAnteriorPiscar = millis();

        if (repeticoes > 0)
        {
            repeticoes--;
            if (repeticoes == 0)
            {
                estadoPiscar = false;
                estado = LOW;
            }
        }
    }
}
    void LED :: funcaoDesligamento ()
   {
    if (millis() >= desligarNoMomento)
        {
            estado = LOW;
            desligarPorTempo = false;
        }

    }


