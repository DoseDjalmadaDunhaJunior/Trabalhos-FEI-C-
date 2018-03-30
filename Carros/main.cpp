#include <iostream>
#include <ctime>
#include "Mundo.h"
using namespace std;

void pause (float loop) {
    float inst1=0, inst2=0;

    inst1 = (float)clock()/(float)CLOCKS_PER_SEC;
    while (inst2-inst1<loop) inst2 = (float)clock()/(float)CLOCKS_PER_SEC;

    return;

}

int main() {

    Mundo a;
    while (1 > 0) {
    cout << a.geraMundo() << " " << endl;
    printf("Favor olhar para o relogio da maquina para conferir.\n");
    printf("5,5 segundos antes...\n");
    printf("5,5 segundos depois...\n");
        pause (0.5);
        //system("clear");
}
    return 0;
}