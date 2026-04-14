#ifndef LED_h
#define LED_h
#include <Arduino.h>

// caracteristicas dos objetos sao metodos de propiedade
// atriputos sao as caracteristicas bem especificas
// metodos e o que o objeto faz
class LED
{
private:
    uint8_t pino;
    bool estado; //encapsulamento
    bool desligarPorTempo = false;
    uint32_t desligarNoMomento = false;

    uint32_t  tempoAnteriorPiscar;
    uint32_t tempoEspera;
    bool estadoPiscar;
    void funcaoPiscar();
    uint16_t repeticoes;

    void funcaoDesligamento();

public:
    LED(uint8_t pin); // metodo construtor {devera ter o mesmo nome da classe  usaada para criar objeto}

    void ligar(); //metodo sobrecarrga
    void ligar(uint32_t tempoLigado_ms);
    void desligar();
    void piscar();
    void piscar(float frquencia);                             
    void piscar(uint8_t frequencia, uint16_t repeticoes);

    bool getEstado();
    uint8_t getPino();

        void setEstado(bool estado);
        void alternar();
        void update();
        };

#endif