#include<iostream>
#include<vector>
#include"docente.h"
#include"DTC.h"
#include"DHC.h"
#include"DMT.h"
#include"MONITOR.h"
using namespace::std;


//vectores

vector <DHC> vecDHC;
vector <DTC> vecDTC;
vector <DMT> vecDMT;
vector <MONITOR> vecMonitor;

///definicionde funciones
///Menu y submenus
void menu();
void ingresarDocente();
void consultaXid();
void listadoTDoc();
void valorPagar();

///ingreso de datos
void testDTC();
void testDHC();
void testDMT();
void testMonitor();

///consultas X id separadas
void dtcXid();
void dhcXid();
void dmtXid();
void monitorXid();


///Listado por tipo de docente
void dtcLista();
void dhcLista();
void dmtLista();
void monitorLista();

///Valor total a pagar por tipo de docente
void VTdtc();
void VTdhc();
void VTdmt();
void VTmonitor();




///Menu principal///
void menu(){

system("CLS");

int opc;
do{
cout<<"################MENU################"<<endl;
cout<<"1.Ingresar un nuevo docente"<<endl;
cout<<"2.consultar por numero de ID"<<endl;
cout<<"3.Listado por tipo de docente"<<endl;
cout<<"4.Valor a pagar de todos los docentes"<<endl;
cout<<"0.Salir"<<endl;
cout<<"\nIngrese la opcion: ";
cin>>opc;

switch(opc){

case 1:ingresarDocente();break;
case 2:consultaXid();break;
case 3:listadoTDoc();break;
case 4:valorPagar();break;
case 0: break;
default: cout<<"\n\nOpcion incorrecta\n\n";
        }


system("CLS");

   }while(opc !=0);
}


///funciones del submenu///
//Ingresar docente//
void ingresarDocente(){

system("CLS");

int opc;
do{
cout<<"#######INGRESE UN NUEVO DOCENTE#######"<<endl;
cout<<"1.Docente tiempo completo"<<endl;
cout<<"2.Docente hora catedra"<<endl;
cout<<"3.Docente medio tiempo"<<endl;
cout<<"4.Monitor"<<endl;
cout<<"0.Volver al menu"<<endl;
cout<<"\nIngrese la opcion: ";
cin>>opc;

switch(opc){

case 1:testDTC();break;
case 2:testDHC();break;
case 3:testDMT();break;
case 4:testMonitor();break;
case 0: break;
default: cout<<"\n\nOpcion incorrecta\n\n";
        }

system("pause");
system("CLS");

   }while(opc !=0);
}

//consultar por numero de ID//
void consultaXid(){

system("CLS");

int opc;
do{
cout<<"######CONSULTAR POR NUMERO DE ID######"<<endl;
cout<<"###escoja tipo de docente a buscar###"<<endl;
cout<<"1.Docente tiempo completo"<<endl;
cout<<"2.Docente hora catedra"<<endl;
cout<<"3.Docente medio tiempo"<<endl;
cout<<"4.Monitor"<<endl;
cout<<"0.Volver al menu"<<endl;
cout<<"\nIngrese la opcion: ";
cin>>opc;

switch(opc){

case 1:dtcXid();break;
case 2:dhcXid();break;
case 3:dmtXid();break;
case 4:monitorXid();break;
case 0: break;
default: cout<<"\n\nOpcion incorrecta\n\n";
        }

system("pause");
system("CLS");

   }while(opc !=0);
}

//Listado por tipo de docente//
void listadoTDoc(){
system("CLS");

int opc;
do{
cout<<"##########LISTA DE DOCENTES##########"<<endl;
cout<<"###escoja tipo de docente a mostrar###"<<endl;
cout<<"1.Docente tiempo completo"<<endl;
cout<<"2.Docente hora catedra"<<endl;
cout<<"3.Docente medio tiempo"<<endl;
cout<<"4.Monitor"<<endl;
cout<<"0.Volver al menu"<<endl;
cout<<"\nIngrese la opcion: ";
cin>>opc;

switch(opc){

case 1:dtcLista();break;
case 2:dhcLista();break;
case 3:dmtLista();break;
case 4:monitorLista();break;
case 0: break;
default: cout<<"\n\nOpcion incorrecta\n\n";
        }

system("pause");
system("CLS");

   }while(opc !=0);
}

