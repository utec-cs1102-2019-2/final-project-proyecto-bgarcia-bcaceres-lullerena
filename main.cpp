
#include <iostream>
#include "Vehiculo.h"
#include "Bicicleta.h"
#include "Motocicleta.h"
#include "Auto.h"
#include "Troncomovil.h"
#include <vector>
using namespace std;
int menuV(int dinero,int dganado){
  dinero=dganado+dinero;
  cout<<"Dinero actual : s/. "<<dinero<<endl;
  cout<<"Vehiculos disponibles para comprar :"<<endl<<"1) Automovil S /550"<<endl;
  cout<<"2) Troncomovil S / 900"<<endl<<"3) Motocicleta S / 370"<<endl<<"4) Bicicleta S / 1050"<<endl;
  if(dinero>370){
    int a;
    cout<<"Ingrese el numero de vehiculo para comprar : ";
    cin>>a;
    if(a==1){
      dinero=dinero-550;
      cout<<"Tu auto es el 10";
    }
    if(a==2){
     dinero=dinero-900;
      cout<<"Tu troncomovil es el 20";
    }
    if(a==3){
     dinero=dinero-370;
      cout<<"Tu motocicleta es la 30";
    }
    if(a==4){
     dinero=dinero-1050;
      cout<<"Tu bicicleta es la 40";
    }}  
}
int MenuCarrera(){
  int n;
  cout<<"Cual Vehiculo va a usar? ";
  cin>>n;
  if(n==10){
    Auto *a1=new Auto();
    vector<Vehiculo*> vehiculos;
    vehiculos.push_back(a1);
  }
  if(n==20){
    Troncomovil *t1=new Troncomovil();
    vector<Vehiculo*> vehiculos;
    vehiculos.push_back(t1);
  }
  if(n==30){
    Motocicleta *m1=new Motocicleta();
    vector<Vehiculo*> vehiculos;
    vehiculos.push_back(m1);}
  if(n==40){
    Bicicleta *b1=new Bicicleta();
    vector<Vehiculo*> vehiculos;
    vehiculos.push_back(b1);}
  
}
int menuP(){
  int pistas=2;
  if(pistas>1){
    MenuCarrera();
  }
}


int main() {
  int d=370;
  int dg=8;
  int menus;
  int v;

  cout<<"Menu Principal"<<endl<<"Iniciar partida = 1"<<endl<<"Menu de compra de vehiculos = 2"<<endl<<"Salir = 3"<<endl;
  cin>>menus;
  if(menus==1){
    menuP();
  }
  if(menus==2){
    menuV(d,dg);
  }

  return 0;
}
