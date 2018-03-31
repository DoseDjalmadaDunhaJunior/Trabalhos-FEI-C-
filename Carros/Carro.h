//
// Created by djalma cunha on 29/03/2018.
//

#ifndef CARROS_CARRO_H
#define CARROS_CARRO_H
#include <iostream>
#include "Veiculo.h"
using namespace std;

class Carro : public Veiculo{
public:
    Carro();
    Carro(int,int);
    void setTudo(int,int);
    int getX();
    int getY();
private:
    int lugares;
};


#endif //CARROS_CARRO_H
