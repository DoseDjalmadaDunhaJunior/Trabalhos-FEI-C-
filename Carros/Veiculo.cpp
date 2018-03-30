//
// Created by djalma cunha on 29/03/2018.
//

#include "Veiculo.h"
#include "Mundo.h"
#include "Moto.h"
#include "Caminhao.h"
#include "Carro.h"

int Veiculo::aleatorio() {
    srand(time(NULL));
    return rand() % (101);
}
//para mover cada um "aleatoriamente"
void Veiculo::move() {
int aux = Veiculo::aleatorio();
    if(aux < 25){
        x = x - velocidade;
    }
    else if(aux >= 25 && aux < 50){
        y = y - velocidade;
    }
    else if(aux >= 50 && aux < 75){
        x = x + velocidade;
    }
    else{
        y = y + velocidade;
    }
}
//para salvar a velocidade de cada veiculo
void Veiculo::setVelocidade(int uno) {
    velocidade = uno;
}