#include "Velocidad.h"
#include <cstdlib>
#include <ctime>
Velocidad::Velocidad(int x, string personalidad) {
    if (personalidad=="precavido"){
        velo_int=efect_pre*vel_reco;
    } else if(personalidad=="osado"){
        velo_int=efect_os*vel_reco;
}
void Velocidad::hipotermia(int hipo, int contextura, int pista) {
    if (pista==1){
        hipo=rand()%((contextura-psh)-0);
    } else {
        hipo=0;
}
void Velocidad::dificultad(piloto equilibrio, Vehiculo ruedas, string personalidad) {
    srand(time(nullptr));
    if (personalidad="osado"&& ruedas=2) {
        dif = rand() % (equilibrio - (75 / peso));
    }
    else if (personalidad="precavido" && ruedas=2){
        dif = rand() % ((equilibrio*25)-(75/peso));
    }
    else if (ruedas=0){
        dif=0;
    }
}
void Velocidad::velo_max() {
    velo_real=vel_min + rand ()% ((velo_int+dif+hipo)-vel_min);
}
void Velocidad::get_roca(){
    return psr;
}
void Velocidad::get_helada()
{
    return psh;}
void Velocidad::get_supremo(){
    return pss;}

