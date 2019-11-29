#ifndef PROYECTO_POO_PILOTO_H
#define PROYECTO_POO_PILOTO_H
#include<iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

class piloto {
private:
    unsigned int nivel_exp;
    int contextura;
    int equilibrio;
    float efecto;

protected:
    string personalidad;
    string nombre;
    string equipo;
public:
    piloto(string nombre, int equipo);
    virtual ~piloto();
    void mostrar_datos();
    int get_equilibrio();
    int get_contextura();
    int get_nivel();
    float get_efecto();

};


#endif //PROYECTO_POO_PILOTO_H
