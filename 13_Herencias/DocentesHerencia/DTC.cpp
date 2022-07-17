#include<iostream>
using namespace::std;

#include "Docente.h"
#include "DTC.h"

DTC::DTC()
{
    cantHorasInv = 8;
}

DTC::~DTC()
{
    //dtor
}

void DTC::setHorasInv(){
    cout<<"Ingrese el numero de horas de investigación: ";
    cin>>cantHorasInv;
}

int DTC::getHorasInv(){
    return cantHorasInv;
}

void DTC::setSalario(){
    salario = 910000 * 2;
}
