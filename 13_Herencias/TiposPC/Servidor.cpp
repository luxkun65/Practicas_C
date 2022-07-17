#include "Servidor.h"

Servidor::Servidor()
{
    cantCPU = 0;
}

Servidor::~Servidor()
{
    //dtor
}

void Servidor::setCantCPU(){
    cout<<"Ingrese la cantidad de CPUs: ";
    cin>>cantCPU;
}

void Servidor::setValor(){
    Programador::setValor();
    valor+=(cantCPU * 450);
}

int Servidor::getCantCPU(){ return cantCPU; }

string Servidor::getInfo(){
    return Programador::getInfo() + "\nCantidad de CPUs = " + to_string(cantCPU);
}
