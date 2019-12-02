#include "Vehiculo.h"
#include "auto.h"
#include "Bicicleta.h"
#include "Motocicleta.h"
#include "Troncomovil.h"

class MenuVehiculos{
private:
int dinero;
Vehiculo* m_vehiculo;
int dganado;
public:
MenuVehiculos();
~MenuVehiculos();
void muestraopciones();
void comprar(int dinero,int dganado);
void setVehiculo(Vehiculo* pvehiculo);
};
