#ifndef LED_h
#define LED_h
#include <Arduino.h>

// caracteristicas dos objetos sao metodos de propiedade
// atriputos sao as caracteristicas bem especificas
// metodos e o que o objeto faz
/***
 * @class
 * @brief Classe para controle nao bloqueante de um LED.
 * permite ligar, desligar, ligar por tempo determinado,piscar continuamente, 
 * e piscar por quantidade definida
 * 
 * @note o metodo update() deve ser chamado continuamente dentro do loop().
 * / */
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
    uint16_t repeticoes;
/**
 * @brief Processa a logica de piscada do LED.
 */
    void funcaoPiscar();
    /**
     * @brief Processa o desligamento temporizado.
     */
    void funcaoDesligamento();

public:
/**
 * @brief constroi um objeto LED.
 * @param pin numero do pino digital onde o LED esta conectado
 *  */ //
    LED(uint8_t pin); // metodo construtor {devera ter o mesmo nome da classe  usaada para criar objeto}
/**
 * @brief liga o LED continuamente.
 */
    void ligar();
    /**
     * @brief Liga um LED por um tempo determinado.
     * @param tempoLigado_ms Tempo, em milessegundos, que um LED ficara ligado.
     */ 
    void ligar(uint32_t tempoLigado_ms);
    /**
     * * */ 
    void desligar();
    /**
     * @brief inicia a piscada continua em Hz.
     */
    void piscar();
    void piscar(float frquencia);    
    /**
     * @brief Pisca o LED uma quantidade definida de vezes.
     * @param frequencia Frequencia da piscada em hertz.
     * @param repeticoes Quantidade de piscadas completas. */                         
    void piscar(uint8_t frequencia, uint16_t repeticoes);
    /**
     * @param frequencia determina a frequencia/velocidade do LED.
     * @param repeticoes determina quantas vezes o LED ira piscar.
     */

    bool getEstado();
    /**
     * @brief Retorna o valor de uma variável 
     */
    uint8_t getPino();

        void setEstado(bool estado);
        /**
         * @brief Define o estado manualmente do LED.
         * @param estado true para ligado, false para desligado
         */
        void alternar();
        /**
         * @brief alterna o estado do LED
         */
        void update();
        };/**
        @brief executa o código dentro dele a cada frame. */

#endif