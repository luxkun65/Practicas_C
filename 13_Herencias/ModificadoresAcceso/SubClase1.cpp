#include "SubClase1.h"

SubClase1::SubClase1()
{
    d = e = f = 0;
    b = -1;//miembro protected
    //c = -1;//error
}

SubClase1::~SubClase1()
{
    //dtor
}

void SubClase1::setD(int valor){ d = valor; }
int SubClase1::getD(){ return d;}

void SubClase1::setE(int valor){ e = valor; }
int SubClase1::getE(){ return e;}

void SubClase1::setF(int valor){ f = valor; }
int SubClase1::getF(){ return f;}
