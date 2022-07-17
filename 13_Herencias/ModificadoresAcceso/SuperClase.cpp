#include "SuperClase.h"

SuperClase::SuperClase()
{
    a = b = c = 0;
}

SuperClase::~SuperClase()
{
    //dtor
}

void SuperClase::setA(int valor){ a = valor; }
int SuperClase::getA(){ return a;}

void SuperClase::setB(int valor){ b = valor; }
int SuperClase::getB(){ return b;}

void SuperClase::setC(int valor){ c = valor; }
int SuperClase::getC(){ return c;}


