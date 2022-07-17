#include<iostream>
using namespace::std;

#include "Cuadrado.h"

Cuadrado::Cuadrado()
{
    base = 0;
}

Cuadrado::~Cuadrado()
{
    //dtor
}

void Cuadrado::setBase(){
    cout<<"Ingrese la base: ";
    cin>>base;
}

void Cuadrado::calcularArea(){
    cout<<"Llamado a Cuadrado::calcularArea()"<<endl;
    area = base * base;
}
