#include "MONITOR.h"
#include"docente.h"
#include<iostream>

using namespace::std;

MONITOR::MONITOR()
{
    horasTrab = 0;
    //ctor
}

MONITOR::~MONITOR()
{
    //dtor
}


void MONITOR::setHorasTrab(){
cout<<"Ingrese la cantidad de horas trabajadas: ";
cin>>horasTrab;

}

void MONITOR::setSalarioPgar(){
salarioPagar = horasTrab * 5800;
}

int MONITOR::getHorasTrab(){
return horasTrab;
}

