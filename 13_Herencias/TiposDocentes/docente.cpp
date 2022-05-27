#include<iostream>
#include "docente.h"
using namespace::std;


docente::docente()
{
    numID=0;
    apellido = nombre= profesion="-";
    salarioPagar=0.0;
}

docente::~docente()
{
    //dtor
}



void docente::setNumeroID(){
cout<<"numero de ID:";
cin>>numID;
}
void docente::setApellido(){
fflush(stdin);
cout<<"apellido: ";
getline(cin,apellido);
}
void docente::setNombre(){
fflush(stdin);
cout<<"nombre: ";
getline(cin,nombre);
}
void docente::setProfesion(){
fflush(stdin);
cout<<"profesion: ";
getline(cin,profesion);
}
void docente::setSalarioPgar(){

}

long docente::getNumeroID(){
return numID;
}
string docente::getApellido(){
return apellido;
}
string docente::getNombre(){
return nombre;
}
string docente::getProfesion(){
return profesion;
}
double docente::getSalarioPgar(){
return salarioPagar;
}
string docente::toString(){
return "NumID: "+ to_string(numID)+"\n"+"Nombre: "+ nombre+
" "+apellido+"\n"+"Profesion: "+profesion+"\n"+
"Salario a pagar: "+to_string(salarioPagar);
}

