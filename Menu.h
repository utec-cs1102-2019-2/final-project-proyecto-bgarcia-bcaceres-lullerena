#ifndef PROYECTO_MENU_H
#define PROYECTO_MENU_H
#include "Vehiculo.h"
class Menu{
    int dinero;
    Vehiculo* m_vehiculo;
    int dganado;
    int m_opcion;
    void opcionesV(int dinero, int dganado);
    void opcionesP();
    void imprimirMenu();
    void seleccionarOpcion();


public:
    Menu():m_opcion{}{}
    void ejecutar();
};
