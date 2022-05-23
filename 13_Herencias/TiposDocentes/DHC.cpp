#include "DHC.h"
#include"docente.h"
#include<iostream>
using namespace::std;

DHC::DHC()
{
    cantHT=0;
    nivelEST="-";
}

DHC::~DHC()
{
    //dtor
}




void DHC::setCantHT(){
cout<<"Cantidad de horas trabajadas: ";
cin>>cantHT;
}
void DHC::setNivelEST(){
fflush(stdin);

int opc;
cout<<"NIVEL DE ESTUDIOS"<<endl;
cout<<"1.profesional\n";
cout<<"2.especializacion\n";
cout<<"3.maestria\n";
cout<<"Seleccione nivel de estudios"<<endl;
cin>>opc;
switch(opc){
case 1: nivelEST = "profesional";break;
case 2: nivelEST = "especializacion";break;
case 3: nivelEST = "maestria";break;


}
}
void DHC::setSalarioPgar(){
    if(nivelEST=="profesional"){
            salarioPagar= cantHT*38000;

    }

        if(nivelEST=="especializacion"){
            salarioPagar= cantHT*42000;

    }

            if(nivelEST=="maestria"){
            salarioPagar= cantHT*50000;

    }
}

int DHC::getCantHT(){
    return cantHT;
}
string DHC::getNivelEST(){
return nivelEST;

}
