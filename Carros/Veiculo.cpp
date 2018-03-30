//
// Created by djalma cunha on 29/03/2018.
//

#include "Veiculo.h"


int Veiculo::aleatorio() {
    srand(time(NULL));
    return rand() % (101);
}
//para mover cada um "aleatoriamente"
void Veiculo::move() {
int aux = Veiculo::aleatorio();
    if(aux < 25){
        posx = posx - velocidade;
    }
    else if(aux >= 25 && aux < 50){
        posy = posy - velocidade;
    }
    else if(aux >= 50 && aux < 75){
        posx = posx + velocidade;
    }
    else{
        posy = posy + velocidade;
    }
}
//para salvar a velocidade de cada veiculo
void Veiculo::setVelocidade(int uno) {
    velocidade = uno;
}

void Veiculo::setPosicao(int X, int Y) {
    if (X == -1 && Y == -1) {
        posx = Veiculo::aleatorio();
        posy = Veiculo::aleatorio();
    }
}

int Veiculo::getPosicaoX() {
    return posx;
}

int Veiculo::getPosicaoY() {
    return posy;
}

void Veiculo::alteraMapa() {
    int num = getMundo(posx,posy);
    if((num == 0) && (velocidade == 3)){
        setMundo(posx,posy,7);
    }
}