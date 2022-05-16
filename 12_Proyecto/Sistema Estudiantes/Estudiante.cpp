#include "Estudiante.h"
#include<iostream>

using namespace::std;

Estudiante::Estudiante()
{
    //ctor

    codigo = codPlan = 0;
    apellido = nombre = " ";

    for(int i=0;i<4;i++){

        notas[i]=  0.0;
    }
}

Estudiante::~Estudiante()
{
    //dtor
}



void Estudiante::setCodigo(){

    cout<<"Ingrese el codigo del estudiante: ";
    cin>>codigo;
}

void Estudiante::setCodPlan(){

    cout<<"Ingrese el codigo de plan: ";
    cin>>codPlan;
}

void Estudiante::setNombre(){
    fflush(stdin);
    cout<<"Ingrese su nombre: ";
    getline(cin, nombre);
    }

void Estudiante::setApellido(){
    fflush(stdin);
    cout<<"Ingrese su apellido: ";
    getline(cin, apellido);
}

void Estudiante::setNotas(int indice){

    if(indice==0 || indice==1 || indice==2){
    cout<<"Ingrese la nota de la evaluacion: "<<indice+1<<endl;
    cin>>notas[indice];

    }
    else{ notas[3]=(notas[0]*0.3)+(notas[1]*0.3)+(notas[2]*0.4);
    }
}



long Estudiante::getCodigo(){
return codigo;
}
long Estudiante::getCodPlan(){
return codPlan;
}
string Estudiante::getNombre(){
return nombre;

}
string Estudiante::getApellido(){
return apellido;
}
double Estudiante::getNotas(int indice){
return notas[indice];
}
string Estudiante::toString(){
return "Codio: "+ to_string(codigo)+ "\n" +"Nombre: "+ apellido + ", " + nombre+ "\n" +"Codio plan: "+ to_string(codPlan)+ "\n" +"Definitiva: " + to_string(getNotas(3));
}





