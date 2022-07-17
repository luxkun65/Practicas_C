#include "Oficina.h"

Oficina::Oficina()
{
    ram = capacidadDD = 0;
}

Oficina::~Oficina()
{
    //dtor
}

void Oficina::setRam(){
    cout<<"Ingrese la RAM: ";
    cin>>ram;
}

void Oficina::setCapacidadDD(){
    cout<<"Ingrese la Capacidad del DD: ";
    cin>>capacidadDD;
}

void Oficina::setValor(){
    valor = 1000;
}

int Oficina::getRam(){ return ram; }
int Oficina::getCapacidadDD(){ return capacidadDD; }

string Oficina::getInfo(){
    return Computador::getInfo() + objCPU.getInfoCPU() +
        "\nRam = " + to_string(ram) + "\nCapacidad del DD = " + to_string(capacidadDD);
}
