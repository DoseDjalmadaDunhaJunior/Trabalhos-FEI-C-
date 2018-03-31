//
// Created by djalma cunha on 29/03/2018.
//

#include "Moto.h"
Moto::Moto() {
    setPosicao(-1,-1);
}

Moto::Moto(int x, int y) {
    setVelocidade(3);
    alteraMapa();
}