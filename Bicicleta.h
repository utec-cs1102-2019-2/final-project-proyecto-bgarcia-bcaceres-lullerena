#ifndef SESSION12A_BICICLETA_H
#define SESSION12A_BICICLETA_H
#include "Vehiculo.h"


class Bicicleta : public Vehiculo {
public:
    Bicicleta();
    void avanzar() override;
    void retroceder() override;
    void mejorar() override;
};
#endif //SESSION12A_BICICLETA_H
