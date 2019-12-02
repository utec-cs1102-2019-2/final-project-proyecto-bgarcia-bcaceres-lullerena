#include "Pista.h"
#include <ctime>
#include <cstdlib>
Pista::Pista(Menu *pista) {
    this-> pista=pista;
}
void Pista::tPista(int pista) {
    srand(time(nullptr));
    if (pista==1){
        psh = 65 + rand() % (70 - 65);
    }
    else if (pista==2){
        psr=70+ rand()%(78-70);
    }
    else if (pista==3){
        pss=78+ rand()%(85-78);
    }
}
Pista::~Pista() {}
