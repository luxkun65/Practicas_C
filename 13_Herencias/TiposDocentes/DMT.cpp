#include "DMT.h"
#include "DTC.h"
#include<iostream>

using namespace::std;


DMT::DMT()
{
    trabajoGrado=0;
    //ctor
}

DMT::~DMT()
{
    //dtor
}


void DMT::setTrabajoGrado(){
cout<<"trabajos de grado: ";
cin>>trabajoGrado;
}

int DMT::getTrabajoGrado(){
return trabajoGrado;
}

void DMT::setSalarioPgar(){
salarioPagar=115000;

}

