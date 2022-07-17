#include "Gamer.h"

Gamer::Gamer()
{
    memoriaGPU = 0;
}

Gamer::~Gamer()
{
    //dtor
}

void Gamer::setMemGPU(){
    cout<<"Ingrese la memoria de la GPU: ";
    cin>>memoriaGPU;
}

void Gamer::setValor(){
    Programador::setValor();
    valor+=650;
}

int Gamer::getMemGPU(){ return memoriaGPU; }

string Gamer::getInfo(){
    return Programador::getInfo() + "\nMemoria GPU = " + to_string(memoriaGPU);
}
