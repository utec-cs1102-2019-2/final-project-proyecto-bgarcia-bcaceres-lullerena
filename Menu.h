#ifndef PROYECTO_MENU_H
#define PROYECTO_MENU_H
#include "Vehiculo.h"
#include "Pista.h"
class Menu {
    int dinero;
    Vehiculo* m_vehiculo;
    Pista *pista;
    int m_opcion;
    int dganado;
public:
    Menu();
    void opcionesV(int dinero, int dganado);
    void opcionesPistas();
    void imprimirMenu();
    void seleccionarOpcion();
    virtual ~Menu();
    void ejecutar();
};

#endif
