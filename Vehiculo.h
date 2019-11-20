using namespace std;
#include <iostream>

class Vehiculo {
private:
    string nombre;
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
        ~Vehiculo();
        Vehiculo(string pnombre);
        virtual void avanzar()=0;
        virtual void retroceder()=0;
        void setnombre(string nombre);
        string getnombre();
        virtual void mejorar()=0;



};


#endif
