#include "MenuVehiculos.h"
MenuVehiculos();
~MenuVehiculos();
void MenuVehiculos::muestraopciones(){
  cout<<"Dinero actual : s/. "<<dinero<<endl;
  cout<<"Vehiculos disponibles para comprar :"<<endl<<"1) Automovil S /550"<<endl;
  cout<<"2) Troncomovil S / 900"<<endl<<"3) Motocicleta S / 370"<<endl<<"4) Bicicleta S / 1050"<<endl;
}
void MenuVehiculos::setVehiculo(Vehiculo* pvehiculo){
  m_vehiculo=pvehiculo;
}
void MenuVehiculos::comprar(int dinero,int dganado){
  dinero=dganado+dinero;
  if(dinero>370){
    int a;
    int n;
    cout<<"Ingrese el numero de vehiculo para comprar : ";
    cin>>a;
    if(a==1){
      dinero=dinero-550;
      cout<<"Ingrese nombre del Vehiculo";cin>>n;
      pvehiculo=n;
    }
    if(a==2){
     dinero=dinero-900;
      cout<<"Ingrese nombre del Vehiculo";cin>>n;
      pvehiculo=n;
    }
    if(a==3){
     dinero=dinero-370;
      cout<<"Ingrese nombre del Vehiculo";cin>>n;
      pvehiculo=n
    }
    if(a==4){
     dinero=dinero-1050;
      cout<<"Ingrese nombre del Vehiculo";cin>>n;
      pvehiculo=n;
    }}  
}
