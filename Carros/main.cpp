#include <iostream>
#include <vector>
#include "Mundo.h"
#include "Carro.h"
using namespace std;

void pause (float loop) {
    float inst1=0, inst2=0;

    inst1 = (float)clock()/(float)CLOCKS_PER_SEC;
    while (inst2-inst1<loop){
        inst2 = (float)clock()/(float)CLOCKS_PER_SEC;
    }
    return;

}

void aleatorio(int* x, int* y){

}

int main() {
    vector <Carro *> uno;
    vector <Carro *> :: iterator otorrinoNariongoLogista;
    Mundo a;
    //cout<< "TAMANHO:" <<uno.size()<<endl;
    uno.push_back(new Carro (10,20));
    for (int i = 0; i < uno.size(); i++) {
        uno[i]->getX();
        uno[i]->getY();
    }
    while (1 > 0) {
        if(uno.size() == 0){
            uno.push_back(new Carro(10,20));
        }
        //uno.setTudo(uno.getX(),uno.getY());
    cout << a.geraMundo() << " " << endl;
    printf("Favor olhar para o relogio da maquina para conferir.\n");
    printf("5,5 segundos antes...\n");
    printf("5,5 segundos depois...\n");
        pause (0.5);
        //system("clear");
}
    return 0;
}