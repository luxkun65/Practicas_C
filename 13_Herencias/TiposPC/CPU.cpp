#include "CPU.h"

CPU::CPU()
{
    marca = "-";
    velocidad = 0;
    cantNucleos = 0;
}

CPU::~CPU()
{
    //dtor
}

void CPU::setMarca(){
    fflush(stdin);
    cout<<"Ingrese la marca de la CPU: ";
    getline(cin, marca);
}

void CPU::setVelocidad(){
    cout<<"Ingrese la Velocidad: ";
    cin>>velocidad;
}

void CPU::setCantNucleos(){
    cout<<"Ingrese la Cantidad de Nucleos: ";
    cin>>cantNucleos;
}

string CPU::getMarca(){ return marca; }
double CPU::getVelocidad(){ return velocidad; }
int CPU::getCantNucleos(){ return cantNucleos; }

string CPU::getInfoCPU(){
    return "\nInfo CPU\nMarca = " + marca +
            "\nVelocidad = " + to_string(velocidad) +
            "\nCantidad de Nucleos = " + to_string(cantNucleos);
}
