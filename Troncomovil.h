#ifndef SESSION12A_TRONCOMOVIL_H
#define SESSION12A_TRONCOMOVIL_H

#include "Vehiculo.h"
class Troncomovil:public Vehiculo {
public:
    Troncomovil();
    void avanzar() override;
    void retroceder() override;
    void mejorar() override;
};


#endif //SESSION12A_TRONCOMOVIL_H
