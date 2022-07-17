#include<iostream>
using namespace::std;
#include<cmath>

#include "Circulo.h"

Circulo::Circulo()
{
    radio = 0;
}

Circulo::~Circulo()
{
    //dtor
}

void Circulo::setRadio(){
    cout<<"Ingrese el radio: ";
    cin>>radio;
}

void Circulo::calcularArea(){
    cout<<"Llamado a Circulo::calcularArea()"<<endl;
    area = 3.1416 * pow(radio, 2);
}
