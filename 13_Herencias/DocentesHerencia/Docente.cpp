#include<iostream>
using namespace::std;

#include "Docente.h"

Docente::Docente()
{
    numID = 0;
    apellido = nombre = profesion = "-";
    salario = 0;
}

Docente::~Docente()
{
    //dtor
}

void Docente::setNumID(){
    cout<<"Ingrese el numero de identificación: ";
    cin>>numID;
}

void Docente::setApellido(){
    fflush(stdin);
    cout<<"Ingrese el Apellido: ";
    getline(cin, apellido);
}
void Docente::setNombre(){
    fflush(stdin);
    cout<<"Ingrese el Nombre: ";
    getline(cin, nombre);
}
void Docente::setProfesion(){
    fflush(stdin);
    cout<<"Ingrese la Profesion: ";
    getline(cin, profesion);
}
long Docente::getNumID(){
    return numID;
}
string Docente::getApellido(){
    return apellido;
}
string Docente::getNombre(){
    return nombre;
}
string Docente::getProfesion(){
    return profesion;
}
double Docente::getSalario(){
    return salario;
}
