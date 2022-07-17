#include "SubClase2.h"

SubClase2::SubClase2()
{

    a = 10;//public de la superclase
    b = 20;
    //c = 30;
    d = 40;//public de la subclase1
    e = 50;
    //f = 60;

    suma = 0;
}

SubClase2::~SubClase2()
{
    //dtor
}

void SubClase2::setSuma(){
    suma = a + b + getC() + d + e + getF();
}

int SubClase2::getSuma(){ return suma; }

