#include<iostream>
using namespace::std;

#include "Fecha.h"

Fecha::Fecha()
{
    dia = mes = year = 0;
}

Fecha::~Fecha()
{
    //dtor
}

void Fecha::setFecha(string mensaje){
    cout<<mensaje<<endl<<endl;
    cout<<"Ingrese el dia: ";
    cin>>dia;
    cout<<"Ingrese el mes: ";
    cin>>mes;
    cout<<"Ingrese el año: ";
    cin>>year;
}

string Fecha::getFecha(){
    return to_string(dia) + "/" + to_string(mes) + "/" +
           to_string(year);
}

