#include<iostream>
using namespace::std;

#include "Punto.h"

Punto::Punto()
{
    x = y = 0;
}

Punto::Punto(Punto& obj)
{
    x = obj.x;
    y = obj.y;
}

Punto::~Punto()
{
    //dtor
}

void Punto::setCoord(int a, int b){
    x = a;
    y = b;
}

void Punto::mostrarCoord(){
    cout<<x<<", "<<y<<endl;
}
