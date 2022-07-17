#include<iostream>
using namespace::std;

#include "Docente.h"
#include "DHC.h"

DHC::DHC()
{
    cantHorasTrab = 0;
    nivelEstudios = "-";
}

DHC::~DHC()
{
    //dtor
}

void DHC::setHorasTrab(){
    cout<<"Ingrese el numero de horas trabajadas: ";
    cin>>cantHorasTrab;
}

void DHC::setNivelEstudios(){
    string tipos[] = {"Tecnologo", "Profesional",
        "Especialista", "Maestria", "Doctorado"};
    int opc;

    cout<<"Tipos de Nivel Estudios"<<endl;
    for(int i = 0; i < 5; i++)
        cout<<(i+1)<<". "<<tipos[i]<<endl;
    cout<<"Seleccione Nivel Estudios: ";
    cin>>opc;

    nivelEstudios = tipos[opc-1];
}

int DHC::getHorasTrab(){
    return cantHorasTrab;
}

string DHC::getNivelEstudios(){
    return nivelEstudios;
}

void DHC::setSalario(){
    if(nivelEstudios == "Tecnologo"){
        salario = 38500 * cantHorasTrab;
    }
    if(nivelEstudios == "Profesional"){
        salario = (38500 + (38500 * 0.3)) * cantHorasTrab;
    }
    if(nivelEstudios == "Especialista"){
        salario = (38500 + (38500 * 0.5)) * cantHorasTrab;
    }
    if(nivelEstudios == "Maestria"){
        salario = (38500 + (38500 * 0.8)) * cantHorasTrab;
    }
    if(nivelEstudios == "Doctorado"){
        salario = (38500 * 2) * cantHorasTrab;
    }
}

