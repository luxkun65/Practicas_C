#include "Automovil.h"
#include<iostream>
using namespace::std;

Automovil::Automovil()//no construye ningun automovil
{
    setDatos("_", "_", 0, 0.0,false);


}



Automovil::~Automovil()
{
    //dtor
}


void Automovil::setDatos(string mar, string mod, int cb, double cil, bool td)//no construye ningun automovil
{
    //ctor
    marca=mar;
    modelo = mod;
    cantBocinas=cb;
    cilindraje=cil;
    tipoDir=td;

}


////////BASICO//////////
Automovil::Automovil(string mar, string mod)
{
    setDatos(mar, mod, 0, 1.3, false);
}


///////////INTERMEDIO////////////
Automovil::Automovil(string mar, string mod, int cb)
{
    setDatos(mar, mod, cb, 1.5, false);
}


////////FULL//////////////
Automovil::Automovil(string mar, string mod, int cb, bool td)
{
    setDatos(mar, mod, cb, 1.8, tipoDir);
}

void Automovil::setMarca(){

   fflush(stdin);
   cout<<"ingrese la marca:";
   getline(cin,marca);

}

void Automovil::setModelo(){

   fflush(stdin);
   cout<<"ingrese el modelo:";
   getline(cin,modelo);

}



void Automovil::setCilindraje(){


   cout<<"ingrese el cilindraje:";
   cin>>cilindraje;

}



void Automovil::setCantBocinas(){


   cout<<"ingrese la cantidad de bocinas:";
   cin>>cantBocinas;

}

void setCilindraje();
        void setCantBocinas();
        void setTipoDir();

 void Automovil::setTipoDir(){


   cout<<"ingrese tipo de direccion 0 o 1";
   int tipo;
   cin>>tipo;
   if(tipo==0){
    tipoDir = false;

   }else{ tipoDir= true;}

}


string Automovil::getMarca(){
return marca;

}
string Automovil::getModelo(){
return modelo;

}
int Automovil::getCantBocinas(){
return cantBocinas;

}

double Automovil::getCilindraje(){
return cilindraje;

}


bool Automovil::getTipoDir(){
return tipoDir;

}





