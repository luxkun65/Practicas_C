#include<iostream>
using namespace::std;

#include "Cliente.h"

Cliente::Cliente()
{
    numID = 0;
    apellido = nombre = "";
}

Cliente::~Cliente()
{
    //dtor
}

void Cliente::setNumID(){
    cout<<"Ingrese el numero de identificación: ";
    cin>>numID;
}

void Cliente::setApellido(){
    fflush(stdin);
    cout<<"Ingrese el apellido: ";
    getline(cin, apellido);
}

void Cliente::setNombre(){
    fflush(stdin);
    cout<<"Ingrese el nombre: ";
    getline(cin, nombre);
}

void Cliente::setFechaNac(){
    fechaNac.setFecha("Ingrese la fecha de nacimiento");
}

long Cliente::getNumID(){
    return numID;
}

string Cliente::getApellido(){
    return apellido;
}

string Cliente::getNombre(){
    return nombre;
}

string Cliente::getFechaNac(){
    return fechaNac.getFecha();
}
