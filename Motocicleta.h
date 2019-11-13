
#ifndef SESSION12A_MOTOCICLETA_H
#define SESSION12A_MOTOCICLETA_H
#include "Vehiculo.h"

class Motocicleta: public Vehiculo {
public:
Motocicleta();
void avanzar() override;
void retroceder() override;
void mejorar();
};


#endif //SESSION12A_MOTOCICLETA_H
