#include "Sucesos.h"
#include <cstdlib>
#include <ctime>
Sucesos::Sucesos(int daños, Vehiculo *carroseria, Pista *psr) {
    srand(time(nullptr));
    this->daños=daños;
    this->carroseria=carroseria;
    this->psr=psr;
}
void Sucesos::daños_carro(int daños, int carroseria, int psr){
    daños=rand()% (psr-carroseria);
}
