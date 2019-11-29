#include "piloto.h"
using namespace std;
piloto::piloto(string nombre, int equipo){
    srand(time(nullptr));
    this->nombre=nombre;
    nivel_exp=0;
    if (equipo == 1) {
        this->equipo = "Tareos";
        contextura = 26 + rand() % (46 - 26);
        equilibrio = 36 + rand() % (56 - 36);
        personalidad = "precavido";
        efecto = float(7 + rand() % (9 - 7)) / float(10);
    }
    else if (equipo == 2) {
        this->equipo = "Hibridos";
        contextura = 35 + rand() % (55 - 35);
        equilibrio = 20 + rand() % (35 - 20);
        int a = 1 + rand() % (3 - 1);
        if (a == 1) {
            personalidad = "precavido";
            efecto = float(6 + rand() % (9 - 6)) /float(10);
        }
        else if (a == 2) {
            personalidad = "osado";
            efecto=float(11+ rand()%(15-11))/float(10);
        }
    }
    else if (equipo==3){
        this-> equipo= "Docencios";
        contextura=44 +rand()%(61-44);
        equilibrio=4+rand()%(11-4);
        personalidad="osado";
        efecto = float(11 + rand() % (15 - 11)) / float(10);
    }
}
piloto::~piloto() {}

void piloto::mostrar_datos() {
    cout<<"Los datos del piloto son:\n"<<"Nombre:\t"<<nombre<<endl<<"Contextura:\t"<<contextura<<endl<<"Equilibrio:\t"<<equilibrio<<endl<<"Personalidad:\t"<<personalidad<<endl<<"Equipo:\t"<<equipo<<endl;
}
int piloto::get_equilibrio(){ return equilibrio;}
int piloto::get_contextura() {return contextura;}
int  piloto::get_nivel() {return nivel_exp;}
float piloto::get_efecto() { return efecto; }
