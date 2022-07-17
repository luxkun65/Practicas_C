#include "Programador.h"

Programador::Programador()
{
    capacidadSDD = 0;
}

Programador::~Programador()
{
    //dtor
}

void Programador::setCapacidadSDD(){
    cout<<"Ingrese la Capacidad del SDD: ";
    cin>>capacidadSDD;
}

void Programador::setValor(){
    Oficina::setValor();
    valor+=350;
}

int Programador::getCapacidadSDD(){ return capacidadSDD; }

string Programador::getInfo(){
    return Oficina::getInfo() + "\nCapacidad SDD = " + to_string(capacidadSDD);
}
