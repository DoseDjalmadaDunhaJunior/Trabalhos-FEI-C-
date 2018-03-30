//
// Created by djalma cunha on 29/03/2018.
//

#ifndef CARROS_VEICULO_H
#define CARROS_VEICULO_H
#include <iostream>
#include "Mundo.h"
using namespace std;

class Veiculo : public Mundo{
public:
    void move();
    int aleatorio();
    void setVelocidade(int);
    void setPosicao(int,int);
    void alteraMapa();
    int getPosicaoY();
    int getPosicaoX();
private:
    int posy;
    int posx;
    int velocidade;
    bool fabrica;
    string cor;
};


#endif //CARROS_VEICULO_H
