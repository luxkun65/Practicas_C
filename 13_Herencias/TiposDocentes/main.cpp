#include<iostream>
#include"docente.h"
#include"DTC.h"
#include"DHC.h"
using namespace::std;

//definicionde funciones

void testDTC(){
DTC dt;
dt.setNumeroID();
dt.setNombre();
dt.setApellido();
dt.setProfesion();
dt.setHorasInv();
dt.setSalarioPgar();
cout<<dt.toString()<<endl;
cout<<"Hotas de investigacion: "<<dt.getHorasInv()<<endl;
}


void testDHC(){
DHC dh;
dh.setNumeroID();
dh.setNombre();
dh.setApellido();
dh.setProfesion();
dh.setNivelEST();
dh.setCantHT();
dh.setSalarioPgar();
cout<<dh.toString()<<endl;
cout<<"Nivel de estudios: "<<dh.getNivelEST()<<endl;
}

int main()
{
//testDTC();
testDHC();
    return 0;
}
