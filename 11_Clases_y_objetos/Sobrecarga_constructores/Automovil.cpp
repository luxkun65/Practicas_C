#include<iostream>
using namespace::std;

#include "Automovil.h"

Automovil::Automovil()//no construye ningun tipo de automovil
{
    setDatos("-", "-", 0.0, 0, false);
}

Automovil::~Automovil()
{
    //dtor
}

Automovil::Automovil(string mar, string mod){//Basica
    setDatos(mar, mod, 1.3, 3, false);
}

Automovil::Automovil(string mar, string mod, int cb){//Intermedia
    setDatos(mar, mod, 1.5, cb, false);
}

Automovil::Automovil(string mar, string mod, int cb, bool tipo){//full
    setDatos(mar, mod, 1.8, cb, tipo);
}

void Automovil::setMarca(){
    fflush(stdin);
    cout<<"Ingrese la marca: ";
    getline(cin, marca);
}

void Automovil::setModelo(){
    fflush(stdin);
    cout<<"Ingrese el modelo: ";
    getline(cin, modelo);
}

string Automovil::getMarca(){
    return marca;
}
string Automovil::getModelo(){ return modelo; }
double Automovil::getCilindraje(){ return cilindraje; }
int Automovil::getCantBocinas(){ return cantBocinas; }
bool Automovil::getTipoDireccion(){ return tipoDireccion; }

void Automovil::setDatos(string mar, string mod,
    double cl, int cb, bool td){
    marca = mar;
    modelo = mod;
    cilindraje = cl;
    cantBocinas = cb;
    tipoDireccion = td;
}
