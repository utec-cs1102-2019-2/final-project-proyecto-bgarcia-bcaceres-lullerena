#include "Vehiculo.h"
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
void SetVehiculo(Vehiculo* pvehiculo)
};
