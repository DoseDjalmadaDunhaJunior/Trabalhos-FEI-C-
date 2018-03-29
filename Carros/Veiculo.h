//
// Created by djalma cunha on 29/03/2018.
//

#ifndef CARROS_VEICULO_H
#define CARROS_VEICULO_H
#include <string>
#include "Carro.h"
#include "Caminhao.h"
#include "Moto.h"
#include "Veiculo.h"
#include "Mundo.h"
#include <string>

using namespace std;
class Veiculo {
private:
    int y;
    int x;
    int velocidade;
    bool fabrica;
    string cor;
};


#endif //CARROS_VEICULO_H
