#include "Computador.h"
#include"Utilerias.h"

Computador::Computador()
{
    valor = 0;
    marca = referencia = "-";
}

Computador::~Computador()
{
    //dtor
}

void Computador::setMarca(){
    Utilerias util;
    fflush(stdin);
    util.gotoxy(15, 20);
    cout<<"Ingrese la marca: ";
    getline(cin, marca);
}


void Computador::setReferencia(){
    fflush(stdin);
    cout<<"Ingrese la Referencia: ";
    getline(cin, referencia);
}

void Computador::setCPU(){
    objCPU.setMarca();
    objCPU.setVelocidad();
    objCPU.setCantNucleos();
}

string Computador::getMarca(){ return marca; }
string Computador::getReferencia(){ return referencia; }

string Computador::getInfo(){//Metodo virtual para el polimorfismo. Debe ser implementado por los clases derivadas
    return "Marca = " + marca + "\nReferencia = " + referencia;
}

long Computador::getValor(){ return valor; }
