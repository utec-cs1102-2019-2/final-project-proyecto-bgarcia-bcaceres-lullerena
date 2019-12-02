using namespace std;
#include "Menu.h"
#include "Vehiculo.h"
#include "Pista.h"
#include <iostream>
#include <string>
#include <cstdio>

enum class Opciones { Agregar=1, Iniciar=2, Pistas=3};
Menu::Menu(){};

void limpiar() {
    cout << "\033[2J\033[0;0H";
}
void Menu::imprimirMenu() {
    limpiar();
    cout << "MENU\n";
    cout << string(4, '-') << "\n\n";
    cout << "1. Comprar Vehiculo\n";
    cout << "2. Iniciar carrera\n";
    cout << "3. seleccionar pista\n";
    cout<< "4. seleccionar piloto\n";
    cout << "0. Para Salir\n\n";
}
void Menu::ejecutar() {
    do {
        imprimirMenu();
        cin >> m_opcion;
        seleccionarOpcion();
    } while (m_opcion != 0);
    cout << "Fin del programa...\n";
}

void Menu::opcionesPistas(){
  cout<<"Pistas:"<<endl<<"1. Pista de hielo"<<endl<<"2.Pista Rocosa"<<endl<<"3. Pista suprema"<<endl;
  int a=0;
 cout<<"Seleccione pista"<<endl;cin>>a;
 if(a==1){
   Pista pista(1);
 }
 if(a==2){
   Pista pista(2);
 }
 if(a==3){
   Pista pista(3);
 }
}

void Menu::seleccionarOpcion() {
    limpiar();
    switch(Opciones(m_opcion)) {
        case Opciones::Agregar: 
        m_xd->muestraopciones();
            break;
        case Opciones::Iniciar: 
      
        case Opciones::Pistas:
        opcionesPistas();

            break;
    }
}
Menu:: ~Menu(){}
