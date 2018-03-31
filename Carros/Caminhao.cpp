//
// Created by djalma cunha on 29/03/2018.
//

#include "Caminhao.h"

Caminhao::Caminhao() {
    setPosicao(-1,-1);
}

Caminhao::Caminhao(int x, int y) {
    setVelocidade(1);
    alteraMapa();
}

