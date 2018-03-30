//
// Created by djalma cunha on 29/03/2018.
//

#ifndef CARROS_VEICULO_H
#define CARROS_VEICULO_H
#include <iostream>

using namespace std;

class Veiculo {
public:
    void move();
    int aleatorio();
    void setVelocidade(int);
    void setPosicao(int,int);
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
