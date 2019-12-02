#ifndef PROYECTO_MENU_H
#define PROYECTO_MENU_H
#include "Vehiculo.h"
#include "Pista.h"
#include "Piloto.h"
#include "MenuVehiculos.h"
class Menu {
    int dinero;
    int m_opcion;
    int dganado;
    MenuVehiculos *m_xd=new MenuVehiculos();

public:
    Vehiculo* m_vehiculo;
    piloto *Piloto;
    Menu();
    Pista *pista;
    void opcionesV(int dinero, int dganado);
    void opcionesPistas();
    void imprimirMenu();
    void seleccionarOpcion();
    virtual ~Menu();
    void ejecutar();
};

#endif
