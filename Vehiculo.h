#ifndef SESSION12A_VEHICULO_H
#define SESSION12A_VEHICULO_H
class Vehiculo {
public:
    int efecto;
    int peso;
    int chasis;
    int carroceria;
    int ruedas;
    int zapatillas;
    int Min=2;
    int Max=10;
    int VelMax;
    int VelMin;
    int VelActual;
    int x;
    int y;
    Vehiculo();
    virtual void avanzar()=0;
    virtual void retroceder()=0;
    virtual void mejorar()=0;
};


#endif //SESSION12A_VEHICULO_H
