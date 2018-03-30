//
// Created by djalma cunha on 29/03/2018.
//

#ifndef CARROS_CAMINHAO_H
#define CARROS_CAMINHAO_H
#include <iostream>
#include "Veiculo.h"
using namespace std;


class Caminhao : public Veiculo{
public:
    Caminhao();
    Caminhao(int,int);
private:
    int cargaPesada;
};


#endif //CARROS_CAMINHAO_H
