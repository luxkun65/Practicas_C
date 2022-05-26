#include "DTC.h"
#include "docente.h"
#include<iostream>

using namespace::std;


DTC::DTC()
{
    cantHorasInv=0;

}

DTC::~DTC()
{
    //dtor
}






void DTC::setHorasInv(){
cout<<"Horas de investigacion: ";
cin>>cantHorasInv;
}
int DTC::getHorasInv(){
return cantHorasInv;
}
void DTC::setSalarioPgar(){
salarioPagar=115000*2;

}
