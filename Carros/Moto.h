//
// Created by djalma cunha on 29/03/2018.
//

#ifndef CARROS_MOTO_H
#define CARROS_MOTO_H
#include <iostream>
#include "Veiculo.h"
using namespace std;

class Moto : public Veiculo{
public:
    Moto();
    Moto(int,int);
private:
    string tipo;
};


#endif //CARROS_MOTO_H
