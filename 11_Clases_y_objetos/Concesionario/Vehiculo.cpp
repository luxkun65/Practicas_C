#include<iostream>
using namespace::std;

#include "Vehiculo.h"

Vehiculo::Vehiculo()
{
    marca = modelo = "";
}

Vehiculo::~Vehiculo()
{
    //dtor
}

void Vehiculo::setMarca(){
    fflush(stdin);
    cout<<"Ingrese la marca: ";
    getline(cin, marca);
}

void Vehiculo::setModelo(){
    fflush(stdin);
    cout<<"Ingrese la modelo: ";
    getline(cin, modelo);
}

void Vehiculo::setFechaImporte(){
    fflush(stdin);
    fechaImporte.setFecha("Ingrese la fecha de importanción:");
}

string Vehiculo::getMarca(){
    return marca;
}

string Vehiculo::getModelo(){
    return modelo;
}

string Vehiculo::getFechaImporte(){
    return fechaImporte.getFecha();
}
