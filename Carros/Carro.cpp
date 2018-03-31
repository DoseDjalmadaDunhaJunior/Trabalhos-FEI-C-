//
// Created by djalma cunha on 29/03/2018.
//

#include "Carro.h"


Carro::Carro() {
    setPosicao(-1,-1);
}

Carro::Carro(int x, int y) {
    setPosicao(x,y);
}

void Carro::setTudo(int x, int y) {
setVelocidade(2);
    alteraMapa();

}

int Carro::getX() {
    return getPosicaoX();
}

int Carro::getY() {
    return getPosicaoY();
}


