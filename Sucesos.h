#ifndef PROYECTOPISTA_SUCESOS_H
#define PROYECTOPISTA_SUCESOS_H
#include <iostream>
#include "Piloto.h"
#include "Pista.h"
#include "Vehiculo.h"

class Sucesos {
private:
    int daños;
    Vehiculo *carroseria;
    Pista *psr;
public:
    Sucesos(int daños, Vehiculo *carroseria, Pista *psr);
    void daños_carro(int daños, int carroseria, int psr);
    ~Sucesos();

};


#endif
