#ifndef PROYECTOPISTA_PISTA_H
#define PROYECTOPISTA_PISTA_H
#include <ctime>
#include "Menu.h"
class Pista {
private:
    int x;
    int pss;
    int psh;
    int psr;
public:
    Pista(int pista);
    virtual ~Pista();

};
