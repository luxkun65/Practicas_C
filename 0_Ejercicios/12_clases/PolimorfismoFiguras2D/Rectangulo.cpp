#include<iostream>
using namespace::std;

#include "Rectangulo.h"

Rectangulo::Rectangulo()
{
    altura = 0;
}

Rectangulo::~Rectangulo()
{
    //dtor
}

void Rectangulo::setAltura(){
    cout<<"Ingrese la altura: ";
    cin>>altura;
}

void Rectangulo::calcularArea(){
    cout<<"Llamado a Rectangulo::calcularArea()"<<endl;
    area = base * altura;
}
