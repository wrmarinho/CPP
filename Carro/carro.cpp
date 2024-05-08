#include "carro.h"

Carro::Carro() {
    velocidade = 0;
    anoFabricacao = 0;
}

void Carro::setAcelerar(float aumVel){
    velocidade += aumVel;
}

void Carro::setFrear(float dimVel){
    velocidade -= dimVel;
}

float Carro::getVelocidade(){
    return velocidade;
}