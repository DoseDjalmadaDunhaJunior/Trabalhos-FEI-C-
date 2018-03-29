//
// Created by djalma cunha on 29/03/2018.
//

#ifndef CARROS_MUNDO_H
#define CARROS_MUNDO_H

#include <string>
#include "Carro.h"
#include "Caminhao.h"
#include "Moto.h"
#include "Veiculo.h"
using namespace std;
class Mundo {
public:
    void desenhaMundo(string,string,string);
    //[30][60]
    int mapa;

private:
    int tamX;
    int tamY;
};


#endif //CARROS_MUNDO_H
