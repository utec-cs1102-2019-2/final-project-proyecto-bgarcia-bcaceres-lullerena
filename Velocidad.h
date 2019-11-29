#ifndef PROYECTOPISTA_VELOCIDAD_H
#define PROYECTOPISTA_VELOCIDAD_H
#include <iostream>
#include "Piloto.h"
#include "Pista.h"
#include "Vehiculo.h"
class Velocidad {
private:
    int velo_int;
    int vel_reco=48;
    int efect_pre=45;
    int efect_os=60;
    int hipo;
    int dif;
    Pista *x;
    piloto *contextura;
    piloto *personalidad;
    piloto *equilibrio;
    Vehiculo *ruedas;
    int velo_real;
    int vel_min=35;
public:
    Velocidad(int x, string personalidad);
    void hipotermia(int hipo, piloto contextura, Pista x);
    void dificultad(piloto equilibrio, Vehiculo ruedas);
    void velo_max();
    virtual ~Velocidad();
};


#endif //PROYECTOPISTA_VELOCIDAD_H
