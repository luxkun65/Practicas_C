#include<iostream>
using namespace::std;

#include "Fecha.h"

Fecha::Fecha(int d, int m, int a, string per)
{
    dia = d;
    mes = m;
    year = a;
    periodo = per;
}

Fecha::~Fecha()
{
    //dtor
}

string Fecha::getFecha(){
    return to_string(dia) + "/" + to_string(mes) + "/" +
            to_string(year) + " " + periodo;
}
