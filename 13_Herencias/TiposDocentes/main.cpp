#include<iostream>
#include"docente.h"
#include"DTC.h"
#include"DHC.h"
#include"DMT.h"
#include"MONITOR.h"
using namespace::std;

//definicionde funciones

void testDTC(){
cout<<"---------------------------"<<endl;
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
cout<<"---------------------------"<<endl;
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

void testDMT(){
cout<<"---------------------------"<<endl;
DMT dm;
dm.setNumeroID();
dm.setNombre();
dm.setApellido();
dm.setProfesion();
dm.setHorasInv();
dm.setSalarioPgar();
dm.setTrabajoGrado();
cout<<dm.toString()<<endl;
cout<<"Los trabajos de grado son: "<<dm.getTrabajoGrado()<<endl;
}

void testMonitor(){
cout<<"---------------------------"<<endl;
MONITOR mn;
mn.setNumeroID();
mn.setNombre();
mn.setApellido();
mn.setProfesion();
mn.setHorasTrab();
mn.setSalarioPgar();
cout<<mn.toString()<<endl;
cout<<"Las horas trabajadas son: "<<mn.getHorasTrab()<<endl;
}

int main()
{
testDTC();
//testDHC();
//testDMT();
//testMonitor();
    return 0;
}