//Valor a pagar de todos los docentes//
void valorPagar(){

system("CLS");

int opc;
do{
cout<<"#########VALOR TOTAL A PAGAR##########"<<endl;
cout<<"###escoja tipo de docente a mostrar###"<<endl;
cout<<"1.Docente tiempo completo"<<endl;
cout<<"2.Docente hora catedra"<<endl;
cout<<"3.Docente medio tiempo"<<endl;
cout<<"4.Monitor"<<endl;
cout<<"0.Volver al menu"<<endl;
cout<<"\nIngrese la opcion: ";
cin>>opc;

switch(opc){

case 1:VTdtc();break;
case 2:VTdhc();break;
case 3:VTdmt();break;
case 4:VTmonitor();break;
case 0: break;
default: cout<<"\n\nOpcion incorrecta\n\n";
        }

system("pause");
system("CLS");

   }while(opc !=0);
}





///Ingreso de docentes (manejo de las clases y herencias)///
void testDTC(){


system("CLS");

DTC dt;
dt.setNumeroID();
dt.setNombre();
dt.setApellido();
dt.setProfesion();
dt.setHorasInv();
dt.setSalarioPgar();

vecDTC.push_back(dt);
}

void testDHC(){

system("CLS");

DHC dh;
dh.setNumeroID();
dh.setNombre();
dh.setApellido();
dh.setProfesion();
dh.setNivelEST();
dh.setCantHT();
dh.setSalarioPgar();

vecDHC.push_back(dh);
}

void testDMT(){

system("CLS");

DMT dm;
dm.setNumeroID();
dm.setNombre();
dm.setApellido();
dm.setProfesion();
dm.setTrabajoGrado();
dm.setSalarioPgar();

vecDMT.push_back(dm);
}

void testMonitor(){

system("CLS");

MONITOR mn;
mn.setNumeroID();
mn.setNombre();
mn.setApellido();
mn.setProfesion();
mn.setHorasTrab();
mn.setSalarioPgar();

vecMonitor.push_back(mn);
}



///Funciones de consulta por numeo de ID///
void dtcXid(){

system("CLS");

if(vecDTC.size() !=0 ){

DTC tmp;
int codId;
bool existe = false;

cout<<"Igrese el numero de ID: ";
cin>>codId;

for(int i=0; i < vecDTC.size(); i++){

    tmp = vecDTC[i];

    if(tmp.getNumeroID()==codId){
        existe = true;
        cout<<"\n"<<tmp.toString()<<endl;
        cout<<"Hotas de investigacion: "<<tmp.getHorasInv()<<endl;
        }
    }

if(!existe){
cout<<"\nNo existe docente con el ID "<<codId<<endl;
    }
}

else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}

void dhcXid(){

system("CLS");

if(vecDHC.size() !=0 ){

DHC tmp;
int codId;
bool existe = false;

cout<<"Igrese el numero de ID: ";
cin>>codId;

for(int i=0; i < vecDHC.size(); i++){

    tmp = vecDHC[i];

    if(tmp.getNumeroID()==codId){
        existe = true;
        cout<<"\n"<<tmp.toString()<<endl;
        cout<<"Nivel de estudios: "<<tmp.getNivelEST()<<endl;
        }
    }

if(!existe){
cout<<"\nNo existe docente con el ID "<<codId<<endl;
    }
}

else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}

void dmtXid(){

system("CLS");

if(vecDMT.size() !=0 ){

DMT tmp;
int codId;
bool existe = false;

cout<<"Igrese el numero de ID: ";
cin>>codId;

for(int i=0; i < vecDMT.size(); i++){

    tmp = vecDMT[i];

    if(tmp.getNumeroID()==codId){
        existe = true;
        cout<<"\n"<<tmp.toString()<<endl;
        cout<<"La cantidad de trebajos de grado es: "<<tmp.getTrabajoGrado()<<endl;
        }
    }

if(!existe){
cout<<"\nNo existe docente con el ID "<<codId<<endl;
    }
}

else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}

void monitorXid(){

system("CLS");

if(vecMonitor.size() !=0 ){

MONITOR tmp;
int codId;
bool existe = false;

cout<<"Igrese el numero de ID: ";
cin>>codId;

for(int i=0; i < vecMonitor.size(); i++){

    tmp = vecMonitor[i];

    if(tmp.getNumeroID()==codId){
        existe = true;
        cout<<"\n"<<tmp.toString()<<endl;
        cout<<"Las horas trabajadas fueron: "<<tmp.getHorasTrab()<<endl;
        }
    }

if(!existe){
cout<<"\nNo existe docente con el ID "<<codId<<endl;
    }
}

else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}



