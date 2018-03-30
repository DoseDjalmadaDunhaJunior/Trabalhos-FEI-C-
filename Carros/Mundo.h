//
// Created by djalma cunha on 29/03/2018.
//

#ifndef CARROS_MUNDO_H
#define CARROS_MUNDO_H
#include <iostream>
#include "Moto.h"
#include "Caminhao.h"
#include "Carro.h"
#include "Veiculo.h"
using namespace std;

class Mundo {
public:
    void desenhaMundo();
private:
    int mapa[][60];
    int x;
    int y;
};


#endif //CARROS_MUNDO_H
