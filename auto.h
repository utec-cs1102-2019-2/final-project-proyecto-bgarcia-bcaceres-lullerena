#ifndef SESSION12A_AUTO_H
#define SESSION12A_AUTO_H

#include "Vehiculo.h"

class Auto : public Vehiculo {
public:
    Auto();
    void avanzar() override;
    void retroceder() override;
    void mejorar() override;
};

#endif //SESSION12A_AUTO_H