///funciones de lista por tipos de docente///
void dtcLista(){

system("CLS");

if(vecDTC.size() !=0 ){

DTC tmp;

cout<<"Lista de los docentes tiempo completo: "<<endl;
cout<<"\n/////////////////////////////////\n";
for(int i=0; i < vecDTC.size(); i++){

    tmp = vecDTC[i];

    cout<<"\n"<<tmp.toString()<<endl;
    cout<<"Hotas de investigacion: "<<tmp.getHorasInv()<<endl;
    cout<<"\n/////////////////////////////////\n";
    }


}
else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}

void dhcLista(){

system("CLS");

if(vecDHC.size() !=0 ){

DHC tmp;

cout<<"Lista de los docentes hora catedra: "<<endl;
cout<<"\n/////////////////////////////////\n";
for(int i=0; i < vecDHC.size(); i++){

        tmp = vecDHC[i];

        cout<<"\n"<<tmp.toString()<<endl;
        cout<<"Nivel de estudios: "<<tmp.getNivelEST()<<endl;
        cout<<"\n/////////////////////////////////\n";
        }
}
else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}

void dmtLista(){

system("CLS");

if(vecDMT.size() !=0 ){

DMT tmp;
cout<<"Lista de los docentes medio tiempo: "<<endl;
cout<<"\n/////////////////////////////////\n";
for(int i=0; i < vecDMT.size(); i++){

    tmp = vecDMT[i];

    cout<<"\n"<<tmp.toString()<<endl;
    cout<<"La cantidad de trebajos de grado es: "<<tmp.getTrabajoGrado()<<endl;
    cout<<"\n/////////////////////////////////\n";
    }
}
else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}

void monitorLista(){

system("CLS");

if(vecMonitor.size() !=0 ){

MONITOR tmp;
cout<<"Lista de los monitores: "<<endl;
cout<<"\n/////////////////////////////////\n";
for(int i=0; i < vecMonitor.size(); i++){

    tmp = vecMonitor[i];

    cout<<"\n"<<tmp.toString()<<endl;
    cout<<"Las horas trabajadas fueron: "<<tmp.getHorasTrab()<<endl;
    cout<<"\n/////////////////////////////////\n";
     }
}
else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}



///funciones de Total valor a pagar por tipos de docente///
void VTdtc(){

system("CLS");

if(vecDTC.size() !=0 ){

double suma = 0;
DTC tmp;
cout<<"Valor a pagar de los docentes tiempo completo"<<endl;

for(int i=0; i < vecDTC.size(); i++){

    tmp = vecDTC[i];
    suma += tmp.getSalarioPgar();
    }
cout<<"El valor total a pagar para los docentes es: "<<suma<<endl;
}
else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}

void VTdhc(){

system("CLS");

if(vecDHC.size() !=0 ){

double suma = 0;
DHC tmp;
cout<<"Valor a pagar de los docentes hora catedra"<<endl;

for(int i=0; i < vecDHC.size(); i++){

        tmp = vecDHC[i];
        suma += tmp.getSalarioPgar();
        }
cout<<"El valor total a pagar para los docentes es: "<<suma<<endl;
}
else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}

void VTdmt(){

system("CLS");

if(vecDMT.size() !=0 ){

double suma = 0;
DMT tmp;
cout<<"Valor a pagar de los docentes medio tiempo"<<endl;

for(int i=0; i < vecDMT.size(); i++){

    tmp = vecDMT[i];
    suma += tmp.getSalarioPgar();
    }
cout<<"El valor total a pagar para los docentes es: "<<suma<<endl;
}
else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}

void VTmonitor(){

system("CLS");

if(vecMonitor.size() !=0 ){

double suma = 0;
MONITOR tmp;
cout<<"Valor a pagar  de los monitores: "<<endl;

for(int i=0; i < vecMonitor.size(); i++){

    tmp = vecMonitor[i];
    suma += tmp.getSalarioPgar();
     }
cout<<"El valor total a pagar para los docentes es: "<<suma<<endl;
}
else{
        cout<<"\nNo hay docentes registrados en el sistema"<<endl;
    }
}



int main()
{

menu();

return 0;
}
