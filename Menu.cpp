using namespace std;
#include "Menu.h"
#include "Vehiculo.h"
#include <iostream>
#include <string>
#include <cstdio>
enum class Opciones { Agregar=1, Iniciar, pistas};

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
void Menu::opcionesV(int dinero,int dganado){
    cout<<"Dinero actual : s/. "<<dinero<<endl;
    cout<<"Vehiculos disponibles para comprar :"<<endl<<"1) Automovil S /550"<<endl;
    cout<<"2) Troncomovil S / 900"<<endl<<"3) Motocicleta S / 370"<<endl<<"4) Bicicleta S / 1050"<<endl;
    dinero=dganado+dinero;
    if(dinero>370){
        int a;
        cout<<"Ingrese el numero de vehiculo para comprar : ";
        cin>>a;
        if(a==1){
            dinero=dinero-550;
            cout<<"Ingrese nombre del Vehiculo";
            auto nombre = input<string>("Ingrese Nombre : ");
        }
        if(a==2){
            dinero=dinero-900;
            cout<<"Ingrese nombre del Vehiculo";
            auto nombre = input<string>("Ingrese Nombre : ");
        }
        if(a==3){
            dinero=dinero-370;
            cout<<"Ingrese nombre del Vehiculo";
            auto nombre = input<string>("Ingrese Nombre : ");
        }
        if(a==4){
            dinero=dinero-1050;
            cout<<"Ingrese nombre del Vehiculo";
            auto nombre = input<string>("Ingrese Nombre : ");
        }}
    m_Juego.nuevoV(new Vehiculo(nombre));
}
void Menu::opcionesP(){
    //FALTA HACER
}
void Menu::seleccionarOpcion() {
    limpiar();
    switch(Opciones(m_opcion)) {
        case Opciones::Agregar:  // comprar vehiculo
        opcionesV();
            break;
        case Opciones::Iniciar:  // Iniciar carrera FALTAAAAA
        opcionesP();

            break;
    }
}
